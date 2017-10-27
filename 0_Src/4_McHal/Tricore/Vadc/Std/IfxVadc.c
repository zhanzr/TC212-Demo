/**
 * \file IfxVadc.c
 * \brief VADC  basic functionality
 *
 * \version iLLD_1_0_1_0_0
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxVadc.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

void IfxVadc_configExternalMultiplexerMode(Ifx_VADC *vadc, Ifx_VADC_G *vadcG, IfxVadc_ExternalMultiplexerMode mode, uint8 channels, IfxVadc_EmuxSelectValue startChannel, IfxVadc_EmuxCodingScheme code, IfxVadc_EmuxSampleTimeControl sampleTimeControl, IfxVadc_ChannelSelectionStyle channelSelectionStyle)
{
    Ifx_VADC_G_EMUXCTR emuxctr;

    emuxctr.B.EMXWC    = 1;
    emuxctr.B.EMUXMODE = mode;
    emuxctr.B.EMXCSS   = channelSelectionStyle;
    emuxctr.B.EMUXCH   = channels;
    emuxctr.B.EMUXSET  = startChannel;
    emuxctr.B.EMXCOD   = code;
    emuxctr.B.EMXST    = sampleTimeControl;
    IfxVadc_enableAccess(vadc, IfxVadc_Protection_externalMultiplexer);
    vadcG->EMUXCTR.U   = emuxctr.U;
    emuxctr.B.EMXWC    = 0;
    vadcG->EMUXCTR.U   = emuxctr.U;
    IfxVadc_disableAccess(vadc, IfxVadc_Protection_externalMultiplexer);
}


void IfxVadc_disableAccess(Ifx_VADC *vadc, IfxVadc_Protection protectionSet)
{
    uint16 passwd = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(passwd);

    if (protectionSet < IFXVADC_MAXIMUM_BITFIELDS_IN_ACCPROT0_REGISTER)
    {
        vadc->ACCPROT0.U |= (0x00000001 << protectionSet);
    }
    else
    {
        vadc->ACCPROT1.U |= (0x00000001 << (protectionSet & 0x1F));
    }

    IfxScuWdt_setSafetyEndinit(passwd);
}


void IfxVadc_disablePostCalibration(Ifx_VADC *vadc, IfxVadc_GroupId group, boolean disable)
{
    if (group < IFXVADC_NUM_ADC_CAL_GROUPS)
    {
        IfxVadc_enableAccess(vadc, IfxVadc_Protection_globalConfig);

        uint32 mask = 1 << (IFX_VADC_GLOBCFG_DPCAL0_OFF + group);

        if (disable == TRUE)
        {
            vadc->GLOBCFG.U |= mask;
        }
        else
        {
            vadc->GLOBCFG.U &= ~mask;
        }

        IfxVadc_disableAccess(vadc, IfxVadc_Protection_globalConfig);
    }
}


void IfxVadc_enableAccess(Ifx_VADC *vadc, IfxVadc_Protection protectionSet)
{
    uint16 passwd = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(passwd);

    if (protectionSet < IFXVADC_MAXIMUM_BITFIELDS_IN_ACCPROT0_REGISTER)
    {
        vadc->ACCPROT0.U &= ~(0x00000001 << protectionSet);
    }
    else
    {
        vadc->ACCPROT1.U &= ~(0x00000001 << (protectionSet & 0x1F));
    }

    IfxScuWdt_setSafetyEndinit(passwd);
}


float32 IfxVadc_getAdcAnalogFrequency(Ifx_VADC *vadc)
{
    return IfxScuCcu_getSpbFrequency() / (1U + vadc->GLOBCFG.B.DIVA);
}


float32 IfxVadc_getAdcDigitalFrequency(Ifx_VADC *vadc)
{
    return IfxScuCcu_getSpbFrequency() / (1U + vadc->GLOBCFG.B.DIVD);
}


float32 IfxVadc_getAdcModuleFrequency(void)
{
    return IfxScuCcu_getSpbFrequency();
}


IfxVadc_Status IfxVadc_getBackgroundScanStatus(Ifx_VADC *vadc)
{
    IfxVadc_Status status = IfxVadc_Status_noError;
    uint8          i;

    for (i = 0; i < IFXVADC_NUM_ADC_GROUPS; i++)
    {
        if (vadc->BRSPND[i].U)
        {
            return IfxVadc_Status_channelsStillPending;
        }
        else
        {
            continue;
        }
    }

    return status;
}


float32 IfxVadc_getChannelConversionTime(Ifx_VADC *vadc, IfxVadc_GroupId group, IfxVadc_InputClasses inputClass, float32 analogFrequency, float32 moduleFrequency, IfxVadc_ConversionType conversionMode)
{
    float32                   conversionTime = 0.0;
    Ifx_VADC_G               *vadcG          = &vadc->G[group];
    uint32                    stc;
    IfxVadc_ChannelResolution resolution;
    uint32                    n;

    uint32                    inputClassNum;

    if (inputClass <= IfxVadc_InputClasses_group1)
    {
        inputClassNum = inputClass;
        stc           = vadcG->ICLASS[inputClassNum].B.STCS;
        resolution    = (IfxVadc_ChannelResolution)vadcG->ICLASS[inputClassNum].B.CMS;
    }
    else
    {
        inputClassNum = inputClass - IfxVadc_InputClasses_global0;
        stc           = vadc->GLOBICLASS[inputClassNum].B.STCS;
        resolution    = (IfxVadc_ChannelResolution)vadc->GLOBICLASS[inputClassNum].B.CMS;
    }

    switch (resolution)
    {
    case IfxVadc_ChannelResolution_12bit: n     = 12;
        break;
    case IfxVadc_ChannelResolution_10bit: n     = 10;
        break;
    case IfxVadc_ChannelResolution_8bit: n      = 8;
        break;
    case IfxVadc_ChannelResolution_10bitFast: n = 10;
        break;
    default: n                                  = 0;
        break;
    }

    if (conversionMode == IfxVadc_ConversionType_Compatible)
    {
        if (resolution != IfxVadc_ChannelResolution_10bitFast)
        {
            /* Standard conversion */
            uint32 pc = IfxVadc_isPostCalibration(vadc, group) ? 2 : 0;
            conversionTime = (float32)(2 + stc + n + pc) / analogFrequency + 2.0 / moduleFrequency;
        }
        else
        {
            /* Fast compare mode */
            conversionTime = (float32)(2 + stc + 2) / analogFrequency + 2.0 / moduleFrequency;
        }
    }
    else
    {
        // do nothing
    }

    return conversionTime;
}


IfxVadc_Status IfxVadc_getQueueStatus(Ifx_VADC_G *group)
{
    IfxVadc_Status status = IfxVadc_Status_noError;

    /* just fill level is checked */
    if (0x7 == group->QSR0.B.FILL)
    {
        status = IfxVadc_Status_queueFull;
    }
    else
    {
        status = IfxVadc_Status_noError;
    }

    return status;
}


Ifx_VADC_RES IfxVadc_getResultBasedOnRequestSource(Ifx_VADC *vadc, Ifx_VADC_G *group, IfxVadc_ChannelId channel, IfxVadc_RequestSource sourceType)
{
    sint32       sourceResultRegister = -1;
    Ifx_VADC_RES tmpResult;

    switch (sourceType)
    {
    case IfxVadc_RequestSource_queue:
        sourceResultRegister = group->QCTRL0.B.SRCRESREG;
        break;

    case IfxVadc_RequestSource_scan:
        sourceResultRegister = group->ASCTRL.B.SRCRESREG;
        break;

    case IfxVadc_RequestSource_background:
        sourceResultRegister = vadc->BRSCTRL.B.SRCRESREG;
        break;
    }

    if (sourceResultRegister > 0)
    {
        tmpResult.U = group->RES[sourceResultRegister].U;

        return tmpResult;
    }
    else
    {
        if ((sourceType == IfxVadc_RequestSource_background) && (group->CHCTR[channel].B.RESTBS == 1))
        {
            tmpResult.B.VF     = vadc->GLOBRES.B.VF;
            tmpResult.B.FCR    = vadc->GLOBRES.B.FCR;
            tmpResult.B.CRS    = vadc->GLOBRES.B.CRS;
            tmpResult.B.EMUX   = vadc->GLOBRES.B.EMUX;
            tmpResult.B.CHNR   = vadc->GLOBRES.B.CHNR;
            tmpResult.B.DRC    = vadc->GLOBRES.B.GNR; //The bitfields are the same but interpretation is different. TODO- define a generic result register type.
            tmpResult.B.RESULT = vadc->GLOBRES.B.RESULT;

            return tmpResult;
        }
        else
        {
            tmpResult.U = group->RES[group->CHCTR[channel].B.RESREG].U;

            return tmpResult;
        }
    }
}


IfxVadc_Status IfxVadc_getScanStatus(Ifx_VADC_G *group)
{
    IfxVadc_Status status = IfxVadc_Status_noError;

    if (group->ASPND.U)
    {
        return IfxVadc_Status_channelsStillPending;
    }
    else
    {
        return status;
    }
}


volatile Ifx_SRC_SRCR *IfxVadc_getSrcAddress(IfxVadc_GroupId group, IfxVadc_SrcNr index)
{
    Ifx_SRC_SRCR *base;

    if (IfxVadc_SrcNr_shared0 <= index)
    {
        index -= 4;

        if ((group & 0x1) != 0)
        {
            group = IfxVadc_GroupId_global0; /* FIXME */
        }
        else
        {
            group = IfxVadc_GroupId_global0;    /* Shared interrupt common 0 is used */
        }
    }
    else
    {
        /* do nothing */
    }

    base = (Ifx_SRC_SRCR *)IfxVadc_cfg_srcAddresses[(group * 4) + index];

    return &(base[0]);
}


void IfxVadc_initialiseAdcArbiterClock(Ifx_VADC *vadc, uint32 arbiterClockDivider)
{
    Ifx_VADC_GLOBCFG tempGLOBCFG;
    tempGLOBCFG.U       = vadc->GLOBCFG.U;
    tempGLOBCFG.B.DIVD  = arbiterClockDivider;
    tempGLOBCFG.B.DIVWC = 1;
    IfxVadc_enableAccess(vadc, IfxVadc_Protection_globalConfig);
    vadc->GLOBCFG.U     = tempGLOBCFG.U;
    IfxVadc_disableAccess(vadc, IfxVadc_Protection_globalConfig);
}


void IfxVadc_initialiseAdcConverterClock(Ifx_VADC *vadc, uint32 converterClockDivider)
{
    Ifx_VADC_GLOBCFG tempGLOBCFG;
    tempGLOBCFG.U       = vadc->GLOBCFG.U;
    tempGLOBCFG.B.DIVA  = converterClockDivider;
    tempGLOBCFG.B.DIVWC = 1;
    IfxVadc_enableAccess(vadc, IfxVadc_Protection_globalConfig);
    vadc->GLOBCFG.U     = tempGLOBCFG.U;
    IfxVadc_disableAccess(vadc, IfxVadc_Protection_globalConfig);
}


uint32 IfxVadc_initializeFAdcD(Ifx_VADC *vadc, uint32 fAdcD)
{
    uint32 divD;
    uint32 result;
    uint32 fadc = IfxScuCcu_getSpbFrequency();

    divD   = (fadc / fAdcD - 1);

    divD   = __minu(divD, 0x3u);

    result = fadc / (divD + 1);
    IfxVadc_initialiseAdcArbiterClock(vadc, divD);
    return result;
}


uint32 IfxVadc_initializeFAdcI(Ifx_VADC *vadc, uint32 fAdcI)
{
    uint32 divA;
    uint32 result;
    uint32 fadc = IfxScuCcu_getSpbFrequency();

    /*    DivA = min(max(0, Fadc / FAdcI - 1), 0x3F); */
    divA   = (fadc << 2) / fAdcI;

    divA   = (divA + 2) >> 2; /* Round to nearest integer */
    divA   = __minu(divA - 1, 0x1Fu);
    result = fadc / (divA + 1);

    if (result > IFXVADC_ANALOG_FREQUENCY_MAX)
    {
        divA   = __minu(divA + 1, 0x1Fu);

        result = fadc / (divA + 1);
    }
    else
    {
        /* do nothing */
    }

    if (!((result >= IFXVADC_ANALOG_FREQUENCY_MIN) && (result <= IFXVADC_ANALOG_FREQUENCY_MAX)))
    {
        result = 0;             /* Min / Max FAdcI frequency */
    }
    else
    {
        IfxVadc_initialiseAdcConverterClock(vadc, divA);
    }

    return result;
}


boolean IfxVadc_isPostCalibration(Ifx_VADC *vadc, IfxVadc_GroupId group)
{
    boolean pcEnabled;

    switch (group)
    {
    case IfxVadc_GroupId_0: pcEnabled = vadc->GLOBCFG.B.DPCAL0 == 0;
        break;
    case IfxVadc_GroupId_1: pcEnabled = vadc->GLOBCFG.B.DPCAL1 == 0;
        break;
    default: pcEnabled                = FALSE;
        break;
    }

    return pcEnabled;
}


void IfxVadc_resetKernel(Ifx_VADC *vadc)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();

    IfxScuWdt_clearCpuEndinit(passwd);
    IfxVadc_enableAccess(vadc, IfxVadc_Protection_globalConfig);
    vadc->KRST1.B.RST = 1;      /* Only if both Kernel reset bits are set a reset is executed */
    vadc->KRST0.B.RST = 1;
    IfxScuWdt_setCpuEndinit(passwd);

    while (vadc->KRST0.B.RSTSTAT == 0)  /* Wait until reset is executed */

    {}

    IfxScuWdt_clearCpuEndinit(passwd);
    vadc->KRSTCLR.B.CLR = 1;    /* Clear Kernel reset status bit */
    IfxVadc_disableAccess(vadc, IfxVadc_Protection_globalConfig);
    IfxScuWdt_setCpuEndinit(passwd);
}


void IfxVadc_selectPowerSupplyVoltage(Ifx_VADC *vadc, IfxVadc_LowSupplyVoltageSelect supplyVoltage)
{
    Ifx_VADC_GLOBCFG tempGLOBCFG;
    tempGLOBCFG.U       = vadc->GLOBCFG.U;
    tempGLOBCFG.B.LOSUP = supplyVoltage;
    tempGLOBCFG.B.DIVWC = 1;
    IfxVadc_enableAccess(vadc, IfxVadc_Protection_globalConfig);
    vadc->GLOBCFG.U     = tempGLOBCFG.U;
    IfxVadc_disableAccess(vadc, IfxVadc_Protection_globalConfig);
}


void IfxVadc_setArbiterPriority(Ifx_VADC_G *vadcG, boolean slotEnable, IfxVadc_RequestSlotPriority prio, IfxVadc_RequestSlotStartMode mode, IfxVadc_RequestSource slot)
{
    if (slotEnable != FALSE)
    {
        vadcG->ARBPR.U |= slotEnable << (IFX_VADC_G_ARBPR_ASEN0_OFF + slot); /* enable Slot */
        vadcG->ARBPR.U &= ~(IFX_VADC_G_ARBPR_PRIO0_MSK << (slot * 4u));      /* clear Priority */
        vadcG->ARBPR.U |= (prio << (slot * 4u));                             /* Set Priority */

        if (mode != IfxVadc_RequestSlotStartMode_waitForStart)
        {
            vadcG->ARBPR.U |= 0x1u << (IFX_VADC_G_ARBPR_CSM0_OFF + (slot * 4u)); /* Set cancel inject mode */
        }
        else
        {
            vadcG->ARBPR.U &= ~(0x1u << (IFX_VADC_G_ARBPR_CSM0_OFF + (slot * 4u)));  /* Set Wait for Start mode */
        }
    }
    else
    {
        vadcG->ARBPR.U &= ~(IFX_VADC_G_ARBPR_ASEN0_MSK << (IFX_VADC_G_ARBPR_ASEN0_OFF + slot));  /* disable Slot */
    }
}


void IfxVadc_setScan(Ifx_VADC_G *group, uint32 channels, uint32 mask)
{
    /* select channels which should take part in the scan sequence */
    /* the mask allows to specify the channels which should be enabled/disabled */
    group->ASSEL.U = (group->ASSEL.U & ~mask) | (channels & mask);
}


void IfxVadc_startupCalibration(Ifx_VADC *vadc)
{
    boolean calibrationRunning;
    uint8   adcCalGroupNum;

    /* Start calibration */
    IfxVadc_enableAccess(vadc, IfxVadc_Protection_globalConfig);
    /* Set SUCAL bit */
    IfxVadc_initiateStartupCalibration(vadc);
    IfxVadc_disableAccess(vadc, IfxVadc_Protection_globalConfig);

    /* Wait for hardware self-test and calibration to complete */
    /* Wait until Calibration is done */
    do
    {
        calibrationRunning = FALSE;

        for (adcCalGroupNum = 0; adcCalGroupNum < IFXVADC_NUM_ADC_CAL_GROUPS; adcCalGroupNum++)
        {
            if (IfxVadc_getAdcCalibrationActiveState(vadc, adcCalGroupNum) != 0)     /* Check ADC Calibration Flag CAL */
            {
                calibrationRunning = TRUE;
            }
            else
            {
                /* do nothing */
            }
        }
    } while (calibrationRunning == TRUE); /* wait until calibration of all calibrated kernels are done */
}

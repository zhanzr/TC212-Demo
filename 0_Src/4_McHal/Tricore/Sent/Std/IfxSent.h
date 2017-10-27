/**
 * \file IfxSent.h
 * \brief SENT  basic functionality
 * \ingroup IfxLld_Sent
 *
 * \version iLLD_1_0_1_0_0
 * \copyright Copyright (c) 2017 Infineon Technologies AG. All rights reserved.
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
 *
 * \defgroup IfxLld_Sent_Std_Enumerations Enumerations
 * \ingroup IfxLld_Sent_Std
 * \defgroup IfxLld_Sent_Std_Configuration Configuration Functions
 * \ingroup IfxLld_Sent_Std
 * \defgroup IfxLld_Sent_Std_Interrupts Interrupts
 * \ingroup IfxLld_Sent_Std
 * \defgroup IfxLld_Sent_Std_Operative Operative Functions
 * \ingroup IfxLld_Sent_Std
 * \defgroup IfxLld_Sent_Std_Baudrate Baudrate Configuration
 * \ingroup IfxLld_Sent_Std
 * \defgroup IfxLld_Sent_Std_IO IO Pin Configuration Functions
 * \ingroup IfxLld_Sent_Std
 */

#ifndef IFXSENT_H
#define IFXSENT_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxSent_cfg.h"
#include "Src/Std/IfxSrc.h"
#include "Scu/Std/IfxScuCcu.h"
#include "_PinMap/IfxSent_PinMap.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "IfxSent_bf.h"
#include "IfxSent_reg.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

#define IFXSENT_INTERRUPT_STATUS_ERROR_FLAGS (0x000037f4)

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Sent_Std_Enumerations
 * \{ */
/** \brief SENT.CH[channelId].IOCR.ALTI , Specifies alternate input for channel
 */
typedef enum
{
    IfxSent_AlternateInput_0 = 0,      /**< \brief Specifies alternate input 0  */
    IfxSent_AlternateInput_1,          /**< \brief Specifies alternate input 1  */
    IfxSent_AlternateInput_2,          /**< \brief Specifies alternate input 2  */
    IfxSent_AlternateInput_3           /**< \brief Specifies alternate input 3  */
} IfxSent_AlternateInput;

/** \brief SENT.CH[channelId].RSR.CST, Specifies the current channel status
 */
typedef enum
{
    IfxSent_ChannelStatus_stop        = 0, /**< \brief Specifies the channel is stopped */
    IfxSent_ChannelStatus_initialize  = 1, /**< \brief Specifies the channel is initialized */
    IfxSent_ChannelStatus_running     = 2, /**< \brief Specifies the channel is running */
    IfxSent_ChannelStatus_synchronize = 3  /**< \brief Specifies the channel is synchronized */
} IfxSent_ChannelStatus;

/** \brief SENT.FDR.DM , Specifies clock divider mode
 */
typedef enum
{
    IfxSent_ClockDividerMode_off        = 0, /**< \brief Specifies clock divider mode off */
    IfxSent_ClockDividerMode_normal     = 1, /**< \brief Specifies clock normal divider mode */
    IfxSent_ClockDividerMode_fractional = 2  /**< \brief Specifies clock fractional divider mode */
} IfxSent_ClockDividerMode;

/** \brief SENT.CH[channelId].SDS.CON , Specifies received configuration bit value
 */
typedef enum
{
    IfxSent_ConfigBit_0 = 0,      /**< \brief Specifies received configuration bit value 0  */
    IfxSent_ConfigBit_1           /**< \brief Specifies received configuration bit value 1  */
} IfxSent_ConfigBit;

/** \brief SENT.CH[channelId].IOCR.DEPTH , Specifies number of port input samples
 */
typedef enum
{
    IfxSent_DigitalGlitchesLength_off = 0,  /**< \brief Specifies port input samples off */
    IfxSent_DigitalGlitchesLength_1   = 1,  /**< \brief Specifies 1 port input samples  */
    IfxSent_DigitalGlitchesLength_2,        /**< \brief Specifies 2 port input samples  */
    IfxSent_DigitalGlitchesLength_3,        /**< \brief Specifies 3 port input samples  */
    IfxSent_DigitalGlitchesLength_4,        /**< \brief Specifies 4 port input samples  */
    IfxSent_DigitalGlitchesLength_5,        /**< \brief Specifies 5 port input samples  */
    IfxSent_DigitalGlitchesLength_6,        /**< \brief Specifies 6 port input samples  */
    IfxSent_DigitalGlitchesLength_7,        /**< \brief Specifies 7 port input samples  */
    IfxSent_DigitalGlitchesLength_8,        /**< \brief Specifies 8 port input samples  */
    IfxSent_DigitalGlitchesLength_9,        /**< \brief Specifies 9 port input samples  */
    IfxSent_DigitalGlitchesLength_10,       /**< \brief Specifies 10 port input samples  */
    IfxSent_DigitalGlitchesLength_11,       /**< \brief Specifies 11 port input samples  */
    IfxSent_DigitalGlitchesLength_12,       /**< \brief Specifies 12 port input samples  */
    IfxSent_DigitalGlitchesLength_13,       /**< \brief Specifies 13 port input samples  */
    IfxSent_DigitalGlitchesLength_14,       /**< \brief Specifies 14 port input samples  */
    IfxSent_DigitalGlitchesLength_15        /**< \brief Specifies 15 port input samples  */
} IfxSent_DigitalGlitchesLength;

/** \brief SENT.CH[channelId].RCR.ESF , Specifies the serial frame structure
 */
typedef enum
{
    IfxSent_ExtendedSerialFrameMode_standard = 0,  /**< \brief Specifies the standard serial frame structure */
    IfxSent_ExtendedSerialFrameMode_extended = 1   /**< \brief Specifies the extended serial frame structure */
} IfxSent_ExtendedSerialFrameMode;

/** \brief SENT.CH[channelId].IOCR.ETS , Specifies the external trigger line
 */
typedef enum
{
    IfxSent_ExternalTrigger_0 = 0,      /**< \brief Specifies the external trigger line 0  */
    IfxSent_ExternalTrigger_1,          /**< \brief Specifies the external trigger line 1  */
    IfxSent_ExternalTrigger_2,          /**< \brief Specifies the external trigger line 2  */
    IfxSent_ExternalTrigger_3,          /**< \brief Specifies the external trigger line 3  */
    IfxSent_ExternalTrigger_4,          /**< \brief Specifies the external trigger line 4  */
    IfxSent_ExternalTrigger_5,          /**< \brief Specifies the external trigger line 5  */
    IfxSent_ExternalTrigger_6,          /**< \brief Specifies the external trigger line 6  */
    IfxSent_ExternalTrigger_7,          /**< \brief Specifies the external trigger line 7  */
    IfxSent_ExternalTrigger_8,          /**< \brief Specifies the external trigger line 8  */
    IfxSent_ExternalTrigger_9           /**< \brief Specifies the external trigger line 9  */
} IfxSent_ExternalTrigger;

/** \brief SENT.CH[channelId].RCR.CFC, Specifies received frame check mode
 */
typedef enum
{
    IfxSent_FrameCheckMode_pastSyncPulse   = 0, /**< \brief Specifies frame check mode against past sync pulse */
    IfxSent_FrameCheckMode_futureSuncPulse = 1  /**< \brief Specifies frame check mode against future sync pulse */
} IfxSent_FrameCheckMode;

/** \brief SENT.CH[channelId].INP.X(X= RSI,RDI,RBI,TDI,TBI,ERRI,SDI,WDI),Specifies interrupt requested node for respective interrupt
 */
typedef enum
{
    IfxSent_InterruptNodePointer_0 = 0,           /**< \brief Specifies interrupt requested node 0  */
    IfxSent_InterruptNodePointer_1,               /**< \brief Specifies interrupt requested node 1  */
    IfxSent_InterruptNodePointer_2,               /**< \brief Specifies interrupt requested node 2  */
    IfxSent_InterruptNodePointer_3,               /**< \brief Specifies interrupt requested node 3  */
    IfxSent_InterruptNodePointer_trigo0 = 4,      /**< \brief Specifies interrupt requested node TRIGO 0  */
    IfxSent_InterruptNodePointer_trigo1,          /**< \brief Specifies interrupt requested node TRIGO 1  */
    IfxSent_InterruptNodePointer_trigo2,          /**< \brief Specifies interrupt requested node TRIGO 2  */
    IfxSent_InterruptNodePointer_trigo3,          /**< \brief Specifies interrupt requested node TRIGO 3  */
    IfxSent_InterruptNodePointer_trigo4,          /**< \brief Specifies interrupt requested node TRIGO 4  */
    IfxSent_InterruptNodePointer_trigo5           /**< \brief Specifies interrupt requested node TRIGO 5  */
} IfxSent_InterruptNodePointer;

/** \brief SENT.CH[channelId].VIEW.RDNPy( y=0,1,..7 ).Specifies receive data target nibble pointer
 */
typedef enum
{
    IfxSent_Nibble_0 = 0,      /**< \brief Specifies receive data target nibble pointer to nibble 0  */
    IfxSent_Nibble_1,          /**< \brief Specifies receive data target nibble pointer to nibble 1  */
    IfxSent_Nibble_2,          /**< \brief Specifies receive data target nibble pointer to nibble 2  */
    IfxSent_Nibble_3,          /**< \brief Specifies receive data target nibble pointer to nibble 3  */
    IfxSent_Nibble_4,          /**< \brief Specifies receive data target nibble pointer to nibble 4  */
    IfxSent_Nibble_5,          /**< \brief Specifies receive data target nibble pointer to nibble 5  */
    IfxSent_Nibble_6,          /**< \brief Specifies receive data target nibble pointer to nibble 6  */
    IfxSent_Nibble_7           /**< \brief Specifies receive data target nibble pointer to nibble 7  */
} IfxSent_Nibble;

/** \brief Enable/disable the sensitivity of the module to sleep signal\n
 * Definition in Ifx_SENT.CLC.B.EDIS
 */
typedef enum
{
    IfxSent_SleepMode_enable  = 0, /**< \brief enables sleep mode */
    IfxSent_SleepMode_disable = 1  /**< \brief disables sleep mode */
} IfxSent_SleepMode;

/** \brief Specifies the SENT SPC operational mode
 */
typedef enum
{
    IfxSent_SpcMode_sync          = 0, /**< \brief Specifies synchronous SPC mode */
    IfxSent_SpcMode_range         = 1, /**< \brief Specifies range selection SPC mode */
    IfxSent_SpcMode_bidirectional = 2  /**< \brief Specifies bidirectional transmit SPC mode */
} IfxSent_SpcMode;

/** \brief OCDS Suspend Control (OCDS.SUS)
 */
typedef enum
{
    IfxSent_SuspendMode_none = 0,  /**< \brief No suspend */
    IfxSent_SuspendMode_hard = 1,  /**< \brief Hard Suspend */
    IfxSent_SuspendMode_soft = 2   /**< \brief Soft Suspend */
} IfxSent_SuspendMode;

/** \brief SENT.CH[channelId].SCR.BASE, Specifies selection of pulse based on time
 */
typedef enum
{
    IfxSent_TimeBase_measuredFrequency = 0,  /**< \brief Specifies selection of pulse based on measured frequency */
    IfxSent_TimeBase_nominalFrequency  = 1   /**< \brief Specifies selection of pulse based on nomianl frequency */
} IfxSent_TimeBase;

/** \brief SENT.CH[channelId].SCR.TRIG, Specifies trigger source for pulse generation
 */
typedef enum
{
    IfxSent_TriggerSource_off             = 0, /**< \brief Specifies no pulse generation */
    IfxSent_TriggerSource_immediate       = 1, /**< \brief Specifies immediate pulse generation */
    IfxSent_TriggerSource_fallingEdge     = 2, /**< \brief Specifies pulse generation at fallingEdge */
    IfxSent_TriggerSource_externalTrigger = 3  /**< \brief Specifies pulse generation after each external trigger */
} IfxSent_TriggerSource;

/** \} */

/** \addtogroup IfxLld_Sent_Std_Configuration
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Sets the operation mode of SENT kernel
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \param alternateInput alternate input/output pin for SENT operation
 * \return None
 */
IFX_INLINE void IfxSent_setAltiInput(Ifx_SENT *sent, IfxSent_ChannelId channelId, IfxSent_AlternateInput alternateInput);

/** \brief Set the module time stamp pre-divider
 * \param sent base address of the SENT register space
 * \param timeStampPreDivider time stamp pre-divider value
 * \return None
 */
IFX_INLINE void IfxSent_setTimeStampPredivider(Ifx_SENT *sent, uint32 timeStampPreDivider);

/** \} */

/** \addtogroup IfxLld_Sent_Std_Interrupts
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Copies the current interrupt flags into the Ifx_SENT_CH_INTSTAT structure, and clears the flags in hardware.
 *
 * This function should be used in an ISR to retrieve the events which triggered the interrupt.
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \return Interrupt flags which have been cleared.
 */
IFX_INLINE Ifx_SENT_CH_INTSTAT IfxSent_getAndClearInterruptStatus(Ifx_SENT *sent, IfxSent_ChannelId channelId);

/** \brief Gets the current channel status
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \return current channel interrupt status
 */
IFX_INLINE Ifx_SENT_CH_INTSTAT IfxSent_getChannelInterruptStatus(Ifx_SENT *sent, IfxSent_ChannelId channelId);

/** \brief gets the source for channel interrupt handler
 * \param channelId SENT channel number
 * \return interrupt source
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxSent_getChannelSrc(IfxSent_ChannelId channelId);

/** \} */

/** \addtogroup IfxLld_Sent_Std_Operative
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disable the channel with the channel number
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \return None
 */
IFX_INLINE void IfxSent_disableChannel(Ifx_SENT *sent, IfxSent_ChannelId channelId);

/** \brief Disable the SENT module
 * \param sent base address of the SENT register space
 * \return None
 */
IFX_INLINE void IfxSent_disableModule(Ifx_SENT *sent);

/** \brief Enable the channel with the channel number
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \return None
 */
IFX_INLINE void IfxSent_enableChannel(Ifx_SENT *sent, IfxSent_ChannelId channelId);

/** \brief Enable the SENT module
 * \param sent base address of the SENT register space
 * \return None
 */
IFX_INLINE void IfxSent_enableModule(Ifx_SENT *sent);

/** \brief Returns the module's suspend state.
 * TRUE :if module is suspended.
 * FALSE:if module is not yet suspended.
 * \param sent Pointer to SENT module registers
 * \return Suspend status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxSent_isModuleSuspended(Ifx_SENT *sent);

/** \brief Sets the sensitivity of the module to sleep signal
 * \param sent pointer to SENT registers
 * \param mode mode selection (enable / disable)
 * \return None
 */
IFX_INLINE void IfxSent_setSleepMode(Ifx_SENT *sent, IfxSent_SleepMode mode);

/** \brief Configure the Module to Hard/Soft suspend mode.
 * Note: The api works only when the OCDS is enabled and in Supervisor Mode. When OCDS is disabled the OCS suspend control is ineffective.
 * \param sent Pointer to SENT module registers
 * \param mode Module suspend mode
 * \return None
 */
IFX_INLINE void IfxSent_setSuspendMode(Ifx_SENT *sent, IfxSent_SuspendMode mode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Resets the SENT module
 * \param sent base address of the SENT register space
 * \return None
 */
IFX_EXTERN void IfxSent_resetModule(Ifx_SENT *sent);

/** \} */

/** \addtogroup IfxLld_Sent_Std_Baudrate
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Sets the channel fractional baudrate divider
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \param divider channel baudrate fractional divider
 * \return None
 */
IFX_INLINE void IfxSent_setChannelFractionalDivider(Ifx_SENT *sent, IfxSent_ChannelId channelId, uint16 divider);

/** \brief Sets the channel baudrate pre-divider
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \param preDivider channel baudrate pre-divider
 * \return None
 */
IFX_INLINE void IfxSent_setChannelPreDivider(Ifx_SENT *sent, IfxSent_ChannelId channelId, uint16 preDivider);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the current module frequency in Hertz.
 * \param sent base address of the SENT register space
 * \return The current module frequency in Hertz
 */
IFX_EXTERN float32 IfxSent_getModuleClock(Ifx_SENT *sent);

/** \brief Initializes the desired unit time (f_tick) for the external SENT device connected to the given channel
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \param tUnit desired unit time (f_tick), e.g. 3E-6 for 3 uS
 * \return None
 */
IFX_EXTERN void IfxSent_initializeChannelUnitTime(Ifx_SENT *sent, IfxSent_ChannelId channelId, float32 tUnit);

/** \brief Initialize and get the clock for SENT kernel
 * \param sent base address of the SENT register space
 * \param dividerMode Divider mode for clock output
 * \param stepValue clock frequency for for module fractional divider
 * \return None
 */
IFX_EXTERN void IfxSent_initializeModuleClock(Ifx_SENT *sent, IfxSent_ClockDividerMode dividerMode, uint16 stepValue);

/** \} */

/** \addtogroup IfxLld_Sent_Std_IO
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Initializes a SENT input
 * \param sentIn the SENT Pin which should be configured
 * \param inputMode the pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxSent_initSentPin(const IfxSent_Sent_In *sentIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Initializes a SPC output
 * \param spcOut the SPC Pin which should be configured
 * \param spcOutMode Port Output Mode
 * \param padDriver the pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxSent_initSpcPin(const IfxSent_Spc_Out *spcOut, IfxPort_OutputMode spcOutMode, IfxPort_PadDriver padDriver);

/** \} */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Set the watch dog timer limit value for sent channel.
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \param watchDogTimerLimit Specifies the watch dog timer limit value.
 * \return None
 */
IFX_INLINE void IfxSent_setWatchDogTimerLimit(Ifx_SENT *sent, IfxSent_ChannelId channelId, uint16 watchDogTimerLimit);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the current unit time (f_tick) of the given channel
 * \param sent base address of the SENT register space
 * \param channelId SENT channel number
 * \return The current unit time in seconds
 */
IFX_EXTERN float32 IfxSent_getChannelUnitTime(Ifx_SENT *sent, IfxSent_ChannelId channelId);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxSent_disableChannel(Ifx_SENT *sent, IfxSent_ChannelId channelId)
{
    sent->CH[channelId].RCR.B.CEN = 0;
}


IFX_INLINE void IfxSent_disableModule(Ifx_SENT *sent)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    sent->CLC.B.DISR = 1;
    IfxScuWdt_setCpuEndinit(passwd);
}


IFX_INLINE void IfxSent_enableChannel(Ifx_SENT *sent, IfxSent_ChannelId channelId)
{
    sent->CH[channelId].RCR.B.CEN = 1;
}


IFX_INLINE void IfxSent_enableModule(Ifx_SENT *sent)
{
    sent->CLC.B.DISR = 0;
}


IFX_INLINE Ifx_SENT_CH_INTSTAT IfxSent_getAndClearInterruptStatus(Ifx_SENT *sent, IfxSent_ChannelId channelId)
{
    Ifx_SENT_CH_INTSTAT interruptFlags;
    interruptFlags.U             = sent->CH[channelId].INTSTAT.U;
    sent->CH[channelId].INTCLR.U = interruptFlags.U;
    return interruptFlags;
}


IFX_INLINE Ifx_SENT_CH_INTSTAT IfxSent_getChannelInterruptStatus(Ifx_SENT *sent, IfxSent_ChannelId channelId)
{
    Ifx_SENT_CH_INTSTAT interruptFlags;
    interruptFlags.U = sent->CH[channelId].INTSTAT.U;
    return interruptFlags;
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxSent_getChannelSrc(IfxSent_ChannelId channelId)
{
    return &MODULE_SRC.SENT.SENT[0].SR[channelId];
}


IFX_INLINE void IfxSent_initSentPin(const IfxSent_Sent_In *sentIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    if (sentIn->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeInput(sentIn->pin.port, sentIn->pin.pinIndex, inputMode);
        IfxPort_setPinPadDriver(sentIn->pin.port, sentIn->pin.pinIndex, padDriver);
        IfxSent_setAltiInput(sentIn->module, sentIn->channelId, (IfxSent_AlternateInput)sentIn->select);
    }
}


IFX_INLINE void IfxSent_initSpcPin(const IfxSent_Spc_Out *spcOut, IfxPort_OutputMode spcOutMode, IfxPort_PadDriver padDriver)
{
    if (spcOut->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeOutput(spcOut->pin.port, spcOut->pin.pinIndex, spcOutMode, spcOut->select);
        IfxPort_setPinPadDriver(spcOut->pin.port, spcOut->pin.pinIndex, padDriver);
    }
}


IFX_INLINE boolean IfxSent_isModuleSuspended(Ifx_SENT *sent)
{
    Ifx_SENT_OCS ocs;

    // read the status
    ocs.U = sent->OCS.U;

    // return the status
    return ocs.B.SUSSTA;
}


IFX_INLINE void IfxSent_setAltiInput(Ifx_SENT *sent, IfxSent_ChannelId channelId, IfxSent_AlternateInput alternateInput)
{
    sent->CH[channelId].IOCR.B.ALTI = alternateInput;
}


IFX_INLINE void IfxSent_setChannelFractionalDivider(Ifx_SENT *sent, IfxSent_ChannelId channelId, uint16 divider)
{
    sent->CH[channelId].CFDR.B.DIV = divider;
}


IFX_INLINE void IfxSent_setChannelPreDivider(Ifx_SENT *sent, IfxSent_ChannelId channelId, uint16 preDivider)
{
    sent->CH[channelId].CPDR.B.PDIV = preDivider;
}


IFX_INLINE void IfxSent_setSleepMode(Ifx_SENT *sent, IfxSent_SleepMode mode)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    sent->CLC.B.EDIS = mode;
    IfxScuWdt_setCpuEndinit(passwd);
}


IFX_INLINE void IfxSent_setSuspendMode(Ifx_SENT *sent, IfxSent_SuspendMode mode)
{
    Ifx_SENT_OCS ocs;

    // remove protection and configure the suspend mode.
    ocs.B.SUS_P = 1;
    ocs.B.SUS   = mode;
    sent->OCS.U = ocs.U;
}


IFX_INLINE void IfxSent_setTimeStampPredivider(Ifx_SENT *sent, uint32 timeStampPreDivider)
{
    sent->TPD.B.TDIV = timeStampPreDivider;
}


IFX_INLINE void IfxSent_setWatchDogTimerLimit(Ifx_SENT *sent, IfxSent_ChannelId channelId, uint16 watchDogTimerLimit)
{
    sent->CH[channelId].WDT.B.WDLx = watchDogTimerLimit;
}


#endif /* IFXSENT_H */

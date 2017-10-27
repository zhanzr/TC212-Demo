/**
 * \file IfxCpu.c
 * \brief CPU  basic functionality
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
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxCpu.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

boolean IfxCpu_acquireMutex(IfxCpu_mutexLock *lock)
{
    boolean         retVal;
    volatile uint32 spinLockVal;

    retVal      = FALSE;

    spinLockVal = 1UL;
    spinLockVal =
        (uint32)__cmpAndSwap(((unsigned int *)lock), spinLockVal, 0);

    /* Check if the SpinLock WAS set before the attempt to acquire spinlock */
    if (spinLockVal == 0)
    {
        retVal = TRUE;
    }

    return retVal;
}


IfxCpu_CoreMode IfxCpu_getCoreMode(Ifx_CPU *cpu)
{
    IfxCpu_CoreMode    cpuMode;
    Ifx_CPU_DBGSR      dbgsr;
    IfxCpu_ResourceCpu index = IfxCpu_getIndex(cpu);

    cpuMode = IfxCpu_CoreMode_unknown;

    /*get the DBGSR.HALT status */
    /*Check if the request is done for same cpu as the host for this call */
    if (IfxCpu_getCoreIndex() != index)
    {                           /*status request is for other cpu than the host */
        dbgsr = cpu->DBGSR;
    }
    else
    {                           /*status request is for same cpu as the host */
        dbgsr.U = __mfcr(CPU_DBGSR);
    }

    /*Check if the requested CPU is in DBG HALT mode */
    if (dbgsr.B.HALT == (uint32)IfxCpu_DBGST_HALT_halt)
    {                           /*CPU is in DBG HALT mode */
        cpuMode = IfxCpu_CoreMode_halt;
    }
    else
    {
        if (dbgsr.B.HALT == (uint32)IfxCpu_DBGST_HALT_run)
        {                       /*CPU is in DBG RUNNING mode now check PMCSR status */
            Ifx_SCU_PMCSR *pmcsr_val;

            pmcsr_val = (Ifx_SCU_PMCSR *)&MODULE_SCU.PMCSR[index];

            if (pmcsr_val->B.PMST == (uint32)IfxCpu_PMCSR_PMST_normalMode)
            {                   /*Cpu is in normal run mode */
                cpuMode = IfxCpu_CoreMode_run;
            }
            else
            {                   /*Cpu is not in run mode */
                if (pmcsr_val->B.PMST == (uint32)IfxCpu_PMCSR_PMST_idleMode)
                {               /*Cpu is in idle mode */
                    cpuMode = IfxCpu_CoreMode_idle;
                }
            }
        }
        else
        {
            cpuMode = IfxCpu_CoreMode_unknown;
        }
    }

    return cpuMode;
}


IfxCpu_ResourceCpu IfxCpu_getIndex(Ifx_CPU *cpu)
{
    IfxCpu_ResourceCpu result;
    uint32             index;
    result = IfxCpu_ResourceCpu_none;

    for (index = 0; index < IFXCPU_NUM_MODULES; index++)
    {
        if (IfxCpu_cfg_indexMap[index].module == cpu)
        {
            result = (IfxCpu_ResourceCpu)IfxCpu_cfg_indexMap[index].index;
            break;
        }
    }

    return result;
}


uint32 IfxCpu_getRandomValue(uint32 *seed)
{
    /*************************************************************************
     * the choice of a and m is important for a long period of the LCG
     * with a =  279470273 and
     *       m = 4294967291
     * a maximum period of 2^32-5 is given
     * values for a:
     * 0x5EB0A82F = 1588635695
     * 0x48E7211F = 1223106847
     * 0x10a860c1 =  279470273
     ***************************************************************************/
    uint32 x = *seed;

    /* a seed of 0 is not allowed, and therefore will be changed to a valid value */
    if (x == 0)
    {
        x = 42;
    }

    uint32 a = 0x10a860c1;  // 279470273
    uint32 m = 0xfffffffb;  // 4294967291
    uint32 result;

    //__asm(a,m,x,tmp1,tmp2              );
    //EhEl = a * x;
    //result = e14 %  m;
    // %0 result
    // %1 a
    // %2 x
    // %3 m
/* *INDENT-OFF* */
#ifdef __GNUC__
     __asm("      mul.u     %%e14,%1,%2       # d15 = Eh; d14 = El    \n"
         "        mov       %%d12,%%d14       #   e12 = El            \n"
         "        mov       %%d13, 0          #                       \n"
         "        madd.u    %%e14,%%e12,%%d15, 5 # e14 = El + 5 * d15    \n"
         " cmp_m_%=: jge.u     %%d14,%3,sub_m_%=    #                       \n"
         "        jz        %%d15,done_%=        #                       \n"
         " sub_m_%=: subx      %%d14,%%d14,%3    #  e12=e12-m            \n"
         "        subc      %%d15,%%d15,%%d13 # d13=d13-0             \n"
         "        loopu     cmp_m_%=             #                       \n"
         " done_%=:  mov       %0,%%d14          #                       \n"
         : "=d"(result) : "d"(a), "d"(x), "d"(m) : "d12","d13","d14","d15");
#elif __TASKING__
     __asm("      mul.u     e14,%1,%2      ; d15 = Eh; d14 = El    \n"
         "        mov       d12,d14        ;   e12 = El            \n"
         "        mov       d13,#0         ;                       \n"
         "        madd.u    e14,e12,d15,#5 ; e14 = El + 5 * d15    \n"
         " cmp_m: jge.u     d14,%3,sub_m   ;                       \n"
         "        jz        d15,done       ;                       \n"
         " sub_m: subx      d14,d14,%3     ;  e12=e12-m            \n"
         "        subc      d15,d15,d13    ; d13=d13-0             \n"
         "        loopu     cmp_m          ;                       \n"
         " done:  mov       %0,d14         ;                       \n"
         : "=d"(result) : "d"(a), "d"(x), "d"(m) : "e14","e12");
#else
     asm("        mul.u     %%e14,%1,%2       # d15 = Eh; d14 = El    \n"
         "        mov       %%d12,%%d14       #   e12 = El            \n"
         "        mov       %%d13, 0          #                       \n"
         "        madd.u    %%e14,%%e12,%%d15, 5 # e14 = El + 5 * d15 \n"
         " .cmp_m:                                                      \n"
         "        jge.u     %%d14,%3,.sub_m                             \n"
         "        jz        %%d15,.done        #                       \n"
         " .sub_m:  \n"
         "        subx      %%d14,%%d14,%3    #  e12=e12-m            \n"
         "        subc      %%d15,%%d15,%%d13 # d13=d13-0             \n"
         "        loopu     .cmp_m             #                       \n"
         " .done:  \n"
         "        mov       %0,%%d14          #                       \n"
         : "=r"(result) : "r"(a), "r"(x), "r"(m));
#endif
/* *INDENT-ON* */
    * seed = result; // to simplify seed passing

    return result;
}


uint32 IfxCpu_getRandomValueWithinRange(uint32 *seed, uint32 min, uint32 max)
{
    uint32 new_value = IfxCpu_getRandomValue(seed);

    /* swap min/max if required */
    if (min > max)
    {
        unsigned swap = max;
        max = min;
        min = swap;
    }

    /* special case */
    if ((min == 0) && (max == 0xffffffff))
    {
        return new_value;
    }

    /* return value within range */
    return (new_value % (max - min + 1)) + min;
}


void IfxCpu_releaseMutex(IfxCpu_mutexLock *lock)
{
    /*Reset the SpinLock*/
    *lock = 0;
}


void IfxCpu_resetSpinLock(IfxCpu_spinLock *lock)
{
    /*Reset the SpinLock*/
    *lock = 0;
}


boolean IfxCpu_setCoreMode(Ifx_CPU *cpu, IfxCpu_CoreMode mode)
{
    // this switch is only temporary required
    // once the IfxCan driver is generated via lldgen, we will vary the code without #ifdef
#ifdef IFX_TC27x
/* FIXME Copied from old TC27xA code, check that this is up to date code */
    IfxCpu_CoreMode     cpuMode;
    boolean             RetVal;
    IfxScu_PMCSR_REQSLP modeSet;

    RetVal  = TRUE;

    modeSet = IfxScu_PMCSR_REQSLP_Idle;

    /* Check the mode the CPU is in */
    cpuMode = IfxCpu_getCoreMode(cpu);

    /* if requested mode is same as current mode nothing to do */
    if (cpuMode != mode)
    {
        /* transition from halt to Run */
        if (IfxCpu_CoreMode_halt == cpuMode)
        {
            if (IfxCpu_CoreMode_run == mode)
            {
                Ifx_CPU_DBGSR dbgsr;

                if (IfxCpu_getCoreIndex() != IfxCpu_getIndex(cpu))
                {
                    cpu->DBGSR.B.HALT = 0x2;
                }
                else
                {
                    dbgsr.U      = __mfcr(CPU_DBGSR);
                    dbgsr.B.HALT = 0x2;
                    __mtcr(CPU_DBGSR, dbgsr.U);
                }
            }
            else                /* cannot go to any other mode e.g. IfxCpu_CoreMode_idle */
            {
                RetVal = FALSE;
            }
        }
        /* From Run to Idle or vice versa */
        else
        {
            if (IfxCpu_CoreMode_run == cpuMode)
            {
                if (IfxCpu_CoreMode_idle == mode)
                {
                    modeSet = IfxScu_PMCSR_REQSLP_Idle;
                }
                else
                {
                    RetVal = FALSE;
                }
            }
            /* idle to Run */
            else if (IfxCpu_CoreMode_idle == cpuMode)
            {
                if (IfxCpu_CoreMode_run == mode)
                {
                    modeSet = IfxScu_PMCSR_REQSLP_Run;
                }
                else
                {
                    RetVal = FALSE;
                }
            }
            else
            {
                RetVal = FALSE;
            }

            if (TRUE == RetVal)
            {
                /* To take care of the Work Around in A step
                 * In A Step the PMCSR is Cpu Endinit protected
                 * in B step it is by safety endinit*/
                uint16          password;
                uint32          wdtCon0_Val;
                Ifx_SCU_WDTCPU *watchdog;
                watchdog = &MODULE_SCU.WDTCPU[IfxCpu_getCoreIndex()];    /* FIXME access to the watchdog of an other CPU, this might not work! */
                password = IfxScuWdt_getCpuWatchdogPassword();
                IfxScuWdt_clearCpuEndinit(password);
                /*  password access   */
                watchdog->CON0.U                                        = (password << 2U) | 0x1U;
                /* modify access, E=0 */
                watchdog->CON0.U                                        = (password << 2U) | 0x2U;
                /* password access in advance */
                watchdog->CON0.U                                        = (password << 2U) | 0x1U;
                /* prepare write value */
                wdtCon0_Val                                             = ((0x0000U) << 16U) | (password << 2U) | (0x3U);
                MODULE_SCU.PMCSR[(uint32)IfxCpu_getIndex(cpu)].B.REQSLP = modeSet;
                /* modify access, E=1, reload WDT */
                watchdog->CON0.U                                        = wdtCon0_Val;
                IfxScuWdt_setCpuEndinit(password);
            }
        }
    }

    return RetVal;
#else
    uint8              reqslp;
    boolean            retValue;
    IfxCpu_ResourceCpu index = IfxCpu_getIndex(cpu);

    /*Modes such as HALT, SLEEP and STBY are not handled at CPU level */
    retValue = ((mode == IfxCpu_CoreMode_halt) || (mode == IfxCpu_CoreMode_sleep)
                || (mode == IfxCpu_CoreMode_stby)) ? FALSE : TRUE;

    reqslp = (mode == IfxCpu_CoreMode_idle) ? IfxScu_PMCSR_REQSLP_Idle : IfxScu_PMCSR_REQSLP_Run;

    if (retValue == TRUE)
    {
        /*Check if the same core is requesting to change the core run mode */
        if (IfxCpu_getCoreIndex() != index)
        {                       /*Request is for the other core */
            /*To access PMCSR of other CPUs handle the safety EndInit protection */
            uint16 safetyWdtPw = IfxScuWdt_getSafetyWatchdogPassword();
            IfxScuWdt_clearSafetyEndinit(safetyWdtPw);
            MODULE_SCU.PMCSR[(uint32)IfxCpu_getIndex(cpu)].B.REQSLP = reqslp;
            IfxScuWdt_setSafetyEndinit(safetyWdtPw);

            cpu->DBGSR.B.HALT = 2; /*reset the HALT bit, if it is already done it is no harm in writing again */
        }
        else
        {                          /*Request is for self, this request normally only for halt, otherwise the core is already running anyway! */
            /*To access PMCSR of self handle the cpu EndInit protection */
            uint16 cpuWdtPw = IfxScuWdt_getCpuWatchdogPassword();
            IfxScuWdt_clearCpuEndinit(cpuWdtPw);
            MODULE_SCU.PMCSR[(uint32)index].B.REQSLP = reqslp;
            IfxScuWdt_setCpuEndinit(cpuWdtPw);
        }
    }

    return retValue;
#endif
}


boolean IfxCpu_setProgramCounter(Ifx_CPU *cpu, uint32 programCounter)
{
    boolean retVal = TRUE;

    if (cpu == IfxCpu_getAddress(IfxCpu_getCoreIndex()))
    {
        retVal = FALSE;
    }
    else
    {
        cpu->PC.B.PC = programCounter >> 1;
    }

    return retVal;
}


boolean IfxCpu_setSpinLock(IfxCpu_spinLock *lock, uint32 timeoutCount)
{
    boolean         retVal;
    volatile uint32 spinLockVal;

    retVal = FALSE;

    do
    {
        spinLockVal = 1UL;
        spinLockVal =
            (uint32)__cmpAndSwap(((unsigned int *)lock), spinLockVal, 0);

        /* Check if the SpinLock WAS set before the attempt to acquire spinlock */
        if (spinLockVal == 0)
        {
            retVal = TRUE;
        }
        else
        {
            timeoutCount--;
        }
    } while ((retVal == FALSE) && (timeoutCount > 0));

    return retVal;
}


boolean IfxCpu_startCore(Ifx_CPU *cpu, uint32 programCounter)
{
    boolean retVal = TRUE;

    /* Set the PC for Core 1 */
    retVal &= IfxCpu_setProgramCounter(cpu, programCounter);
    /* Get the mode for Core 1 and set it to RUNNING */

    /* Core not running already */
    if (IfxCpu_getCoreMode(cpu) == IfxCpu_CoreMode_halt)
    {
        retVal &= IfxCpu_setCoreMode(cpu, IfxCpu_CoreMode_run);
    }

    return retVal;
}


void IfxCpu_waitEvent(IfxCpu_syncEvent *event, uint32 timeout)
{
    volatile uint32 *sync          = (volatile uint32 *)IFXCPU_GLB_ADDR_DSPR(IfxCpu_getCoreIndex(), event);

    uint32           stmCount      = (uint32)(IfxScuCcu_getStmFrequency() * timeout);
    uint32           stmCountBegin = STM0_TIM0.U;

    while ((*sync == IFXCPU_ALLCORE_DONE) &&
           ((uint32)(STM0_TIM0.U - stmCountBegin) < stmCount))
    {
        __nop();
        /* There is no need to check overflow of the STM timer.
         * When counter after overflow subtracted with counter before overflow,
         * the subtraction result will be as expected, as long as both are unsigned 32 bits
         * eg: stmCountBegin= 0xFFFFFFFE (before overflow)
         *     stmCountNow = 0x00000002 (before overflow)
         *     diff= stmCountNow - stmCountBegin = 4 as expected.*/
    }
}


void IfxCpu_emitEvent(IfxCpu_syncEvent *event)
{
    *event = __insert(1, (*event), (__mfcr(CPU_CORE_ID)), 1);
}

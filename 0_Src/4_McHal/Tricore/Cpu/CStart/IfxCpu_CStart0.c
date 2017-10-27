/**
 * \file IfxCpu_Cstart0.c
 * \brief This file contains the Core startup sequence for Cpu0.
 * \version iLLD_1_0_1_0_0
 * \copyright Copyright (c) 2012 Infineon Technologies AG. All rights reserved.
 *
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
/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/
#include "Ifx_Cfg.h"
#ifndef IFX_CFG_USE_COMPILER_DEFAULT_LINKER
#include "Scu/Std/IfxScuWdt.h"
#include "Scu/Std/IfxScuCcu.h"
#include "Cpu/Std/IfxCpu.h"
#include "Cpu/CStart/IfxCpu_CStart.h"
#include "IfxScu_reg.h"
#include "IfxCpu_reg.h"

/******************************************************************************/
/*                           Macros                                           */
/******************************************************************************/
/** \brief Configuration for cache enable.
 *
 */
#ifndef IFX_CFG_CPU_CSTART_ENABLE_TRICORE0_PCACHE
#   define IFX_CFG_CPU_CSTART_ENABLE_TRICORE0_PCACHE (1)  /**< Program Cache enabled by default*/
#endif
#ifndef IFX_CFG_CPU_CSTART_ENABLE_TRICORE0_DCACHE
#   define IFX_CFG_CPU_CSTART_ENABLE_TRICORE0_DCACHE (1)  /**< Data Cache enabled by default*/
#endif

#ifndef IFXCPU_CSTART_CCU_INIT_HOOK
#define IFXCPU_CSTART_CCU_INIT_HOOK() (void)IfxScuCcu_init(&IfxScuCcu_defaultClockConfig);   /*The status returned by Ccu init is ignored */
#endif

/*******************************************************************************
**                      Imported Function Declarations                        **
*******************************************************************************/
IFXCOMPILER_COMMON_LINKER_SYMBOLS()
IFXCOMPILER_CORE_LINKER_SYMBOLS(0)

IFX_EXTERN void core0_main(void);
#if defined(__TASKING__)
__asm("\t .extern core0_main");
#endif

/*******************************************************************************
**                      Private Constant Definitions                          **
*******************************************************************************/
#define IFXCSTART0_PSW_DEFAULT     (0x00000980u)
#define IFXCSTART0_PCX_O_S_DEFAULT (0xfff00000u)

/*********************************************************************************
* _start() - startup code
*********************************************************************************/
void _Core0_start(void)
{
    uint32 pcxi;
    uint16 cpuWdtPassword = IfxScuWdt_getCpuWatchdogPasswordInline(&MODULE_SCU.WDTCPU[0]);

    IFX_CFG_CPU_CSTART_PRE_C_INIT_HOOK(0);  /*Test Stack, CSA and Cache */

    /* Load user stack pointer */
    __setareg(sp, __USTACK(0));
    __dsync();

    /* Set the PSW to its reset value in case of a warm start,clear PSW.IS */
    __mtcr(CPU_PSW, IFXCSTART0_PSW_DEFAULT);

    /* Set the PCXS and PCXO to its reset value in case of a warm start */
    pcxi  = __mfcr(CPU_PCXI);
    pcxi &= IFXCSTART0_PCX_O_S_DEFAULT; /*0xfff00000; */
    __mtcr(CPU_PCXI, pcxi);

    /*enable/disable program cache depending on the configuration */
    IfxCpu_setProgramCache(IFX_CFG_CPU_CSTART_ENABLE_TRICORE0_PCACHE);

    /*enable/disable data cache depending on the configuration */
    IfxCpu_setDataCache(IFX_CFG_CPU_CSTART_ENABLE_TRICORE0_DCACHE);

    /* Clear the ENDINIT bit in the WDT_CON0 register, inline funtion */
    IfxScuWdt_clearCpuEndinitInline(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);

    /* Load Base Address of Trap Vector Table. */
    __mtcr(CPU_BTV, (uint32)__TRAPTAB(0));

    /* Load Base Address of Interrupt Vector Table. we will do this later in the program */
    __mtcr(CPU_BIV, (uint32)__INTTAB(0));

    /* Load interupt stack pointer. */
    __mtcr(CPU_ISP, (uint32)__ISTACK(0));

    IfxScuWdt_setCpuEndinitInline(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);

    /* initialize SDA base pointers */
    __setareg(a0, __SDATA1(0));
    __setareg(a1, __SDATA2(0));

    /* These to be un commented if A8 and A9 are required to be initialized */
    __setareg(a8, __SDATA3(0));
    __setareg(a9, __SDATA4(0));
    /* Setup the context save area linked list. */

    IfxCpu_initCSA((uint32 *)__CSA(0), (uint32 *)__CSA_END(0));     /*Initialize the context save area for CPU0 */

    {
        /*CPU and safety watchdogs are enabled by default, C initialization functions are not servicing the watchdogs */
        uint16 safetyWdtPassword = IfxScuWdt_getSafetyWatchdogPassword();
        IfxScuWdt_disableCpuWatchdog(cpuWdtPassword);
        IfxScuWdt_disableSafetyWatchdog(safetyWdtPassword);

        Ifx_C_Init();           /*Initialization of C runtime variables */

        IfxScuWdt_enableCpuWatchdog(cpuWdtPassword);
        IfxScuWdt_enableSafetyWatchdog(safetyWdtPassword);
    }

    /*Initialize the clock system */
    IFXCPU_CSTART_CCU_INIT_HOOK();

    /*Call main function of Cpu0 */
    __non_return_call(core0_main);
}


/******************************************************************************
 * reset vector address, user section to inform linker to locate the code at 0x8000 0020
 *****************************************************************************/
#if defined(__GNUC__)
#pragma section
#pragma section ".start" x
#endif
#if defined(__TASKING__)
#pragma protect on
#pragma section code "start"
#endif
#if defined(__DCC__)
#pragma section CODE ".start" X
#endif

void _START(void)
{
    __non_return_call(_Core0_start);
}


/* reset the sections defined above, to normal region */
#if defined(__GNUC__)
#pragma section
#endif
#if defined(__TASKING__)
#pragma protect restore
#pragma section code restore
#endif
#if defined(__DCC__)
#pragma section CODE
#endif

/*******************************************************************************
**                      Boot Mode Headers                                     **
*******************************************************************************/
/*Boot Mode Header 0 sections to inform linker to locate them at 0x8000 0000 */
#if defined(__GNUC__)
#pragma section
#pragma section ".bmhd_0" a
#endif
#if defined(__TASKING__)
#pragma protect on
#pragma section farrom "bmhd_0"
#endif
#if defined(__DCC__)
#pragma section CONST ".bmhd_0" R
#endif
/** \brief Boot Mode Header 0
 * Boot mode header at memory location 0c8000 0000.
 */
const uint32 BootModeHeader_0[] = {
    0x00000000u,                 /* STADBM first user code at 0x8000 0020h */
    0xb3590070u,                 /* BMI = 0070h BMHDID = B359h */
    0x00000000u,                 /* ChkStart */
    0x00000000u,                 /* ChkEnd */
    0x00000000u,                 /* CRCrange */
    0x00000000u,                 /* !CRCrange */
    0x791eb864u,                 /* CRChead */
    0x86e1479bu                  /* !CRChead */
};

/*reset the sections defined above */
#if defined(__GNUC__)
#pragma section
#endif
#if defined(__TASKING__)
#pragma protect restore
#pragma section farrom restore
#endif
#if defined(__DCC__)
#pragma section CONST
#endif

#ifndef IFX_CFG_CPUCSTART_BMI01_NOT_NEEDED
/*Boot Mode Header 1 sections to inform linker to locate them at 0x8002 0000 */
#if defined(__GNUC__)
#pragma section
#pragma section ".bmhd_1" a
#endif
#if defined(__TASKING__)
#pragma protect on
#pragma section farrom "bmhd_1"
#endif
#if defined(__DCC__)
#pragma section CONST ".bmhd_1" R
#endif

/** \brief Boot Mode Header 1
 * Boot mode header at memory location 0c8002 0000.
 */
const uint32 BootModeHeader_1[] = {
    0x00000000u,                 /* STADBM first user code at 0x8000 0020h */
    0xB3590070u,                 /* BMI = 0070h BMHDID = B359h */
    0x00000000u,                 /* ChkStart */
    0x00000000u,                 /* ChkEnd */
    0x00000000u,                 /* CRCrange */
    0x00000000u,                 /* !CRCrange */
    0x791eb864u,                 /* CRChead */
    0x86e1479bu                  /* !CRChead */
};

/*reset the sections defined above */
#if defined(__GNUC__)
#pragma section
#endif
#if defined(__TASKING__)
#pragma protect restore
#pragma section farrom restore
#endif
#if defined(__DCC__)
#pragma section CONST
#endif
#endif /*IFX_CFG_CPUCSTART_BMI01_NOT_NEEDED*/

#endif /*#ifndef IFX_CFG_USE_COMPILER_DEFAULT_LINKER */

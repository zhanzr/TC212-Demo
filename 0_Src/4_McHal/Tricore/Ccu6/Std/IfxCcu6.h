/**
 * \file IfxCcu6.h
 * \brief CCU6  basic functionality
 * \ingroup IfxLld_Ccu6
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
 * \defgroup IfxLld_Ccu6_Std_Enum Enumerations
 * \ingroup IfxLld_Ccu6_Std
 * \defgroup IfxLld_Ccu6_Std_Operative Operative Functions
 * \ingroup IfxLld_Ccu6_Std
 * \defgroup IfxLld_Ccu6_Std_Utility Utility Functions
 * \ingroup IfxLld_Ccu6_Std
 * \defgroup IfxLld_Ccu6_Std_Configuration Configuration Functions
 * \ingroup IfxLld_Ccu6_Std
 * \defgroup IfxLld_Ccu6_Std_IO IO Pin Configuration Functions
 * \ingroup IfxLld_Ccu6_Std
 */

#ifndef IFXCCU6_H
#define IFXCCU6_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxCcu6_cfg.h"
#include "Src/Std/IfxSrc.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "Scu/Std/IfxScuWdt.h"
#include "Scu/Std/IfxScuCcu.h"
#include "_Utilities/Ifx_Assert.h"
#include "_PinMap/IfxCcu6_PinMap.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Ccu6_Std_Enum
 * \{ */
/** \brief Input selection, ( CC6x capture input / CTRAP input / CCPOSx input )\n
 * Definition in Ifx_CCU.PISEL0
 */
typedef enum
{
    IfxCcu6_CaptureCompareInput_cC60   = IFX_CCU6_PISEL0_ISCC60_OFF,  /**< \brief CC60 capture input */
    IfxCcu6_CaptureCompareInput_cC61   = IFX_CCU6_PISEL0_ISCC61_OFF,  /**< \brief CC61 capture input */
    IfxCcu6_CaptureCompareInput_cC62   = IFX_CCU6_PISEL0_ISCC62_OFF,  /**< \brief CC62 capture input */
    IfxCcu6_CaptureCompareInput_cTRAP  = IFX_CCU6_PISEL0_ISTRP_OFF,   /**< \brief CTRAP input */
    IfxCcu6_CaptureCompareInput_cCPOS0 = IFX_CCU6_PISEL0_ISPOS0_OFF,  /**< \brief CCPOS0 input */
    IfxCcu6_CaptureCompareInput_cCPOS1 = IFX_CCU6_PISEL0_ISPOS1_OFF,  /**< \brief CCPOS1 input */
    IfxCcu6_CaptureCompareInput_cCPOS2 = IFX_CCU6_PISEL0_ISPOS2_OFF   /**< \brief CCPOS2 input */
} IfxCcu6_CaptureCompareInput;

/** \brief Selection of actual input signal for the capture compare inputs
 */
typedef enum
{
    IfxCcu6_CaptureCompareInputSignal_a = 0,  /**< \brief defines the input signal used as CC6x / CTRAP / CCPOSx / T1xHR input. */
    IfxCcu6_CaptureCompareInputSignal_b = 1,  /**< \brief defines the input signal used as CC6x / CTRAP / CCPOSx / T1xHR input. */
    IfxCcu6_CaptureCompareInputSignal_c = 2,  /**< \brief defines the input signal used as CC6x / CTRAP / CCPOSx / T1xHR input. */
    IfxCcu6_CaptureCompareInputSignal_d = 3   /**< \brief defines the input signal used as CC6x / CTRAP / CCPOSx / T1xHR input. */
} IfxCcu6_CaptureCompareInputSignal;

/** \brief capture/compare state to set / clear the CC6xST-bits
 */
typedef enum
{
    IfxCcu6_CaptureCompareState_set    = 0, /**< \brief Bit CC6xST is set */
    IfxCcu6_CaptureCompareState_clear  = 1, /**< \brief Bit CC6xST is cleared */
    IfxCcu6_CaptureCompareState_toggle = 2  /**< \brief Bit CC6xST is toggled */
} IfxCcu6_CaptureCompareState;

/** \brief Capture compare output pins
 */
typedef enum
{
    IfxCcu6_ChannelOut_cc0   = 0,  /**< \brief CC60 compare output CC0 */
    IfxCcu6_ChannelOut_cout0 = 1,  /**< \brief CC60 compare output COUT0 */
    IfxCcu6_ChannelOut_cc1   = 2,  /**< \brief CC61 compare output CC1 */
    IfxCcu6_ChannelOut_cout1 = 3,  /**< \brief CC61 compare output COUT1 */
    IfxCcu6_ChannelOut_cc2   = 4,  /**< \brief CC62 compare output CC2 */
    IfxCcu6_ChannelOut_cout2 = 5,  /**< \brief CC62 compare output COUT2 */
    IfxCcu6_ChannelOut_cout3 = 6   /**< \brief CC63 compare output COUT3 */
} IfxCcu6_ChannelOut;

/** \brief Defines the input event leading to a counting action of the timer (T12 / T13)\n
 * Definition in Ifx_CCU.PISEL2.B.ISCNT12 / Ifx_CCU.PISEL2.B.ISCNT13
 */
typedef enum
{
    IfxCcu6_CountingInputMode_internal        = 0, /**< \brief The T1x prescaler generates the counting events,
                                                    * Bit TCTR4.T1xCNT is not taken into account. */
    IfxCcu6_CountingInputMode_manual          = 1, /**< \brief Bit TCTR4.T1xCNT written with 1 is a counting
                                                    * event. The T1x prescaler is not taken into account */
    IfxCcu6_CountingInputMode_externalRising  = 2, /**< \brief The timer T1x is counting each rising edge
                                                    * detected in the selected T1xHR signal */
    IfxCcu6_CountingInputMode_externalFalling = 3  /**< \brief The timer T1x is counting each falling edge
                                                    * detected in the selected T1xHR signal */
} IfxCcu6_CountingInputMode;

/** \brief Controls whether the source signal for the sampling of the Hall input pattern (selected by HSYNC) is delayed by the Dead-Time Counter 0\n
 * Definition in Ifx_CCU.T12MSEL.B.DBYP
 */
typedef enum
{
    IfxCcu6_DelayBypass_notActive = 0,  /**< \brief Dead-Time Counter 0 is generating a delay after
                                         * the source signal becomes active */
    IfxCcu6_DelayBypass_active    = 1   /**< \brief Dead-Time Counter 0 is not used for a delay */
} IfxCcu6_DelayBypass;

/** \brief Defines the event of signal T1xHR that can set the run bit T1xR by HW\n
 * Definition in Ifx_CCU.TCTR2.B.T12RSEL / IIfx_CCU.TCTR2.B.T13RSEL
 */
typedef enum
{
    IfxCcu6_ExternalTriggerMode_disable     = 0,  /**< \brief The external setting of T1xR is disabled */
    IfxCcu6_ExternalTriggerMode_risingEdge  = 1,  /**< \brief Bit T1xR is set if a rising edge of signal T1xHR is
                                                   * detected. */
    IfxCcu6_ExternalTriggerMode_fallingEdge = 2,  /**< \brief Bit T1xR is set if a falling edge of signal T1xHR is
                                                   * detected. */
    IfxCcu6_ExternalTriggerMode_anyEdge     = 3   /**< \brief Bit T1xR is set if an edge of signal T1xHR is
                                                   * detected */
} IfxCcu6_ExternalTriggerMode;

/** \brief Defines the source for the sampling of the Hall input pattern and the comparison to the current and the expected Hall pattern bit fields\n
 * Definition in Ifx_CCU.T12MSEL.HSYNC
 */
typedef enum
{
    IfxCcu6_HallSensorTriggerMode_permanentCheck    = 0,  /**< \brief Any edge at any of the inputs CCPOSx, independent from any PWM
                                                           * signal */
    IfxCcu6_HallSensorTriggerMode_cM63              = 1,  /**< \brief A T13 Compare-Match */
    IfxCcu6_HallSensorTriggerMode_t13PM             = 2,  /**< \brief A T13 Period-Match */
    IfxCcu6_HallSensorTriggerMode_off               = 3,  /**< \brief Hall sampling triggered by HW sources is switched off */
    IfxCcu6_HallSensorTriggerMode_t12PMCountingUp   = 4,  /**< \brief A T12 Period-Match while counting up (T12_PM and CDIR = 0) */
    IfxCcu6_HallSensorTriggerMode_t12OMCountingDown = 5,  /**< \brief A T12 One-Match while counting down (T12_PM and CDIR = 1) */
    IfxCcu6_HallSensorTriggerMode_cM61CountingUp    = 6,  /**< \brief A T12 Compare-Match of compare channel CC61 while counting up (CM_61 and CDIR = 0) */
    IfxCcu6_HallSensorTriggerMode_cM61CountingDown  = 7   /**< \brief A T12 Compare-Match of compare channel CC61 while counting down (CM_61 and CDIR = 1) */
} IfxCcu6_HallSensorTriggerMode;

/** \brief Interrupt source selection
 * Description in Ifx_CCU.IEN
 */
typedef enum
{
    IfxCcu6_InterruptSource_cc60RisingEdge   = IFX_CCU6_IS_ICC60R_OFF, /**< \brief Capture compare match rising edge interrupt
                                                                        * enable for channel CC60 */
    IfxCcu6_InterruptSource_cc60FallingEdge  = IFX_CCU6_IS_ICC60F_OFF, /**< \brief Capture compare match falling edge interrupt
                                                                        * enable for channel CC60 */
    IfxCcu6_InterruptSource_cc61RisingEdge   = IFX_CCU6_IS_ICC61R_OFF, /**< \brief Capture compare match rising edge interrupt
                                                                        * enable for channel CC61 */
    IfxCcu6_InterruptSource_cc61FallingEdge  = IFX_CCU6_IS_ICC61F_OFF, /**< \brief Capture compare match falling edge interrupt
                                                                        * enable for channel CC61 */
    IfxCcu6_InterruptSource_cc62RisingEdge   = IFX_CCU6_IS_ICC62R_OFF, /**< \brief Capture compare match rising edge interrupt
                                                                        * enable for channel CC62 */
    IfxCcu6_InterruptSource_cc62FallingEdge  = IFX_CCU6_IS_ICC62F_OFF, /**< \brief Capture compare match falling edge interrupt
                                                                        * enable for channel CC62 */
    IfxCcu6_InterruptSource_t12OneMatch      = IFX_CCU6_IS_T12OM_OFF,  /**< \brief Interrupt enable for T12 one-match */
    IfxCcu6_InterruptSource_t12PeriodMatch   = IFX_CCU6_IS_T12PM_OFF,  /**< \brief Interrupt enable for T12 period-match */
    IfxCcu6_InterruptSource_t13CompareMatch  = IFX_CCU6_IS_T13CM_OFF,  /**< \brief Interrupt enable for T13 compare-match */
    IfxCcu6_InterruptSource_t13PeriodMatch   = IFX_CCU6_IS_T13PM_OFF,  /**< \brief Interrupt enable for T13 period-match */
    IfxCcu6_InterruptSource_trap             = IFX_CCU6_IS_TRPF_OFF,   /**< \brief Interrupt enable for trap flag */
    IfxCcu6_InterruptSource_correctHallEvent = IFX_CCU6_IS_CHE_OFF,    /**< \brief Interrupt enable for correct hall event */
    IfxCcu6_InterruptSource_wrongHallEvent   = IFX_CCU6_IS_WHE_OFF     /**< \brief Interrupt enable for wrong hall event */
} IfxCcu6_InterruptSource;

/** \brief Selection of the trigger request source (next multi-channel event) for the shadow transfer MCM_ST from MCMPS to MCMP\n
 * Definition in Ifx_CCU.MCMCTR.B.SWSEL
 */
typedef enum
{
    IfxCcu6_MultiChannelSwitchingSelect_noEvent                 = 0,  /**< \brief No trigger request will be generated */
    IfxCcu6_MultiChannelSwitchingSelect_correctHallEvent        = 1,  /**< \brief Correct Hall pattern detected (CM_CHE) */
    IfxCcu6_MultiChannelSwitchingSelect_t13PeriodMatch          = 2,  /**< \brief T13 period-match detected (while counting up) */
    IfxCcu6_MultiChannelSwitchingSelect_t12OneMatch             = 3,  /**< \brief T12 one-match (while counting down) */
    IfxCcu6_MultiChannelSwitchingSelect_t12Channel1CompareMatch = 4,  /**< \brief T12 channel 1 compare-match detected (phase
                                                                       * delay function) */
    IfxCcu6_MultiChannelSwitchingSelect_t12PeriodMatch          = 5   /**< \brief T12 period match detected (while counting up) */
} IfxCcu6_MultiChannelSwitchingSelect;

/** \brief Selection of the synchronization mechanism for the shadow transfer event MCM_ST\n
 * Definition in Ifx_CCU.MCMCTR.B.SWSYN
 */
typedef enum
{
    IfxCcu6_MultiChannelSwitchingSync_direct       = 0,  /**< \brief Direct, the trigger event immediately leads to the
                                                          * shadow transfer */
    IfxCcu6_MultiChannelSwitchingSync_t13ZeroMatch = 1,  /**< \brief A T13 zero-match triggers the shadow transfer */
    IfxCcu6_MultiChannelSwitchingSync_t12ZeroMatch = 2   /**< \brief A T12 zero-match (while counting up) triggers the
                                                          * shadow transfer */
} IfxCcu6_MultiChannelSwitchingSync;

/** \brief Selection of service request outputs
 */
typedef enum
{
    IfxCcu6_ServiceRequest_0 = 0,      /**< \brief Service request output SR0  */
    IfxCcu6_ServiceRequest_1,          /**< \brief Service request output SR1  */
    IfxCcu6_ServiceRequest_2,          /**< \brief Service request output SR2  */
    IfxCcu6_ServiceRequest_3           /**< \brief Service request output SR3  */
} IfxCcu6_ServiceRequest;

/** \brief Enable/disable the sensitivity of the module to sleep signal\n
 * Definition in Ifx_CCU6.CLC.B.EDIS
 */
typedef enum
{
    IfxCcu6_SleepMode_enable  = 0, /**< \brief enables sleep mode */
    IfxCcu6_SleepMode_disable = 1  /**< \brief disables sleep mode */
} IfxCcu6_SleepMode;

/** \brief OCDS Suspend Control (OCDS.SUS)
 */
typedef enum
{
    IfxCcu6_SuspendMode_none = 0,  /**< \brief No suspend */
    IfxCcu6_SuspendMode_hard = 1,  /**< \brief Hard Suspend */
    IfxCcu6_SuspendMode_soft = 2   /**< \brief Soft Suspend */
} IfxCcu6_SuspendMode;

/** \brief Capture compare channel of Timer12
 */
typedef enum
{
    IfxCcu6_T12Channel_0 = 0,      /**< \brief T12 channel CC60  */
    IfxCcu6_T12Channel_1,          /**< \brief T12 channel CC61  */
    IfxCcu6_T12Channel_2           /**< \brief T12 channel CC62  */
} IfxCcu6_T12Channel;

/** \brief The operating mode for the T12 channels are defined by the bit fields Ifx_CCU.T12MSEL.MSEL6x.
 */
typedef enum
{
    IfxCcu6_T12ChannelMode_off                                   = 0,  /**< \brief Capture/Compare modes switched off */
    IfxCcu6_T12ChannelMode_compareMode                           = 1,  /**< \brief Compare mode */
    IfxCcu6_T12ChannelMode_doubleRegisterCaptureRisingAndFalling = 4,  /**< \brief CC6xIN rising edge: T12 stored in CC6xR, falling edge: T12 stored in CC6xSR */
    IfxCcu6_T12ChannelMode_doubleRegisterCaptureRising           = 5,  /**< \brief CC6xIN rising edge: CC6nSR stored in CC6xR, falling edge: T12 stored in CC6xSR */
    IfxCcu6_T12ChannelMode_doubleRegisterCaptureFalling          = 6,  /**< \brief CC6xIN rising edge: CC6nSR stored in CC6xR, falling edge: T12 stored in CC6xSR */
    IfxCcu6_T12ChannelMode_doubleRegisterCaptureAny              = 7,  /**< \brief CC6xIN any active edge: CC6nSR stored in CC6xR, any active edge: T12 stored in CC6xSR */
    IfxCcu6_T12ChannelMode_hallSensor                            = 8,  /**< \brief Hall Sensor Mode, In order to properly enable this mode, all three MSEL6x fields have to be
                                                                        * programmed to Hall Sensor mode */
    IfxCcu6_T12ChannelMode_hysteresisLikecompare                 = 9,  /**< \brief Hysteresis-like compare mode */
    IfxCcu6_T12ChannelMode_multiInputCaptureRisingAndFalling     = 10, /**< \brief CC6xIN rising edge: T12 stored in CC6xR, CCPOSx falling edge: T12 stored in CC6xSR */
    IfxCcu6_T12ChannelMode_multiInputCaptureFallingAndRising     = 11, /**< \brief CC6xIN falling edge: T12 stored in CC6xR, CCPOSx rising edge: T12 stored in CC6xSR */
    IfxCcu6_T12ChannelMode_multiInputCaptureBothRising           = 12, /**< \brief CC6xIN rising edge: T12 stored in CC6xR, CCPOSx rising edge: T12 stored in CC6xSR */
    IfxCcu6_T12ChannelMode_multiInputCaptureBothFalling          = 13, /**< \brief CC6xIN falling edge: T12 stored in CC6xR, CCPOSx falling edge: T12 stored in CC6xSR */
    IfxCcu6_T12ChannelMode_multiInputCaptureAny                  = 14  /**< \brief CC6xIN any active edge : T12 stored in CC6xR, CCPOSx any active edge: T12 stored in CC6xSR */
} IfxCcu6_T12ChannelMode;

/** \brief Counting direction of Timer12\n
 * Definition in Ifx_CCU.TCTR0.B.CDIR
 */
typedef enum
{
    IfxCcu6_T12CountDirection_up   = 0, /**< \brief Counting up */
    IfxCcu6_T12CountDirection_down = 1  /**< \brief Counting down */
} IfxCcu6_T12CountDirection;

/** \brief Operating mode of Timer 12\n
 * Definition in Ifx_CCU.TCTR0.B.CTM
 */
typedef enum
{
    IfxCcu6_T12CountMode_edgeAligned   = 0, /**< \brief T12 always counts up and continues counting
                                             * from zero after reaching the period value. */
    IfxCcu6_T12CountMode_centerAligned = 1  /**< \brief T12 counts down after detecting a period-match
                                             * and counts up after detecting a one-match. */
} IfxCcu6_T12CountMode;

/** \brief Delivers additional information to control the automatic set of bit T13R in the case that the trigger action defined by T13 trigger event control (T13TEC) is detected.\n
 * Definition in Ifx_CCU.TCTR2.B.T13TED
 */
typedef enum
{
    IfxCcu6_T13TriggerDirection_noAction          = 0,  /**< \brief no action */
    IfxCcu6_T13TriggerDirection_onT12CountingUp   = 1,  /**< \brief while T12 is counting up */
    IfxCcu6_T13TriggerDirection_onT12CountingDown = 2,  /**< \brief while T12 is counting down */
    IfxCcu6_T13TriggerDirection_anyT12            = 3   /**< \brief independent on the count direction of T12 */
} IfxCcu6_T13TriggerDirection;

/** \brief Selects the trigger event to start T13 (automatic set of T13R for synchronization to T12 compare signals)\n
 * Definition in Ifx_CCU.TCTR2.B.T13TEC
 */
typedef enum
{
    IfxCcu6_T13TriggerEvent_noAction        = 0,  /**< \brief no action */
    IfxCcu6_T13TriggerEvent_onCC60RCompare  = 1,  /**< \brief set T13R on a T12 compare event on channel 0 */
    IfxCcu6_T13TriggerEvent_onCC61RCompare  = 2,  /**< \brief set T13R on a T12 compare event on channel 1 */
    IfxCcu6_T13TriggerEvent_onCC62RCompare  = 3,  /**< \brief set T13R on a T12 compare event on channel 2 */
    IfxCcu6_T13TriggerEvent_onAnyT12Compare = 4,  /**< \brief set T13R on any T12 compare event (ch. 0, 1, 2) */
    IfxCcu6_T13TriggerEvent_onT12Period     = 5,  /**< \brief set T13R upon a period-match of T12 */
    IfxCcu6_T13TriggerEvent_onT12Zero       = 6,  /**< \brief set T13R upon a zero-match of T12 (while
                                                   * counting up) */
    IfxCcu6_T13TriggerEvent_onCCPOSxEdge    = 7   /**< \brief set T13R on any edge of inputs CCPOSx */
} IfxCcu6_T13TriggerEvent;

/** \brief Timer number ( T12 / T13 )
 */
typedef enum
{
    IfxCcu6_TimerId_t12 = 0,  /**< \brief Timer 12 */
    IfxCcu6_TimerId_t13 = 1   /**< \brief Timer 13 */
} IfxCcu6_TimerId;

/** \brief Selects the input clock for timers (T12 or T13) that is derived from the peripheral clock according to the equation\n
 * Definition in Ifx_CCU.TCTR0.B.T12CLK / Ifx_CCU.TCTR0.B.T13CLK
 */
typedef enum
{
    IfxCcu6_TimerInputClock_fcc6      = 0, /**< \brief fcc6 */
    IfxCcu6_TimerInputClock_fcc6By2   = 1, /**< \brief fcc6 / 2 */
    IfxCcu6_TimerInputClock_fcc6By4   = 2, /**< \brief fcc6 / 4 */
    IfxCcu6_TimerInputClock_fcc6By8   = 3, /**< \brief fcc6 / 8 */
    IfxCcu6_TimerInputClock_fcc6By16  = 4, /**< \brief fcc6 / 16 */
    IfxCcu6_TimerInputClock_fcc6By32  = 5, /**< \brief fcc6 / 32 */
    IfxCcu6_TimerInputClock_fcc6By64  = 6, /**< \brief fcc6 / 64 */
    IfxCcu6_TimerInputClock_fcc6By128 = 7  /**< \brief fcc6 / 128 */
} IfxCcu6_TimerInputClock;

/** \brief Selection of actual input signal for the timer inputs
 */
typedef enum
{
    IfxCcu6_TimerInputSignal_a = 0,  /**< \brief defines the input signal used as CC6x / CTRAP / CCPOSx / T1xHR input. */
    IfxCcu6_TimerInputSignal_b = 1,  /**< \brief defines the input signal used as CC6x / CTRAP / CCPOSx / T1xHR input. */
    IfxCcu6_TimerInputSignal_c = 2,  /**< \brief defines the input signal used as CC6x / CTRAP / CCPOSx / T1xHR input. */
    IfxCcu6_TimerInputSignal_d = 3,  /**< \brief defines the input signal used as CC6x / CTRAP / CCPOSx / T1xHR input. */
    IfxCcu6_TimerInputSignal_e = 0,  /**< \brief defines the input signal used as T1xHR input. */
    IfxCcu6_TimerInputSignal_f = 1,  /**< \brief defines the input signal used as T1xHR input. */
    IfxCcu6_TimerInputSignal_g = 2,  /**< \brief defines the input signal used as T1xHR input. */
    IfxCcu6_TimerInputSignal_h = 3   /**< \brief defines the input signal used as T1xHR input. */
} IfxCcu6_TimerInputSignal;

/** \brief Timer (T12 / T13) run status\n
 * Definition in Ifx_CCU.TCTR0.B.T12R and Ifx_CCU.TCTR0.B.T13R
 */
typedef enum
{
    IfxCcu6_TimerRunStatus_stopped = 0,  /**< \brief Timer T1x is stopped. */
    IfxCcu6_TimerRunStatus_running = 1   /**< \brief Timer T1x is running. */
} IfxCcu6_TimerRunStatus;

/** \brief Defines how the trap flag TRPF can be cleared after the trap input condition is no longer valid (either by CTRAP = 1 or by TRPPEN = 0)\n
 * Definition in Ifx_CCU.TRPCTR.B.TRPM2
 */
typedef enum
{
    IfxCcu6_TrapMode_automatic = 0,  /**< \brief Bit TRPF is cleared by HW */
    IfxCcu6_TrapMode_manual    = 1   /**< \brief Bit TRPF stays 0, It has to be cleared by SW by writing
                                      * ISR.RTRPF = 1 */
} IfxCcu6_TrapMode;

/** \brief Defines the behavior of the selected outputs when leaving the trap state, after the trap condition has become inactive again\n
 * Definition in Ifx_CCU.TRPCTR.B.TRPMx (x = 0, 1)
 */
typedef enum
{
    IfxCcu6_TrapState_t12Sync   = 0, /**< \brief The trap state is left when a zero-match
                                      * of T12 (while counting up) is detected */
    IfxCcu6_TrapState_t13Sync   = 1, /**< \brief The trap state is left when a zeromatch
                                      * of T13 is detected */
    IfxCcu6_TrapState_immediate = 3  /**< \brief The trap state is left immediately without any synchronization to T12 or T13 */
} IfxCcu6_TrapState;

/** \} */

/** \addtogroup IfxLld_Ccu6_Std_Operative
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Clears the counters of the Timers (T12, T13 individually or together based on the selection)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param t12 Timer12 choice (enable / disable)
 * \param t13 Timer13 choice (enable / disable)
 * \return None
 */
IFX_INLINE void IfxCcu6_clearCounter(Ifx_CCU6 *ccu6, boolean t12, boolean t13);

/** \brief Clears all the three dead-time counter channels to zero.
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_clearDeadTimeCounters(Ifx_CCU6 *ccu6);

/** \brief Clears the selected interrupt flag
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param source Interrupt source selection
 * \return None
 */
IFX_INLINE void IfxCcu6_clearInterruptStatusFlag(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source);

/** \brief Clears the T12  One notification
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_clearT12OneNotification(Ifx_CCU6 *ccu6);

/** \brief Clears the T12  period notification
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_clearT12PeriodNotification(Ifx_CCU6 *ccu6);

/** \brief Clears the T13  compare notification
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_clearT13CompareNotification(Ifx_CCU6 *ccu6);

/** \brief Returns the Timer pointer
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return Timer pointer
 */
IFX_INLINE volatile uint32 *IfxCcu6_getT12TimerPointer(Ifx_CCU6 *ccu6);

/** \brief Returns the status of module enabled or disabled
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCcu6_isModuleEnabled(Ifx_CCU6 *ccu6);

/** \brief Returns the status of T12 one notification
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCcu6_isT12OneNotification(Ifx_CCU6 *ccu6);

/** \brief Returns the status of T12 period notification
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCcu6_isT12PeriodNotification(Ifx_CCU6 *ccu6);

/** \brief Returns the status of T13 compare notification
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCcu6_isT13CompareNotification(Ifx_CCU6 *ccu6);

/** \brief Sets the input event leading to a counting action of Timers (T12 / T13).
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \param mode Input event leading to a counting action of the timer (T12 / T13)
 * \return None
 */
IFX_INLINE void IfxCcu6_setCountingInputMode(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer, IfxCcu6_CountingInputMode mode);

/** \brief Sets the current hall pattern for the multichannel mode (writes into shadow register)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param pattern Current hall pattern
 * \return None
 */
IFX_INLINE void IfxCcu6_setCurrentHallPattern(Ifx_CCU6 *ccu6, uint8 pattern);

/** \brief Sets the delay between switching from the passive state to the active state of the selected outputs (dead time)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param value Value of the dead time to be induced
 * \return None
 */
IFX_INLINE void IfxCcu6_setDeadTimeValue(Ifx_CCU6 *ccu6, uint8 value);

/** \brief Sets the expected hall pattern for the multichannel mode (writes into shadow register)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param pattern Expected hall pattern
 * \return None
 */
IFX_INLINE void IfxCcu6_setExpectedHallPattern(Ifx_CCU6 *ccu6, uint8 pattern);

/** \brief Sets the event of signal T1xHR that can set the run bit T1xR by HW
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \param mode External trigger mode
 * \return None
 */
IFX_INLINE void IfxCcu6_setExternalRunMode(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer, IfxCcu6_ExternalTriggerMode mode);

/** \brief Sets source for the sampling of the Hall input pattern and the comparison to the current and the expected Hall pattern bit fields
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param mode Hall sensor input trigger event
 * \return None
 */
IFX_INLINE void IfxCcu6_setHallSensorTriggerMode(Ifx_CCU6 *ccu6, IfxCcu6_HallSensorTriggerMode mode);

/** \brief Sets the input clock for timers (T12 or T13)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \param frequency Input clock for timers (T12 or T13)
 * \return None
 */
IFX_INLINE void IfxCcu6_setInputClockFrequency(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer, IfxCcu6_TimerInputClock frequency);

/** \brief Sets the selected interrupt flag
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param source Interrupt source selection
 * \return None
 */
IFX_INLINE void IfxCcu6_setInterruptStatusFlag(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source);

/** \brief Sets the output pattern for the multichannel mode (writes into shadow register)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param pattern Output pattern for the multichannel mode.
 * \return None
 */
IFX_INLINE void IfxCcu6_setMultiChannelPwmPattern(Ifx_CCU6 *ccu6, uint8 pattern);

/** \brief Sets the trigger request source (next multi-channel event) for the shadow transfer MCM_ST from MCMPS to MCMP
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param mode Trigger request source (next multi-channel event) for the shadow transfer MCM_ST
 * \return None
 */
IFX_INLINE void IfxCcu6_setMultiChannelSwitchingMode(Ifx_CCU6 *ccu6, IfxCcu6_MultiChannelSwitchingSelect mode);

/** \brief Sets the synchronization mechanism of the shadow transfer event MCM_ST\n
 * if it has been requested before (flag R set by an event selected by SWSEL) and if MCMEN = 1
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param sync Synchronization mechanism of the shadow transfer event MCM_ST
 * \return None
 */
IFX_INLINE void IfxCcu6_setMultiChannelSwitchingSync(Ifx_CCU6 *ccu6, IfxCcu6_MultiChannelSwitchingSync sync);

/** \brief Sets the state of the corresponding compare channel, that is considered to be the passive state
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channelOut Capture compare output selection
 * \param state FALSE: passive state when CC6xST == 0\n
 * TRUE : passive state when CC6xST == 1
 * \return None
 */
IFX_INLINE void IfxCcu6_setOutputPassiveState(Ifx_CCU6 *ccu6, IfxCcu6_ChannelOut channelOut, boolean state);

/** \brief Enables / Disables the single shot mode of Timers (T12, T13 individually or together based on the selection)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param t12 Timer12 choice (enable / disable)
 * \param t13 Timer13 choice (enable / disable)
 * \return None
 */
IFX_INLINE void IfxCcu6_setSingleShotModeEnable(Ifx_CCU6 *ccu6, boolean t12, boolean t13);

/** \brief Sets the operating mode of the Timer12 capture/compare channels
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \param mode The operating mode for the T12 channels
 * \return None
 */
IFX_INLINE void IfxCcu6_setT12ChannelMode(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel, IfxCcu6_T12ChannelMode mode);

/**
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param mode Operating mode of Timer 12
 * \return None
 */
IFX_INLINE void IfxCcu6_setT12CountMode(Ifx_CCU6 *ccu6, IfxCcu6_T12CountMode mode);

/** \brief Sets the 16-bit counter value of Timer12
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param value Counter value
 * \return None
 */
IFX_INLINE void IfxCcu6_setT12CounterValue(Ifx_CCU6 *ccu6, uint16 value);

/** \brief Sets the period value that leads Timer12 counter value to a period-match
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param value Period value
 * \return None
 */
IFX_INLINE void IfxCcu6_setT12PeriodValue(Ifx_CCU6 *ccu6, uint16 value);

/** \brief Sets the 16-bit compare value of Timer13 (writes into shadow register)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param value Compare value
 * \return None
 */
IFX_INLINE void IfxCcu6_setT13CompareValue(Ifx_CCU6 *ccu6, uint16 value);

/** \brief Sets the 16-bit counter value of Timer13
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param value counter value
 * \return None
 */
IFX_INLINE void IfxCcu6_setT13CounterValue(Ifx_CCU6 *ccu6, uint16 value);

/** \brief Sets the period value that leads Timer13 counter value to a period-match
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param value period value
 * \return None
 */
IFX_INLINE void IfxCcu6_setT13PeriodValue(Ifx_CCU6 *ccu6, uint16 value);

/** \brief Sets the Timer13 trigger event direction
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param direction T13 trigger event direction
 * \return None
 */
IFX_INLINE void IfxCcu6_setT13TriggerEventDirection(Ifx_CCU6 *ccu6, IfxCcu6_T13TriggerDirection direction);

/** \brief Sets the trigger event to start Timer13 (automatic set of T13R for synchronization to Timer12 compare signals)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param mode The trigger event to start T13
 * \return None
 */
IFX_INLINE void IfxCcu6_setT13TriggerEventMode(Ifx_CCU6 *ccu6, IfxCcu6_T13TriggerEvent mode);

/** \brief Sets the mode of clearing the trap flag TRPF after the trap input condition is no longer valid
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param mode Trap mode selection
 * \return None
 */
IFX_INLINE void IfxCcu6_setTrapMode(Ifx_CCU6 *ccu6, IfxCcu6_TrapMode mode);

/** \brief Sets behaviour of the selected outputs when leaving the trap state after the trap condition has become inactive again.
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param state Trap state selection
 * \return None
 */
IFX_INLINE void IfxCcu6_setTrapState(Ifx_CCU6 *ccu6, IfxCcu6_TrapState state);

/** \brief starts the timers (T12, T13 individually or together based on the selection)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param t12 Timer12 start choice (enable / disable)
 * \param t13 Timer13 start choice (enable / disable)
 * \return None
 */
IFX_INLINE void IfxCcu6_startTimer(Ifx_CCU6 *ccu6, boolean t12, boolean t13);

/** \brief starts the timers (T12, T13 individually or together based on the selection)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param t12 Timer12 stop choice (enable / disable)
 * \param t13 Timer13 stop choice (enable / disable)
 * \return None
 */
IFX_INLINE void IfxCcu6_stopTimer(Ifx_CCU6 *ccu6, boolean t12, boolean t13);

/** \brief Updates the hall pattern (current hall, expected hall, moduleation output), in a single write
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param currentHall Current hall pattern
 * \param expectedHall Expected hall pattern
 * \param output Output pattern for the multichannel mode.
 * \return None
 */
IFX_INLINE void IfxCcu6_updateHallPattern(Ifx_CCU6 *ccu6, uint8 currentHall, uint8 expectedHall, uint8 output);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/**
 * \param ccu6 Specifies Ccu6 module
 * \param outputLine Output Line
 * \param selectedTrigger Trigger selection
 * \return None
 */
IFX_EXTERN void IfxCcu6_connectTrigger(Ifx_CCU6 *ccu6, IfxCcu6_TrigOut outputLine, IfxCcu6_TrigSel selectedTrigger);

/** \brief Routes the interrupt node pointer to the selected service requests
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param source Interrupt source selection
 * \param serviceRequest Selection of service request outputs
 * \return None
 */
IFX_EXTERN void IfxCcu6_routeInterruptNode(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source, IfxCcu6_ServiceRequest serviceRequest);

/** \brief Sets the passive state level of the PWM outputs of the module
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channelOut Capture compare output selection
 * \param state FALSE: The passive level is 0.
 * TRUE : The passive level is 1.
 * \return None
 */
IFX_EXTERN void IfxCcu6_setOutputPassiveLevel(Ifx_CCU6 *ccu6, IfxCcu6_ChannelOut channelOut, boolean state);

/** \brief Sets software-control (independent set and clear conditions) for the Timer12 channel state bits CC6xST (x=0,1,2)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \param state capture/compare state selection (set / clear / toggle)
 * \return None
 */
IFX_EXTERN void IfxCcu6_setT12CaptureCompareState(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel, IfxCcu6_CaptureCompareState state);

/** \brief Sets the 16-bit compare value of Timer12 (writes into shadow registers)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \param value Compare value
 * \return None
 */
IFX_EXTERN void IfxCcu6_setT12CompareValue(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel, uint16 value);

/** \brief Sets the frequency and clock input of the Timer 12
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param frequency Requested timer frequency in Hz
 * \param resolution Pointer to requested minimum timer resolution in ticks
 * \param countMode Counting mode of Timer12
 * \return Zero, if the function failed to fulfill requested frequency and resolution\n
 * Positive, if the function can find settings close to the requested frequency and resolution above the requested
 */
IFX_EXTERN float32 IfxCcu6_setT12Frequency(Ifx_CCU6 *ccu6, float32 frequency, Ifx_TimerValue resolution, IfxCcu6_T12CountMode countMode);

/** \brief selects the actual input signal for the timer inputs.
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param extInput External input signal for the Timer 12
 * \return None
 */
IFX_EXTERN void IfxCcu6_setT12InputSignal(Ifx_CCU6 *ccu6, IfxCcu6_T12hr_In *extInput);

/** \brief Sets software-control (independent set and clear conditions) for the Timer13 channel state bits CC63ST
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param state capture/compare state selection (set / clear / toggle)
 * \return None
 */
IFX_EXTERN void IfxCcu6_setT13CaptureCompareState(Ifx_CCU6 *ccu6, IfxCcu6_CaptureCompareState state);

/** \brief Sets the frequency and clock input of the Timer 13
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param frequency Requested timer frequency in Hz
 * \param resolution Pointer to requested minimum timer resolution in ticks
 * \return Zero, if the function failed to fulfill requested frequency and resolution\n
 * Positive, if the function can find settings close to the requested frequency and resolution above the requested
 */
IFX_EXTERN float32 IfxCcu6_setT13Frequency(Ifx_CCU6 *ccu6, float32 frequency, Ifx_TimerValue resolution);

/** \brief selects the actual input signal for the timer inputs.
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param extInput External input signal for the Timer 13
 * \return None
 */
IFX_EXTERN void IfxCcu6_setT13InputSignal(Ifx_CCU6 *ccu6, IfxCcu6_T13hr_In *extInput);

/** \} */

/** \addtogroup IfxLld_Ccu6_Std_Utility
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Indicate the status of the dead time generation for each compare channel (0, 1, 2) of timer T12
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \return Status TRUE or FALSE
 */
IFX_INLINE boolean IfxCcu6_getDeadTimeStatus(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel);

/** \brief Returns the value of the input Hall pattern of the Timer12 capture/compare channels CC6POS6x (x = 0, 1, 2)\n
 * that has been compared to the current and expected value
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \return Status\n
 * TRUE : The input CCPOSx has been sampled as 0\n
 * FALSE : The input CCPOSx has been sampled as 1
 */
IFX_INLINE boolean IfxCcu6_getHallPatternSampleState(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel);

/** \brief Gets the status of the selected interrupt flag
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param source Interrupt source selection
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCcu6_getInterruptStatusFlag(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source);

/** \brief indicates if the multi-channel mode functionality is available
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCcu6_getMultiChannelModeAvailabilityStatus(Ifx_CCU6 *ccu6);

/** \brief Gets the status of the shadow transfer request from MCMPS to MCMP
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return Status\n
 * FALSE: A shadow transfer MCM_ST is not requested\n
 * TRUE:  A shadow transfer MCM_ST is requested, but has not yet been executed
 */
IFX_INLINE boolean IfxCcu6_getMultiChannelPWMPatternShadowTransferStatus(Ifx_CCU6 *ccu6);

/** \brief Returns the Timer (T12 / T13) shadow transfer enable status
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return Status (TRUE: enable / FALSE: disable)
 */
IFX_INLINE boolean IfxCcu6_getShadowTransferStatus(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \brief Returns the state of the Timer12 capture/compare channels CC6xST (x = 0, 1, 2)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \return Status TRUE or FALSE
 */
IFX_INLINE boolean IfxCcu6_getT12CaptureCompareState(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel);

/** \brief Returns the current counting direction of Timer12
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return direction (up / down)
 */
IFX_INLINE IfxCcu6_T12CountDirection IfxCcu6_getT12CountDirection(Ifx_CCU6 *ccu6);

/** \brief Returns the state of the Timer13 capture/compare channel CC63ST
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return Status TRUE or FALSE
 */
IFX_INLINE boolean IfxCcu6_getT13CaptureCompareState(Ifx_CCU6 *ccu6);

/** \brief indicates the Timer blocks (T12 / T13) availability
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCcu6_getTimerAvailabilityStatus(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \brief Returns the Timer (T12 / T13) run status
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return Status (stopped / running)
 */
IFX_INLINE IfxCcu6_TimerRunStatus IfxCcu6_getTimerRunStatus(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \brief Returns the module's suspend state.
 * TRUE :if module is suspended.
 * FALSE:if module is not yet suspended.
 * \param ccu6 Pointer to CCU6 module registers
 * \return Suspend status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCcu6_isModuleSuspended(Ifx_CCU6 *ccu6);

/** \brief Configure the Module to Hard/Soft suspend mode.
 * Note: The api works only when the OCDS is enabled and in Supervisor Mode. When OCDS is disabled the OCS suspend control is ineffective.
 * \param ccu6 Pointer to CCU6 module registers
 * \param mode Module suspend mode
 * \return None
 */
IFX_INLINE void IfxCcu6_setSuspendMode(Ifx_CCU6 *ccu6, IfxCcu6_SuspendMode mode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the module index of the selected CCU6 module
 * \param ccu6 Pointer to CCU6 module registers
 * \return CCU6 module register address
 */
IFX_EXTERN Ifx_CCU6 *IfxCcu6_getAddress(IfxCcu6_Index ccu6);

/** \brief Returns the capture register value of the selected channel
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \return current value of the capture register of a selected channel
 */
IFX_EXTERN uint32 IfxCcu6_getCaptureRegisterValue(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel);

/** \brief Returns the capture shadow register value of the selected channel
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \return current value of the capture shadow register of a selected channel
 */
IFX_EXTERN uint32 IfxCcu6_getCaptureShadowRegisterValue(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel);

/** \brief Returns CCU6 index
 * \param ccu6 Specifies the pointer to the base of CCU6 registers
 * \return Returns index. returns -1 in case of unknown index
 */
IFX_EXTERN IfxCcu6_Index IfxCcu6_getIndex(Ifx_CCU6 *ccu6);

/** \brief Returns the service request register
 * \param ccu6 Specifies Ccu6 module
 * \param serviceRequest Selection of service request outputs
 * \return The service request register
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxCcu6_getSrcAddress(Ifx_CCU6 *ccu6, IfxCcu6_ServiceRequest serviceRequest);

/** \brief Returns the current value of the timer register
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return current value of the timer register
 */
IFX_EXTERN uint32 IfxCcu6_readTimer(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \} */

/** \addtogroup IfxLld_Ccu6_Std_Configuration
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disables the additional prescaler of 1/256 can be enabled for the prescaler of T12 or T13 to support higher clock frequencies
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return None
 */
IFX_INLINE void IfxCcu6_disableAdditionalPrescaler(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \brief Disables the dead time generation for each compare channel (0, 1, 2) of Timer12
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \return None
 */
IFX_INLINE void IfxCcu6_disableDeadTime(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel);

/** \brief Disables the delay of the source signal for the sampling of the Hall input pattern (selected by HSYNC)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_disableDelayBypass(Ifx_CCU6 *ccu6);

/** \brief Disables the selected interrupt
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param source Interrupt source selection
 * \return None
 */
IFX_INLINE void IfxCcu6_disableInterrupt(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source);

/** \brief Sets multi channel mode unavailable, A write access to MCMOUTS is ignored
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_disableMultiChannelMode(Ifx_CCU6 *ccu6);

/** \brief Disables shadow transfers of the timers (T12, T13 individually or together based on the selection)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param t12 Timer12 choice (enable / disable)
 * \param t13 Timer13 choice (enable / disable)
 * \return None
 */
IFX_INLINE void IfxCcu6_disableShadowTransfer(Ifx_CCU6 *ccu6, boolean t12, boolean t13);

/** \brief Disables the single shot-mode of Timers (T12 T13).
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return None
 */
IFX_INLINE void IfxCcu6_disableSingleShotMode(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \brief Disables the Inversion of T13 signal for the modulation of the CC6x and COUT6x (x = 0, 1, 2) signals\n
 * T13 output CC63_O is equal to CC63ST
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_disableT13InvertedModulation(Ifx_CCU6 *ccu6);

/** \brief Sets Timer12 block unavailable, A write access to T12PR is ignored
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return None
 */
IFX_INLINE void IfxCcu6_disableTimer(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \brief Disables the trap functionality for the corresponding output signals
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channelOut Capture compare output selection
 * \return None
 */
IFX_INLINE void IfxCcu6_disableTrap(Ifx_CCU6 *ccu6, IfxCcu6_ChannelOut channelOut);

/** \brief Disables the input (pin) function for the trap generation
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_disableTrapPin(Ifx_CCU6 *ccu6);

/** \brief Enables the additional prescaler of 1/256 can be enabled for the prescaler of T12 or T13 to support higher clock frequencies
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return None
 */
IFX_INLINE void IfxCcu6_enableAdditionalPrescaler(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \brief Sets the single shot-mode of Timers (T12, T13).
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param t12 Timer12 choice (enable / disable)
 * \param t13 Timer13 choice (enable / disable)
 * \return None
 */
IFX_INLINE void IfxCcu6_enableCountEvent(Ifx_CCU6 *ccu6, boolean t12, boolean t13);

/** \brief Enables the dead time generation for each compare channel (0, 1, 2) of Timer12
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channel Timer12 Capture compare channel number
 * \return None
 */
IFX_INLINE void IfxCcu6_enableDeadTime(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel);

/** \brief Enables the delay of the source signal for the sampling of the Hall input pattern (selected by HSYNC) by the Dead-Time Counter 0
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_enableDelayBypass(Ifx_CCU6 *ccu6);

/** \brief Sets HP_ST immediately to update bit fields EXPH and CURH by EXPHS and CURHS
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_enableHallPatternShadowTransfer(Ifx_CCU6 *ccu6);

/** \brief Enables the selected interrupt
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param source Interrupt source selection
 * \return None
 */
IFX_INLINE void IfxCcu6_enableInterrupt(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source);

/** \brief Sets multi channel mode available, A write access to MCMOUTS is executed
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_enableMultiChannelMode(Ifx_CCU6 *ccu6);

/** \brief Sets MCM_ST immediately to update bit field MCMP by the value of MCMPS.
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_enableMultiChannelPwmPatternShadowTransfer(Ifx_CCU6 *ccu6);

/** \brief Enables the shadow transfer T12_ST if flag MCMOUT.R is set or\n
 * becomes set while a T12 one match is detected while counting down
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_enableMultiChannelT12DowncountingShadowTransfer(Ifx_CCU6 *ccu6);

/** \brief Enables the shadow transfer T12_ST if flag MCMOUT.R is set or\n
 * becomes set while a T12 period match is detected while counting up
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_enableMultiChannelT12UpcountingShadowTransfer(Ifx_CCU6 *ccu6);

/** \brief Enables the shadow transfer T13_ST if flag MCMOUT.R is set or\n
 * becomes set while a T13 period match is detected
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_enableMultiChannelT13UpcountingShadowTransfer(Ifx_CCU6 *ccu6);

/** \brief Enables shadow transfers of the timers (T12, T13 individually or together based on the selection)
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param t12 Timer12 choice (enable / disable)
 * \param t13 Timer13 choice (enable / disable)
 * \return None
 */
IFX_INLINE void IfxCcu6_enableShadowTransfer(Ifx_CCU6 *ccu6, boolean t12, boolean t13);

/** \brief Enables the single shot-mode of Timers (T12 T13).
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return None
 */
IFX_INLINE void IfxCcu6_enableSingleShotMode(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \brief Enables the Inversion of T13 signal for the modulation of the CC6x and COUT6x (x = 0, 1, 2) signals\n
 * T13 output CC63_O is equal to CC63ST.
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_enableT13InvertedModulation(Ifx_CCU6 *ccu6);

/** \brief Sets Timer12 block available, A write access to T12PR is executed
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \return None
 */
IFX_INLINE void IfxCcu6_enableTimer(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer);

/** \brief Enables the trap functionality for the corresponding output signals
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param channelOut Capture compare output selection
 * \return None
 */
IFX_INLINE void IfxCcu6_enableTrap(Ifx_CCU6 *ccu6, IfxCcu6_ChannelOut channelOut);

/** \brief Enables the input (pin) function for the trap generation
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_INLINE void IfxCcu6_enableTrapPin(Ifx_CCU6 *ccu6);

/** \brief selects the actual input signal for the capture compare inputs.
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param input Input selection, ( CC6x capture input / CTRAP input / CCPOSx input  )
 * \param signal selection of actual input signal for the module inputs
 * \return None
 */
IFX_INLINE void IfxCcu6_setCaptureCompareInputSignal(Ifx_CCU6 *ccu6, IfxCcu6_CaptureCompareInput input, IfxCcu6_CaptureCompareInputSignal signal);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disables the modulation of the corresponding output signal by PWM pattern generated by the timers T12 and T13.
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \param channelOut Capture compare output selection
 * \return None
 */
IFX_EXTERN void IfxCcu6_disableModulationOutput(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer, IfxCcu6_ChannelOut channelOut);

/** \brief Disables the selected CCU6 kernel
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_EXTERN void IfxCcu6_disableModule(Ifx_CCU6 *ccu6);

/** \brief Enables the modulation of the corresponding output signal by PWM pattern generated by the timers T12 and T13.
 * \param ccu6 Pointer to the base of CCU6 registers
 * \param timer Timer selection, ( Timer12 / Timer13 )
 * \param channelOut Capture compare output selection
 * \return None
 */
IFX_EXTERN void IfxCcu6_enableModulationOutput(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer, IfxCcu6_ChannelOut channelOut);

/** \brief Enables the selected CCU6 kernel
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 */
IFX_EXTERN void IfxCcu6_enableModule(Ifx_CCU6 *ccu6);

/** \} */

/** \addtogroup IfxLld_Ccu6_Std_IO
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Initialises a CC60 input pin
 * \param cc60In CC60 capture input CC60IN
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCc60InPin(const IfxCcu6_Cc60in_In *cc60In, IfxPort_InputMode inputMode);

/** \brief Initialises a CC60 output pin
 * \param cc60Out CC60 compare output CC0
 * \param outputMode The pin output mode which should be configured
 * \param padDriver The pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCc60OutPin(const IfxCcu6_Cc60_Out *cc60Out, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Initialises a CC61 input pin
 * \param cc61In CC61 capture input CC61IN
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCc61InPin(const IfxCcu6_Cc61in_In *cc61In, IfxPort_InputMode inputMode);

/** \brief Initialises a CC61 output pin
 * \param cc61Out CC61 compare output CC1
 * \param outputMode The pin output mode which should be configured
 * \param padDriver The pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCc61OutPin(const IfxCcu6_Cc61_Out *cc61Out, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Initialises a CC62 input pin
 * \param cc62In CC62 capture input CC62IN
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCc62InPin(const IfxCcu6_Cc62in_In *cc62In, IfxPort_InputMode inputMode);

/** \brief Initialises a CC62 output pin
 * \param cc62Out CC62 compare output CC2
 * \param outputMode The pin output mode which should be configured
 * \param padDriver The pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCc62OutPin(const IfxCcu6_Cc62_Out *cc62Out, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Initialises a CCPOS0 input pin
 * \param ccpos0 CC60 capture input CCPOS0
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCcpos0Pin(const IfxCcu6_Ccpos0_In *ccpos0, IfxPort_InputMode inputMode);

/** \brief Initialises a CCPOS1 input pin
 * \param ccpos1 CC61 capture input CCPOS1
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCcpos1Pin(const IfxCcu6_Ccpos1_In *ccpos1, IfxPort_InputMode inputMode);

/** \brief Initialises a CCPOS0 input pin
 * \param ccpos2 CC62 capture input CCPOS2
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCcpos2Pin(const IfxCcu6_Ccpos2_In *ccpos2, IfxPort_InputMode inputMode);

/** \brief Initialises a COUT60 output pin
 * \param cout60 CC60 compare output COUT0
 * \param outputMode The pin output mode which should be configured
 * \param padDriver The pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCout60Pin(const IfxCcu6_Cout60_Out *cout60, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Initialises a COUT61 output pin
 * \param cout61 CC61 compare output COUT1
 * \param outputMode The pin output mode which should be configured
 * \param padDriver The pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCout61Pin(const IfxCcu6_Cout61_Out *cout61, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Initialises a COUT62 output pin
 * \param cout62 CC62 compare output COUT2
 * \param outputMode The pin output mode which should be configured
 * \param padDriver The pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCout62Pin(const IfxCcu6_Cout62_Out *cout62, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Initialises a COUT63 output pin
 * \param cout63 CC63 compare output COUT3
 * \param outputMode The pin output mode which should be configured
 * \param padDriver The pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCout63Pin(const IfxCcu6_Cout63_Out *cout63, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Initialises a CTRAP input pin
 * \param ctrap CTRAP input
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCtrapPin(const IfxCcu6_Ctrap_In *ctrap, IfxPort_InputMode inputMode);

/** \brief Initialises a T12HR input pin
 * \param t12hrIn Timer 12 HR input T12HR
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initT12hrPin(const IfxCcu6_T12hr_In *t12hrIn, IfxPort_InputMode inputMode);

/** \brief Initialises a T13HR input pin
 * \param t13hrIn Timer 12 HR input T12HR
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initT13hrPin(const IfxCcu6_T13hr_In *t13hrIn, IfxPort_InputMode inputMode);

/** \} */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Sets the sensitivity of the module to sleep signal
 * \param ccu6 pointer to CCU6 registers
 * \param mode mode selection (enable/disable)
 * \return None
 */
IFX_INLINE void IfxCcu6_setSleepMode(Ifx_CCU6 *ccu6, IfxCcu6_SleepMode mode);

/** \brief Provides functionality for both setting of CC60 pin direction as input and configuring pad driver
 * \param cc60In CC60 capture input CC60IN
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCc60InPinWithPadLevel(const IfxCcu6_Cc60in_In *cc60In, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Provides functionality for both setting of CC61 pin direction as input and configuring pad driver
 * \param cc61In CC61 capture input CC61IN
 * \param inputMode The pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxCcu6_initCc61InPinWithPadLevel(const IfxCcu6_Cc61in_In *cc61In, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Provides functionality for both setting of CC62 pin direction as input and configuring pad driver
 * \param cc62In CC62 capture input CC62IN
 * \return None
 */
IFX_INLINE void IfxCcu6_initCc62InPinWithPadLevel(const IfxCcu6_Cc62in_In *cc62In, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Provides functionality for both setting of CCPOS0 pin direction as input and configuring pad driver
 * \param ccpos0 CC60 capture input CCPOS0
 * \return None
 */
IFX_INLINE void IfxCcu6_initCcpos0PinWithPadLevel(const IfxCcu6_Ccpos0_In *ccpos0, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Provides functionality for both setting of CCPOS1 pin direction as input and configuring pad driver
 * \param ccpos1 CC61 capture input CCPOS1
 * \return None
 */
IFX_INLINE void IfxCcu6_initCcpos1PinWithPadLevel(const IfxCcu6_Ccpos1_In *ccpos1, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Provides functionality for both setting of CCPOS2 pin direction as input and configuring pad driver
 * \param ccpos2 CC62 capture input CCPOS2
 * \return None
 */
IFX_INLINE void IfxCcu6_initCcpos2PinWithPadLevel(const IfxCcu6_Ccpos2_In *ccpos2, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Provides functionality for both setting of CTRAP pin direction as input and configuring pad driver
 * \param ctrap CTRAP input
 * \return None
 */
IFX_INLINE void IfxCcu6_initCtrapPinWithPadLevel(const IfxCcu6_Ctrap_In *ctrap, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Provides functionality for both setting of T12HR pin direction as input and configuring pad driver
 * \param t12hrIn Timer 12 HR input T12HR
 * \return None
 */
IFX_INLINE void IfxCcu6_initT12hrPinWithPadLevel(const IfxCcu6_T12hr_In *t12hrIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Provides functionality for both setting of T13HR pin direction as input and configuring pad driver
 * \param t13hrIn Timer 13 HR input T13HR
 * \return None
 */
IFX_INLINE void IfxCcu6_initT13hrPinWithPadLevel(const IfxCcu6_T13hr_In *t13hrIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/**
 * \param ccu6 pointer to ccu6 registers
 * \return None
 */
IFX_EXTERN void IfxCcu6_resetModule(Ifx_CCU6 *ccu6);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxCcu6_clearCounter(Ifx_CCU6 *ccu6, boolean t12, boolean t13)
{
    Ifx_CCU6_TCTR4 tctr4;
    tctr4.U        = 0;
    tctr4.B.T12RES = t12;
    tctr4.B.T13RES = t13;
    ccu6->TCTR4.U  = tctr4.U;
}


IFX_INLINE void IfxCcu6_clearDeadTimeCounters(Ifx_CCU6 *ccu6)
{
    ccu6->TCTR4.B.DTRES = TRUE;
}


IFX_INLINE void IfxCcu6_clearInterruptStatusFlag(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source)
{
    uint32 mask = (1U << source);
    ccu6->ISR.U = mask;
}


IFX_INLINE void IfxCcu6_clearT12OneNotification(Ifx_CCU6 *ccu6)
{
    ccu6->ISR.B.RT12OM = 1;
}


IFX_INLINE void IfxCcu6_clearT12PeriodNotification(Ifx_CCU6 *ccu6)
{
    ccu6->ISR.B.RT12PM = 1;
}


IFX_INLINE void IfxCcu6_clearT13CompareNotification(Ifx_CCU6 *ccu6)
{
    ccu6->ISR.B.RT13CM = 1;
}


IFX_INLINE void IfxCcu6_disableAdditionalPrescaler(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer)
{
    uint32 shift = ((timer * 8) + 3);
    uint32 mask  = (1U << shift);
    ccu6->TCTR0.U = ccu6->TCTR0.U & ~(mask);
}


IFX_INLINE void IfxCcu6_disableDeadTime(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel)
{
    uint32 shift = (8 + channel);
    uint32 mask  = (1 << shift);
    ccu6->T12DTC.U = ccu6->T12DTC.U & ~(mask);
}


IFX_INLINE void IfxCcu6_disableDelayBypass(Ifx_CCU6 *ccu6)
{
    ccu6->T12MSEL.B.DBYP = FALSE;
}


IFX_INLINE void IfxCcu6_disableInterrupt(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source)
{
    uint32 mask = (1U << source);
    ccu6->IEN.U = ccu6->IEN.U & ~(mask);
}


IFX_INLINE void IfxCcu6_disableMultiChannelMode(Ifx_CCU6 *ccu6)
{
    ccu6->MODCTR.B.MCMEN = FALSE;
}


IFX_INLINE void IfxCcu6_disableShadowTransfer(Ifx_CCU6 *ccu6, boolean t12, boolean t13)
{
    Ifx_CCU6_TCTR4 tctr4;
    tctr4.U        = 0;
    tctr4.B.T12STD = t12;
    tctr4.B.T13STD = t13;
    ccu6->TCTR4.U  = tctr4.U;
}


IFX_INLINE void IfxCcu6_disableSingleShotMode(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer)
{
    uint32 mask = (1U << timer);
    ccu6->TCTR2.U = ccu6->TCTR2.U & ~(mask);
}


IFX_INLINE void IfxCcu6_disableT13InvertedModulation(Ifx_CCU6 *ccu6)
{
    ccu6->CMPSTAT.B.T13IM = FALSE;
}


IFX_INLINE void IfxCcu6_disableTimer(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer)
{
    uint32 mask = (1U << timer);
    ccu6->MCFG.U = ccu6->MCFG.U & ~(mask);
}


IFX_INLINE void IfxCcu6_disableTrap(Ifx_CCU6 *ccu6, IfxCcu6_ChannelOut channelOut)
{
    uint32 shift = (8 + channelOut);    // offset at location TRPCTR.8 for output CC60
    uint32 mask  = (1U << shift);
    ccu6->TRPCTR.U = ccu6->TRPCTR.U & ~(mask);
}


IFX_INLINE void IfxCcu6_disableTrapPin(Ifx_CCU6 *ccu6)
{
    ccu6->TRPCTR.B.TRPPEN = FALSE;
}


IFX_INLINE void IfxCcu6_enableAdditionalPrescaler(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer)
{
    uint32 shift = ((timer * 8) + 2);
    uint32 mask  = (1U << shift);
    ccu6->TCTR0.U = ccu6->TCTR0.U | (mask);
}


IFX_INLINE void IfxCcu6_enableCountEvent(Ifx_CCU6 *ccu6, boolean t12, boolean t13)
{
    Ifx_CCU6_TCTR4 tctr4;
    tctr4.U        = 0;
    tctr4.B.T12CNT = t12;
    tctr4.B.T13CNT = t13;
    ccu6->TCTR4.U  = tctr4.U;
}


IFX_INLINE void IfxCcu6_enableDeadTime(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel)
{
    uint32 shift = (8 + channel);
    uint32 mask  = (1 << shift);
    ccu6->T12DTC.U = ccu6->T12DTC.U | (mask);
}


IFX_INLINE void IfxCcu6_enableDelayBypass(Ifx_CCU6 *ccu6)
{
    ccu6->T12MSEL.B.DBYP = TRUE;
}


IFX_INLINE void IfxCcu6_enableHallPatternShadowTransfer(Ifx_CCU6 *ccu6)
{
    ccu6->MCMOUTS.B.STRHP = TRUE;
}


IFX_INLINE void IfxCcu6_enableInterrupt(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source)
{
    uint32 mask = (1U << source);
    ccu6->IEN.U = ccu6->IEN.U | (mask);
}


IFX_INLINE void IfxCcu6_enableMultiChannelMode(Ifx_CCU6 *ccu6)
{
    ccu6->MODCTR.B.MCMEN = TRUE;
}


IFX_INLINE void IfxCcu6_enableMultiChannelPwmPatternShadowTransfer(Ifx_CCU6 *ccu6)
{
    ccu6->MCMOUTS.B.STRMCM = TRUE;
}


IFX_INLINE void IfxCcu6_enableMultiChannelT12DowncountingShadowTransfer(Ifx_CCU6 *ccu6)
{
    ccu6->MCMCTR.B.STE12D = TRUE;
}


IFX_INLINE void IfxCcu6_enableMultiChannelT12UpcountingShadowTransfer(Ifx_CCU6 *ccu6)
{
    ccu6->MCMCTR.B.STE12U = TRUE;
}


IFX_INLINE void IfxCcu6_enableMultiChannelT13UpcountingShadowTransfer(Ifx_CCU6 *ccu6)
{
    ccu6->MCMCTR.B.STE13U = TRUE;
}


IFX_INLINE void IfxCcu6_enableShadowTransfer(Ifx_CCU6 *ccu6, boolean t12, boolean t13)
{
    Ifx_CCU6_TCTR4 tctr4;
    tctr4.U        = 0;
    tctr4.B.T12STR = t12;
    tctr4.B.T13STR = t13;
    ccu6->TCTR4.U  = tctr4.U;
}


IFX_INLINE void IfxCcu6_enableSingleShotMode(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer)
{
    uint32 mask = (1U << timer);
    ccu6->TCTR2.U = ccu6->TCTR2.U | (mask);
}


IFX_INLINE void IfxCcu6_enableT13InvertedModulation(Ifx_CCU6 *ccu6)
{
    ccu6->CMPSTAT.B.T13IM = TRUE;
}


IFX_INLINE void IfxCcu6_enableTimer(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer)
{
    uint32 mask = (1U << timer);
    ccu6->MCFG.U = ccu6->MCFG.U | (mask);
}


IFX_INLINE void IfxCcu6_enableTrap(Ifx_CCU6 *ccu6, IfxCcu6_ChannelOut channelOut)
{
    uint32 shift = (8 + channelOut);    // offset at location TRPCTR.8 for output CC60
    uint32 mask  = (1U << shift);
    ccu6->TRPCTR.U = ccu6->TRPCTR.U | (mask);
}


IFX_INLINE void IfxCcu6_enableTrapPin(Ifx_CCU6 *ccu6)
{
    ccu6->TRPCTR.B.TRPPEN = TRUE;
}


IFX_INLINE boolean IfxCcu6_getDeadTimeStatus(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel)
{
    uint32 shift = (12 + channel);
    uint32 mask  = 1 << shift;
    return (ccu6->T12DTC.U & mask) ? TRUE : FALSE;
}


IFX_INLINE boolean IfxCcu6_getHallPatternSampleState(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel)
{
    uint32 shift = (channel + 3);
    uint32 mask  = (1U << shift);
    return (ccu6->CMPSTAT.U & mask) ? TRUE : FALSE;
}


IFX_INLINE boolean IfxCcu6_getInterruptStatusFlag(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source)
{
    uint32 shift = (1U << source);
    return (ccu6->IS.U & shift) ? TRUE : FALSE;
}


IFX_INLINE boolean IfxCcu6_getMultiChannelModeAvailabilityStatus(Ifx_CCU6 *ccu6)
{
    return ccu6->MCFG.B.MCM != 0;
}


IFX_INLINE boolean IfxCcu6_getMultiChannelPWMPatternShadowTransferStatus(Ifx_CCU6 *ccu6)
{
    return ccu6->MCMOUT.B.R != 0;
}


IFX_INLINE boolean IfxCcu6_getShadowTransferStatus(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer)
{
    uint32 shift = ((timer * 8) + 5);
    uint32 mask  = (1U << shift);
    return (ccu6->TCTR0.U & mask) ? TRUE : FALSE;
}


IFX_INLINE boolean IfxCcu6_getT12CaptureCompareState(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel)
{
    uint32 mask = (1U << channel);
    return (ccu6->CMPSTAT.U & mask) ? TRUE : FALSE;
}


IFX_INLINE IfxCcu6_T12CountDirection IfxCcu6_getT12CountDirection(Ifx_CCU6 *ccu6)
{
    return (IfxCcu6_T12CountDirection)((ccu6->TCTR0.B.CDIR) ? TRUE : FALSE);
}


IFX_INLINE volatile uint32 *IfxCcu6_getT12TimerPointer(Ifx_CCU6 *ccu6)
{
    return (volatile uint32 *)&ccu6->T12PR;
}


IFX_INLINE boolean IfxCcu6_getT13CaptureCompareState(Ifx_CCU6 *ccu6)
{
    return ccu6->CMPSTAT.B.CC63ST != 0;
}


IFX_INLINE boolean IfxCcu6_getTimerAvailabilityStatus(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer)
{
    uint32 mask = (1U << timer);
    return (ccu6->MCFG.U & mask) ? TRUE : FALSE;
}


IFX_INLINE IfxCcu6_TimerRunStatus IfxCcu6_getTimerRunStatus(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer)
{
    uint32 shift = ((timer * 8) + 4);
    uint32 mask  = (1U << shift);
    return (IfxCcu6_TimerRunStatus)((ccu6->TCTR0.U & mask) ? TRUE : FALSE);
}


IFX_INLINE void IfxCcu6_initCc60InPin(const IfxCcu6_Cc60in_In *cc60In, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(cc60In->pin.port, cc60In->pin.pinIndex, inputMode);
    IfxCcu6_setCaptureCompareInputSignal(cc60In->module, IfxCcu6_CaptureCompareInput_cC60, (IfxCcu6_CaptureCompareInputSignal)cc60In->select);
}


IFX_INLINE void IfxCcu6_initCc60OutPin(const IfxCcu6_Cc60_Out *cc60Out, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(cc60Out->pin.port, cc60Out->pin.pinIndex, outputMode, cc60Out->select);
    IfxPort_setPinPadDriver(cc60Out->pin.port, cc60Out->pin.pinIndex, padDriver);
}


IFX_INLINE void IfxCcu6_initCc61InPin(const IfxCcu6_Cc61in_In *cc61In, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(cc61In->pin.port, cc61In->pin.pinIndex, inputMode);
    IfxCcu6_setCaptureCompareInputSignal(cc61In->module, IfxCcu6_CaptureCompareInput_cC61, (IfxCcu6_CaptureCompareInputSignal)cc61In->select);
}


IFX_INLINE void IfxCcu6_initCc61OutPin(const IfxCcu6_Cc61_Out *cc61Out, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(cc61Out->pin.port, cc61Out->pin.pinIndex, outputMode, cc61Out->select);
    IfxPort_setPinPadDriver(cc61Out->pin.port, cc61Out->pin.pinIndex, padDriver);
}


IFX_INLINE void IfxCcu6_initCc62InPin(const IfxCcu6_Cc62in_In *cc62In, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(cc62In->pin.port, cc62In->pin.pinIndex, inputMode);
    IfxCcu6_setCaptureCompareInputSignal(cc62In->module, IfxCcu6_CaptureCompareInput_cC62, (IfxCcu6_CaptureCompareInputSignal)cc62In->select);
}


IFX_INLINE void IfxCcu6_initCc62OutPin(const IfxCcu6_Cc62_Out *cc62Out, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(cc62Out->pin.port, cc62Out->pin.pinIndex, outputMode, cc62Out->select);
    IfxPort_setPinPadDriver(cc62Out->pin.port, cc62Out->pin.pinIndex, padDriver);
}


IFX_INLINE void IfxCcu6_initCcpos0Pin(const IfxCcu6_Ccpos0_In *ccpos0, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(ccpos0->pin.port, ccpos0->pin.pinIndex, inputMode);
    IfxCcu6_setCaptureCompareInputSignal(ccpos0->module, IfxCcu6_CaptureCompareInput_cCPOS0, (IfxCcu6_CaptureCompareInputSignal)ccpos0->select);
}


IFX_INLINE void IfxCcu6_initCcpos1Pin(const IfxCcu6_Ccpos1_In *ccpos1, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(ccpos1->pin.port, ccpos1->pin.pinIndex, inputMode);
    IfxCcu6_setCaptureCompareInputSignal(ccpos1->module, IfxCcu6_CaptureCompareInput_cCPOS1, (IfxCcu6_CaptureCompareInputSignal)ccpos1->select);
}


IFX_INLINE void IfxCcu6_initCcpos2Pin(const IfxCcu6_Ccpos2_In *ccpos2, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(ccpos2->pin.port, ccpos2->pin.pinIndex, inputMode);
    IfxCcu6_setCaptureCompareInputSignal(ccpos2->module, IfxCcu6_CaptureCompareInput_cCPOS2, (IfxCcu6_CaptureCompareInputSignal)ccpos2->select);
}


IFX_INLINE void IfxCcu6_initCout60Pin(const IfxCcu6_Cout60_Out *cout60, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(cout60->pin.port, cout60->pin.pinIndex, outputMode, cout60->select);
    IfxPort_setPinPadDriver(cout60->pin.port, cout60->pin.pinIndex, padDriver);
}


IFX_INLINE void IfxCcu6_initCout61Pin(const IfxCcu6_Cout61_Out *cout61, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(cout61->pin.port, cout61->pin.pinIndex, outputMode, cout61->select);
    IfxPort_setPinPadDriver(cout61->pin.port, cout61->pin.pinIndex, padDriver);
}


IFX_INLINE void IfxCcu6_initCout62Pin(const IfxCcu6_Cout62_Out *cout62, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(cout62->pin.port, cout62->pin.pinIndex, outputMode, cout62->select);
    IfxPort_setPinPadDriver(cout62->pin.port, cout62->pin.pinIndex, padDriver);
}


IFX_INLINE void IfxCcu6_initCout63Pin(const IfxCcu6_Cout63_Out *cout63, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(cout63->pin.port, cout63->pin.pinIndex, outputMode, cout63->select);
    IfxPort_setPinPadDriver(cout63->pin.port, cout63->pin.pinIndex, padDriver);
}


IFX_INLINE void IfxCcu6_initCtrapPin(const IfxCcu6_Ctrap_In *ctrap, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(ctrap->pin.port, ctrap->pin.pinIndex, inputMode);
    IfxCcu6_setCaptureCompareInputSignal(ctrap->module, IfxCcu6_CaptureCompareInput_cTRAP, (IfxCcu6_CaptureCompareInputSignal)ctrap->select);
}


IFX_INLINE void IfxCcu6_initT12hrPin(const IfxCcu6_T12hr_In *t12hrIn, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(t12hrIn->pin.port, t12hrIn->pin.pinIndex, inputMode);
    IfxCcu6_setT12InputSignal(t12hrIn->module, t12hrIn);
}


IFX_INLINE void IfxCcu6_initT13hrPin(const IfxCcu6_T13hr_In *t13hrIn, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(t13hrIn->pin.port, t13hrIn->pin.pinIndex, inputMode);
    IfxCcu6_setT13InputSignal(t13hrIn->module, t13hrIn);
}


IFX_INLINE boolean IfxCcu6_isModuleEnabled(Ifx_CCU6 *ccu6)
{
    return ccu6->CLC.B.DISS == 0;
}


IFX_INLINE boolean IfxCcu6_isModuleSuspended(Ifx_CCU6 *ccu6)
{
    Ifx_CCU6_OCS ocs;

    // read the status
    ocs.U = ccu6->OCS.U;

    // return the status
    return ocs.B.SUSSTA;
}


IFX_INLINE boolean IfxCcu6_isT12OneNotification(Ifx_CCU6 *ccu6)
{
    return ccu6->IS.B.T12OM != 0;
}


IFX_INLINE boolean IfxCcu6_isT12PeriodNotification(Ifx_CCU6 *ccu6)
{
    return ccu6->IS.B.T12PM != 0;
}


IFX_INLINE boolean IfxCcu6_isT13CompareNotification(Ifx_CCU6 *ccu6)
{
    return ccu6->IS.B.T13CM != 0;
}


IFX_INLINE void IfxCcu6_setCaptureCompareInputSignal(Ifx_CCU6 *ccu6, IfxCcu6_CaptureCompareInput input, IfxCcu6_CaptureCompareInputSignal signal)
{
    uint32 shift = (uint32)input;
    uint32 mask  = (0x3U << shift);
    ccu6->PISEL0.U = (ccu6->PISEL0.U & ~mask) | ((uint32)signal << shift);
}


IFX_INLINE void IfxCcu6_setCountingInputMode(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer, IfxCcu6_CountingInputMode mode)
{
    uint32 shift = ((timer * 2) + 2);
    uint32 mask  = (0x3U << shift);
    ccu6->PISEL2.U = (ccu6->PISEL2.U & ~mask) | ((uint32)mode << shift);
}


IFX_INLINE void IfxCcu6_setCurrentHallPattern(Ifx_CCU6 *ccu6, uint8 pattern)
{
    ccu6->MCMOUTS.B.CURHS = pattern;
}


IFX_INLINE void IfxCcu6_setDeadTimeValue(Ifx_CCU6 *ccu6, uint8 value)
{
    ccu6->T12DTC.B.DTM = value;
}


IFX_INLINE void IfxCcu6_setExpectedHallPattern(Ifx_CCU6 *ccu6, uint8 pattern)
{
    ccu6->MCMOUTS.B.EXPHS = pattern;
}


IFX_INLINE void IfxCcu6_setExternalRunMode(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer, IfxCcu6_ExternalTriggerMode mode)
{
    uint32 shift = ((timer * 2) + 8);
    uint32 mask  = (0x3U << shift);
    ccu6->TCTR2.U = (ccu6->TCTR2.U & ~mask) | ((uint32)mode << shift);
}


IFX_INLINE void IfxCcu6_setHallSensorTriggerMode(Ifx_CCU6 *ccu6, IfxCcu6_HallSensorTriggerMode mode)
{
    uint32 shift = 12;
    uint32 mask  = (0x7U << shift);
    ccu6->T12MSEL.U = (ccu6->T12MSEL.U & ~mask) | ((uint32)mode << shift);
}


IFX_INLINE void IfxCcu6_setInputClockFrequency(Ifx_CCU6 *ccu6, IfxCcu6_TimerId timer, IfxCcu6_TimerInputClock frequency)
{
    uint32 shift = (timer * 8);
    uint32 mask  = (0x7U << shift);
    ccu6->TCTR0.U = (ccu6->TCTR0.U & ~mask) | ((uint32)frequency << shift);
}


IFX_INLINE void IfxCcu6_setInterruptStatusFlag(Ifx_CCU6 *ccu6, IfxCcu6_InterruptSource source)
{
    uint32 mask = (1U << source);
    ccu6->ISS.U = ccu6->ISS.U | (mask);
}


IFX_INLINE void IfxCcu6_setMultiChannelPwmPattern(Ifx_CCU6 *ccu6, uint8 pattern)
{
    ccu6->MCMOUTS.B.MCMPS = pattern;
}


IFX_INLINE void IfxCcu6_setMultiChannelSwitchingMode(Ifx_CCU6 *ccu6, IfxCcu6_MultiChannelSwitchingSelect mode)
{
    ccu6->MCMCTR.B.SWSEL = mode;
}


IFX_INLINE void IfxCcu6_setMultiChannelSwitchingSync(Ifx_CCU6 *ccu6, IfxCcu6_MultiChannelSwitchingSync sync)
{
    ccu6->MCMCTR.B.SWSYN = sync;
}


IFX_INLINE void IfxCcu6_setOutputPassiveState(Ifx_CCU6 *ccu6, IfxCcu6_ChannelOut channelOut, boolean state)
{
    uint32 shift = (channelOut + 8); // offset at location CC60PS
    uint32 mask  = (1U << shift);
    ccu6->CMPSTAT.U = (ccu6->CMPSTAT.U & ~mask) | ((uint32)state << shift);
}


IFX_INLINE void IfxCcu6_setSingleShotModeEnable(Ifx_CCU6 *ccu6, boolean t12, boolean t13)
{
    Ifx_CCU6_TCTR2 tctr2;
    tctr2.U        = ccu6->TCTR2.U;
    tctr2.B.T12SSC = t12;
    tctr2.B.T13SSC = t13;
    ccu6->TCTR2.U  = tctr2.U;
}


IFX_INLINE void IfxCcu6_setSleepMode(Ifx_CCU6 *ccu6, IfxCcu6_SleepMode mode)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    ccu6->CLC.B.EDIS = mode;
    IfxScuWdt_setCpuEndinit(passwd);
}


IFX_INLINE void IfxCcu6_setSuspendMode(Ifx_CCU6 *ccu6, IfxCcu6_SuspendMode mode)
{
    Ifx_CCU6_OCS ocs;

    // remove protection and configure the suspend mode.
    ocs.B.SUS_P = 1;
    ocs.B.SUS   = mode;
    ccu6->OCS.U = ocs.U;
}


IFX_INLINE void IfxCcu6_setT12ChannelMode(Ifx_CCU6 *ccu6, IfxCcu6_T12Channel channel, IfxCcu6_T12ChannelMode mode)
{
    uint32 shift = (4 * channel);
    uint32 mask  = (0xFU << shift);
    ccu6->T12MSEL.U = (ccu6->T12MSEL.U & ~mask) | ((uint32)mode << shift);
}


IFX_INLINE void IfxCcu6_setT12CountMode(Ifx_CCU6 *ccu6, IfxCcu6_T12CountMode mode)
{
    ccu6->TCTR0.B.CTM = mode;
}


IFX_INLINE void IfxCcu6_setT12CounterValue(Ifx_CCU6 *ccu6, uint16 value)
{
    ccu6->T12.B.T12CV = value;
}


IFX_INLINE void IfxCcu6_setT12PeriodValue(Ifx_CCU6 *ccu6, uint16 value)
{
    ccu6->T12PR.B.T12PV = value;
}


IFX_INLINE void IfxCcu6_setT13CompareValue(Ifx_CCU6 *ccu6, uint16 value)
{
    ccu6->CC63SR.B.CCS = value;
}


IFX_INLINE void IfxCcu6_setT13CounterValue(Ifx_CCU6 *ccu6, uint16 value)
{
    ccu6->T13.B.T13CV = value;
}


IFX_INLINE void IfxCcu6_setT13PeriodValue(Ifx_CCU6 *ccu6, uint16 value)
{
    ccu6->T13PR.B.T13PV = value;
}


IFX_INLINE void IfxCcu6_setT13TriggerEventDirection(Ifx_CCU6 *ccu6, IfxCcu6_T13TriggerDirection direction)
{
    ccu6->TCTR2.B.T13TED = direction;
}


IFX_INLINE void IfxCcu6_setT13TriggerEventMode(Ifx_CCU6 *ccu6, IfxCcu6_T13TriggerEvent mode)
{
    ccu6->TCTR2.B.T13TEC = mode;
}


IFX_INLINE void IfxCcu6_setTrapMode(Ifx_CCU6 *ccu6, IfxCcu6_TrapMode mode)
{
    ccu6->TRPCTR.B.TRPM2 = mode;
}


IFX_INLINE void IfxCcu6_setTrapState(Ifx_CCU6 *ccu6, IfxCcu6_TrapState state)
{
    uint32 mask = 0x3U;
    ccu6->TRPCTR.U = (ccu6->TRPCTR.U & ~mask) | ((uint32)state);
}


IFX_INLINE void IfxCcu6_startTimer(Ifx_CCU6 *ccu6, boolean t12, boolean t13)
{
    Ifx_CCU6_TCTR4 tctr4;
    tctr4.U       = 0;
    tctr4.B.T12RS = t12;
    tctr4.B.T13RS = t13;
    ccu6->TCTR4.U = tctr4.U;
}


IFX_INLINE void IfxCcu6_stopTimer(Ifx_CCU6 *ccu6, boolean t12, boolean t13)
{
    Ifx_CCU6_TCTR4 tctr4;
    tctr4.U       = 0;
    tctr4.B.T12RR = t12;
    tctr4.B.T13RR = t13;
    ccu6->TCTR4.U = tctr4.U;
}


IFX_INLINE void IfxCcu6_updateHallPattern(Ifx_CCU6 *ccu6, uint8 currentHall, uint8 expectedHall, uint8 output)
{
    Ifx_CCU6_MCMOUTS mcmouts;
    mcmouts.U       = ccu6->MCMOUTS.U;

    mcmouts.B.CURHS = currentHall;
    mcmouts.B.EXPHS = expectedHall;
    mcmouts.B.MCMPS = output;

    ccu6->MCMOUTS.U = mcmouts.U;
}


IFX_INLINE void IfxCcu6_initCc60InPinWithPadLevel(const IfxCcu6_Cc60in_In *cc60In, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(cc60In->pin.port, cc60In->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(cc60In->pin.port, cc60In->pin.pinIndex, padDriver);
    IfxCcu6_setCaptureCompareInputSignal(cc60In->module, IfxCcu6_CaptureCompareInput_cC60, (IfxCcu6_CaptureCompareInputSignal)cc60In->select);
}


IFX_INLINE void IfxCcu6_initCc61InPinWithPadLevel(const IfxCcu6_Cc61in_In *cc61In, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(cc61In->pin.port, cc61In->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(cc61In->pin.port, cc61In->pin.pinIndex, padDriver);
    IfxCcu6_setCaptureCompareInputSignal(cc61In->module, IfxCcu6_CaptureCompareInput_cC61, (IfxCcu6_CaptureCompareInputSignal)cc61In->select);
}


IFX_INLINE void IfxCcu6_initCc62InPinWithPadLevel(const IfxCcu6_Cc62in_In *cc62In, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(cc62In->pin.port, cc62In->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(cc62In->pin.port, cc62In->pin.pinIndex, padDriver);
    IfxCcu6_setCaptureCompareInputSignal(cc62In->module, IfxCcu6_CaptureCompareInput_cC62, (IfxCcu6_CaptureCompareInputSignal)cc62In->select);
}


IFX_INLINE void IfxCcu6_initCcpos0PinWithPadLevel(const IfxCcu6_Ccpos0_In *ccpos0, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(ccpos0->pin.port, ccpos0->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(ccpos0->pin.port, ccpos0->pin.pinIndex, padDriver);
    IfxCcu6_setCaptureCompareInputSignal(ccpos0->module, IfxCcu6_CaptureCompareInput_cCPOS0, (IfxCcu6_CaptureCompareInputSignal)ccpos0->select);
}


IFX_INLINE void IfxCcu6_initCcpos1PinWithPadLevel(const IfxCcu6_Ccpos1_In *ccpos1, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(ccpos1->pin.port, ccpos1->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(ccpos1->pin.port, ccpos1->pin.pinIndex, padDriver);
    IfxCcu6_setCaptureCompareInputSignal(ccpos1->module, IfxCcu6_CaptureCompareInput_cCPOS1, (IfxCcu6_CaptureCompareInputSignal)ccpos1->select);
}


IFX_INLINE void IfxCcu6_initCcpos2PinWithPadLevel(const IfxCcu6_Ccpos2_In *ccpos2, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(ccpos2->pin.port, ccpos2->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(ccpos2->pin.port, ccpos2->pin.pinIndex, padDriver);
    IfxCcu6_setCaptureCompareInputSignal(ccpos2->module, IfxCcu6_CaptureCompareInput_cCPOS2, (IfxCcu6_CaptureCompareInputSignal)ccpos2->select);
}


IFX_INLINE void IfxCcu6_initCtrapPinWithPadLevel(const IfxCcu6_Ctrap_In *ctrap, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(ctrap->pin.port, ctrap->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(ctrap->pin.port, ctrap->pin.pinIndex, padDriver);
    IfxCcu6_setCaptureCompareInputSignal(ctrap->module, IfxCcu6_CaptureCompareInput_cTRAP, (IfxCcu6_CaptureCompareInputSignal)ctrap->select);
}


IFX_INLINE void IfxCcu6_initT12hrPinWithPadLevel(const IfxCcu6_T12hr_In *t12hrIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(t12hrIn->pin.port, t12hrIn->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(t12hrIn->pin.port, t12hrIn->pin.pinIndex, padDriver);
    IfxCcu6_setT12InputSignal(t12hrIn->module, t12hrIn);
}


IFX_INLINE void IfxCcu6_initT13hrPinWithPadLevel(const IfxCcu6_T13hr_In *t13hrIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(t13hrIn->pin.port, t13hrIn->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(t13hrIn->pin.port, t13hrIn->pin.pinIndex, padDriver);
    IfxCcu6_setT13InputSignal(t13hrIn->module, t13hrIn);
}


#endif /* IFXCCU6_H */

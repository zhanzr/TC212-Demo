/**
 * \file IfxSmu_cfg.h
 * \brief SMU on-chip implementation data
 * \ingroup IfxLld_Smu
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
 * \defgroup IfxLld_Smu SMU
 * \ingroup IfxLld
 * \defgroup IfxLld_Smu_Impl Implementation
 * \ingroup IfxLld_Smu
 * \defgroup IfxLld_Smu_Std Standard Driver
 * \ingroup IfxLld_Smu
 * \defgroup IfxLld_Smu_Impl_Enum_AlarmGroup Alarm Group Enumeration
 * \ingroup IfxLld_Smu_Impl
 * \defgroup IfxLld_Smu_Impl_Enum_ListAlarms List of Alarms Enumeration
 * \ingroup IfxLld_Smu_Impl
 */

#ifndef IFXSMU_CFG_H
#define IFXSMU_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Smu_Impl_Enum_AlarmGroup
 * \{ */
/** \brief Alarm group
 */
typedef enum
{
    IfxSmu_AlarmGroup_0 = 0,      /**< \brief Alarm group 0  */
    IfxSmu_AlarmGroup_1,          /**< \brief Alarm group 1  */
    IfxSmu_AlarmGroup_2,          /**< \brief Alarm group 2  */
    IfxSmu_AlarmGroup_3,          /**< \brief Alarm group 3  */
    IfxSmu_AlarmGroup_4,          /**< \brief Alarm group 4  */
    IfxSmu_AlarmGroup_5,          /**< \brief Alarm group 5  */
    IfxSmu_AlarmGroup_6           /**< \brief Alarm group 6  */
} IfxSmu_AlarmGroup;

/** \brief Recovery Timer
 */
typedef enum
{
    IfxSmu_RecoveryTimer_0 = 0,      /**< \brief Recovery Timer 0  */
    IfxSmu_RecoveryTimer_1           /**< \brief Recovery Timer 1  */
} IfxSmu_RecoveryTimer;

/** \} */

/** \addtogroup IfxLld_Smu_Impl_Enum_ListAlarms
 * \{ */
/** \brief SMU Alarm list
 */
typedef enum
{
    IfxSmu_Alarm_Cpu0LockstepComparatorError                      = (IfxSmu_AlarmGroup_0 << 8) | 0,   /**< \brief CPU0 Lockstep Comparator Error */
    IfxSmu_Alarm_Cpu0BusLevelMpuViolationAccessProtection         = (IfxSmu_AlarmGroup_0 << 8) | 1,   /**< \brief CPU0 Bus-level MPU violation / Access Protection violation */
    IfxSmu_Alarm_Cpu0PcacheTagUncorrectableError                  = (IfxSmu_AlarmGroup_0 << 8) | 3,   /**< \brief CPU0 PCACHE TAG uncorrectable error */
    IfxSmu_Alarm_Cpu0PcacheTagAddressError                        = (IfxSmu_AlarmGroup_0 << 8) | 4,   /**< \brief CPU0 PCACHE TAG address error */
    IfxSmu_Alarm_Cpu0PcacheTagAddressBufferOverflow               = (IfxSmu_AlarmGroup_0 << 8) | 5,   /**< \brief CPU0 PCACHE TAG Address Buffer overflow */
    IfxSmu_Alarm_Cpu0UnifiedPcachePsprSingleBitCorrection         = (IfxSmu_AlarmGroup_0 << 8) | 6,   /**< \brief CPU0 Unified PCACHE/PSPR single-bit correction */
    IfxSmu_Alarm_Cpu0UnifiedPcachePsprUncorrectableError          = (IfxSmu_AlarmGroup_0 << 8) | 7,   /**< \brief CPU0 Unified PCACHE/PSPR uncorrectable error */
    IfxSmu_Alarm_Cpu0UnifiedPcachePsprAddressError                = (IfxSmu_AlarmGroup_0 << 8) | 8,   /**< \brief CPU0 Unified PCACHE/PSPR Address error */
    IfxSmu_Alarm_Cpu0UnifiedPcachePsprAddressBufferOverflow       = (IfxSmu_AlarmGroup_0 << 8) | 9,   /**< \brief CPU0 Unified PCACHE/PSPR Address Buffer overflow */
    IfxSmu_Alarm_Cpu0UnifiedDcacheDsprSingleBitCorrection         = (IfxSmu_AlarmGroup_0 << 8) | 10,  /**< \brief CPU0 Unified DCACHE/DSPR single-bit correction */
    IfxSmu_Alarm_Cpu0UnifiedDcacheDsprUncorrectableError          = (IfxSmu_AlarmGroup_0 << 8) | 11,  /**< \brief CPU0 Unified DCACHE/DSPR uncorrectable error */
    IfxSmu_Alarm_Cpu0UnifiedDcacheDsprAddressError                = (IfxSmu_AlarmGroup_0 << 8) | 12,  /**< \brief CPU0 Unified DCACHE/DSPR address error */
    IfxSmu_Alarm_Cpu0UnifiedDcacheDsprAddressBufferOverflow       = (IfxSmu_AlarmGroup_0 << 8) | 13,  /**< \brief CPU0 Unified DCACHE/DSPR Address Buffer overflow */
    IfxSmu_Alarm_Cpu0CpuDataSriInterfaceEdcError                  = (IfxSmu_AlarmGroup_0 << 8) | 19,  /**< \brief CPU0 CPU Data SRI Interface (Load/Store) EDC Error */
    IfxSmu_Alarm_Cpu1LockstepComparatorError                      = (IfxSmu_AlarmGroup_1 << 8) | 0,   /**< \brief CPU1 Lockstep Comparator Error */
    IfxSmu_Alarm_Cpu1BusLevelMpuViolationAccessProtection         = (IfxSmu_AlarmGroup_1 << 8) | 1,   /**< \brief CPU1 Bus-level MPU violation  / Access Protection violation */
    IfxSmu_Alarm_Cpu1PcacheTagUncorrectableError                  = (IfxSmu_AlarmGroup_1 << 8) | 3,   /**< \brief CPU1 PCACHE TAG uncorrectable error */
    IfxSmu_Alarm_Cpu1PcacheTagAddressError                        = (IfxSmu_AlarmGroup_1 << 8) | 4,   /**< \brief CPU1 PCACHE TAG address error */
    IfxSmu_Alarm_Cpu1PcacheTagAddressBufferOverflow               = (IfxSmu_AlarmGroup_1 << 8) | 5,   /**< \brief CPU1 PCACHE TAG Address Buffer overflow */
    IfxSmu_Alarm_Cpu1UnifiedPcachePsprSingleBitCorrection         = (IfxSmu_AlarmGroup_1 << 8) | 6,   /**< \brief CPU1 Unified PCACHE/PSPR single-bit correction */
    IfxSmu_Alarm_Cpu1UnifiedPcachePsprUncorrectableError          = (IfxSmu_AlarmGroup_1 << 8) | 7,   /**< \brief CPU1 Unified PCACHE/PSPR uncorrectable error */
    IfxSmu_Alarm_Cpu1UnifiedPcachePsprAddressError                = (IfxSmu_AlarmGroup_1 << 8) | 8,   /**< \brief CPU1 Unified PCACHE/PSPR Address error */
    IfxSmu_Alarm_Cpu1UnifiedPcachePsprAddressBufferOverflow       = (IfxSmu_AlarmGroup_1 << 8) | 9,   /**< \brief CPU1 Unified PCACHE/PSPR Address Buffer overflow */
    IfxSmu_Alarm_Cpu1UnifiedDcacheDsprSingleBitCorrection         = (IfxSmu_AlarmGroup_1 << 8) | 10,  /**< \brief CPU1 Unified DCACHE/DSPR single-bit correction */
    IfxSmu_Alarm_Cpu1UnifiedDcacheDsprUncorrectableError          = (IfxSmu_AlarmGroup_1 << 8) | 11,  /**< \brief CPU1 Unified DCACHE/DSPR uncorrectable error */
    IfxSmu_Alarm_Cpu1UnifiedDcacheDsprAddressError                = (IfxSmu_AlarmGroup_1 << 8) | 12,  /**< \brief CPU1 Unified DCACHE/DSPR address error */
    IfxSmu_Alarm_Cpu1UnifiedDcacheDsprAddressBufferOverflow       = (IfxSmu_AlarmGroup_1 << 8) | 13,  /**< \brief CPU1 Unified DCACHE/DSPR Address Buffer overflow */
    IfxSmu_Alarm_Cpu1DcacheTagSramCorrection                      = (IfxSmu_AlarmGroup_1 << 8) | 14,  /**< \brief CPU1 DCACHE TAG SRAM correction */
    IfxSmu_Alarm_Cpu1DcacheTagSramUncorrectableError              = (IfxSmu_AlarmGroup_1 << 8) | 15,  /**< \brief CPU1 DCACHE TAG SRAM uncorrectable error */
    IfxSmu_Alarm_Cpu1DcacheTagSramAddressError                    = (IfxSmu_AlarmGroup_1 << 8) | 16,  /**< \brief CPU1 DCACHE TAG SRAM address error */
    IfxSmu_Alarm_Cpu1DcacheTagSramAddressBufferOverflow           = (IfxSmu_AlarmGroup_1 << 8) | 17,  /**< \brief CPU1 DCACHE TAG SRAM address buffer overflow */
    IfxSmu_Alarm_Cpu1CpuInstructionFetchSRIInterfaceEdcError      = (IfxSmu_AlarmGroup_1 << 8) | 18,  /**< \brief CPU1 CPU Instruction Fetch SRI Interface EDC Error */
    IfxSmu_Alarm_Cpu1CpuDataSriInterfaceEdcError                  = (IfxSmu_AlarmGroup_1 << 8) | 19,  /**< \brief CPU1 CPU Data SRI Interface (Load/Store) EDC Error */
    IfxSmu_Alarm_PmuSingleBitCorrection                           = (IfxSmu_AlarmGroup_2 << 8) | 2,   /**< \brief PMU single bit correction */
    IfxSmu_Alarm_PmuDoubleBitCorrection                           = (IfxSmu_AlarmGroup_2 << 8) | 3,   /**< \brief PMU double bit correction */
    IfxSmu_Alarm_PmuNonCorrectableMultipleBit                     = (IfxSmu_AlarmGroup_2 << 8) | 4,   /**< \brief PMU non correctable multiple bit */
    IfxSmu_Alarm_PmuAddressingError                               = (IfxSmu_AlarmGroup_2 << 8) | 5,   /**< \brief PMU Addressing error */
    IfxSmu_Alarm_PmuAddressBufferFull                             = (IfxSmu_AlarmGroup_2 << 8) | 6,   /**< \brief PMU address buffer full */
    IfxSmu_Alarm_PmuPflashEccError                                = (IfxSmu_AlarmGroup_2 << 8) | 7,   /**< \brief PMU PFLASH ECC error */
    IfxSmu_Alarm_PmuEdcComparatorError                            = (IfxSmu_AlarmGroup_2 << 8) | 8,   /**< \brief PMU EDC comparator error */
    IfxSmu_Alarm_LmuEccError                                      = (IfxSmu_AlarmGroup_2 << 8) | 15,  /**< \brief LMU ECC Error */
    IfxSmu_Alarm_LmuRegisterAccessProtectionErrorBusLevelMpuError = (IfxSmu_AlarmGroup_2 << 8) | 16,  /**< \brief LMU Register Access Protection error / Bus-level MPU error */
    IfxSmu_Alarm_LmuSramSingleBitCorrection                       = (IfxSmu_AlarmGroup_2 << 8) | 17,  /**< \brief LMU SRAM single-bit correction */
    IfxSmu_Alarm_LmuSramUncorrectableError                        = (IfxSmu_AlarmGroup_2 << 8) | 18,  /**< \brief LMU SRAM uncorrectable error */
    IfxSmu_Alarm_LmuSramAddressError                              = (IfxSmu_AlarmGroup_2 << 8) | 19,  /**< \brief LMU SRAM Address error */
    IfxSmu_Alarm_LmuSramAddressBufferOverflow                     = (IfxSmu_AlarmGroup_2 << 8) | 20,  /**< \brief LMU SRAM Address buffer overflow */
    IfxSmu_Alarm_SriEdcAddressPhaseError                          = (IfxSmu_AlarmGroup_2 << 8) | 21,  /**< \brief SRI EDC Address phase error */
    IfxSmu_Alarm_SriEdcWritePhaseError                            = (IfxSmu_AlarmGroup_2 << 8) | 22,  /**< \brief SRI EDC Write phase error */
    IfxSmu_Alarm_SriEdcReadPhaseError                             = (IfxSmu_AlarmGroup_2 << 8) | 23,  /**< \brief SRI EDC Read phase error */
    IfxSmu_Alarm_IrEdcError                                       = (IfxSmu_AlarmGroup_2 << 8) | 25,  /**< \brief IR EDC error */
    IfxSmu_Alarm_IomPinMismatchIndication                         = (IfxSmu_AlarmGroup_2 << 8) | 26,  /**< \brief IOM Pin Mismatch Indication */
    IfxSmu_Alarm_SmuTimer0TimeOut                                 = (IfxSmu_AlarmGroup_2 << 8) | 29,  /**< \brief SMU Timer 0 time-out */
    IfxSmu_Alarm_SmuTimer1TimeOut                                 = (IfxSmu_AlarmGroup_2 << 8) | 30,  /**< \brief SMU Timer 1 time-out */
    IfxSmu_Alarm_SmuErrorPinFaultStateActivation                  = (IfxSmu_AlarmGroup_2 << 8) | 31,  /**< \brief SMU ErrorPin Fault State Activation */
    IfxSmu_Alarm_ScuCguInputClockOutOfRange                       = (IfxSmu_AlarmGroup_3 << 8) | 0,   /**< \brief SCU/CGU input clock out of range */
    IfxSmu_Alarm_ScuCguSystemPllVcoLossOfLockEvent                = (IfxSmu_AlarmGroup_3 << 8) | 1,   /**< \brief SCU/CGU System PLL VCO Loss-of-Lock Event */
    IfxSmu_Alarm_ScuCguPll_ErayVcoLossOfLockEvent                 = (IfxSmu_AlarmGroup_3 << 8) | 2,   /**< \brief SCU/CGU PLL_ERAY VCO Loss-of-Lock Event */
    IfxSmu_Alarm_ScuCguStmClockOutOfRangeFrequency                = (IfxSmu_AlarmGroup_3 << 8) | 3,   /**< \brief SCU/CGU STM clock out of range frequency */
    IfxSmu_Alarm_ScuCguPll_ErayOutOfRangeFrequency                = (IfxSmu_AlarmGroup_3 << 8) | 4,   /**< \brief SCU/CGU PLL_ERAY out of range frequency */
    IfxSmu_Alarm_ScuCguSystemPLLOutOfRangeFrequency               = (IfxSmu_AlarmGroup_3 << 8) | 5,   /**< \brief SCU/CGU System PLL out of range frequency */
    IfxSmu_Alarm_ScuCguSriClockOutOfRangeFrequency                = (IfxSmu_AlarmGroup_3 << 8) | 6,   /**< \brief SCU/CGU SRI clock out of range frequency */
    IfxSmu_Alarm_ScuCguSpbClockOutOfRangeFrequency                = (IfxSmu_AlarmGroup_3 << 8) | 7,   /**< \brief SCU/CGU SPB clock out of range frequency */
    IfxSmu_Alarm_ScuCguGtmClockOutOfRangeFrequency                = (IfxSmu_AlarmGroup_3 << 8) | 8,   /**< \brief SCU/CGU GTM clock out of range frequency */
    IfxSmu_Alarm_ScuCguAdcClockOutOfRangeFrequency                = (IfxSmu_AlarmGroup_3 << 8) | 9,   /**< \brief SCU/CGU ADC clock out of range frequency */
    IfxSmu_Alarm_ScuEvrEvr1Dot3VUnderVoltage                      = (IfxSmu_AlarmGroup_3 << 8) | 11,  /**< \brief SCU/EVR EVR 1.3V under voltage */
    IfxSmu_Alarm_ScuEvrEvr1Dot3VOverVoltage                       = (IfxSmu_AlarmGroup_3 << 8) | 12,  /**< \brief SCU/EVR EVR 1.3V over voltage */
    IfxSmu_Alarm_ScuEvrEvr3Dot3VUnderVoltage                      = (IfxSmu_AlarmGroup_3 << 8) | 13,  /**< \brief SCU/EVR EVR 3.3V under voltage */
    IfxSmu_Alarm_ScuEvrEvr3Dot3VOverVoltage                       = (IfxSmu_AlarmGroup_3 << 8) | 14,  /**< \brief SCU/EVR EVR 3.3V over voltage */
    IfxSmu_Alarm_ScuEvrExternalSupplyUnderVoltage                 = (IfxSmu_AlarmGroup_3 << 8) | 15,  /**< \brief SCU/EVR External Supply under voltage */
    IfxSmu_Alarm_ScuEVRExternalSupplyOverVoltage                  = (IfxSmu_AlarmGroup_3 << 8) | 16,  /**< \brief SCU/EVR External Supply over voltage */
    IfxSmu_Alarm_ScuWdtsWatchdogTimeOut                           = (IfxSmu_AlarmGroup_3 << 8) | 17,  /**< \brief SCU/WDTS watchdog time-out */
    IfxSmu_Alarm_ScuWdtCpu0WatchdogTimeOut                        = (IfxSmu_AlarmGroup_3 << 8) | 18,  /**< \brief SCU/WDTCPU0 watchdog time-out */
    IfxSmu_Alarm_ScuWdtCpu1WatchdogTimeOut                        = (IfxSmu_AlarmGroup_3 << 8) | 19,  /**< \brief SCU/WDTCPU1 watchdog time-out */
    IfxSmu_Alarm_ScuWdtCpu2WatchdogTimeOut                        = (IfxSmu_AlarmGroup_3 << 8) | 20,  /**< \brief SCU/WDTCPU2 watchdog time-out */
    IfxSmu_Alarm_ScuWdtWatchdogTimeOut                            = (IfxSmu_AlarmGroup_3 << 8) | 21,  /**< \brief SCU/WDT watchdog time-out */
    IfxSmu_Alarm_SpbAccessEnableError                             = (IfxSmu_AlarmGroup_3 << 8) | 22,  /**< \brief SPB Access Enable Error */
    IfxSmu_Alarm_ScuDtsTemperatureUnderflow                       = (IfxSmu_AlarmGroup_3 << 8) | 25,  /**< \brief SCU/DTS Temperature underflow */
    IfxSmu_Alarm_ScuDtsTemperatureOverflow                        = (IfxSmu_AlarmGroup_3 << 8) | 26,  /**< \brief SCU/DTS Temperature overflow */
    IfxSmu_Alarm_ScuExternalEmergencyStopSignal                   = (IfxSmu_AlarmGroup_3 << 8) | 29,  /**< \brief SCU External Emergency Stop Signal */
    IfxSmu_Alarm_SriBusError                                      = (IfxSmu_AlarmGroup_3 << 8) | 30,  /**< \brief SRI Bus error */
    IfxSmu_Alarm_SpbBusError                                      = (IfxSmu_AlarmGroup_3 << 8) | 31,  /**< \brief SPB Bus error */
    IfxSmu_Alarm_GtmSramSingleBitCorrection                       = (IfxSmu_AlarmGroup_4 << 8) | 0,   /**< \brief GTM SRAM single-bit correction */
    IfxSmu_Alarm_GtmSramUncorrectableError                        = (IfxSmu_AlarmGroup_4 << 8) | 1,   /**< \brief GTM SRAM uncorrectable error */
    IfxSmu_Alarm_GtmSramAddressError                              = (IfxSmu_AlarmGroup_4 << 8) | 2,   /**< \brief GTM SRAM address error */
    IfxSmu_Alarm_GtmSramAddressBufferOverflow                     = (IfxSmu_AlarmGroup_4 << 8) | 3,   /**< \brief GTM SRAM Address Buffer overflow */
    IfxSmu_Alarm_CanSramSingleBitCorrection                       = (IfxSmu_AlarmGroup_4 << 8) | 4,   /**< \brief CAN SRAM single-bit correction */
    IfxSmu_Alarm_CanSramUncorrectableError                        = (IfxSmu_AlarmGroup_4 << 8) | 5,   /**< \brief CAN SRAM uncorrectable error */
    IfxSmu_Alarm_CanSramAddressError                              = (IfxSmu_AlarmGroup_4 << 8) | 6,   /**< \brief CAN SRAM address error */
    IfxSmu_Alarm_CanSramAddressBufferOverflow                     = (IfxSmu_AlarmGroup_4 << 8) | 7,   /**< \brief CAN SRAM Address Buffer overflow */
    IfxSmu_Alarm_FlexraySramSingleBitCorrection                   = (IfxSmu_AlarmGroup_4 << 8) | 8,   /**< \brief FLEXRAY SRAM single-bit correction */
    IfxSmu_Alarm_FlexraySramUncorrectableError                    = (IfxSmu_AlarmGroup_4 << 8) | 9,   /**< \brief FLEXRAY SRAM uncorrectable error */
    IfxSmu_Alarm_FlexraySramAddressError                          = (IfxSmu_AlarmGroup_4 << 8) | 10,  /**< \brief FLEXRAY SRAM address error */
    IfxSmu_Alarm_FlexraySramAddressBufferOverflow                 = (IfxSmu_AlarmGroup_4 << 8) | 11,  /**< \brief FLEXRAY SRAM Address Buffer overflow */
    IfxSmu_Alarm_EmemSramSingleBitCorrection                      = (IfxSmu_AlarmGroup_4 << 8) | 12,  /**< \brief EMEM SRAM single-bit correction */
    IfxSmu_Alarm_EmemSramUncorrectableError                       = (IfxSmu_AlarmGroup_4 << 8) | 13,  /**< \brief EMEM SRAM uncorrectable error */
    IfxSmu_Alarm_EmemSramAddressBufferOverflow                    = (IfxSmu_AlarmGroup_4 << 8) | 15,  /**< \brief EMEM SRAM Address Buffer overflow */
    IfxSmu_Alarm_SramsSramSingleBitCorrection                     = (IfxSmu_AlarmGroup_4 << 8) | 16,  /**< \brief SRAMs SRAM single-bit correction */
    IfxSmu_Alarm_SramsSramUncorrectableError                      = (IfxSmu_AlarmGroup_4 << 8) | 17,  /**< \brief SRAMs SRAM uncorrectable error */
    IfxSmu_Alarm_SramsSramAddressError                            = (IfxSmu_AlarmGroup_4 << 8) | 18,  /**< \brief SRAMs SRAM address error */
    IfxSmu_Alarm_SramsSramAddressBufferOverflow                   = (IfxSmu_AlarmGroup_4 << 8) | 19,  /**< \brief SRAMs SRAM Address Buffer overflow */
    IfxSmu_Alarm_SoftwareAlarm0                                   = (IfxSmu_AlarmGroup_5 << 8) | 0,   /**< \brief Software Alarm 0 */
    IfxSmu_Alarm_SoftwareAlarm1                                   = (IfxSmu_AlarmGroup_5 << 8) | 1,   /**< \brief Software Alarm 1 */
    IfxSmu_Alarm_SoftwareAlarm2                                   = (IfxSmu_AlarmGroup_5 << 8) | 2,   /**< \brief Software Alarm 2 */
    IfxSmu_Alarm_SoftwareAlarm3                                   = (IfxSmu_AlarmGroup_5 << 8) | 3,   /**< \brief Software Alarm 3 */
    IfxSmu_Alarm_SoftwareAlarm4                                   = (IfxSmu_AlarmGroup_5 << 8) | 4,   /**< \brief Software Alarm 4 */
    IfxSmu_Alarm_SoftwareAlarm5                                   = (IfxSmu_AlarmGroup_5 << 8) | 5,   /**< \brief Software Alarm 5 */
    IfxSmu_Alarm_SoftwareAlarm6                                   = (IfxSmu_AlarmGroup_5 << 8) | 6,   /**< \brief Software Alarm 6 */
    IfxSmu_Alarm_SoftwareAlarm7                                   = (IfxSmu_AlarmGroup_5 << 8) | 7,   /**< \brief Software Alarm 7 */
    IfxSmu_Alarm_SoftwareAlarm8                                   = (IfxSmu_AlarmGroup_5 << 8) | 8,   /**< \brief Software Alarm 8 */
    IfxSmu_Alarm_SoftwareAlarm9                                   = (IfxSmu_AlarmGroup_5 << 8) | 9,   /**< \brief Software Alarm 9 */
    IfxSmu_Alarm_SoftwareAlarm10                                  = (IfxSmu_AlarmGroup_5 << 8) | 10,  /**< \brief Software Alarm 10 */
    IfxSmu_Alarm_SoftwareAlarm11                                  = (IfxSmu_AlarmGroup_5 << 8) | 11,  /**< \brief Software Alarm 11 */
    IfxSmu_Alarm_SoftwareAlarm12                                  = (IfxSmu_AlarmGroup_5 << 8) | 12,  /**< \brief Software Alarm 12 */
    IfxSmu_Alarm_SoftwareAlarm13                                  = (IfxSmu_AlarmGroup_5 << 8) | 13,  /**< \brief Software Alarm 13 */
    IfxSmu_Alarm_SoftwareAlarm14                                  = (IfxSmu_AlarmGroup_5 << 8) | 14,  /**< \brief Software Alarm 14 */
    IfxSmu_Alarm_SoftwareAlarm15                                  = (IfxSmu_AlarmGroup_5 << 8) | 15,  /**< \brief Software Alarm 15 */
    IfxSmu_Alarm_Cpu2BusLevelMpuViolationAccessProtection         = (IfxSmu_AlarmGroup_6 << 8) | 1,   /**< \brief CPU2 Bus-level MPU violation  / Access Protection violation */
    IfxSmu_Alarm_Cpu2PcacheTagUncorrectableError                  = (IfxSmu_AlarmGroup_6 << 8) | 3,   /**< \brief CPU2 PCACHE TAG uncorrectable error */
    IfxSmu_Alarm_Cpu2PcacheTagAddressError                        = (IfxSmu_AlarmGroup_6 << 8) | 4,   /**< \brief CPU2 PCACHE TAG address error */
    IfxSmu_Alarm_Cpu2PcacheTagAddressBufferOverflow               = (IfxSmu_AlarmGroup_6 << 8) | 5,   /**< \brief CPU2 PCACHE TAG Address Buffer overflow */
    IfxSmu_Alarm_Cpu2UnifiedPcachePsprSingleBitCorrection         = (IfxSmu_AlarmGroup_6 << 8) | 6,   /**< \brief CPU2 Unified PCACHE/PSPR single-bit correction */
    IfxSmu_Alarm_Cpu2UnifiedPcachePsprUncorrectableError          = (IfxSmu_AlarmGroup_6 << 8) | 7,   /**< \brief CPU2 Unified PCACHE/PSPR uncorrectable error */
    IfxSmu_Alarm_Cpu2UnifiedPcachePsprAddressError                = (IfxSmu_AlarmGroup_6 << 8) | 8,   /**< \brief CPU2 Unified PCACHE/PSPR Address error */
    IfxSmu_Alarm_Cpu2UnifiedPcachePsprAddressBufferOverflow       = (IfxSmu_AlarmGroup_6 << 8) | 9,   /**< \brief CPU2 Unified PCACHE/PSPR Address Buffer overflow */
    IfxSmu_Alarm_Cpu2UnifiedDcacheDsprSingleBitCorrection         = (IfxSmu_AlarmGroup_6 << 8) | 10,  /**< \brief CPU2 Unified DCACHE/DSPR single-bit correction */
    IfxSmu_Alarm_Cpu2UnifiedDcacheDsprUncorrectableError          = (IfxSmu_AlarmGroup_6 << 8) | 11,  /**< \brief CPU2 Unified DCACHE/DSPR uncorrectable error */
    IfxSmu_Alarm_Cpu2UnifiedDcacheDsprAddressError                = (IfxSmu_AlarmGroup_6 << 8) | 12,  /**< \brief CPU2 Unified DCACHE/DSPR address error */
    IfxSmu_Alarm_Cpu2UnifiedDcacheDsprAddressBufferOverflow       = (IfxSmu_AlarmGroup_6 << 8) | 13,  /**< \brief CPU2 Unified DCACHE/DSPR Address Buffer overflow */
    IfxSmu_Alarm_Cpu2DcacheTagSramSingleBitCorrection             = (IfxSmu_AlarmGroup_6 << 8) | 14,  /**< \brief CPU2 DCACHE TAG SRAM single-bit correction */
    IfxSmu_Alarm_Cpu2DcacheTagSramUncorrectableError              = (IfxSmu_AlarmGroup_6 << 8) | 15,  /**< \brief CPU2 DCACHE TAG SRAM uncorrectable error */
    IfxSmu_Alarm_Cpu2DcacheTagSramAddressError                    = (IfxSmu_AlarmGroup_6 << 8) | 16,  /**< \brief CPU2 DCACHE TAG SRAM Address error */
    IfxSmu_Alarm_Cpu2DcacheTagSramAddressBufferOverflow           = (IfxSmu_AlarmGroup_6 << 8) | 17,  /**< \brief CPU2 DCACHE TAG SRAM Address buffer overflow */
    IfxSmu_Alarm_Cpu2CpuInstructionFetchSRIInterfaceEdcError      = (IfxSmu_AlarmGroup_6 << 8) | 18,  /**< \brief CPU2 CPU Instruction Fetch SRI Interface EDC Error */
    IfxSmu_Alarm_Cpu2CpuDataSriInterfaceEdcError                  = (IfxSmu_AlarmGroup_6 << 8) | 19,  /**< \brief CPU2 CPU Data SRI Interface (Load/Store) EDC Error */
    IfxSmu_Alarm_noAlarm                                                                              /**< \brief Special flag to inform about no alarm  (Software only) */
} IfxSmu_Alarm;

/** \} */

#endif /* IFXSMU_CFG_H */

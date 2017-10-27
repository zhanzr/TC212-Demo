/**
 * \file IfxGtm_Tom_Pwm.h
 * \brief GTM PWM details
 * \ingroup IfxLld_Gtm
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
 * \defgroup IfxLld_Gtm_Tom_Pwm_Usage How to use the GTM TOM PWM Driver
 * \ingroup IfxLld_Gtm_Tom_Pwm
 *
 * This interface allows to generate simple PWM signal on a TOM out put and can generate interrupts if enabled.
 * this output can also be routed to port pin if required.
 *
 * \section Preparation Preparation
 * \subsection Include Include Files
 *
 * Include following header file into your C code:
 * \code
 *     #include <Gtm/Tom/Pwm/IfxGtm_Tom_Pwm.h>
 * \endcode
 *
 * \subsection Variables Variables
 * define global variables if necessary
 *
 * \code
 * Ifx_GTM *gtm = &MODULE_GTM;
 * #define TOM0_CH0_PRIO 10
 * \endcode
 *
 * \subsection Interrupts Interrupts
 * define Interrupts if needed
 *
 * \code
 * IFX_INTERRUPT(TOM0Ch0_ISR, 0, TOM0_CH0_PRIO)
 * {}
 * \endcode
 *
 * \subsection Initialization Initialization
 *
 * \code
 * // install interrupt handlers
 * IfxCpu_Irq_installInterruptHandler (TOM0Ch0_ISR, TOM0_CH0_PRIO);
 *
 * // enable GTM clock
 * {
 *     float32 frequency = IfxGtm_Cmu_getModuleFrequency(gtm);
 *     // Enables the GTM
 *     IfxGtm_enable(gtm);
 *     // Set the global clock frequency to the max
 *     IfxGtm_Cmu_setGclkFrequency(gtm, frequency);
 *     // Set the CMU CLK0
 *     IfxGtm_Cmu_setClkFrequency(gtm, IfxGtm_Cmu_Clk_0, frequency);
 *     // FXCLK: used by TOM and CLK0: used by ATOM
 *     IfxGtm_Cmu_enableClocks(gtm, IFXGTM_CMU_CLKEN_FXCLK | IFXGTM_CMU_CLKEN_CLK0);
 * }
 *
 * // initialise TOM
 * IfxGtm_Tom_Pwm_Config tomConfig;	\\configuration structure
 * IfxGtm_Tom_Pwm_Driver tomHandle;	\\ handle
 *
 * IfxGtm_Tom_Pwm_initConfig(&tomConfig, gtm);
 *
 * tomConfig.tomChannel  = IfxGtm_Tom_Ch_0;
 * tomConfig.period                   = 20;
 * tomConfig.dutyCycle              = 10;
 * tomConfig.interrupt.ccu0Enabled = TRUE;
 * tomConfig.interrupt.isrPriority = TOM0_CH0_PRIO;
 * tomConfig.pin.outputPin = &IfxGtm_TOM0_0_TOUT106_P10_4_OUT;
 *
 * IfxGtm_Tom_Pwm_init(&tomHandle, &tomConfig);
 * \endcode
 *
 * TOM will be now generating a PWM signal on the selected port pin while generating selected interrupt according to above configured period and duty cycle.
 *
 * \defgroup IfxLld_Gtm_Tom_Pwm TOM PWM Interface Driver
 * \ingroup IfxLld_Gtm_Tom
 * \defgroup IfxLld_Gtm_Tom_Pwm_DataStructures TOM PWM DataStructures
 * \ingroup IfxLld_Gtm_Tom_Pwm
 * \defgroup IfxLld_Gtm_Tom_Pwm_Pwm_Functions Pwm Functions
 * \ingroup IfxLld_Gtm_Tom_Pwm
 */

#ifndef IFXGTM_TOM_PWM_H
#define IFXGTM_TOM_PWM_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_PinMap/IfxGtm_PinMap.h"
#include "Gtm/Std/IfxGtm_Tom.h"
#include "Gtm/Std/IfxGtm_Cmu.h"
#include "Cpu/Std/IfxCpu.h"

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Gtm_Tom_Pwm_DataStructures
 * \{ */
/** \brief configuration structure for interrupts
 */
typedef struct
{
    boolean        ccu0Enabled;       /**< \brief Enable/Disable choice for CCU0 trigger interrupt */
    boolean        ccu1Enabled;       /**< \brief Enable/Disable choice for CCU1 trigger interrupt */
    IfxGtm_IrqMode mode;              /**< \brief IRQ mode of interrupt */
    IfxSrc_Tos     isrProvider;       /**< \brief Type of Service for Ccu0/1 interrupt */
    Ifx_Priority   isrPriority;       /**< \brief Priority for Ccu0/1 interrupt */
} IfxGtm_Tom_Pwm_Interrupt;

/** \} */

/** \brief configuration structure for output pin
 */
typedef struct
{
    IfxGtm_Tom_ToutMap *outputPin;        /**< \brief output pin */
    IfxPort_OutputMode  outputMode;       /**< \brief Output mode */
    IfxPort_PadDriver   padDriver;        /**< \brief Pad driver */
} IfxGtm_Tom_Pwm_pin;

/** \addtogroup IfxLld_Gtm_Tom_Pwm_DataStructures
 * \{ */
/** \brief Configuration structure
 */
typedef struct
{
    Ifx_GTM                 *gtm;                            /**< \brief Pointer to GTM module */
    IfxGtm_Tom               tom;                            /**< \brief Index of the TOM object used */
    IfxGtm_Tom_Ch            tomChannel;                     /**< \brief TOM channel used for the timer */
    IfxGtm_Tom_Ch_ClkSrc     clock;                          /**< \brief Timer input clock */
    uint32                   period;                         /**< \brief Period */
    uint32                   dutyCycle;                      /**< \brief Duty Cycle */
    Ifx_ActiveState          signalLevel;                    /**< \brief Signal Level */
    boolean                  oneShotModeEnabled;             /**< \brief Enable/Disable the one shot mode */
    boolean                  synchronousUpdateEnabled;       /**< \brief Synchronous or Asynchronous update */
    IfxGtm_Tom_Pwm_Interrupt interrupt;                      /**< \brief configuration structure for interrupt */
    IfxGtm_Tom_Pwm_pin       pin;                            /**< \brief configuration structure for output pin */
} IfxGtm_Tom_Pwm_Config;

/** \brief Driver Handle
 */
typedef struct
{
    Ifx_GTM         *gtm;              /**< \brief Pointer to GTM module */
    IfxGtm_Tom       tomIndex;         /**< \brief Index of the TOM object used */
    IfxGtm_Tom_Ch    tomChannel;       /**< \brief TOM channel used for the timer */
    Ifx_GTM_TOM     *tom;              /**< \brief Pointer to the TOM object */
    Ifx_GTM_TOM_TGC *tgc[2];           /**< \brief Pointer to the TGC object */
} IfxGtm_Tom_Pwm_Driver;

/** \} */

/** \addtogroup IfxLld_Gtm_Tom_Pwm_Pwm_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Initialises the Timer object
 * \param driver TOM Handle
 * \param config Configuration structure for TOM Timer
 * \return TRUE on success else FALSE
 */
IFX_EXTERN boolean IfxGtm_Tom_Pwm_init(IfxGtm_Tom_Pwm_Driver *driver, const IfxGtm_Tom_Pwm_Config *config);

/** \brief Initializes the configuration structure to default
 * \param config This parameter is Initialised by the function
 * \param gtm Pointer to GTM module
 * \return None
 */
IFX_EXTERN void IfxGtm_Tom_Pwm_initConfig(IfxGtm_Tom_Pwm_Config *config, Ifx_GTM *gtm);

/** \} */

#endif /* IFXGTM_TOM_PWM_H */

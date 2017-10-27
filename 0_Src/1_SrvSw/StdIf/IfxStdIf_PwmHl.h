/**
 * \file IfxStdIf_PwmHl.h
 * \brief Standard interface: Multi-channels, dual-complementary PWM interface
 * \ingroup IfxStdIf
 *
 * \version disabled
 * \copyright Copyright (c) 2013 Infineon Technologies AG. All rights reserved.
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
 * \defgroup library_srvsw_stdif_pwmhl Standard interface: Multi-channels, dual-complementary PWM interface
 * \ingroup library_srvsw_stdif
 *
 * The standard interface pwm high/low (PwmHl) abstract the hardware used for pwm feature. It provide, after proper initialization an hardware
 * independant way to interact with the PWM functionallity like setting duty cycles, dead time,timer functionalities, ...
 *
 * The figure below shows the standard Multi-channels, dual-complementary PWM interface.
 *
 * \image html "PwmHl-overview.png" "Standard Multi-channels, dual-complementary PWM interface"
 *
 * This PWM interface provides multiple dual-complementary PWM channels.
 * Each dual-complementary PWM channel is made of two PWM channels, a top channel CCx and a bottom channel COUTx.
 * The interface implements the \ref library_srvsw_stdif_timer.
 *
 * This interface defines the following features:
 * - Configurable duty cycle from 0% to 100%
 * - Adjustable dead-time between top and bottom channels
 * - Center aligned, left aligned, right aligned PWM
 * - Optional minimal pulse cancellation
 * - Optional emergency stop
 * - Configurable signal active state for top and bottom PWM
 * - Configurable output ports
 * - Inherit the features from library_srvsw_stdif_timer
 *
 * Example of signal generation in center aligned mode:
 *
 * \image html "PwmHl-centerAligned.png" "Standard Multi-channels, dual-complementary PWM interface - Center aligned mode"
 */

#ifndef IFXSTDIF_PWMHL_H
#define IFXSTDIF_PWMHL_H 1

#include "IfxStdIf.h"
#include "IfxStdIf_Timer.h"

/** \brief Forward declaration */
typedef struct IfxStdIf_PwmHl_ IfxStdIf_PwmHl;

/** \brief Set the dead time in s
 * \param driver Pointer to the interface driver object
 * \param deadtime deadtime in second
 * \retval TRUE In case of success
 * \retval FALSE In case of failure
 */
typedef boolean (*IfxStdIf_PwmHl_SetDeadtime)(IfxStdIf_InterfaceDriver driver, float32 deadtime);

/** \brief Return the dead time in s
 *
 * It returns the last dead time values set by IfxStdIf_PwmHl_SetDeadtime() or during initialisation
 * \param driver Pointer to the interface driver object
 * \return Returns the deadtime in second
 */
typedef float32 (*IfxStdIf_PwmHl_GetDeadtime)(IfxStdIf_InterfaceDriver driver);

/** \brief Set the minimum pulse time in s
 * \param driver Pointer to the interface driver object
 * \param minPulse minimal pulse in second
 * \retval TRUE In case of success
 * \retval FALSE In case of failure
 */
typedef boolean (*IfxStdIf_PwmHl_SetMinPulse)(IfxStdIf_InterfaceDriver driver, float32 minPulse);

/** \brief Return the minimum pulse time in s
 *
 * It returns the last minimum pulse time values set by IfxStdIf_PwmHl_SetMinPulse() or during initialisation
 * \param driver Pointer to the interface driver object
 * \return Returns the minimum pulse time in second
 */
typedef float32 (*IfxStdIf_PwmHl_GetMinPulse)(IfxStdIf_InterfaceDriver driver);

/** \brief Return the PWM mode
 *
 * It returns the last pwm mode set by IfxStdIf_PwmHl_SetMode() or during initialisation
 * \param driver Pointer to the interface driver object
 * \return Returns the pwm mode
 */
typedef Ifx_Pwm_Mode (*IfxStdIf_PwmHl_GetMode)(IfxStdIf_InterfaceDriver driver);

/** \brief Set the pwm mode
 * \param driver Pointer to the interface driver object
 * \param mode PWM mode
 * \retval TRUE In case of success
 * \retval FALSE In case of failure (feature not supported)
 */
typedef boolean (*IfxStdIf_PwmHl_SetMode)(IfxStdIf_InterfaceDriver driver, Ifx_Pwm_Mode mode);

/** \brief Set the pwm ON time
 * \param driver Pointer to the interface driver object
 * \param tOn Pointer to an array of ON times in ticks. The array size must be equal to the number of PWM channels
 * \return none
 */
typedef void (*IfxStdIf_PwmHl_SetOnTime)(IfxStdIf_InterfaceDriver driver, Ifx_TimerValue *tOn);

/** \brief Set the pwm ON time and shift value
 * \param driver Pointer to the interface driver object
 * \param tOn Pointer to an array of ON times in ticks. The array size must be equal to the number of PWM channels
 * \param shift Pointer to an array of shift values in ticks. The array size must be equal to the number of PWM channels
 * \return none
 */
typedef void (*IfxStdIf_PwmHl_SetOnTimeAndShift)(IfxStdIf_InterfaceDriver driver, Ifx_TimerValue *tOn, Ifx_TimerValue *shift);

/** \brief Set the pwm pulse of all switched independently
 * \param driver Pointer to the interface driver object
 * \param tOn Pointer to an array of ON times in s. The array size must be equal to the number of PWM channels times 2. Parameters order is  Phase 0 top, phase 1 top, ... phase 0 bottom, phase 1 botteom, ...
 * \param offset Pointer to an array of offset values in s. The array size must be equal to the number of PWM channels times 2. Parameters order is  Phase 0 top, phase 1 top, ... phase 0 bottom, phase 1 botteom, ...
 * \return none
 */
typedef void (*IfxStdIf_PwmHl_SetPulse)(IfxStdIf_InterfaceDriver driver, float32 *tOn, float32 *offset);

/** \brief Set channels which are generating PWM or in "stuck-at" state.
 *
 * \param driver Pointer to the interface driver object
 * \param activeCh Pointer to boolean array containing values for PWM channels.
 * If FALSE, the channel will be in stuck-at state, else the channel will generate PWM.
 *
 * \param stuckSt Pointer to boolean array containing values for active channels.
 * If FALSE, the stuck-at state is passive level, else the stuck-at state is active level.
 *
 * \note The values for the parameters are arranged as follows:
 * index = 0 --> phase 0 top
 * index = 1 --> phase 0 bottom
 * index = 2 --> phase 1 top
 * index = 3 --> phase 1 bottom
 * index = 4 --> phase 2 top
 * index = 5 --> phase 2 bottom
 */
typedef void (*IfxStdIf_PwmHl_SetupChannels)(IfxStdIf_InterfaceDriver driver, boolean *activeCh, boolean *stuckSt);

/** \brief Standard interface object
 */
struct IfxStdIf_PwmHl_
{
    IfxStdIf_InterfaceDriver driver;                                /**< \brief Interface driver object      */

    /* PWM related APIs*/
    IfxStdIf_PwmHl_SetDeadtime       setDeadtime;                   /**< \brief IfxStdIf_PwmHl_SetDeadtime   */
    IfxStdIf_PwmHl_GetDeadtime       getDeadtime;                   /**< \brief IfxStdIf_PwmHl_GetDeadtime   */
    IfxStdIf_PwmHl_SetMinPulse       setMinPulse;                   /**< \brief IfxStdIf_PwmHl_SetMinPulse   */
    IfxStdIf_PwmHl_GetMinPulse       getMinPulse;                   /**< \brief IfxStdIf_PwmHl_GetMinPulse   */
    IfxStdIf_PwmHl_GetMode           getMode;                       /**< \brief IfxStdIf_PwmHl_GetMode       */
    IfxStdIf_PwmHl_SetMode           setMode;                       /**< \brief IfxStdIf_PwmHl_SetMode       */
    IfxStdIf_PwmHl_SetOnTime         setOnTime;                     /**< \brief IfxStdIf_PwmHl_SetOnTime     */
    IfxStdIf_PwmHl_SetOnTimeAndShift setOnTimeAndShift;             /**< \brief IfxStdIf_PwmHl_SetOnTime     */
    IfxStdIf_PwmHl_SetPulse          setPulse;                      /**< \brief IfxStdIf_PwmHl_Pulse         */
    IfxStdIf_PwmHl_SetupChannels     setupChannels;                 /**< \brief IfxStdIf_PwmHl_SetupChannels */

    IfxStdIf_Timer                   timer;                         /**< \brief Timer related standard interface */
};

/** \brief Multi-channels PWM object configuration */
typedef struct
{
    float32            deadtime;            /**< \brief Dead time between the top and bottom channels in seconds */
    float32            minPulse;            /**< \brief Min pulse allowed as active state for the top and bottom PWM in seconds */
    uint8              channelCount;        /**< \brief Number of PWM channels, one channel is made of a top and bottom channel */
    boolean            emergencyEnabled;    /**< \brief Specifies if the emergency stop should be enabled or not */

    IfxPort_OutputMode outputMode;          /**< \brief Output mode of ccx and coutx pins */
    IfxPort_PadDriver  outputDriver;        /**< \brief Output pad driver of ccx and coutx pins *//* FIXME use generic type (No specific tricore AURIX type ) */

    Ifx_ActiveState    ccxActiveState;      /**< \brief Top PWM active state */
    Ifx_ActiveState    coutxActiveState;    /**< \brief Bottom PWM active state */
} IfxStdIf_PwmHl_Config;

/** \addtogroup library_srvsw_stdif_pwmhl
 *  \{
 */

/** \copydoc IfxStdIf_PwmHl_SetDeadtime
 * \param stdif Standard interface pointer
 */
IFX_INLINE boolean IfxStdIf_PwmHl_setDeadtime(IfxStdIf_PwmHl *stdIf, float32 deadtime)
{
    return stdIf->setDeadtime(stdIf->driver, deadtime);
}


/** \copydoc IfxStdIf_PwmHl_GetDeadtime
 * \param stdif Standard interface pointer
 */
IFX_INLINE float32 IfxStdIf_PwmHl_getDeadtime(IfxStdIf_PwmHl *stdIf)
{
    return stdIf->getDeadtime(stdIf->driver);
}


/** \copydoc IfxStdIf_PwmHl_SetMinPulse
 * \param stdif Standard interface pointer
 */
IFX_INLINE boolean IfxStdIf_PwmHl_setMinPulse(IfxStdIf_PwmHl *stdIf, float32 minPulse)
{
    return stdIf->setMinPulse(stdIf->driver, minPulse);
}


/** \copydoc IfxStdIf_PwmHl_GetMinPulse
 * \param stdif Standard interface pointer
 */
IFX_INLINE float32 IfxStdIf_PwmHl_getMinPulse(IfxStdIf_PwmHl *stdIf)
{
    return stdIf->getMinPulse(stdIf->driver);
}


/** \copydoc IfxStdIf_PwmHl_GetMode
 * \param stdif Standard interface pointer
 */
IFX_INLINE Ifx_Pwm_Mode IfxStdIf_PwmHl_getMode(IfxStdIf_PwmHl *stdIf)
{
    return stdIf->getMode(stdIf->driver);
}


/** \copydoc IfxStdIf_PwmHl_SetMode
 * \param stdif Standard interface pointer
 */
IFX_INLINE boolean IfxStdIf_PwmHl_setMode(IfxStdIf_PwmHl *stdIf, Ifx_Pwm_Mode mode)
{
    return stdIf->setMode(stdIf->driver, mode);
}


/** \copydoc IfxStdIf_PwmHl_SetOnTime
 * \param stdif Standard interface pointer
 */
IFX_INLINE void IfxStdIf_PwmHl_setOnTime(IfxStdIf_PwmHl *stdIf, Ifx_TimerValue *tOn)
{
    stdIf->setOnTime(stdIf->driver, tOn);
}


/** \copydoc IfxStdIf_PwmHl_SetOnTime
 * \param stdif Standard interface pointer
 */
IFX_INLINE void IfxStdIf_PwmHl_setOnTimeAndShift(IfxStdIf_PwmHl *stdIf, Ifx_TimerValue *tOn, Ifx_TimerValue *shift)
{
    stdIf->setOnTimeAndShift(stdIf->driver, tOn, shift);
}


/** \copydoc IfxStdIf_PwmHl_SetPulse
 * \param stdif Standard interface pointer
 */
IFX_INLINE void IfxStdIf_PwmHl_setPulse(IfxStdIf_PwmHl *stdIf, float32 *tOn, float32 *offset)
{
    stdIf->setPulse(stdIf->driver, tOn, offset);
}


/** \copydoc IfxStdIf_PwmHl_SetupChannels
 * \param stdif Standard interface pointer
 */
IFX_INLINE void IfxStdIf_PwmHl_setupChannels(IfxStdIf_PwmHl *driver, boolean *activeCh, boolean *stuckSt)
{}

/** \brief Return the timer standard interface used by the IfxStdIf_PwmHl standard interface
 * \param stdif Standard interface pointer
 * \return Returns the pointer to the IfxStdIf_Timer object
 */
IFX_INLINE IfxStdIf_Timer *IfxStdIf_PwmHl_getTimer(IfxStdIf_PwmHl *stdIf)
{
    return &stdIf->timer;
}


/** \} */

/** Initialize the configuration structure to default
 *
 * \param config Timer configuration. This parameter is initialised by the function
 *
 */
IFX_EXTERN void IfxStdIf_PwmHl_initConfig(IfxStdIf_PwmHl_Config *config);

#endif /* IFXSTDIF_PWMHL_H */

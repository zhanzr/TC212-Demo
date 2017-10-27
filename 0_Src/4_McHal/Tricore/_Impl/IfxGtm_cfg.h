/**
 * \file IfxGtm_cfg.h
 * \brief GTM on-chip implementation data
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
 * \defgroup IfxLld_Gtm GTM
 * \ingroup IfxLld
 * \defgroup IfxLld_Gtm_Impl Implementation
 * \ingroup IfxLld_Gtm
 * \defgroup IfxLld_Gtm_Std Standard Driver
 * \ingroup IfxLld_Gtm
 * \defgroup IfxLld_Gtm_Tom TOM Interface Drivers
 * \ingroup IfxLld_Gtm
 * \defgroup IfxLld_Gtm_Tim Tim Interface Drivers
 * \ingroup IfxLld_Gtm
 * \defgroup IfxLld_Gtm_Impl_Enumerations Enumerations
 * \ingroup IfxLld_Gtm_Impl
 * \defgroup IfxLld_Gtm_Impl_Data_Structures Data Structures
 * \ingroup IfxLld_Gtm_Impl
 */

#ifndef IFXGTM_CFG_H
#define IFXGTM_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "Ifx_Cfg.h"
#include "IfxGtm_reg.h"
#include "Port/Std/IfxPort.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief Mask for CMU_CLK_EN register (Enable): CLK0
 */
#define IFXGTM_CMU_CLKEN_CLK0   (0x00000002)

/** \brief Mask for CMU_CLK_EN register (Enable): CLK1
 */
#define IFXGTM_CMU_CLKEN_CLK1   (0x00000008)

/** \brief Mask for CMU_CLK_EN register (Enable): CLK2
 */
#define IFXGTM_CMU_CLKEN_CLK2   (0x00000020)

/** \brief Mask for CMU_CLK_EN register (Enable): CLK3
 */
#define IFXGTM_CMU_CLKEN_CLK3   (0x00000080)

/** \brief Mask for CMU_CLK_EN register (Enable): CLK4
 */
#define IFXGTM_CMU_CLKEN_CLK4   (0x00000200)

/** \brief Mask for CMU_CLK_EN register (Enable): CLK5
 */
#define IFXGTM_CMU_CLKEN_CLK5   (0x00000800)

/** \brief Mask for CMU_CLK_EN register (Enable): CLK6
 */
#define IFXGTM_CMU_CLKEN_CLK6   (0x00002000)

/** \brief Mask for CMU_CLK_EN register (Enable): CLK7
 */
#define IFXGTM_CMU_CLKEN_CLK7   (0x00008000)

/** \brief Mask for CMU_CLK_EN register (Enable): ECLK0
 */
#define IFXGTM_CMU_CLKEN_ECLK0  (0x00020000)

/** \brief Mask for CMU_CLK_EN register (Enable): ECLK1
 */
#define IFXGTM_CMU_CLKEN_ECLK1  (0x00080000)

/** \brief Mask for CMU_CLK_EN register (Enable): ECLK2
 */
#define IFXGTM_CMU_CLKEN_ECLK2  (0x00200000)

/** \brief Mask for CMU_CLK_EN register (Enable): FXCLK
 */
#define IFXGTM_CMU_CLKEN_FXCLK  (0x00800000)

/** \brief Mask for CMU_CLK_EN register (Enable): ALL clocks
 */
#define IFXGTM_CMU_CLKEN_ALL    (0x00AAAAAA)

/** \brief Mask for CMU_CLK_EN register (Disable): CLK0
 */
#define IFXGTM_CMU_CLKDIS_CLK0  (0x00000001)

/** \brief Mask for CMU_CLK_EN register (Disable): CLK1
 */
#define IFXGTM_CMU_CLKDIS_CLK1  (0x00000004)

/** \brief Mask for CMU_CLK_EN register (Disable): CLK2
 */
#define IFXGTM_CMU_CLKDIS_CLK2  (0x00000010)

/** \brief Mask for CMU_CLK_EN register (Disable): CLK3
 */
#define IFXGTM_CMU_CLKDIS_CLK3  (0x00000040)

/** \brief Mask for CMU_CLK_EN register (Disable): CLK4
 */
#define IFXGTM_CMU_CLKDIS_CLK4  (0x00000100)

/** \brief Mask for CMU_CLK_EN register (Disable): CLK5
 */
#define IFXGTM_CMU_CLKDIS_CLK5  (0x00000400)

/** \brief Mask for CMU_CLK_EN register (Disable): CLK6
 */
#define IFXGTM_CMU_CLKDIS_CLK6  (0x00001000)

/** \brief Mask for CMU_CLK_EN register (Disable): CLK7
 */
#define IFXGTM_CMU_CLKDIS_CLK7  (0x00004000)

/** \brief Mask for CMU_CLK_EN register (Disable): ECLK0
 */
#define IFXGTM_CMU_CLKDIS_ECLK0 (0x00010000)

/** \brief Mask for CMU_CLK_EN register (Disable): ECLK1
 */
#define IFXGTM_CMU_CLKDIS_ECLK1 (0x00040000)

/** \brief Mask for CMU_CLK_EN register (Disable): ECLK2
 */
#define IFXGTM_CMU_CLKDIS_ECLK2 (0x00100000)

/** \brief Mask for CMU_CLK_EN register (Disable): FXCLK
 */
#define IFXGTM_CMU_CLKDIS_FXCLK (0x00400000)

/** \brief Mask for CMU_CLK_EN register (Disable): ALL clocks
 */
#define IFXGTM_CMU_CLKDIS_ALL   (0x00555555)

#define IFXGTM_NUM_TOM_OBJECTS  (2)

#define IFXGTM_NUM_TOM_CHANNELS (16)

#define IFXGTM_NUM_MODULES      (1)

/******************************************************************************/
/*------------------------------Type Definitions------------------------------*/
/******************************************************************************/

typedef volatile struct IfxGtm_Tom_TGC Ifx_GTM_TOM_TGC;

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Gtm_Impl_Enumerations
 * \{ */
/** \brief Enum for Dpll subincrements
 */
typedef enum
{
    IfxGtm_Dpll_SubInc_1 = 0,      /**< \brief subincrement1  */
    IfxGtm_Dpll_SubInc_2           /**< \brief subincrement2  */
} IfxGtm_Dpll_SubInc;

/** \brief Enum Enable disable feature control
 */
typedef enum
{
    IfxGtm_FeatureControl_disabled = 0,  /**< \brief disabled */
    IfxGtm_FeatureControl_disable  = 1,  /**< \brief disable */
    IfxGtm_FeatureControl_enable   = 2,  /**< \brief enable */
    IfxGtm_FeatureControl_enabled  = 3   /**< \brief enabled */
} IfxGtm_FeatureControl;

/** \brief Enum for TIM objects
 */
typedef enum
{
    IfxGtm_Tim_0  /**< \brief TIM object 0 */
} IfxGtm_Tim;

/** \brief Enum for TIM channels
 */
typedef enum
{
    IfxGtm_Tim_Ch_0,     /**< \brief TIM channel 0  */
    IfxGtm_Tim_Ch_1,     /**< \brief TIM channel 1  */
    IfxGtm_Tim_Ch_2,     /**< \brief TIM channel 2  */
    IfxGtm_Tim_Ch_3,     /**< \brief TIM channel 3  */
    IfxGtm_Tim_Ch_4,     /**< \brief TIM channel 4  */
    IfxGtm_Tim_Ch_5,     /**< \brief TIM channel 5  */
    IfxGtm_Tim_Ch_6,     /**< \brief TIM channel 6  */
    IfxGtm_Tim_Ch_7      /**< \brief TIM channel 7  */
} IfxGtm_Tim_Ch;

/** \brief Enum for TOM objects
 */
typedef enum
{
    IfxGtm_Tom_0,   /**< \brief TOM object 0  */
    IfxGtm_Tom_1,   /**< \brief TOM object 1  */
    IfxGtm_Tom_2,   /**< \brief TOM object 2 */
    IfxGtm_Tom_3,   /**< \brief TOM object 3  */
    IfxGtm_Tom_4    /**< \brief TOM object 4  */
} IfxGtm_Tom;

/** \brief Enum for TOM channels
 */
typedef enum
{
    IfxGtm_Tom_Ch_none = -1, /**< \brief Not Selected */
    IfxGtm_Tom_Ch_0,         /**< \brief TOM channel 0  */
    IfxGtm_Tom_Ch_1,         /**< \brief TOM channel 1  */
    IfxGtm_Tom_Ch_2,         /**< \brief TOM channel 2  */
    IfxGtm_Tom_Ch_3,         /**< \brief TOM channel 3  */
    IfxGtm_Tom_Ch_4,         /**< \brief TOM channel 4  */
    IfxGtm_Tom_Ch_5,         /**< \brief TOM channel 5  */
    IfxGtm_Tom_Ch_6,         /**< \brief TOM channel 6  */
    IfxGtm_Tom_Ch_7,         /**< \brief TOM channel 7  */
    IfxGtm_Tom_Ch_8,         /**< \brief TOM channel 8  */
    IfxGtm_Tom_Ch_9,         /**< \brief TOM channel 9  */
    IfxGtm_Tom_Ch_10,        /**< \brief TOM channel 10  */
    IfxGtm_Tom_Ch_11,        /**< \brief TOM channel 11  */
    IfxGtm_Tom_Ch_12,        /**< \brief TOM channel 12  */
    IfxGtm_Tom_Ch_13,        /**< \brief TOM channel 13  */
    IfxGtm_Tom_Ch_14,        /**< \brief TOM channel 14  */
    IfxGtm_Tom_Ch_15         /**< \brief TOM channel 15  */
} IfxGtm_Tom_Ch;

/** \brief Enum for TOM global channel control units
 */
typedef enum
{
    IfxGtm_Tom_Tgc_0,     /**< \brief TOM global channel control unit0  */
    IfxGtm_Tom_Tgc_1      /**< \brief TOM global channel control unit1  */
} IfxGtm_Tom_Tgc;

/** \} */

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Gtm_Impl_Data_Structures
 * \{ */
/** \brief TOM TGC objects
 */
struct IfxGtm_Tom_TGC
{
    Ifx_GTM_TOM_TGC0_GLB_CTRL   GLB_CTRL;         /**< \brief 30, TOM TGC0 Global Control Register */
    Ifx_GTM_TOM_TGC0_ACT_TB     ACT_TB;           /**< \brief 34, TOM TGC0 Action Time Base Register */
    Ifx_GTM_TOM_TGC0_FUPD_CTRL  FUPD_CTRL;        /**< \brief 38, TOM TGC0 Force Update Control Register */
    Ifx_GTM_TOM_TGC0_INT_TRIG   INT_TRIG;         /**< \brief 3C, TOM TGC0 Internal Trigger Control Register */
    Ifx_GTM_TOM_CH              xxxCH1;           /**< \brief 40, TOM channel objects */
    Ifx_GTM_TOM_TGC0_ENDIS_CTRL ENDIS_CTRL;       /**< \brief 70, TOM TGC0 Enable/Disable Control Register */
    Ifx_GTM_TOM_TGC0_ENDIS_STAT ENDIS_STAT;       /**< \brief 74, TOM TGC0 Enable/Disable Status Register */
    Ifx_GTM_TOM_TGC0_OUTEN_CTRL OUTEN_CTRL;       /**< \brief 78, TOM TGC0 Output Enable Control Register */
    Ifx_GTM_TOM_TGC0_OUTEN_STAT OUTEN_STAT;       /**< \brief 7C, TOM TGC0 Output Enable Status Register */
};

/** \} */

#endif /* IFXGTM_CFG_H */

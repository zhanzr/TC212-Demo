/**
 * \file IfxGtm_PinMap.h
 * \brief GTM I/O map
 * \ingroup IfxLld_Gtm
 *
 * \version iLLD_1_0_1_0_0
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
 * \defgroup IfxLld_Gtm_pinmap GTM Pin Mapping
 * \ingroup IfxLld_Gtm
 */

#ifndef IFXGTM_PINMAP_H
#define IFXGTM_PINMAP_H

#include <_Reg/IfxGtm_reg.h>
#include <_Impl/IfxGtm_cfg.h>
#include <Port/Std/IfxPort.h>
#include <Gtm/Std/IfxGtm_Tom.h>
#include <Gtm/Std/IfxGtm_Tim.h>

/** \addtogroup IfxLld_Gtm_pinmap
 * \{ */

/** \brief CHxSEL register control code */
typedef enum
{
    IfxGtm_ChXSel_a,
    IfxGtm_ChXSel_b,
    IfxGtm_ChXSel_c,
    IfxGtm_ChXSel_d,

    IfxGtm_ChXSel_e,
    IfxGtm_ChXSel_f,
    IfxGtm_ChXSel_g,
    IfxGtm_ChXSel_h,

    IfxGtm_ChXSel_i,
    IfxGtm_ChXSel_j,
    IfxGtm_ChXSel_k,
    IfxGtm_ChXSel_l,

    IfxGtm_ChXSel_m,
    IfxGtm_ChXSel_n,
    IfxGtm_ChXSel_o,
    IfxGtm_ChXSel_p
} IfxGtm_ChXSel;

/** \brief TOUTSEL register control code */
typedef enum
{
    IfxGtm_ToutSel_a,
    IfxGtm_ToutSel_b,
    IfxGtm_ToutSel_c,
    IfxGtm_ToutSel_d,
    IfxGtm_ToutSel_e
} IfxGtm_ToutSel;

/** \brief TIN pin mapping structure */
typedef const struct
{
    IfxGtm_Tim      tim;        /**< \brief TIM unit index */
    IfxGtm_Tim_Ch   channel;    /**< \brief TIM channel index */
    IfxPort_Pin     pin;        /**< \brief Port pin */
    IfxGtm_ChXSel   select;     /**< \brief Input multiplexer value */
} IfxGtm_Tim_TinMap;

/** \brief TOM TOUT pin mapping structure */
typedef const struct
{
    IfxGtm_Tom          tom;        /**< \brief TOM unit index */
    IfxGtm_Tom_Ch       channel;    /**< \brief TOM channel index */
    IfxGtm_ToutSel      toutSel;    /**< \brief TOUTSEL register control code */
    uint32              toutn;      /**< \brief TOUT number */
    IfxPort_Pin         pin;        /**< \brief Port pin */
    IfxPort_OutputIdx   select;     /**< \brief Port control code */
} IfxGtm_Tom_ToutMap;

/** \brief GTM Clock Output */
typedef const struct
{
    Ifx_GTM*          module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxGtm_Clk_Out;

/** \brief Pointer to \ref IfxGtm_Tom_ToutMap */
typedef IfxGtm_Tom_ToutMap *IfxGtm_Tom_ToutMapP;

IFX_EXTERN void IfxGtm_PinMap_setTimTin(IfxGtm_Tim_TinMap *config, IfxPort_InputMode inputMode);
IFX_EXTERN void IfxGtm_PinMap_setTomTout(IfxGtm_Tom_ToutMap *config, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

IFX_EXTERN IfxGtm_Clk_Out IfxGtm_CLK0_P23_1_OUT;  /**< \brief GTM output */
IFX_EXTERN IfxGtm_Clk_Out IfxGtm_CLK1_P33_10_OUT;  /**< \brief GTM output */
IFX_EXTERN IfxGtm_Clk_Out IfxGtm_CLK2_P11_12_OUT;  /**< \brief GTM output */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN0_P02_0_IN;  /**< \brief IfxGtm_TIM0_0_TIN0_P02_0_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN18_P00_9_IN;  /**< \brief IfxGtm_TIM0_0_TIN18_P00_9_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN26_P33_4_IN;  /**< \brief IfxGtm_TIM0_0_TIN26_P33_4_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN32_P33_10_IN;  /**< \brief IfxGtm_TIM0_0_TIN32_P33_10_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN34_P33_12_IN;  /**< \brief IfxGtm_TIM0_0_TIN34_P33_12_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN48_P22_1_IN;  /**< \brief IfxGtm_TIM0_0_TIN48_P22_1_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN53_P21_2_IN;  /**< \brief IfxGtm_TIM0_0_TIN53_P21_2_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN77_P15_6_IN;  /**< \brief IfxGtm_TIM0_0_TIN77_P15_6_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN85_P14_5_IN;  /**< \brief IfxGtm_TIM0_0_TIN85_P14_5_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN87_P14_7_IN;  /**< \brief IfxGtm_TIM0_0_TIN87_P14_7_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN8_P02_8_IN;  /**< \brief IfxGtm_TIM0_0_TIN8_P02_8_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN9_P00_0_IN;  /**< \brief IfxGtm_TIM0_0_TIN9_P00_0_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN103_P10_1_IN;  /**< \brief IfxGtm_TIM0_1_TIN103_P10_1_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN10_P00_1_IN;  /**< \brief IfxGtm_TIM0_1_TIN10_P00_1_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN11_P00_2_IN;  /**< \brief IfxGtm_TIM0_1_TIN11_P00_2_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN1_P02_1_IN;  /**< \brief IfxGtm_TIM0_1_TIN1_P02_1_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN27_P33_5_IN;  /**< \brief IfxGtm_TIM0_1_TIN27_P33_5_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN31_P33_9_IN;  /**< \brief IfxGtm_TIM0_1_TIN31_P33_9_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN47_P22_0_IN;  /**< \brief IfxGtm_TIM0_1_TIN47_P22_0_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN54_P21_3_IN;  /**< \brief IfxGtm_TIM0_1_TIN54_P21_3_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN78_P15_7_IN;  /**< \brief IfxGtm_TIM0_1_TIN78_P15_7_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN86_P14_6_IN;  /**< \brief IfxGtm_TIM0_1_TIN86_P14_6_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN104_P10_2_IN;  /**< \brief IfxGtm_TIM0_2_TIN104_P10_2_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN107_P10_5_IN;  /**< \brief IfxGtm_TIM0_2_TIN107_P10_5_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN28_P33_6_IN;  /**< \brief IfxGtm_TIM0_2_TIN28_P33_6_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN2_P02_2_IN;  /**< \brief IfxGtm_TIM0_2_TIN2_P02_2_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN33_P33_11_IN;  /**< \brief IfxGtm_TIM0_2_TIN33_P33_11_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN55_P21_4_IN;  /**< \brief IfxGtm_TIM0_2_TIN55_P21_4_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN79_P15_8_IN;  /**< \brief IfxGtm_TIM0_2_TIN79_P15_8_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN105_P10_3_IN;  /**< \brief IfxGtm_TIM0_3_TIN105_P10_3_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN108_P10_6_IN;  /**< \brief IfxGtm_TIM0_3_TIN108_P10_6_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN21_P00_12_IN;  /**< \brief IfxGtm_TIM0_3_TIN21_P00_12_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN29_P33_7_IN;  /**< \brief IfxGtm_TIM0_3_TIN29_P33_7_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN3_P02_3_IN;  /**< \brief IfxGtm_TIM0_3_TIN3_P02_3_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN49_P22_2_IN;  /**< \brief IfxGtm_TIM0_3_TIN49_P22_2_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN56_P21_5_IN;  /**< \brief IfxGtm_TIM0_3_TIN56_P21_5_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN80_P14_0_IN;  /**< \brief IfxGtm_TIM0_3_TIN80_P14_0_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN22_P33_0_IN;  /**< \brief IfxGtm_TIM0_4_TIN22_P33_0_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN30_P33_8_IN;  /**< \brief IfxGtm_TIM0_4_TIN30_P33_8_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN4_P02_4_IN;  /**< \brief IfxGtm_TIM0_4_TIN4_P02_4_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN50_P22_3_IN;  /**< \brief IfxGtm_TIM0_4_TIN50_P22_3_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN57_P21_6_IN;  /**< \brief IfxGtm_TIM0_4_TIN57_P21_6_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN61_P20_3_IN;  /**< \brief IfxGtm_TIM0_4_TIN61_P20_3_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN81_P14_1_IN;  /**< \brief IfxGtm_TIM0_4_TIN81_P14_1_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_5_TIN23_P33_1_IN;  /**< \brief IfxGtm_TIM0_5_TIN23_P33_1_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_5_TIN58_P21_7_IN;  /**< \brief IfxGtm_TIM0_5_TIN58_P21_7_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_5_TIN5_P02_5_IN;  /**< \brief IfxGtm_TIM0_5_TIN5_P02_5_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_5_TIN82_P14_2_IN;  /**< \brief IfxGtm_TIM0_5_TIN82_P14_2_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN24_P33_2_IN;  /**< \brief IfxGtm_TIM0_6_TIN24_P33_2_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN42_P23_1_IN;  /**< \brief IfxGtm_TIM0_6_TIN42_P23_1_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN59_P20_0_IN;  /**< \brief IfxGtm_TIM0_6_TIN59_P20_0_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN62_P20_6_IN;  /**< \brief IfxGtm_TIM0_6_TIN62_P20_6_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN6_P02_6_IN;  /**< \brief IfxGtm_TIM0_6_TIN6_P02_6_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN83_P14_3_IN;  /**< \brief IfxGtm_TIM0_6_TIN83_P14_3_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN25_P33_3_IN;  /**< \brief IfxGtm_TIM0_7_TIN25_P33_3_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN63_P20_7_IN;  /**< \brief IfxGtm_TIM0_7_TIN63_P20_7_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN64_P20_8_IN;  /**< \brief IfxGtm_TIM0_7_TIN64_P20_8_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN7_P02_7_IN;  /**< \brief IfxGtm_TIM0_7_TIN7_P02_7_IN */
IFX_EXTERN IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN84_P14_4_IN;  /**< \brief IfxGtm_TIM0_7_TIN84_P14_4_IN */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT18_P00_9_OUT;  /**< \brief IfxGtm_TOM0_0_TOUT18_P00_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT26_P33_4_OUT;  /**< \brief IfxGtm_TOM0_0_TOUT26_P33_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT32_P33_10_OUT;  /**< \brief IfxGtm_TOM0_0_TOUT32_P33_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT53_P21_2_OUT;  /**< \brief IfxGtm_TOM0_0_TOUT53_P21_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT76_P15_5_OUT;  /**< \brief IfxGtm_TOM0_0_TOUT76_P15_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT77_P15_6_OUT;  /**< \brief IfxGtm_TOM0_0_TOUT77_P15_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT85_P14_5_OUT;  /**< \brief IfxGtm_TOM0_0_TOUT85_P14_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT87_P14_7_OUT;  /**< \brief IfxGtm_TOM0_0_TOUT87_P14_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT12_P00_3_OUT;  /**< \brief IfxGtm_TOM0_10_TOUT12_P00_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT2_P02_2_OUT;  /**< \brief IfxGtm_TOM0_10_TOUT2_P02_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT62_P20_6_OUT;  /**< \brief IfxGtm_TOM0_10_TOUT62_P20_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT70_P20_14_OUT;  /**< \brief IfxGtm_TOM0_10_TOUT70_P20_14_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT96_P11_3_OUT;  /**< \brief IfxGtm_TOM0_10_TOUT96_P11_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT13_P00_4_OUT;  /**< \brief IfxGtm_TOM0_11_TOUT13_P00_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT3_P02_3_OUT;  /**< \brief IfxGtm_TOM0_11_TOUT3_P02_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT49_P22_2_OUT;  /**< \brief IfxGtm_TOM0_11_TOUT49_P22_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT63_P20_7_OUT;  /**< \brief IfxGtm_TOM0_11_TOUT63_P20_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT71_P15_0_OUT;  /**< \brief IfxGtm_TOM0_11_TOUT71_P15_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT97_P11_6_OUT;  /**< \brief IfxGtm_TOM0_11_TOUT97_P11_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT14_P00_5_OUT;  /**< \brief IfxGtm_TOM0_12_TOUT14_P00_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT34_P33_12_OUT;  /**< \brief IfxGtm_TOM0_12_TOUT34_P33_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT4_P02_4_OUT;  /**< \brief IfxGtm_TOM0_12_TOUT4_P02_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT50_P22_3_OUT;  /**< \brief IfxGtm_TOM0_12_TOUT50_P22_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT72_P15_1_OUT;  /**< \brief IfxGtm_TOM0_12_TOUT72_P15_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT98_P11_9_OUT;  /**< \brief IfxGtm_TOM0_12_TOUT98_P11_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT15_P00_6_OUT;  /**< \brief IfxGtm_TOM0_13_TOUT15_P00_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT5_P02_5_OUT;  /**< \brief IfxGtm_TOM0_13_TOUT5_P02_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT65_P20_9_OUT;  /**< \brief IfxGtm_TOM0_13_TOUT65_P20_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT73_P15_2_OUT;  /**< \brief IfxGtm_TOM0_13_TOUT73_P15_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT99_P11_10_OUT;  /**< \brief IfxGtm_TOM0_13_TOUT99_P11_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT100_P11_11_OUT;  /**< \brief IfxGtm_TOM0_14_TOUT100_P11_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT16_P00_7_OUT;  /**< \brief IfxGtm_TOM0_14_TOUT16_P00_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT66_P20_10_OUT;  /**< \brief IfxGtm_TOM0_14_TOUT66_P20_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT6_P02_6_OUT;  /**< \brief IfxGtm_TOM0_14_TOUT6_P02_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT74_P15_3_OUT;  /**< \brief IfxGtm_TOM0_14_TOUT74_P15_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT101_P11_12_OUT;  /**< \brief IfxGtm_TOM0_15_TOUT101_P11_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT17_P00_8_OUT;  /**< \brief IfxGtm_TOM0_15_TOUT17_P00_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT42_P23_1_OUT;  /**< \brief IfxGtm_TOM0_15_TOUT42_P23_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT67_P20_11_OUT;  /**< \brief IfxGtm_TOM0_15_TOUT67_P20_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT75_P15_4_OUT;  /**< \brief IfxGtm_TOM0_15_TOUT75_P15_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT7_P02_7_OUT;  /**< \brief IfxGtm_TOM0_15_TOUT7_P02_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT103_P10_1_OUT;  /**< \brief IfxGtm_TOM0_1_TOUT103_P10_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT27_P33_5_OUT;  /**< \brief IfxGtm_TOM0_1_TOUT27_P33_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT31_P33_9_OUT;  /**< \brief IfxGtm_TOM0_1_TOUT31_P33_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT54_P21_3_OUT;  /**< \brief IfxGtm_TOM0_1_TOUT54_P21_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT78_P15_7_OUT;  /**< \brief IfxGtm_TOM0_1_TOUT78_P15_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT86_P14_6_OUT;  /**< \brief IfxGtm_TOM0_1_TOUT86_P14_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT104_P10_2_OUT;  /**< \brief IfxGtm_TOM0_2_TOUT104_P10_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT107_P10_5_OUT;  /**< \brief IfxGtm_TOM0_2_TOUT107_P10_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT28_P33_6_OUT;  /**< \brief IfxGtm_TOM0_2_TOUT28_P33_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT33_P33_11_OUT;  /**< \brief IfxGtm_TOM0_2_TOUT33_P33_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT55_P21_4_OUT;  /**< \brief IfxGtm_TOM0_2_TOUT55_P21_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT79_P15_8_OUT;  /**< \brief IfxGtm_TOM0_2_TOUT79_P15_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT88_P14_8_OUT;  /**< \brief IfxGtm_TOM0_2_TOUT88_P14_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT105_P10_3_OUT;  /**< \brief IfxGtm_TOM0_3_TOUT105_P10_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT108_P10_6_OUT;  /**< \brief IfxGtm_TOM0_3_TOUT108_P10_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT21_P00_12_OUT;  /**< \brief IfxGtm_TOM0_3_TOUT21_P00_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT29_P33_7_OUT;  /**< \brief IfxGtm_TOM0_3_TOUT29_P33_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT56_P21_5_OUT;  /**< \brief IfxGtm_TOM0_3_TOUT56_P21_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT80_P14_0_OUT;  /**< \brief IfxGtm_TOM0_3_TOUT80_P14_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT0_P02_0_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT0_P02_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT10_P00_1_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT10_P00_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT110_P11_8_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT110_P11_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT1_P02_1_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT1_P02_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT22_P33_0_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT22_P33_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT30_P33_8_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT30_P33_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT53_P21_2_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT53_P21_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT54_P21_3_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT54_P21_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT57_P21_6_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT57_P21_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT61_P20_3_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT61_P20_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT64_P20_8_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT64_P20_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT65_P20_9_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT65_P20_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT72_P15_1_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT72_P15_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT73_P15_2_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT73_P15_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT81_P14_1_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT81_P14_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT8_P02_8_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT8_P02_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT94_P13_3_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT94_P13_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT95_P11_2_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT95_P11_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT9_P00_0_OUT;  /**< \brief IfxGtm_TOM0_4_TOUT9_P00_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT11_P00_2_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT11_P00_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT12_P00_3_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT12_P00_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT23_P33_1_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT23_P33_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT27_P33_5_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT27_P33_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT28_P33_6_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT28_P33_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT2_P02_2_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT2_P02_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT3_P02_3_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT3_P02_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT55_P21_4_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT55_P21_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT56_P21_5_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT56_P21_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT58_P21_7_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT58_P21_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT66_P20_10_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT66_P20_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT67_P20_11_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT67_P20_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT74_P15_3_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT74_P15_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT76_P15_5_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT76_P15_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT82_P14_2_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT82_P14_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT91_P13_0_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT91_P13_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT96_P11_3_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT96_P11_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT97_P11_6_OUT;  /**< \brief IfxGtm_TOM0_5_TOUT97_P11_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT13_P00_4_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT13_P00_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT14_P00_5_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT14_P00_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT24_P33_2_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT24_P33_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT29_P33_7_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT29_P33_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT30_P33_8_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT30_P33_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT42_P23_1_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT42_P23_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT48_P22_1_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT48_P22_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT49_P22_2_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT49_P22_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT4_P02_4_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT4_P02_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT59_P20_0_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT59_P20_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT5_P02_5_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT5_P02_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT68_P20_12_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT68_P20_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT69_P20_13_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT69_P20_13_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT80_P14_0_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT80_P14_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT82_P14_2_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT82_P14_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT83_P14_3_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT83_P14_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT91_P13_0_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT91_P13_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT92_P13_1_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT92_P13_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT98_P11_9_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT98_P11_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT99_P11_10_OUT;  /**< \brief IfxGtm_TOM0_6_TOUT99_P11_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT100_P11_11_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT100_P11_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT101_P11_12_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT101_P11_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT111_P22_4_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT111_P22_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT15_P00_6_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT15_P00_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT16_P00_7_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT16_P00_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT25_P33_3_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT25_P33_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT31_P33_9_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT31_P33_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT32_P33_10_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT32_P33_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT50_P22_3_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT50_P22_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT64_P20_8_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT64_P20_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT6_P02_6_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT6_P02_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT70_P20_14_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT70_P20_14_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT71_P15_0_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT71_P15_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT7_P02_7_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT7_P02_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT81_P14_1_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT81_P14_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT84_P14_4_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT84_P14_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT92_P13_1_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT92_P13_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT93_P13_2_OUT;  /**< \brief IfxGtm_TOM0_7_TOUT93_P13_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT0_P02_0_OUT;  /**< \brief IfxGtm_TOM0_8_TOUT0_P02_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT48_P22_1_OUT;  /**< \brief IfxGtm_TOM0_8_TOUT48_P22_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT68_P20_12_OUT;  /**< \brief IfxGtm_TOM0_8_TOUT68_P20_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT8_P02_8_OUT;  /**< \brief IfxGtm_TOM0_8_TOUT8_P02_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT94_P13_3_OUT;  /**< \brief IfxGtm_TOM0_8_TOUT94_P13_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT95_P11_2_OUT;  /**< \brief IfxGtm_TOM0_8_TOUT95_P11_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT9_P00_0_OUT;  /**< \brief IfxGtm_TOM0_8_TOUT9_P00_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT10_P00_1_OUT;  /**< \brief IfxGtm_TOM0_9_TOUT10_P00_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT11_P00_2_OUT;  /**< \brief IfxGtm_TOM0_9_TOUT11_P00_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT1_P02_1_OUT;  /**< \brief IfxGtm_TOM0_9_TOUT1_P02_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT47_P22_0_OUT;  /**< \brief IfxGtm_TOM0_9_TOUT47_P22_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT69_P20_13_OUT;  /**< \brief IfxGtm_TOM0_9_TOUT69_P20_13_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT18_P00_9_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT18_P00_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT26_P33_4_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT26_P33_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT32_P33_10_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT32_P33_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT48_P22_1_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT48_P22_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT53_P21_2_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT53_P21_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT68_P20_12_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT68_P20_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT76_P15_5_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT76_P15_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT77_P15_6_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT77_P15_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT85_P14_5_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT85_P14_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT8_P02_8_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT8_P02_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT94_P13_3_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT94_P13_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT9_P00_0_OUT;  /**< \brief IfxGtm_TOM1_0_TOUT9_P00_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_10_TOUT104_P10_2_OUT;  /**< \brief IfxGtm_TOM1_10_TOUT104_P10_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_10_TOUT107_P10_5_OUT;  /**< \brief IfxGtm_TOM1_10_TOUT107_P10_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_10_TOUT2_P02_2_OUT;  /**< \brief IfxGtm_TOM1_10_TOUT2_P02_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_10_TOUT62_P20_6_OUT;  /**< \brief IfxGtm_TOM1_10_TOUT62_P20_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_11_TOUT105_P10_3_OUT;  /**< \brief IfxGtm_TOM1_11_TOUT105_P10_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_11_TOUT108_P10_6_OUT;  /**< \brief IfxGtm_TOM1_11_TOUT108_P10_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_11_TOUT3_P02_3_OUT;  /**< \brief IfxGtm_TOM1_11_TOUT3_P02_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_11_TOUT63_P20_7_OUT;  /**< \brief IfxGtm_TOM1_11_TOUT63_P20_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_12_TOUT112_P34_0_OUT;  /**< \brief IfxGtm_TOM1_12_TOUT112_P34_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_12_TOUT34_P33_12_OUT;  /**< \brief IfxGtm_TOM1_12_TOUT34_P33_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_12_TOUT4_P02_4_OUT;  /**< \brief IfxGtm_TOM1_12_TOUT4_P02_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_12_TOUT61_P20_3_OUT;  /**< \brief IfxGtm_TOM1_12_TOUT61_P20_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_13_TOUT113_P34_1_OUT;  /**< \brief IfxGtm_TOM1_13_TOUT113_P34_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_13_TOUT5_P02_5_OUT;  /**< \brief IfxGtm_TOM1_13_TOUT5_P02_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_13_TOUT65_P20_9_OUT;  /**< \brief IfxGtm_TOM1_13_TOUT65_P20_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_14_TOUT114_P34_2_OUT;  /**< \brief IfxGtm_TOM1_14_TOUT114_P34_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_14_TOUT66_P20_10_OUT;  /**< \brief IfxGtm_TOM1_14_TOUT66_P20_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_14_TOUT6_P02_6_OUT;  /**< \brief IfxGtm_TOM1_14_TOUT6_P02_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_15_TOUT115_P34_3_OUT;  /**< \brief IfxGtm_TOM1_15_TOUT115_P34_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_15_TOUT67_P20_11_OUT;  /**< \brief IfxGtm_TOM1_15_TOUT67_P20_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_15_TOUT7_P02_7_OUT;  /**< \brief IfxGtm_TOM1_15_TOUT7_P02_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT10_P00_1_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT10_P00_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT11_P00_2_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT11_P00_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT27_P33_5_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT27_P33_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT31_P33_9_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT31_P33_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT47_P22_0_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT47_P22_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT54_P21_3_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT54_P21_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT69_P20_13_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT69_P20_13_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT78_P15_7_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT78_P15_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT86_P14_6_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT86_P14_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT95_P11_2_OUT;  /**< \brief IfxGtm_TOM1_1_TOUT95_P11_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT12_P00_3_OUT;  /**< \brief IfxGtm_TOM1_2_TOUT12_P00_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT28_P33_6_OUT;  /**< \brief IfxGtm_TOM1_2_TOUT28_P33_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT33_P33_11_OUT;  /**< \brief IfxGtm_TOM1_2_TOUT33_P33_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT55_P21_4_OUT;  /**< \brief IfxGtm_TOM1_2_TOUT55_P21_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT70_P20_14_OUT;  /**< \brief IfxGtm_TOM1_2_TOUT70_P20_14_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT79_P15_8_OUT;  /**< \brief IfxGtm_TOM1_2_TOUT79_P15_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT96_P11_3_OUT;  /**< \brief IfxGtm_TOM1_2_TOUT96_P11_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT13_P00_4_OUT;  /**< \brief IfxGtm_TOM1_3_TOUT13_P00_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT21_P00_12_OUT;  /**< \brief IfxGtm_TOM1_3_TOUT21_P00_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT29_P33_7_OUT;  /**< \brief IfxGtm_TOM1_3_TOUT29_P33_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT49_P22_2_OUT;  /**< \brief IfxGtm_TOM1_3_TOUT49_P22_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT56_P21_5_OUT;  /**< \brief IfxGtm_TOM1_3_TOUT56_P21_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT71_P15_0_OUT;  /**< \brief IfxGtm_TOM1_3_TOUT71_P15_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT80_P14_0_OUT;  /**< \brief IfxGtm_TOM1_3_TOUT80_P14_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT97_P11_6_OUT;  /**< \brief IfxGtm_TOM1_3_TOUT97_P11_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT0_P02_0_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT0_P02_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT10_P00_1_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT10_P00_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT110_P11_8_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT110_P11_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT14_P00_5_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT14_P00_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT1_P02_1_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT1_P02_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT22_P33_0_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT22_P33_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT30_P33_8_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT30_P33_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT50_P22_3_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT50_P22_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT53_P21_2_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT53_P21_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT54_P21_3_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT54_P21_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT57_P21_6_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT57_P21_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT64_P20_8_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT64_P20_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT65_P20_9_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT65_P20_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT72_P15_1_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT72_P15_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT73_P15_2_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT73_P15_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT81_P14_1_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT81_P14_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT8_P02_8_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT8_P02_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT94_P13_3_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT94_P13_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT95_P11_2_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT95_P11_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT98_P11_9_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT98_P11_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT9_P00_0_OUT;  /**< \brief IfxGtm_TOM1_4_TOUT9_P00_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT11_P00_2_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT11_P00_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT12_P00_3_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT12_P00_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT15_P00_6_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT15_P00_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT23_P33_1_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT23_P33_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT27_P33_5_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT27_P33_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT28_P33_6_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT28_P33_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT2_P02_2_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT2_P02_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT3_P02_3_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT3_P02_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT55_P21_4_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT55_P21_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT56_P21_5_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT56_P21_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT58_P21_7_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT58_P21_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT66_P20_10_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT66_P20_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT67_P20_11_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT67_P20_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT73_P15_2_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT73_P15_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT74_P15_3_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT74_P15_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT76_P15_5_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT76_P15_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT82_P14_2_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT82_P14_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT91_P13_0_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT91_P13_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT96_P11_3_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT96_P11_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT97_P11_6_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT97_P11_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT99_P11_10_OUT;  /**< \brief IfxGtm_TOM1_5_TOUT99_P11_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT100_P11_11_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT100_P11_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT13_P00_4_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT13_P00_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT14_P00_5_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT14_P00_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT16_P00_7_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT16_P00_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT24_P33_2_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT24_P33_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT29_P33_7_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT29_P33_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT30_P33_8_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT30_P33_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT48_P22_1_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT48_P22_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT49_P22_2_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT49_P22_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT4_P02_4_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT4_P02_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT59_P20_0_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT59_P20_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT5_P02_5_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT5_P02_5_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT68_P20_12_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT68_P20_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT69_P20_13_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT69_P20_13_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT74_P15_3_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT74_P15_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT80_P14_0_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT80_P14_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT82_P14_2_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT82_P14_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT83_P14_3_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT83_P14_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT91_P13_0_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT91_P13_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT92_P13_1_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT92_P13_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT98_P11_9_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT98_P11_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT99_P11_10_OUT;  /**< \brief IfxGtm_TOM1_6_TOUT99_P11_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT100_P11_11_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT100_P11_11_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT101_P11_12_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT101_P11_12_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT111_P22_4_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT111_P22_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT15_P00_6_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT15_P00_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT16_P00_7_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT16_P00_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT17_P00_8_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT17_P00_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT25_P33_3_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT25_P33_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT31_P33_9_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT31_P33_9_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT32_P33_10_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT32_P33_10_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT50_P22_3_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT50_P22_3_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT64_P20_8_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT64_P20_8_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT6_P02_6_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT6_P02_6_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT70_P20_14_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT70_P20_14_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT71_P15_0_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT71_P15_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT75_P15_4_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT75_P15_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT7_P02_7_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT7_P02_7_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT81_P14_1_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT81_P14_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT84_P14_4_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT84_P14_4_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT92_P13_1_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT92_P13_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT93_P13_2_OUT;  /**< \brief IfxGtm_TOM1_7_TOUT93_P13_2_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_8_TOUT0_P02_0_OUT;  /**< \brief IfxGtm_TOM1_8_TOUT0_P02_0_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_9_TOUT103_P10_1_OUT;  /**< \brief IfxGtm_TOM1_9_TOUT103_P10_1_OUT */
IFX_EXTERN IfxGtm_Tom_ToutMap IfxGtm_TOM1_9_TOUT1_P02_1_OUT;  /**< \brief IfxGtm_TOM1_9_TOUT1_P02_1_OUT */

/** \} */

#endif /* IFXGTM_PINMAP_H */

/**
 * \file IfxGtm_PinMap.c
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
 */

#include "IfxGtm_PinMap.h"

IfxGtm_Clk_Out IfxGtm_CLK0_P23_1_OUT = {&MODULE_GTM, {&MODULE_P23, 1}, IfxPort_OutputIdx_alt4};
IfxGtm_Clk_Out IfxGtm_CLK1_P33_10_OUT = {&MODULE_GTM, {&MODULE_P33,10}, IfxPort_OutputIdx_alt5};
IfxGtm_Clk_Out IfxGtm_CLK2_P11_12_OUT = {&MODULE_GTM, {&MODULE_P11,12}, IfxPort_OutputIdx_alt3};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN0_P02_0_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P02, 0}, 2};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN18_P00_9_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P00, 9}, 1};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN26_P33_4_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P33, 4}, 10};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN32_P33_10_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P33,10}, 9};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN34_P33_12_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P33,12}, 12};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN48_P22_1_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P22, 1}, 8};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN53_P21_2_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P21, 2}, 7};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN77_P15_6_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P15, 6}, 6};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN85_P14_5_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P14, 5}, 4};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN87_P14_7_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P14, 7}, 5};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN8_P02_8_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P02, 8}, 11};
IfxGtm_Tim_TinMap IfxGtm_TIM0_0_TIN9_P00_0_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_0, {&MODULE_P00, 0}, 13};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN103_P10_1_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P10, 1}, 3};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN10_P00_1_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P00, 1}, 10};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN11_P00_2_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P00, 2}, 11};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN1_P02_1_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P02, 1}, 2};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN27_P33_5_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P33, 5}, 8};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN31_P33_9_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P33, 9}, 9};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN47_P22_0_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P22, 0}, 7};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN54_P21_3_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P21, 3}, 6};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN78_P15_7_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P15, 7}, 5};
IfxGtm_Tim_TinMap IfxGtm_TIM0_1_TIN86_P14_6_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_1, {&MODULE_P14, 6}, 4};
IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN104_P10_2_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_2, {&MODULE_P10, 2}, 3};
IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN107_P10_5_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_2, {&MODULE_P10, 5}, 4};
IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN28_P33_6_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_2, {&MODULE_P33, 6}, 9};
IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN2_P02_2_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_2, {&MODULE_P02, 2}, 2};
IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN33_P33_11_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_2, {&MODULE_P33,11}, 8};
IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN55_P21_4_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_2, {&MODULE_P21, 4}, 6};
IfxGtm_Tim_TinMap IfxGtm_TIM0_2_TIN79_P15_8_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_2, {&MODULE_P15, 8}, 5};
IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN105_P10_3_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_3, {&MODULE_P10, 3}, 3};
IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN108_P10_6_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_3, {&MODULE_P10, 6}, 4};
IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN21_P00_12_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_3, {&MODULE_P00,12}, 1};
IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN29_P33_7_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_3, {&MODULE_P33, 7}, 9};
IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN3_P02_3_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_3, {&MODULE_P02, 3}, 2};
IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN49_P22_2_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_3, {&MODULE_P22, 2}, 7};
IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN56_P21_5_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_3, {&MODULE_P21, 5}, 6};
IfxGtm_Tim_TinMap IfxGtm_TIM0_3_TIN80_P14_0_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_3, {&MODULE_P14, 0}, 5};
IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN22_P33_0_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_4, {&MODULE_P33, 0}, 6};
IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN30_P33_8_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_4, {&MODULE_P33, 8}, 7};
IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN4_P02_4_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_4, {&MODULE_P02, 4}, 1};
IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN50_P22_3_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_4, {&MODULE_P22, 3}, 4};
IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN57_P21_6_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_4, {&MODULE_P21, 6}, 8};
IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN61_P20_3_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_4, {&MODULE_P20, 3}, 9};
IfxGtm_Tim_TinMap IfxGtm_TIM0_4_TIN81_P14_1_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_4, {&MODULE_P14, 1}, 3};
IfxGtm_Tim_TinMap IfxGtm_TIM0_5_TIN23_P33_1_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_5, {&MODULE_P33, 1}, 6};
IfxGtm_Tim_TinMap IfxGtm_TIM0_5_TIN58_P21_7_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_5, {&MODULE_P21, 7}, 7};
IfxGtm_Tim_TinMap IfxGtm_TIM0_5_TIN5_P02_5_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_5, {&MODULE_P02, 5}, 1};
IfxGtm_Tim_TinMap IfxGtm_TIM0_5_TIN82_P14_2_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_5, {&MODULE_P14, 2}, 3};
IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN24_P33_2_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_6, {&MODULE_P33, 2}, 6};
IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN42_P23_1_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_6, {&MODULE_P23, 1}, 4};
IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN59_P20_0_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_6, {&MODULE_P20, 0}, 7};
IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN62_P20_6_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_6, {&MODULE_P20, 6}, 9};
IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN6_P02_6_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_6, {&MODULE_P02, 6}, 1};
IfxGtm_Tim_TinMap IfxGtm_TIM0_6_TIN83_P14_3_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_6, {&MODULE_P14, 3}, 3};
IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN25_P33_3_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_7, {&MODULE_P33, 3}, 6};
IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN63_P20_7_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_7, {&MODULE_P20, 7}, 7};
IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN64_P20_8_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_7, {&MODULE_P20, 8}, 3};
IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN7_P02_7_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_7, {&MODULE_P02, 7}, 1};
IfxGtm_Tim_TinMap IfxGtm_TIM0_7_TIN84_P14_4_IN = {IfxGtm_Tim_0, IfxGtm_Tim_Ch_7, {&MODULE_P14, 4}, 2};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT18_P00_9_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_a, 18, {&MODULE_P00, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT26_P33_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_a, 26, {&MODULE_P33, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT32_P33_10_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_a, 32, {&MODULE_P33,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT53_P21_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_a, 53, {&MODULE_P21, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT76_P15_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_a, 76, {&MODULE_P15, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT77_P15_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_a, 77, {&MODULE_P15, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT85_P14_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_a, 85, {&MODULE_P14, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_0_TOUT87_P14_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_a, 87, {&MODULE_P14, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT12_P00_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_10, IfxGtm_ToutSel_a, 12, {&MODULE_P00, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT2_P02_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_10, IfxGtm_ToutSel_a, 2, {&MODULE_P02, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT62_P20_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_10, IfxGtm_ToutSel_b, 62, {&MODULE_P20, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT70_P20_14_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_10, IfxGtm_ToutSel_b, 70, {&MODULE_P20,14}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_10_TOUT96_P11_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_10, IfxGtm_ToutSel_a, 96, {&MODULE_P11, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT13_P00_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_a, 13, {&MODULE_P00, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT3_P02_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_a, 3, {&MODULE_P02, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT49_P22_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_a, 49, {&MODULE_P22, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT63_P20_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_b, 63, {&MODULE_P20, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT71_P15_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_b, 71, {&MODULE_P15, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_11_TOUT97_P11_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_a, 97, {&MODULE_P11, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT14_P00_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_a, 14, {&MODULE_P00, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT34_P33_12_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_b, 34, {&MODULE_P33,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT4_P02_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_a, 4, {&MODULE_P02, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT50_P22_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_a, 50, {&MODULE_P22, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT72_P15_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_b, 72, {&MODULE_P15, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_12_TOUT98_P11_9_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_a, 98, {&MODULE_P11, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT15_P00_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_13, IfxGtm_ToutSel_a, 15, {&MODULE_P00, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT5_P02_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_13, IfxGtm_ToutSel_a, 5, {&MODULE_P02, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT65_P20_9_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_13, IfxGtm_ToutSel_b, 65, {&MODULE_P20, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT73_P15_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_13, IfxGtm_ToutSel_b, 73, {&MODULE_P15, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_13_TOUT99_P11_10_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_13, IfxGtm_ToutSel_a, 99, {&MODULE_P11,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT100_P11_11_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_14, IfxGtm_ToutSel_a, 100, {&MODULE_P11,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT16_P00_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_14, IfxGtm_ToutSel_a, 16, {&MODULE_P00, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT66_P20_10_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_14, IfxGtm_ToutSel_b, 66, {&MODULE_P20,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT6_P02_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_14, IfxGtm_ToutSel_a, 6, {&MODULE_P02, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_14_TOUT74_P15_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_14, IfxGtm_ToutSel_b, 74, {&MODULE_P15, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT101_P11_12_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_15, IfxGtm_ToutSel_a, 101, {&MODULE_P11,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT17_P00_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_15, IfxGtm_ToutSel_a, 17, {&MODULE_P00, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT42_P23_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_15, IfxGtm_ToutSel_b, 42, {&MODULE_P23, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT67_P20_11_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_15, IfxGtm_ToutSel_b, 67, {&MODULE_P20,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT75_P15_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_15, IfxGtm_ToutSel_b, 75, {&MODULE_P15, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_15_TOUT7_P02_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_15, IfxGtm_ToutSel_a, 7, {&MODULE_P02, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT103_P10_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_a, 103, {&MODULE_P10, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT27_P33_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_a, 27, {&MODULE_P33, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT31_P33_9_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_a, 31, {&MODULE_P33, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT54_P21_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_a, 54, {&MODULE_P21, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT78_P15_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_a, 78, {&MODULE_P15, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_1_TOUT86_P14_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_a, 86, {&MODULE_P14, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT104_P10_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_a, 104, {&MODULE_P10, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT107_P10_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_a, 107, {&MODULE_P10, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT28_P33_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_a, 28, {&MODULE_P33, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT33_P33_11_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_a, 33, {&MODULE_P33,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT55_P21_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_a, 55, {&MODULE_P21, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT79_P15_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_a, 79, {&MODULE_P15, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_2_TOUT88_P14_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_a, 88, {&MODULE_P14, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT105_P10_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_a, 105, {&MODULE_P10, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT108_P10_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_a, 108, {&MODULE_P10, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT21_P00_12_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_a, 21, {&MODULE_P00,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT29_P33_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_a, 29, {&MODULE_P33, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT56_P21_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_a, 56, {&MODULE_P21, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_3_TOUT80_P14_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_a, 80, {&MODULE_P14, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT0_P02_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 0, {&MODULE_P02, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT10_P00_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 10, {&MODULE_P00, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT110_P11_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 110, {&MODULE_P11, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT1_P02_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 1, {&MODULE_P02, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT22_P33_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_a, 22, {&MODULE_P33, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT30_P33_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_a, 30, {&MODULE_P33, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT53_P21_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 53, {&MODULE_P21, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT54_P21_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 54, {&MODULE_P21, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT57_P21_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_a, 57, {&MODULE_P21, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT61_P20_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_b, 61, {&MODULE_P20, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT64_P20_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 64, {&MODULE_P20, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT65_P20_9_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 65, {&MODULE_P20, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT72_P15_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 72, {&MODULE_P15, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT73_P15_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 73, {&MODULE_P15, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT81_P14_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_a, 81, {&MODULE_P14, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT8_P02_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 8, {&MODULE_P02, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT94_P13_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 94, {&MODULE_P13, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT95_P11_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 95, {&MODULE_P11, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_4_TOUT9_P00_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_c, 9, {&MODULE_P00, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT11_P00_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 11, {&MODULE_P00, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT12_P00_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 12, {&MODULE_P00, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT23_P33_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_a, 23, {&MODULE_P33, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT27_P33_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 27, {&MODULE_P33, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT28_P33_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 28, {&MODULE_P33, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT2_P02_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 2, {&MODULE_P02, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT3_P02_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 3, {&MODULE_P02, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT55_P21_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 55, {&MODULE_P21, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT56_P21_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 56, {&MODULE_P21, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT58_P21_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_a, 58, {&MODULE_P21, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT66_P20_10_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 66, {&MODULE_P20,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT67_P20_11_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 67, {&MODULE_P20,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT74_P15_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 74, {&MODULE_P15, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT76_P15_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 76, {&MODULE_P15, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT82_P14_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_a, 82, {&MODULE_P14, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT91_P13_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_a, 91, {&MODULE_P13, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT96_P11_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 96, {&MODULE_P11, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_5_TOUT97_P11_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_c, 97, {&MODULE_P11, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT13_P00_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 13, {&MODULE_P00, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT14_P00_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 14, {&MODULE_P00, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT24_P33_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_a, 24, {&MODULE_P33, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT29_P33_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 29, {&MODULE_P33, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT30_P33_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 30, {&MODULE_P33, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT42_P23_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_a, 42, {&MODULE_P23, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT48_P22_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 48, {&MODULE_P22, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT49_P22_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 49, {&MODULE_P22, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT4_P02_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 4, {&MODULE_P02, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT59_P20_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_a, 59, {&MODULE_P20, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT5_P02_5_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 5, {&MODULE_P02, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT68_P20_12_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 68, {&MODULE_P20,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT69_P20_13_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 69, {&MODULE_P20,13}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT80_P14_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 80, {&MODULE_P14, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT82_P14_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 82, {&MODULE_P14, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT83_P14_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_a, 83, {&MODULE_P14, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT91_P13_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 91, {&MODULE_P13, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT92_P13_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_a, 92, {&MODULE_P13, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT98_P11_9_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 98, {&MODULE_P11, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_6_TOUT99_P11_10_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_c, 99, {&MODULE_P11,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT100_P11_11_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 100, {&MODULE_P11,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT101_P11_12_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 101, {&MODULE_P11,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT111_P22_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 111, {&MODULE_P22, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT15_P00_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 15, {&MODULE_P00, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT16_P00_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 16, {&MODULE_P00, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT25_P33_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_a, 25, {&MODULE_P33, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT31_P33_9_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 31, {&MODULE_P33, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT32_P33_10_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 32, {&MODULE_P33,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT50_P22_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 50, {&MODULE_P22, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT64_P20_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_b, 64, {&MODULE_P20, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT6_P02_6_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 6, {&MODULE_P02, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT70_P20_14_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 70, {&MODULE_P20,14}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT71_P15_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 71, {&MODULE_P15, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT7_P02_7_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 7, {&MODULE_P02, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT81_P14_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 81, {&MODULE_P14, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT84_P14_4_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_a, 84, {&MODULE_P14, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT92_P13_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_c, 92, {&MODULE_P13, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_7_TOUT93_P13_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_a, 93, {&MODULE_P13, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT0_P02_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_8, IfxGtm_ToutSel_a, 0, {&MODULE_P02, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT48_P22_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_8, IfxGtm_ToutSel_a, 48, {&MODULE_P22, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT68_P20_12_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_8, IfxGtm_ToutSel_b, 68, {&MODULE_P20,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT8_P02_8_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_8, IfxGtm_ToutSel_a, 8, {&MODULE_P02, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT94_P13_3_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_8, IfxGtm_ToutSel_a, 94, {&MODULE_P13, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT95_P11_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_8, IfxGtm_ToutSel_a, 95, {&MODULE_P11, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_8_TOUT9_P00_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_8, IfxGtm_ToutSel_a, 9, {&MODULE_P00, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT10_P00_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_9, IfxGtm_ToutSel_a, 10, {&MODULE_P00, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT11_P00_2_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_9, IfxGtm_ToutSel_a, 11, {&MODULE_P00, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT1_P02_1_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_9, IfxGtm_ToutSel_a, 1, {&MODULE_P02, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT47_P22_0_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_9, IfxGtm_ToutSel_a, 47, {&MODULE_P22, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM0_9_TOUT69_P20_13_OUT = {IfxGtm_Tom_0, IfxGtm_Tom_Ch_9, IfxGtm_ToutSel_b, 69, {&MODULE_P20,13}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT18_P00_9_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 18, {&MODULE_P00, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT26_P33_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 26, {&MODULE_P33, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT32_P33_10_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 32, {&MODULE_P33,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT48_P22_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 48, {&MODULE_P22, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT53_P21_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 53, {&MODULE_P21, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT68_P20_12_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_a, 68, {&MODULE_P20,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT76_P15_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 76, {&MODULE_P15, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT77_P15_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 77, {&MODULE_P15, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT85_P14_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 85, {&MODULE_P14, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT8_P02_8_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 8, {&MODULE_P02, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT94_P13_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 94, {&MODULE_P13, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_0_TOUT9_P00_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_0, IfxGtm_ToutSel_b, 9, {&MODULE_P00, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_10_TOUT104_P10_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_10, IfxGtm_ToutSel_b, 104, {&MODULE_P10, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_10_TOUT107_P10_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_10, IfxGtm_ToutSel_b, 107, {&MODULE_P10, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_10_TOUT2_P02_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_10, IfxGtm_ToutSel_b, 2, {&MODULE_P02, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_10_TOUT62_P20_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_10, IfxGtm_ToutSel_a, 62, {&MODULE_P20, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_11_TOUT105_P10_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_b, 105, {&MODULE_P10, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_11_TOUT108_P10_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_b, 108, {&MODULE_P10, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_11_TOUT3_P02_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_b, 3, {&MODULE_P02, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_11_TOUT63_P20_7_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_11, IfxGtm_ToutSel_a, 63, {&MODULE_P20, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_12_TOUT112_P34_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_a, 112, {&MODULE_P34, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_12_TOUT34_P33_12_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_a, 34, {&MODULE_P33,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_12_TOUT4_P02_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_b, 4, {&MODULE_P02, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_12_TOUT61_P20_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_12, IfxGtm_ToutSel_a, 61, {&MODULE_P20, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_13_TOUT113_P34_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_13, IfxGtm_ToutSel_a, 113, {&MODULE_P34, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_13_TOUT5_P02_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_13, IfxGtm_ToutSel_b, 5, {&MODULE_P02, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_13_TOUT65_P20_9_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_13, IfxGtm_ToutSel_a, 65, {&MODULE_P20, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_14_TOUT114_P34_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_14, IfxGtm_ToutSel_a, 114, {&MODULE_P34, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_14_TOUT66_P20_10_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_14, IfxGtm_ToutSel_a, 66, {&MODULE_P20,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_14_TOUT6_P02_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_14, IfxGtm_ToutSel_b, 6, {&MODULE_P02, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_15_TOUT115_P34_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_15, IfxGtm_ToutSel_a, 115, {&MODULE_P34, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_15_TOUT67_P20_11_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_15, IfxGtm_ToutSel_a, 67, {&MODULE_P20,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_15_TOUT7_P02_7_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_15, IfxGtm_ToutSel_b, 7, {&MODULE_P02, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT10_P00_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_b, 10, {&MODULE_P00, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT11_P00_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_b, 11, {&MODULE_P00, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT27_P33_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_b, 27, {&MODULE_P33, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT31_P33_9_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_b, 31, {&MODULE_P33, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT47_P22_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_b, 47, {&MODULE_P22, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT54_P21_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_b, 54, {&MODULE_P21, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT69_P20_13_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_a, 69, {&MODULE_P20,13}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT78_P15_7_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_b, 78, {&MODULE_P15, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT86_P14_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_b, 86, {&MODULE_P14, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_1_TOUT95_P11_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_1, IfxGtm_ToutSel_b, 95, {&MODULE_P11, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT12_P00_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_b, 12, {&MODULE_P00, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT28_P33_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_b, 28, {&MODULE_P33, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT33_P33_11_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_b, 33, {&MODULE_P33,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT55_P21_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_b, 55, {&MODULE_P21, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT70_P20_14_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_a, 70, {&MODULE_P20,14}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT79_P15_8_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_b, 79, {&MODULE_P15, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_2_TOUT96_P11_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_2, IfxGtm_ToutSel_b, 96, {&MODULE_P11, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT13_P00_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_b, 13, {&MODULE_P00, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT21_P00_12_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_b, 21, {&MODULE_P00,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT29_P33_7_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_b, 29, {&MODULE_P33, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT49_P22_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_b, 49, {&MODULE_P22, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT56_P21_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_b, 56, {&MODULE_P21, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT71_P15_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_a, 71, {&MODULE_P15, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT80_P14_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_b, 80, {&MODULE_P14, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_3_TOUT97_P11_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_3, IfxGtm_ToutSel_b, 97, {&MODULE_P11, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT0_P02_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 0, {&MODULE_P02, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT10_P00_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 10, {&MODULE_P00, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT110_P11_8_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 110, {&MODULE_P11, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT14_P00_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_b, 14, {&MODULE_P00, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT1_P02_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 1, {&MODULE_P02, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT22_P33_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_b, 22, {&MODULE_P33, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT30_P33_8_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_b, 30, {&MODULE_P33, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT50_P22_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_b, 50, {&MODULE_P22, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT53_P21_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 53, {&MODULE_P21, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT54_P21_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 54, {&MODULE_P21, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT57_P21_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_b, 57, {&MODULE_P21, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT64_P20_8_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 64, {&MODULE_P20, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT65_P20_9_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 65, {&MODULE_P20, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT72_P15_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_a, 72, {&MODULE_P15, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT73_P15_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 73, {&MODULE_P15, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT81_P14_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_b, 81, {&MODULE_P14, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT8_P02_8_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 8, {&MODULE_P02, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT94_P13_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 94, {&MODULE_P13, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT95_P11_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 95, {&MODULE_P11, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT98_P11_9_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_b, 98, {&MODULE_P11, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_4_TOUT9_P00_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_4, IfxGtm_ToutSel_d, 9, {&MODULE_P00, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT11_P00_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 11, {&MODULE_P00, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT12_P00_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 12, {&MODULE_P00, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT15_P00_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_b, 15, {&MODULE_P00, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT23_P33_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_b, 23, {&MODULE_P33, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT27_P33_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 27, {&MODULE_P33, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT28_P33_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 28, {&MODULE_P33, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT2_P02_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 2, {&MODULE_P02, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT3_P02_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 3, {&MODULE_P02, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT55_P21_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 55, {&MODULE_P21, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT56_P21_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 56, {&MODULE_P21, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT58_P21_7_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_b, 58, {&MODULE_P21, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT66_P20_10_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 66, {&MODULE_P20,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT67_P20_11_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 67, {&MODULE_P20,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT73_P15_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_a, 73, {&MODULE_P15, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT74_P15_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 74, {&MODULE_P15, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT76_P15_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 76, {&MODULE_P15, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT82_P14_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_b, 82, {&MODULE_P14, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT91_P13_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_b, 91, {&MODULE_P13, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT96_P11_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 96, {&MODULE_P11, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT97_P11_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_d, 97, {&MODULE_P11, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_5_TOUT99_P11_10_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_5, IfxGtm_ToutSel_b, 99, {&MODULE_P11,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT100_P11_11_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_b, 100, {&MODULE_P11,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT13_P00_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 13, {&MODULE_P00, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT14_P00_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 14, {&MODULE_P00, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT16_P00_7_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_b, 16, {&MODULE_P00, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT24_P33_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_b, 24, {&MODULE_P33, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT29_P33_7_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 29, {&MODULE_P33, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT30_P33_8_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 30, {&MODULE_P33, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT48_P22_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 48, {&MODULE_P22, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT49_P22_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 49, {&MODULE_P22, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT4_P02_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 4, {&MODULE_P02, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT59_P20_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_b, 59, {&MODULE_P20, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT5_P02_5_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 5, {&MODULE_P02, 5}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT68_P20_12_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 68, {&MODULE_P20,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT69_P20_13_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 69, {&MODULE_P20,13}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT74_P15_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_a, 74, {&MODULE_P15, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT80_P14_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 80, {&MODULE_P14, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT82_P14_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 82, {&MODULE_P14, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT83_P14_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_b, 83, {&MODULE_P14, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT91_P13_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 91, {&MODULE_P13, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT92_P13_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_b, 92, {&MODULE_P13, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT98_P11_9_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 98, {&MODULE_P11, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_6_TOUT99_P11_10_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_6, IfxGtm_ToutSel_d, 99, {&MODULE_P11,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT100_P11_11_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 100, {&MODULE_P11,11}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT101_P11_12_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_b, 101, {&MODULE_P11,12}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT111_P22_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 111, {&MODULE_P22, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT15_P00_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 15, {&MODULE_P00, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT16_P00_7_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 16, {&MODULE_P00, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT17_P00_8_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_b, 17, {&MODULE_P00, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT25_P33_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_b, 25, {&MODULE_P33, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT31_P33_9_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 31, {&MODULE_P33, 9}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT32_P33_10_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 32, {&MODULE_P33,10}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT50_P22_3_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 50, {&MODULE_P22, 3}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT64_P20_8_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_a, 64, {&MODULE_P20, 8}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT6_P02_6_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 6, {&MODULE_P02, 6}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT70_P20_14_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 70, {&MODULE_P20,14}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT71_P15_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 71, {&MODULE_P15, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT75_P15_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_a, 75, {&MODULE_P15, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT7_P02_7_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 7, {&MODULE_P02, 7}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT81_P14_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 81, {&MODULE_P14, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT84_P14_4_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_b, 84, {&MODULE_P14, 4}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT92_P13_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_d, 92, {&MODULE_P13, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_7_TOUT93_P13_2_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_7, IfxGtm_ToutSel_b, 93, {&MODULE_P13, 2}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_8_TOUT0_P02_0_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_8, IfxGtm_ToutSel_b, 0, {&MODULE_P02, 0}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_9_TOUT103_P10_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_9, IfxGtm_ToutSel_b, 103, {&MODULE_P10, 1}, IfxPort_OutputIdx_alt1};
IfxGtm_Tom_ToutMap IfxGtm_TOM1_9_TOUT1_P02_1_OUT = {IfxGtm_Tom_1, IfxGtm_Tom_Ch_9, IfxGtm_ToutSel_b, 1, {&MODULE_P02, 1}, IfxPort_OutputIdx_alt1};

#include "IfxGtm_bf.h"

void IfxGtm_PinMap_setTimTin(IfxGtm_Tim_TinMap *config, IfxPort_InputMode inputMode)
{
    uint32 shift = config->channel * 4;

    __ldmst_c(&(MODULE_GTM.INOUTSEL.TIM[config->tim].INSEL.U), (0xFU << shift), ((uint32)config->select) << shift);

    if (inputMode != IfxPort_InputMode_undefined)
    {
        IfxPort_setPinModeInput(config->pin.port, config->pin.pinIndex, inputMode);
    }
}

void IfxGtm_PinMap_setTomTout(IfxGtm_Tom_ToutMap *config, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    uint32 outselReg = (config->toutn >> 4);
    uint32 shift = (config->toutn & 0xFU) * 2;
    uint32 outsel = (uint32)config->toutSel << shift;
    uint32 mask = 0x3U << shift;

    __ldmst_c(&(MODULE_GTM.INOUTSEL.T.OUTSEL[outselReg].U), mask, outsel);
    IfxPort_setPinModeOutput(config->pin.port, config->pin.pinIndex, outputMode, config->select);
    IfxPort_setPinPadDriver(config->pin.port, config->pin.pinIndex, padDriver);
}

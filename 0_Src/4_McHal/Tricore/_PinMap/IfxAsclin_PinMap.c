/**
 * \file IfxAsclin_PinMap.c
 * \brief ASCLIN I/O map
 * \ingroup IfxLld_Asclin
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

#include "IfxAsclin_PinMap.h"

IfxAsclin_Cts_In IfxAsclin0_CTSA_P00_12_IN = {&MODULE_ASCLIN0, {&MODULE_P00,12}, Ifx_RxSel_a};
IfxAsclin_Cts_In IfxAsclin1_CTSA_P20_7_IN = {&MODULE_ASCLIN1, {&MODULE_P20, 7}, Ifx_RxSel_a};
IfxAsclin_Cts_In IfxAsclin1_CTSB_P34_3_IN = {&MODULE_ASCLIN1, {&MODULE_P34, 3}, Ifx_RxSel_b};
IfxAsclin_Rts_Out IfxAsclin0_RTS_P00_9_OUT = {&MODULE_ASCLIN0, {&MODULE_P00, 9}, IfxPort_OutputIdx_alt3};
IfxAsclin_Rts_Out IfxAsclin0_RTS_P14_7_OUT = {&MODULE_ASCLIN0, {&MODULE_P14, 7}, IfxPort_OutputIdx_alt2};
IfxAsclin_Rts_Out IfxAsclin1_RTS_P20_6_OUT = {&MODULE_ASCLIN1, {&MODULE_P20, 6}, IfxPort_OutputIdx_alt2};
IfxAsclin_Rts_Out IfxAsclin1_RTS_P23_1_OUT = {&MODULE_ASCLIN1, {&MODULE_P23, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Rx_In IfxAsclin0_RXA_P14_1_IN = {&MODULE_ASCLIN0, {&MODULE_P14, 1}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin0_RXB_P15_3_IN = {&MODULE_ASCLIN0, {&MODULE_P15, 3}, Ifx_RxSel_b};
IfxAsclin_Rx_In IfxAsclin0_RXC_P00_1_IN = {&MODULE_ASCLIN0, {&MODULE_P00, 1}, Ifx_RxSel_c};
IfxAsclin_Rx_In IfxAsclin0_RXD_P34_2_IN = {&MODULE_ASCLIN0, {&MODULE_P34, 2}, Ifx_RxSel_d};
IfxAsclin_Rx_In IfxAsclin1_RXA_P15_1_IN = {&MODULE_ASCLIN1, {&MODULE_P15, 1}, Ifx_RxSel_a};
IfxAsclin_Rx_In IfxAsclin1_RXB_P15_5_IN = {&MODULE_ASCLIN1, {&MODULE_P15, 5}, Ifx_RxSel_b};
IfxAsclin_Rx_In IfxAsclin1_RXC_P20_9_IN = {&MODULE_ASCLIN1, {&MODULE_P20, 9}, Ifx_RxSel_c};
IfxAsclin_Rx_In IfxAsclin1_RXD_P14_8_IN = {&MODULE_ASCLIN1, {&MODULE_P14, 8}, Ifx_RxSel_d};
IfxAsclin_Rx_In IfxAsclin1_RXE_P11_10_IN = {&MODULE_ASCLIN1, {&MODULE_P11,10}, Ifx_RxSel_e};
IfxAsclin_Rx_In IfxAsclin1_RXF_P33_6_IN = {&MODULE_ASCLIN1, {&MODULE_P33, 6}, Ifx_RxSel_f};
IfxAsclin_Rx_In IfxAsclin1_RXG_P02_3_IN = {&MODULE_ASCLIN1, {&MODULE_P02, 3}, Ifx_RxSel_g};
IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P00_0_OUT = {&MODULE_ASCLIN0, {&MODULE_P00, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P00_2_OUT = {&MODULE_ASCLIN0, {&MODULE_P00, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P14_0_OUT = {&MODULE_ASCLIN0, {&MODULE_P14, 0}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P15_2_OUT = {&MODULE_ASCLIN0, {&MODULE_P15, 2}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P15_0_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 0}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P20_10_OUT = {&MODULE_ASCLIN1, {&MODULE_P20,10}, IfxPort_OutputIdx_alt6};
IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P33_11_OUT = {&MODULE_ASCLIN1, {&MODULE_P33,11}, IfxPort_OutputIdx_alt2};
IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P33_12_OUT = {&MODULE_ASCLIN1, {&MODULE_P33,12}, IfxPort_OutputIdx_alt4};
IfxAsclin_Slso_Out IfxAsclin1_SLSO_P14_3_OUT = {&MODULE_ASCLIN1, {&MODULE_P14, 3}, IfxPort_OutputIdx_alt4};
IfxAsclin_Slso_Out IfxAsclin1_SLSO_P20_8_OUT = {&MODULE_ASCLIN1, {&MODULE_P20, 8}, IfxPort_OutputIdx_alt2};
IfxAsclin_Slso_Out IfxAsclin1_SLSO_P33_10_OUT = {&MODULE_ASCLIN1, {&MODULE_P33,10}, IfxPort_OutputIdx_alt4};
IfxAsclin_Tx_Out IfxAsclin0_TX_P00_0_OUT = {&MODULE_ASCLIN0, {&MODULE_P00, 0}, IfxPort_OutputIdx_alt3};
IfxAsclin_Tx_Out IfxAsclin0_TX_P00_1_OUT = {&MODULE_ASCLIN0, {&MODULE_P00, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin0_TX_P14_0_OUT = {&MODULE_ASCLIN0, {&MODULE_P14, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin0_TX_P14_1_OUT = {&MODULE_ASCLIN0, {&MODULE_P14, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin0_TX_P15_2_OUT = {&MODULE_ASCLIN0, {&MODULE_P15, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin0_TX_P15_3_OUT = {&MODULE_ASCLIN0, {&MODULE_P15, 3}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin0_TX_P34_1_OUT = {&MODULE_ASCLIN0, {&MODULE_P34, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P02_2_OUT = {&MODULE_ASCLIN1, {&MODULE_P02, 2}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P11_12_OUT = {&MODULE_ASCLIN1, {&MODULE_P11,12}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P15_0_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 0}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P15_1_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 1}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P15_4_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 4}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P15_5_OUT = {&MODULE_ASCLIN1, {&MODULE_P15, 5}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P20_10_OUT = {&MODULE_ASCLIN1, {&MODULE_P20,10}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P33_12_OUT = {&MODULE_ASCLIN1, {&MODULE_P33,12}, IfxPort_OutputIdx_alt2};
IfxAsclin_Tx_Out IfxAsclin1_TX_P33_6_OUT = {&MODULE_ASCLIN1, {&MODULE_P33, 6}, IfxPort_OutputIdx_alt4};


const IfxAsclin_Cts_In *IfxAsclin_Cts_In_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_CTS_IN_NUM_ITEMS] = {
    {
        &IfxAsclin0_CTSA_P00_12_IN,
        NULL_PTR
    },
    {
        &IfxAsclin1_CTSA_P20_7_IN,
        &IfxAsclin1_CTSB_P34_3_IN
    }
};

const IfxAsclin_Rts_Out *IfxAsclin_Rts_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_RTS_OUT_NUM_ITEMS] = {
    {
        &IfxAsclin0_RTS_P14_7_OUT,
        &IfxAsclin0_RTS_P00_9_OUT
    },
    {
        &IfxAsclin1_RTS_P23_1_OUT,
        &IfxAsclin1_RTS_P20_6_OUT
    }
};

const IfxAsclin_Rx_In *IfxAsclin_Rx_In_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_RX_IN_NUM_ITEMS] = {
    {
        &IfxAsclin0_RXA_P14_1_IN,
        &IfxAsclin0_RXB_P15_3_IN,
        &IfxAsclin0_RXC_P00_1_IN,
        &IfxAsclin0_RXD_P34_2_IN,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin1_RXA_P15_1_IN,
        &IfxAsclin1_RXB_P15_5_IN,
        &IfxAsclin1_RXC_P20_9_IN,
        &IfxAsclin1_RXD_P14_8_IN,
        &IfxAsclin1_RXE_P11_10_IN,
        &IfxAsclin1_RXF_P33_6_IN,
        &IfxAsclin1_RXG_P02_3_IN
    }
};

const IfxAsclin_Sclk_Out *IfxAsclin_Sclk_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_SCLK_OUT_NUM_ITEMS] = {
    {
        &IfxAsclin0_SCLK_P15_2_OUT,
        &IfxAsclin0_SCLK_P14_0_OUT,
        &IfxAsclin0_SCLK_P00_0_OUT,
        &IfxAsclin0_SCLK_P00_2_OUT
    },
    {
        &IfxAsclin1_SCLK_P33_11_OUT,
        &IfxAsclin1_SCLK_P33_12_OUT,
        &IfxAsclin1_SCLK_P20_10_OUT,
        &IfxAsclin1_SCLK_P15_0_OUT
    }
};

const IfxAsclin_Slso_Out *IfxAsclin_Slso_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_SLSO_OUT_NUM_ITEMS] = {
    {
        NULL_PTR,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin1_SLSO_P14_3_OUT,
        &IfxAsclin1_SLSO_P33_10_OUT,
        &IfxAsclin1_SLSO_P20_8_OUT
    }
};

const IfxAsclin_Tx_Out *IfxAsclin_Tx_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_TX_OUT_NUM_ITEMS] = {
    {
        &IfxAsclin0_TX_P15_2_OUT,
        &IfxAsclin0_TX_P15_3_OUT,
        &IfxAsclin0_TX_P14_0_OUT,
        &IfxAsclin0_TX_P14_1_OUT,
        &IfxAsclin0_TX_P00_0_OUT,
        &IfxAsclin0_TX_P00_1_OUT,
        &IfxAsclin0_TX_P34_1_OUT,
        NULL_PTR,
        NULL_PTR
    },
    {
        &IfxAsclin1_TX_P15_1_OUT,
        &IfxAsclin1_TX_P15_4_OUT,
        &IfxAsclin1_TX_P15_5_OUT,
        &IfxAsclin1_TX_P11_12_OUT,
        &IfxAsclin1_TX_P02_2_OUT,
        &IfxAsclin1_TX_P33_6_OUT,
        &IfxAsclin1_TX_P33_12_OUT,
        &IfxAsclin1_TX_P20_10_OUT,
        &IfxAsclin1_TX_P15_0_OUT
    }
};

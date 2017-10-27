/**
 * \file IfxAsclin_PinMap.h
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
 * \defgroup IfxLld_Asclin_pinmap ASCLIN Pin Mapping
 * \ingroup IfxLld_Asclin
 */

#ifndef IFXASCLIN_PINMAP_H
#define IFXASCLIN_PINMAP_H

#include <_Reg/IfxAsclin_reg.h>
#include <_Impl/IfxAsclin_cfg.h>
#include <Port/Std/IfxPort.h>

/** \addtogroup IfxLld_Asclin_pinmap
 * \{ */

/** \brief CTS pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxAsclin_Cts_In;

/** \brief RX pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxAsclin_Rx_In;

/** \brief RTS pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxAsclin_Rts_Out;

/** \brief SCLK pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxAsclin_Sclk_Out;

/** \brief SLSO pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxAsclin_Slso_Out;

/** \brief TX pin mapping structure */
typedef const struct
{
    Ifx_ASCLIN*       module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxAsclin_Tx_Out;

IFX_EXTERN IfxAsclin_Cts_In IfxAsclin0_CTSA_P00_12_IN;  /**< \brief ASCLIN0 input (aka: ACTS0A) */
IFX_EXTERN IfxAsclin_Cts_In IfxAsclin1_CTSA_P20_7_IN;  /**< \brief ASCLIN1 input (aka: ACTS1A) */
IFX_EXTERN IfxAsclin_Cts_In IfxAsclin1_CTSB_P34_3_IN;  /**< \brief ASCLIN1 input (aka: ACTS1B) */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin0_RTS_P00_9_OUT;  /**< \brief ASCLIN0 output (aka: ARTS0) */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin0_RTS_P14_7_OUT;  /**< \brief ASCLIN0 output (aka: ARTS0) */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin1_RTS_P20_6_OUT;  /**< \brief ASCLIN1 output (aka: ARTS1) */
IFX_EXTERN IfxAsclin_Rts_Out IfxAsclin1_RTS_P23_1_OUT;  /**< \brief ASCLIN1 output (aka: ARTS1) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin0_RXA_P14_1_IN;  /**< \brief ASCLIN0 input (aka: ARX0A) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin0_RXB_P15_3_IN;  /**< \brief ASCLIN0 input (aka: ARX0B) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin0_RXC_P00_1_IN;  /**< \brief ASCLIN0 input (aka: ARX0C) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin0_RXD_P34_2_IN;  /**< \brief ASCLIN0 input (aka: ARX0D) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXA_P15_1_IN;  /**< \brief ASCLIN1 input (aka: ARX1A) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXB_P15_5_IN;  /**< \brief ASCLIN1 input (aka: ARX1B) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXC_P20_9_IN;  /**< \brief ASCLIN1 input (aka: ARX1C) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXD_P14_8_IN;  /**< \brief ASCLIN1 input (aka: ARX1D) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXE_P11_10_IN;  /**< \brief ASCLIN1 input (aka: ARX1E) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXF_P33_6_IN;  /**< \brief ASCLIN1 input (aka: ARX1F) */
IFX_EXTERN IfxAsclin_Rx_In IfxAsclin1_RXG_P02_3_IN;  /**< \brief ASCLIN1 input (aka: ARX1G) */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P00_0_OUT;  /**< \brief ASCLIN0 output (aka: ASCLK0) */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P00_2_OUT;  /**< \brief ASCLIN0 output (aka: ASCLK0) */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P14_0_OUT;  /**< \brief ASCLIN0 output (aka: ASCLK0) */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin0_SCLK_P15_2_OUT;  /**< \brief ASCLIN0 output (aka: ASCLK0) */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P15_0_OUT;  /**< \brief ASCLIN1 output (aka: ASCLK1) */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P20_10_OUT;  /**< \brief ASCLIN1 output (aka: ASCLK1) */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P33_11_OUT;  /**< \brief ASCLIN1 output (aka: ASCLK1) */
IFX_EXTERN IfxAsclin_Sclk_Out IfxAsclin1_SCLK_P33_12_OUT;  /**< \brief ASCLIN1 output (aka: ASCLK1) */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin1_SLSO_P14_3_OUT;  /**< \brief ASCLIN1 output (aka: ASLSO1) */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin1_SLSO_P20_8_OUT;  /**< \brief ASCLIN1 output (aka: ASLSO1) */
IFX_EXTERN IfxAsclin_Slso_Out IfxAsclin1_SLSO_P33_10_OUT;  /**< \brief ASCLIN1 output (aka: ASLSO1) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P00_0_OUT;  /**< \brief ASCLIN0 output (aka: ATX0) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P00_1_OUT;  /**< \brief ASCLIN0 output (aka: ATX0) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P14_0_OUT;  /**< \brief ASCLIN0 output (aka: ATX0) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P14_1_OUT;  /**< \brief ASCLIN0 output (aka: ATX0) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P15_2_OUT;  /**< \brief ASCLIN0 output (aka: ATX0) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P15_3_OUT;  /**< \brief ASCLIN0 output (aka: ATX0) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin0_TX_P34_1_OUT;  /**< \brief ASCLIN0 output (aka: ATX0) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P02_2_OUT;  /**< \brief ASCLIN1 output (aka: ATX1) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P11_12_OUT;  /**< \brief ASCLIN1 output (aka: ATX1) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P15_0_OUT;  /**< \brief ASCLIN1 output (aka: ATX1) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P15_1_OUT;  /**< \brief ASCLIN1 output (aka: ATX1) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P15_4_OUT;  /**< \brief ASCLIN1 output (aka: ATX1) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P15_5_OUT;  /**< \brief ASCLIN1 output (aka: ATX1) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P20_10_OUT;  /**< \brief ASCLIN1 output (aka: ATX1) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P33_12_OUT;  /**< \brief ASCLIN1 output (aka: ATX1) */
IFX_EXTERN IfxAsclin_Tx_Out IfxAsclin1_TX_P33_6_OUT;  /**< \brief ASCLIN1 output (aka: ATX1) */

/** \brief Table dimensions */
#define IFXASCLIN_PINMAP_NUM_MODULES 2
#define IFXASCLIN_PINMAP_CTS_IN_NUM_ITEMS 2
#define IFXASCLIN_PINMAP_RTS_OUT_NUM_ITEMS 2
#define IFXASCLIN_PINMAP_RX_IN_NUM_ITEMS 7
#define IFXASCLIN_PINMAP_SCLK_OUT_NUM_ITEMS 4
#define IFXASCLIN_PINMAP_SLSO_OUT_NUM_ITEMS 3
#define IFXASCLIN_PINMAP_TX_OUT_NUM_ITEMS 9


/** \brief IfxAsclin_Cts_In table */
IFX_EXTERN const IfxAsclin_Cts_In *IfxAsclin_Cts_In_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_CTS_IN_NUM_ITEMS];

/** \brief IfxAsclin_Rts_Out table */
IFX_EXTERN const IfxAsclin_Rts_Out *IfxAsclin_Rts_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_RTS_OUT_NUM_ITEMS];

/** \brief IfxAsclin_Rx_In table */
IFX_EXTERN const IfxAsclin_Rx_In *IfxAsclin_Rx_In_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_RX_IN_NUM_ITEMS];

/** \brief IfxAsclin_Sclk_Out table */
IFX_EXTERN const IfxAsclin_Sclk_Out *IfxAsclin_Sclk_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_SCLK_OUT_NUM_ITEMS];

/** \brief IfxAsclin_Slso_Out table */
IFX_EXTERN const IfxAsclin_Slso_Out *IfxAsclin_Slso_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_SLSO_OUT_NUM_ITEMS];

/** \brief IfxAsclin_Tx_Out table */
IFX_EXTERN const IfxAsclin_Tx_Out *IfxAsclin_Tx_Out_pinTable[IFXASCLIN_PINMAP_NUM_MODULES][IFXASCLIN_PINMAP_TX_OUT_NUM_ITEMS];

/** \} */

#endif /* IFXASCLIN_PINMAP_H */

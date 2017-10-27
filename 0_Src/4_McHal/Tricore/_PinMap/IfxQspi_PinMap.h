/**
 * \file IfxQspi_PinMap.h
 * \brief QSPI I/O map
 * \ingroup IfxLld_Qspi
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
 * \defgroup IfxLld_Qspi_pinmap QSPI Pin Mapping
 * \ingroup IfxLld_Qspi
 */

#ifndef IFXQSPI_PINMAP_H
#define IFXQSPI_PINMAP_H

#include <_Reg/IfxQspi_reg.h>
#include <_Impl/IfxQspi_cfg.h>
#include <Port/Std/IfxPort.h>

/** \addtogroup IfxLld_Qspi_pinmap
 * \{ */

/** \brief MRST pin mapping structure */
typedef const struct
{
    Ifx_QSPI*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxQspi_Mrst_In;

/** \brief MTSR pin mapping structure */
typedef const struct
{
    Ifx_QSPI*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxQspi_Mtsr_In;

/** \brief SCLK pin mapping structure */
typedef const struct
{
    Ifx_QSPI*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxQspi_Sclk_In;

/** \brief SLSI pin mapping structure */
typedef const struct
{
    Ifx_QSPI*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxQspi_Slsi_In;

/** \brief HSICIN pin mapping structure */
typedef const struct
{
    Ifx_QSPI*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxQspi_Hsicin_In;

/** \brief MRST pin mapping structure */
typedef const struct
{
    Ifx_QSPI*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxQspi_Mrst_Out;

/** \brief MTSR pin mapping structure */
typedef const struct
{
    Ifx_QSPI*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxQspi_Mtsr_Out;

/** \brief SCLK pin mapping structure */
typedef const struct
{
    Ifx_QSPI*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxQspi_Sclk_Out;

/** \brief SLSO pin mapping structure */
typedef const struct
{
    Ifx_QSPI*         module;   /**< \brief Base address */
    sint32            slsoNr;   /**< \brief Slave Select */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxQspi_Slso_Out;

IFX_EXTERN IfxQspi_Hsicin_In IfxQspi2_HSICINA_P15_2_IN;  /**< \brief QSPI2 input (aka: HSIC2INA) */
IFX_EXTERN IfxQspi_Hsicin_In IfxQspi2_HSICINB_P15_3_IN;  /**< \brief QSPI2 input (aka: HSIC2INB) */
IFX_EXTERN IfxQspi_Hsicin_In IfxQspi3_HSICINA_P33_9_IN;  /**< \brief QSPI3 input (aka: HSIC3INA) */
IFX_EXTERN IfxQspi_Hsicin_In IfxQspi3_HSICINB_P33_10_IN;  /**< \brief QSPI3 input (aka: HSIC3INB) */
IFX_EXTERN IfxQspi_Mrst_In IfxQspi0_MRSTA_P20_12_IN;  /**< \brief QSPI0 input (aka: MRST0A) */
IFX_EXTERN IfxQspi_Mrst_In IfxQspi0_MRSTD_P14_6_IN;  /**< \brief QSPI0 input (aka: MRST0D) */
IFX_EXTERN IfxQspi_Mrst_In IfxQspi1_MRSTA_P10_1_IN;  /**< \brief QSPI1 input (aka: MRST1A) */
IFX_EXTERN IfxQspi_Mrst_In IfxQspi1_MRSTB_P11_3_IN;  /**< \brief QSPI1 input (aka: MRST1B) */
IFX_EXTERN IfxQspi_Mrst_In IfxQspi2_MRSTA_P15_4_IN;  /**< \brief QSPI2 input (aka: MRST2A) */
IFX_EXTERN IfxQspi_Mrst_In IfxQspi2_MRSTB_P15_7_IN;  /**< \brief QSPI2 input (aka: MRST2B) */
IFX_EXTERN IfxQspi_Mrst_In IfxQspi2_MRSTE_P15_2_IN;  /**< \brief QSPI2 input (aka: MRST2E) */
IFX_EXTERN IfxQspi_Mrst_In IfxQspi3_MRSTA_P02_5_IN;  /**< \brief QSPI3 input (aka: MRST3A) */
IFX_EXTERN IfxQspi_Mrst_In IfxQspi3_MRSTE_P22_1_IN;  /**< \brief QSPI3 input (aka: MRST3E) */
IFX_EXTERN IfxQspi_Mrst_Out IfxQspi0_MRST_P20_12_OUT;  /**< \brief QSPI0 output (aka: MRST0) */
IFX_EXTERN IfxQspi_Mrst_Out IfxQspi1_MRST_P10_1_OUT;  /**< \brief QSPI1 output (aka: MRST1) */
IFX_EXTERN IfxQspi_Mrst_Out IfxQspi1_MRST_P10_6_OUT;  /**< \brief QSPI1 output (aka: MRST1) */
IFX_EXTERN IfxQspi_Mrst_Out IfxQspi1_MRST_P11_3_OUT;  /**< \brief QSPI1 output (aka: MRST1) */
IFX_EXTERN IfxQspi_Mrst_Out IfxQspi2_MRST_P15_4_OUT;  /**< \brief QSPI2 output (aka: MRST2) */
IFX_EXTERN IfxQspi_Mrst_Out IfxQspi2_MRST_P15_7_OUT;  /**< \brief QSPI2 output (aka: MRST2) */
IFX_EXTERN IfxQspi_Mrst_Out IfxQspi3_MRST_P02_5_OUT;  /**< \brief QSPI3 output (aka: MRST3) */
IFX_EXTERN IfxQspi_Mrst_Out IfxQspi3_MRST_P22_1_OUT;  /**< \brief QSPI3 output (aka: MRST3) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi0_MTSRA_P20_14_IN;  /**< \brief QSPI0 input (aka: MTSR0A) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi1_MTSRA_P10_3_IN;  /**< \brief QSPI1 input (aka: MTSR1A) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi1_MTSRB_P11_9_IN;  /**< \brief QSPI1 input (aka: MTSR1B) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi1_MTSRC_P11_8_IN;  /**< \brief QSPI1 input (aka: MTSR1C) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi2_MTSRA_P15_5_IN;  /**< \brief QSPI2 input (aka: MTSR2A) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi2_MTSRB_P15_6_IN;  /**< \brief QSPI2 input (aka: MTSR2B) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi3_MTSRA_P02_6_IN;  /**< \brief QSPI3 input (aka: MTSR3A) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi3_MTSRB_P10_6_IN;  /**< \brief QSPI3 input (aka: MTSR3B) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi3_MTSRD_P33_12_IN;  /**< \brief QSPI3 input (aka: MTSR3D) */
IFX_EXTERN IfxQspi_Mtsr_In IfxQspi3_MTSRE_P22_0_IN;  /**< \brief QSPI3 input (aka: MTSR3E) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi0_MTSR_P20_12_OUT;  /**< \brief QSPI0 output (aka: MTSR0) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi0_MTSR_P20_14_OUT;  /**< \brief QSPI0 output (aka: MTSR0) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi1_MTSR_P10_1_OUT;  /**< \brief QSPI1 output (aka: MTSR1) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi1_MTSR_P10_3_OUT;  /**< \brief QSPI1 output (aka: MTSR1) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi1_MTSR_P11_8_OUT;  /**< \brief QSPI1 output (aka: MTSR1) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi1_MTSR_P11_9_OUT;  /**< \brief QSPI1 output (aka: MTSR1) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi2_MTSR_P13_3_OUT;  /**< \brief QSPI2 output (aka: MTSR2) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi2_MTSR_P15_5_OUT;  /**< \brief QSPI2 output (aka: MTSR2) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi2_MTSR_P15_6_OUT;  /**< \brief QSPI2 output (aka: MTSR2) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi3_MTSR_P02_6_OUT;  /**< \brief QSPI3 output (aka: MTSR3) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi3_MTSR_P10_6_OUT;  /**< \brief QSPI3 output (aka: MTSR3) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi3_MTSR_P22_0_OUT;  /**< \brief QSPI3 output (aka: MTSR3) */
IFX_EXTERN IfxQspi_Mtsr_Out IfxQspi3_MTSR_P33_12_OUT;  /**< \brief QSPI3 output (aka: MTSR3) */
IFX_EXTERN IfxQspi_Sclk_In IfxQspi0_SCLKA_P20_11_IN;  /**< \brief QSPI0 input (aka: SCLK0A) */
IFX_EXTERN IfxQspi_Sclk_In IfxQspi1_SCLKA_P10_2_IN;  /**< \brief QSPI1 input (aka: SCLK1A) */
IFX_EXTERN IfxQspi_Sclk_In IfxQspi1_SCLKB_P11_6_IN;  /**< \brief QSPI1 input (aka: SCLK1B) */
IFX_EXTERN IfxQspi_Sclk_In IfxQspi2_SCLKA_P15_3_IN;  /**< \brief QSPI2 input (aka: SCLK2A) */
IFX_EXTERN IfxQspi_Sclk_In IfxQspi2_SCLKB_P15_8_IN;  /**< \brief QSPI2 input (aka: SCLK2B) */
IFX_EXTERN IfxQspi_Sclk_In IfxQspi3_SCLKA_P02_7_IN;  /**< \brief QSPI3 input (aka: SCLK3A) */
IFX_EXTERN IfxQspi_Sclk_In IfxQspi3_SCLKD_P33_11_IN;  /**< \brief QSPI3 input (aka: SCLK3D) */
IFX_EXTERN IfxQspi_Sclk_In IfxQspi3_SCLKE_P22_3_IN;  /**< \brief QSPI3 input (aka: SCLK3E) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi0_SCLK_P20_11_OUT;  /**< \brief QSPI0 output (aka: SCLK0) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi0_SCLK_P20_13_OUT;  /**< \brief QSPI0 output (aka: SCLK0) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi1_SCLK_P10_2_OUT;  /**< \brief QSPI1 output (aka: SCLK1) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi1_SCLK_P11_6_OUT;  /**< \brief QSPI1 output (aka: SCLK1) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi2_SCLK_P13_0_OUT;  /**< \brief QSPI2 output (aka: SCLK2) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi2_SCLK_P15_3_OUT;  /**< \brief QSPI2 output (aka: SCLK2) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi2_SCLK_P15_6_OUT;  /**< \brief QSPI2 output (aka: SCLK2) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi2_SCLK_P15_8_OUT;  /**< \brief QSPI2 output (aka: SCLK2) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi3_SCLK_P02_7_OUT;  /**< \brief QSPI3 output (aka: SCLK3) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi3_SCLK_P22_3_OUT;  /**< \brief QSPI3 output (aka: SCLK3) */
IFX_EXTERN IfxQspi_Sclk_Out IfxQspi3_SCLK_P33_11_OUT;  /**< \brief QSPI3 output (aka: SCLK3) */
IFX_EXTERN IfxQspi_Slsi_In IfxQspi0_SLSIA_P20_13_IN;  /**< \brief QSPI0 input (aka: SLSI0A) */
IFX_EXTERN IfxQspi_Slsi_In IfxQspi0_SLSIB_P20_9_IN;  /**< \brief QSPI0 input (aka: SLSI0B) */
IFX_EXTERN IfxQspi_Slsi_In IfxQspi2_SLSIA_P15_2_IN;  /**< \brief QSPI2 input (aka: SLSI2A) */
IFX_EXTERN IfxQspi_Slsi_In IfxQspi2_SLSIB_P15_1_IN;  /**< \brief QSPI2 input (aka: SLSI2B) */
IFX_EXTERN IfxQspi_Slsi_In IfxQspi3_SLSIA_P02_4_IN;  /**< \brief QSPI3 input (aka: SLSI3A) */
IFX_EXTERN IfxQspi_Slsi_In IfxQspi3_SLSIC_P33_10_IN;  /**< \brief QSPI3 input (aka: SLSI3C) */
IFX_EXTERN IfxQspi_Slsi_In IfxQspi3_SLSID_P22_2_IN;  /**< \brief QSPI3 input (aka: SLSI3D) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO0_P20_8_OUT;  /**< \brief QSPI0 output (aka: SLSO00) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO12_P22_4_OUT;  /**< \brief QSPI0 output (aka: SLSO012) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO13_P15_0_OUT;  /**< \brief QSPI0 output (aka: SLSO013) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO1_P20_9_OUT;  /**< \brief QSPI0 output (aka: SLSO01) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO2_P20_13_OUT;  /**< \brief QSPI0 output (aka: SLSO02) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO3_P11_10_OUT;  /**< \brief QSPI0 output (aka: SLSO03) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO4_P11_11_OUT;  /**< \brief QSPI0 output (aka: SLSO04) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO5_P11_2_OUT;  /**< \brief QSPI0 output (aka: SLSO05) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO6_P20_10_OUT;  /**< \brief QSPI0 output (aka: SLSO06) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO7_P33_5_OUT;  /**< \brief QSPI0 output (aka: SLSO07) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO8_P20_6_OUT;  /**< \brief QSPI0 output (aka: SLSO08) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi0_SLSO9_P20_3_OUT;  /**< \brief QSPI0 output (aka: SLSO09) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO0_P20_8_OUT;  /**< \brief QSPI1 output (aka: SLSO10) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO10_P11_8_OUT;  /**< \brief QSPI1 output (aka: SLSO110) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO1_P20_9_OUT;  /**< \brief QSPI1 output (aka: SLSO11) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO2_P20_13_OUT;  /**< \brief QSPI1 output (aka: SLSO12) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO3_P11_10_OUT;  /**< \brief QSPI1 output (aka: SLSO13) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO4_P11_11_OUT;  /**< \brief QSPI1 output (aka: SLSO14) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO5_P11_2_OUT;  /**< \brief QSPI1 output (aka: SLSO15) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO6_P33_10_OUT;  /**< \brief QSPI1 output (aka: SLSO16) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO7_P33_5_OUT;  /**< \brief QSPI1 output (aka: SLSO17) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi1_SLSO9_P10_5_OUT;  /**< \brief QSPI1 output (aka: SLSO19) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO0_P15_2_OUT;  /**< \brief QSPI2 output (aka: SLSO20) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO10_P34_3_OUT;  /**< \brief QSPI2 output (aka: SLSO210) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO1_P14_2_OUT;  /**< \brief QSPI2 output (aka: SLSO21) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO2_P14_6_OUT;  /**< \brief QSPI2 output (aka: SLSO22) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO3_P14_3_OUT;  /**< \brief QSPI2 output (aka: SLSO23) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO4_P14_7_OUT;  /**< \brief QSPI2 output (aka: SLSO24) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO5_P15_1_OUT;  /**< \brief QSPI2 output (aka: SLSO25) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO7_P20_10_OUT;  /**< \brief QSPI2 output (aka: SLSO27) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO8_P20_6_OUT;  /**< \brief QSPI2 output (aka: SLSO28) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi2_SLSO9_P20_3_OUT;  /**< \brief QSPI2 output (aka: SLSO29) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO0_P02_4_OUT;  /**< \brief QSPI3 output (aka: SLSO30) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO11_P33_10_OUT;  /**< \brief QSPI3 output (aka: SLSO311) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO12_P22_2_OUT;  /**< \brief QSPI3 output (aka: SLSO312) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO13_P23_1_OUT;  /**< \brief QSPI3 output (aka: SLSO313) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO1_P02_0_OUT;  /**< \brief QSPI3 output (aka: SLSO31) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO1_P33_9_OUT;  /**< \brief QSPI3 output (aka: SLSO31) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO2_P02_1_OUT;  /**< \brief QSPI3 output (aka: SLSO32) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO2_P33_8_OUT;  /**< \brief QSPI3 output (aka: SLSO32) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO3_P02_2_OUT;  /**< \brief QSPI3 output (aka: SLSO33) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO4_P02_3_OUT;  /**< \brief QSPI3 output (aka: SLSO34) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO5_P02_8_OUT;  /**< \brief QSPI3 output (aka: SLSO35) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO6_P00_8_OUT;  /**< \brief QSPI3 output (aka: SLSO36) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO7_P00_9_OUT;  /**< \brief QSPI3 output (aka: SLSO37) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO7_P33_7_OUT;  /**< \brief QSPI3 output (aka: SLSO37) */
IFX_EXTERN IfxQspi_Slso_Out IfxQspi3_SLSO8_P10_5_OUT;  /**< \brief QSPI3 output (aka: SLSO38) */

/** \brief Table dimensions */
#define IFXQSPI_PINMAP_NUM_MODULES 4
#define IFXQSPI_PINMAP_NUM_SLAVESELECTS 14
#define IFXQSPI_PINMAP_HSICIN_IN_NUM_ITEMS 2
#define IFXQSPI_PINMAP_MRST_IN_NUM_ITEMS 5
#define IFXQSPI_PINMAP_MRST_OUT_NUM_ITEMS 3
#define IFXQSPI_PINMAP_MTSR_IN_NUM_ITEMS 5
#define IFXQSPI_PINMAP_MTSR_OUT_NUM_ITEMS 4
#define IFXQSPI_PINMAP_SCLK_IN_NUM_ITEMS 5
#define IFXQSPI_PINMAP_SCLK_OUT_NUM_ITEMS 4
#define IFXQSPI_PINMAP_SLSI_IN_NUM_ITEMS 4
#define IFXQSPI_PINMAP_SLSO_OUT_NUM_ITEMS 2


/** \brief IfxQspi_Hsicin_In table */
IFX_EXTERN const IfxQspi_Hsicin_In *IfxQspi_Hsicin_In_pinTable[IFXQSPI_PINMAP_NUM_MODULES][IFXQSPI_PINMAP_HSICIN_IN_NUM_ITEMS];

/** \brief IfxQspi_Mrst_In table */
IFX_EXTERN const IfxQspi_Mrst_In *IfxQspi_Mrst_In_pinTable[IFXQSPI_PINMAP_NUM_MODULES][IFXQSPI_PINMAP_MRST_IN_NUM_ITEMS];

/** \brief IfxQspi_Mrst_Out table */
IFX_EXTERN const IfxQspi_Mrst_Out *IfxQspi_Mrst_Out_pinTable[IFXQSPI_PINMAP_NUM_MODULES][IFXQSPI_PINMAP_MRST_OUT_NUM_ITEMS];

/** \brief IfxQspi_Mtsr_In table */
IFX_EXTERN const IfxQspi_Mtsr_In *IfxQspi_Mtsr_In_pinTable[IFXQSPI_PINMAP_NUM_MODULES][IFXQSPI_PINMAP_MTSR_IN_NUM_ITEMS];

/** \brief IfxQspi_Mtsr_Out table */
IFX_EXTERN const IfxQspi_Mtsr_Out *IfxQspi_Mtsr_Out_pinTable[IFXQSPI_PINMAP_NUM_MODULES][IFXQSPI_PINMAP_MTSR_OUT_NUM_ITEMS];

/** \brief IfxQspi_Sclk_In table */
IFX_EXTERN const IfxQspi_Sclk_In *IfxQspi_Sclk_In_pinTable[IFXQSPI_PINMAP_NUM_MODULES][IFXQSPI_PINMAP_SCLK_IN_NUM_ITEMS];

/** \brief IfxQspi_Sclk_Out table */
IFX_EXTERN const IfxQspi_Sclk_Out *IfxQspi_Sclk_Out_pinTable[IFXQSPI_PINMAP_NUM_MODULES][IFXQSPI_PINMAP_SCLK_OUT_NUM_ITEMS];

/** \brief IfxQspi_Slsi_In table */
IFX_EXTERN const IfxQspi_Slsi_In *IfxQspi_Slsi_In_pinTable[IFXQSPI_PINMAP_NUM_MODULES][IFXQSPI_PINMAP_SLSI_IN_NUM_ITEMS];

/** \brief IfxQspi_Slso_Out table */
IFX_EXTERN const IfxQspi_Slso_Out *IfxQspi_Slso_Out_pinTable[IFXQSPI_PINMAP_NUM_MODULES][IFXQSPI_PINMAP_NUM_SLAVESELECTS][IFXQSPI_PINMAP_SLSO_OUT_NUM_ITEMS];

/** \} */

#endif /* IFXQSPI_PINMAP_H */

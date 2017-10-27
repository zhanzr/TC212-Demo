/**
 * \file IfxCcu6_PinMap.h
 * \brief CCU6 I/O map
 * \ingroup IfxLld_Ccu6
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
 * \defgroup IfxLld_Ccu6_pinmap CCU6 Pin Mapping
 * \ingroup IfxLld_Ccu6
 */

#ifndef IFXCCU6_PINMAP_H
#define IFXCCU6_PINMAP_H

#include <_Reg/IfxCcu6_reg.h>
#include <_Impl/IfxCcu6_cfg.h>
#include <Port/Std/IfxPort.h>

/** \addtogroup IfxLld_Ccu6_pinmap
 * \{ */

/** \brief CC60IN pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxCcu6_Cc60in_In;

/** \brief CC61IN pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxCcu6_Cc61in_In;

/** \brief CC62IN pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxCcu6_Cc62in_In;

/** \brief CCPOS0 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxCcu6_Ccpos0_In;

/** \brief CCPOS1 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxCcu6_Ccpos1_In;

/** \brief CCPOS2 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxCcu6_Ccpos2_In;

/** \brief CTRAP pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxCcu6_Ctrap_In;

/** \brief T12HR pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxCcu6_T12hr_In;

/** \brief T13HR pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    Ifx_RxSel         select;   /**< \brief Input multiplexer value */
} IfxCcu6_T13hr_In;

/** \brief CC60 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxCcu6_Cc60_Out;

/** \brief CC61 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxCcu6_Cc61_Out;

/** \brief CC62 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxCcu6_Cc62_Out;

/** \brief COUT60 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxCcu6_Cout60_Out;

/** \brief COUT61 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxCcu6_Cout61_Out;

/** \brief COUT62 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxCcu6_Cout62_Out;

/** \brief COUT63 pin mapping structure */
typedef const struct
{
    Ifx_CCU6*         module;   /**< \brief Base address */
    IfxPort_Pin       pin;      /**< \brief Port pin */
    IfxPort_OutputIdx select;   /**< \brief Port control code */
} IfxCcu6_Cout63_Out;

IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu60_CC60_P02_0_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu60_CC60_P02_6_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu60_CC60_P11_12_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu60_CC60_P15_6_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu61_CC60_P00_1_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu61_CC60_P00_7_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu61_CC60_P11_12_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu61_CC60_P20_8_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu61_CC60_P33_3_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc60_Out IfxCcu61_CC60_P33_5_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc60in_In IfxCcu60_CC60INA_P02_0_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Cc60in_In IfxCcu60_CC60INB_P00_1_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Cc60in_In IfxCcu60_CC60INC_P02_6_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Cc60in_In IfxCcu61_CC60INA_P00_1_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Cc60in_In IfxCcu61_CC60INB_P02_0_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Cc60in_In IfxCcu61_CC60INC_P00_7_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu60_CC61_P02_2_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu60_CC61_P02_7_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu60_CC61_P11_11_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu60_CC61_P15_5_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu61_CC61_P00_3_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu61_CC61_P00_8_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu61_CC61_P11_11_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu61_CC61_P20_9_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu61_CC61_P33_11_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc61_Out IfxCcu61_CC61_P33_6_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc61in_In IfxCcu60_CC61INA_P02_2_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Cc61in_In IfxCcu60_CC61INB_P00_3_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Cc61in_In IfxCcu60_CC61INC_P02_7_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Cc61in_In IfxCcu61_CC61INA_P00_3_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Cc61in_In IfxCcu61_CC61INB_P02_2_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Cc61in_In IfxCcu61_CC61INC_P00_8_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Cc62_Out IfxCcu60_CC62_P02_4_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc62_Out IfxCcu60_CC62_P02_8_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc62_Out IfxCcu60_CC62_P11_10_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc62_Out IfxCcu60_CC62_P15_4_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cc62_Out IfxCcu61_CC62_P00_5_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc62_Out IfxCcu61_CC62_P00_9_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc62_Out IfxCcu61_CC62_P11_10_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc62_Out IfxCcu61_CC62_P20_10_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc62_Out IfxCcu61_CC62_P33_9_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cc62in_In IfxCcu60_CC62INA_P02_4_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Cc62in_In IfxCcu60_CC62INB_P00_5_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Cc62in_In IfxCcu60_CC62INC_P02_8_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Cc62in_In IfxCcu61_CC62INA_P00_5_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Cc62in_In IfxCcu61_CC62INB_P02_4_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Cc62in_In IfxCcu61_CC62INC_P00_9_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Ccpos0_In IfxCcu60_CCPOS0A_P02_6_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Ccpos0_In IfxCcu60_CCPOS0C_P13_1_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Ccpos0_In IfxCcu60_CCPOS0D_P40_11_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Ccpos0_In IfxCcu61_CCPOS0A_P00_7_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Ccpos0_In IfxCcu61_CCPOS0C_P33_7_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Ccpos1_In IfxCcu60_CCPOS1A_P02_7_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Ccpos1_In IfxCcu60_CCPOS1B_P41_0_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Ccpos1_In IfxCcu60_CCPOS1C_P13_2_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Ccpos1_In IfxCcu61_CCPOS1A_P00_8_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Ccpos1_In IfxCcu61_CCPOS1B_P41_2_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Ccpos1_In IfxCcu61_CCPOS1C_P33_6_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Ccpos1_In IfxCcu61_CCPOS1D_P41_3_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Ccpos2_In IfxCcu60_CCPOS2A_P02_8_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Ccpos2_In IfxCcu60_CCPOS2C_P13_3_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Ccpos2_In IfxCcu61_CCPOS2A_P00_9_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Ccpos2_In IfxCcu61_CCPOS2C_P33_5_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Cout60_Out IfxCcu60_COUT60_P02_1_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout60_Out IfxCcu60_COUT60_P11_9_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout60_Out IfxCcu60_COUT60_P15_7_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout60_Out IfxCcu61_COUT60_P00_2_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout60_Out IfxCcu61_COUT60_P11_9_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout60_Out IfxCcu61_COUT60_P20_11_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout60_Out IfxCcu61_COUT60_P33_12_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout60_Out IfxCcu61_COUT60_P33_7_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout61_Out IfxCcu60_COUT61_P02_3_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout61_Out IfxCcu60_COUT61_P11_6_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout61_Out IfxCcu60_COUT61_P15_8_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout61_Out IfxCcu61_COUT61_P00_4_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout61_Out IfxCcu61_COUT61_P11_6_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout61_Out IfxCcu61_COUT61_P20_12_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout61_Out IfxCcu61_COUT61_P33_10_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout62_Out IfxCcu60_COUT62_P02_5_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout62_Out IfxCcu60_COUT62_P11_3_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout62_Out IfxCcu60_COUT62_P14_0_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout62_Out IfxCcu61_COUT62_P00_6_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout62_Out IfxCcu61_COUT62_P11_3_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout62_Out IfxCcu61_COUT62_P20_13_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout62_Out IfxCcu61_COUT62_P33_8_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout63_Out IfxCcu60_COUT63_P00_0_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout63_Out IfxCcu60_COUT63_P11_2_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout63_Out IfxCcu60_COUT63_P14_1_OUT;  /**< \brief CCU60 output */
IFX_EXTERN IfxCcu6_Cout63_Out IfxCcu61_COUT63_P00_12_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout63_Out IfxCcu61_COUT63_P11_2_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout63_Out IfxCcu61_COUT63_P20_7_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Cout63_Out IfxCcu61_COUT63_P33_2_OUT;  /**< \brief CCU61 output */
IFX_EXTERN IfxCcu6_Ctrap_In IfxCcu60_CTRAPA_P13_0_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_Ctrap_In IfxCcu61_CTRAPA_P00_0_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_Ctrap_In IfxCcu61_CTRAPC_P33_4_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_T12hr_In IfxCcu60_T12HRB_P00_7_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_T12hr_In IfxCcu60_T12HRC_P00_9_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_T12hr_In IfxCcu60_T12HRE_P00_0_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_T12hr_In IfxCcu61_T12HRB_P02_6_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_T12hr_In IfxCcu61_T12HRC_P02_8_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_T13hr_In IfxCcu60_T13HRB_P00_8_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_T13hr_In IfxCcu60_T13HRC_P00_9_IN;  /**< \brief CCU60 input */
IFX_EXTERN IfxCcu6_T13hr_In IfxCcu61_T13HRB_P02_7_IN;  /**< \brief CCU61 input */
IFX_EXTERN IfxCcu6_T13hr_In IfxCcu61_T13HRC_P02_8_IN;  /**< \brief CCU61 input */

/** \brief Table dimensions */
#define IFXCCU6_PINMAP_NUM_MODULES 2
#define IFXCCU6_PINMAP_CC60_OUT_NUM_ITEMS 6
#define IFXCCU6_PINMAP_CC60IN_IN_NUM_ITEMS 3
#define IFXCCU6_PINMAP_CC61_OUT_NUM_ITEMS 6
#define IFXCCU6_PINMAP_CC61IN_IN_NUM_ITEMS 3
#define IFXCCU6_PINMAP_CC62_OUT_NUM_ITEMS 5
#define IFXCCU6_PINMAP_CC62IN_IN_NUM_ITEMS 3
#define IFXCCU6_PINMAP_CCPOS0_IN_NUM_ITEMS 4
#define IFXCCU6_PINMAP_CCPOS1_IN_NUM_ITEMS 4
#define IFXCCU6_PINMAP_CCPOS2_IN_NUM_ITEMS 3
#define IFXCCU6_PINMAP_COUT60_OUT_NUM_ITEMS 5
#define IFXCCU6_PINMAP_COUT61_OUT_NUM_ITEMS 4
#define IFXCCU6_PINMAP_COUT62_OUT_NUM_ITEMS 4
#define IFXCCU6_PINMAP_COUT63_OUT_NUM_ITEMS 4
#define IFXCCU6_PINMAP_CTRAP_IN_NUM_ITEMS 3
#define IFXCCU6_PINMAP_T12HR_IN_NUM_ITEMS 5
#define IFXCCU6_PINMAP_T13HR_IN_NUM_ITEMS 3


/** \brief IfxCcu6_Cc60_Out table */
IFX_EXTERN const IfxCcu6_Cc60_Out *IfxCcu6_Cc60_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC60_OUT_NUM_ITEMS];

/** \brief IfxCcu6_Cc60in_In table */
IFX_EXTERN const IfxCcu6_Cc60in_In *IfxCcu6_Cc60in_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC60IN_IN_NUM_ITEMS];

/** \brief IfxCcu6_Cc61_Out table */
IFX_EXTERN const IfxCcu6_Cc61_Out *IfxCcu6_Cc61_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC61_OUT_NUM_ITEMS];

/** \brief IfxCcu6_Cc61in_In table */
IFX_EXTERN const IfxCcu6_Cc61in_In *IfxCcu6_Cc61in_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC61IN_IN_NUM_ITEMS];

/** \brief IfxCcu6_Cc62_Out table */
IFX_EXTERN const IfxCcu6_Cc62_Out *IfxCcu6_Cc62_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC62_OUT_NUM_ITEMS];

/** \brief IfxCcu6_Cc62in_In table */
IFX_EXTERN const IfxCcu6_Cc62in_In *IfxCcu6_Cc62in_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CC62IN_IN_NUM_ITEMS];

/** \brief IfxCcu6_Ccpos0_In table */
IFX_EXTERN const IfxCcu6_Ccpos0_In *IfxCcu6_Ccpos0_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CCPOS0_IN_NUM_ITEMS];

/** \brief IfxCcu6_Ccpos1_In table */
IFX_EXTERN const IfxCcu6_Ccpos1_In *IfxCcu6_Ccpos1_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CCPOS1_IN_NUM_ITEMS];

/** \brief IfxCcu6_Ccpos2_In table */
IFX_EXTERN const IfxCcu6_Ccpos2_In *IfxCcu6_Ccpos2_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CCPOS2_IN_NUM_ITEMS];

/** \brief IfxCcu6_Cout60_Out table */
IFX_EXTERN const IfxCcu6_Cout60_Out *IfxCcu6_Cout60_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_COUT60_OUT_NUM_ITEMS];

/** \brief IfxCcu6_Cout61_Out table */
IFX_EXTERN const IfxCcu6_Cout61_Out *IfxCcu6_Cout61_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_COUT61_OUT_NUM_ITEMS];

/** \brief IfxCcu6_Cout62_Out table */
IFX_EXTERN const IfxCcu6_Cout62_Out *IfxCcu6_Cout62_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_COUT62_OUT_NUM_ITEMS];

/** \brief IfxCcu6_Cout63_Out table */
IFX_EXTERN const IfxCcu6_Cout63_Out *IfxCcu6_Cout63_Out_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_COUT63_OUT_NUM_ITEMS];

/** \brief IfxCcu6_Ctrap_In table */
IFX_EXTERN const IfxCcu6_Ctrap_In *IfxCcu6_Ctrap_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_CTRAP_IN_NUM_ITEMS];

/** \brief IfxCcu6_T12hr_In table */
IFX_EXTERN const IfxCcu6_T12hr_In *IfxCcu6_T12hr_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_T12HR_IN_NUM_ITEMS];

/** \brief IfxCcu6_T13hr_In table */
IFX_EXTERN const IfxCcu6_T13hr_In *IfxCcu6_T13hr_In_pinTable[IFXCCU6_PINMAP_NUM_MODULES][IFXCCU6_PINMAP_T13HR_IN_NUM_ITEMS];

/** \} */

#endif /* IFXCCU6_PINMAP_H */

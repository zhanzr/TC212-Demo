/**
 * \file IfxSrc_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC22X_UM_V1.1.R0
 * Specification: tc22x_um_sfrs_MCSFR.xml (Revision: UM_V1.1)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
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
 * \defgroup IfxLld_Src_Cfg Src address
 * \ingroup IfxLld_Src
 *
 * \defgroup IfxLld_Src_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Src_Cfg
 *
 * \defgroup IfxLld_Src_Cfg_Src 2-SRC
 * \ingroup IfxLld_Src_Cfg
 *
 */
#ifndef IFXSRC_REG_H
#define IFXSRC_REG_H 1
/******************************************************************************/
#include "IfxSrc_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Src_Cfg_BaseAddress
 * \{  */

/** \brief  SRC object */
#define MODULE_SRC /*lint --e(923)*/ (*(Ifx_SRC *)0xF0038000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Src_Cfg_Src
 * \{  */

/** \brief  88, ASCLIN Error Service Request */
#define SRC_ASCLIN_ASCLIN0_ERR    /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038088u)

/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN0_ERR.
 * To use register names with standard convension, please use SRC_ASCLIN_ASCLIN0_ERR.
 */
#define SRC_ASCLIN0ERR            (SRC_ASCLIN_ASCLIN0_ERR)

/** \brief  84, ASCLIN Receive Service Request */
#define SRC_ASCLIN_ASCLIN0_RX     /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038084u)

/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN0_RX.
 * To use register names with standard convension, please use SRC_ASCLIN_ASCLIN0_RX.
 */
#define SRC_ASCLIN0RX             (SRC_ASCLIN_ASCLIN0_RX)

/** \brief  80, ASCLIN Transmit Service Request */
#define SRC_ASCLIN_ASCLIN0_TX     /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038080u)

/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN0_TX.
 * To use register names with standard convension, please use SRC_ASCLIN_ASCLIN0_TX.
 */
#define SRC_ASCLIN0TX             (SRC_ASCLIN_ASCLIN0_TX)

/** \brief  94, ASCLIN Error Service Request */
#define SRC_ASCLIN_ASCLIN1_ERR    /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038094u)

/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN1_ERR.
 * To use register names with standard convension, please use SRC_ASCLIN_ASCLIN1_ERR.
 */
#define SRC_ASCLIN1ERR            (SRC_ASCLIN_ASCLIN1_ERR)

/** \brief  90, ASCLIN Receive Service Request */
#define SRC_ASCLIN_ASCLIN1_RX     /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038090u)

/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN1_RX.
 * To use register names with standard convension, please use SRC_ASCLIN_ASCLIN1_RX.
 */
#define SRC_ASCLIN1RX             (SRC_ASCLIN_ASCLIN1_RX)

/** \brief  8C, ASCLIN Transmit Service Request */
#define SRC_ASCLIN_ASCLIN1_TX     /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003808Cu)

/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN1_TX.
 * To use register names with standard convension, please use SRC_ASCLIN_ASCLIN1_TX.
 */
#define SRC_ASCLIN1TX             (SRC_ASCLIN_ASCLIN1_TX)

/** \brief  40, Bus Control Unit SPB Service Request */
#define SRC_BCU_SPB_SBSRC         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038040u)

/** Alias (User Manual Name) for SRC_BCU_SPB_SBSRC.
 * To use register names with standard convension, please use SRC_BCU_SPB_SBSRC.
 */
#define SRC_BCUSPBSBSRC           (SRC_BCU_SPB_SBSRC)

/** \brief  900, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT0         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038900u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT0.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT0.
 */
#define SRC_CANINT0               (SRC_CAN_CAN0_INT0)

/** \brief  904, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT1         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038904u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT1.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT1.
 */
#define SRC_CANINT1               (SRC_CAN_CAN0_INT1)

/** \brief  928, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT10        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038928u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT10.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT10.
 */
#define SRC_CANINT10              (SRC_CAN_CAN0_INT10)

/** \brief  92C, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT11        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003892Cu)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT11.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT11.
 */
#define SRC_CANINT11              (SRC_CAN_CAN0_INT11)

/** \brief  930, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT12        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038930u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT12.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT12.
 */
#define SRC_CANINT12              (SRC_CAN_CAN0_INT12)

/** \brief  934, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT13        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038934u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT13.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT13.
 */
#define SRC_CANINT13              (SRC_CAN_CAN0_INT13)

/** \brief  938, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT14        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038938u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT14.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT14.
 */
#define SRC_CANINT14              (SRC_CAN_CAN0_INT14)

/** \brief  93C, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT15        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003893Cu)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT15.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT15.
 */
#define SRC_CANINT15              (SRC_CAN_CAN0_INT15)

/** \brief  908, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT2         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038908u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT2.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT2.
 */
#define SRC_CANINT2               (SRC_CAN_CAN0_INT2)

/** \brief  90C, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT3         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003890Cu)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT3.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT3.
 */
#define SRC_CANINT3               (SRC_CAN_CAN0_INT3)

/** \brief  910, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT4         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038910u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT4.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT4.
 */
#define SRC_CANINT4               (SRC_CAN_CAN0_INT4)

/** \brief  914, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT5         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038914u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT5.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT5.
 */
#define SRC_CANINT5               (SRC_CAN_CAN0_INT5)

/** \brief  918, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT6         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038918u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT6.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT6.
 */
#define SRC_CANINT6               (SRC_CAN_CAN0_INT6)

/** \brief  91C, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT7         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003891Cu)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT7.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT7.
 */
#define SRC_CANINT7               (SRC_CAN_CAN0_INT7)

/** \brief  920, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT8         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038920u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT8.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT8.
 */
#define SRC_CANINT8               (SRC_CAN_CAN0_INT8)

/** \brief  924, MULTICAN Service Request */
#define SRC_CAN_CAN0_INT9         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038924u)

/** Alias (User Manual Name) for SRC_CAN_CAN0_INT9.
 * To use register names with standard convension, please use SRC_CAN_CAN0_INT9.
 */
#define SRC_CANINT9               (SRC_CAN_CAN0_INT9)

/** \brief  420, CCU6 Service Request 0 */
#define SRC_CCU6_CCU60_SR0        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038420u)

/** Alias (User Manual Name) for SRC_CCU6_CCU60_SR0.
 * To use register names with standard convension, please use SRC_CCU6_CCU60_SR0.
 */
#define SRC_CCU60SR0              (SRC_CCU6_CCU60_SR0)

/** \brief  424, CCU6 Service Request 1 */
#define SRC_CCU6_CCU60_SR1        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038424u)

/** Alias (User Manual Name) for SRC_CCU6_CCU60_SR1.
 * To use register names with standard convension, please use SRC_CCU6_CCU60_SR1.
 */
#define SRC_CCU60SR1              (SRC_CCU6_CCU60_SR1)

/** \brief  428, CCU6 Service Request 2 */
#define SRC_CCU6_CCU60_SR2        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038428u)

/** Alias (User Manual Name) for SRC_CCU6_CCU60_SR2.
 * To use register names with standard convension, please use SRC_CCU6_CCU60_SR2.
 */
#define SRC_CCU60SR2              (SRC_CCU6_CCU60_SR2)

/** \brief  42C, CCU6 Service Request 3 */
#define SRC_CCU6_CCU60_SR3        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003842Cu)

/** Alias (User Manual Name) for SRC_CCU6_CCU60_SR3.
 * To use register names with standard convension, please use SRC_CCU6_CCU60_SR3.
 */
#define SRC_CCU60SR3              (SRC_CCU6_CCU60_SR3)

/** \brief  430, CCU6 Service Request 0 */
#define SRC_CCU6_CCU61_SR0        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038430u)

/** Alias (User Manual Name) for SRC_CCU6_CCU61_SR0.
 * To use register names with standard convension, please use SRC_CCU6_CCU61_SR0.
 */
#define SRC_CCU61SR0              (SRC_CCU6_CCU61_SR0)

/** \brief  434, CCU6 Service Request 1 */
#define SRC_CCU6_CCU61_SR1        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038434u)

/** Alias (User Manual Name) for SRC_CCU6_CCU61_SR1.
 * To use register names with standard convension, please use SRC_CCU6_CCU61_SR1.
 */
#define SRC_CCU61SR1              (SRC_CCU6_CCU61_SR1)

/** \brief  438, CCU6 Service Request 2 */
#define SRC_CCU6_CCU61_SR2        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038438u)

/** Alias (User Manual Name) for SRC_CCU6_CCU61_SR2.
 * To use register names with standard convension, please use SRC_CCU6_CCU61_SR2.
 */
#define SRC_CCU61SR2              (SRC_CCU6_CCU61_SR2)

/** \brief  43C, CCU6 Service Request 3 */
#define SRC_CCU6_CCU61_SR3        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003843Cu)

/** Alias (User Manual Name) for SRC_CCU6_CCU61_SR3.
 * To use register names with standard convension, please use SRC_CCU6_CCU61_SR3.
 */
#define SRC_CCU61SR3              (SRC_CCU6_CCU61_SR3)

/** \brief  50, Cerberus Service Request */
#define SRC_CERBERUS_CERBERUS_SR0 /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038050u)

/** Alias (User Manual Name) for SRC_CERBERUS_CERBERUS_SR0.
 * To use register names with standard convension, please use SRC_CERBERUS_CERBERUS_SR0.
 */
#define SRC_CERBERUS0             (SRC_CERBERUS_CERBERUS_SR0)

/** \brief  54, Cerberus Service Request */
#define SRC_CERBERUS_CERBERUS_SR1 /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038054u)

/** Alias (User Manual Name) for SRC_CERBERUS_CERBERUS_SR1.
 * To use register names with standard convension, please use SRC_CERBERUS_CERBERUS_SR1.
 */
#define SRC_CERBERUS1             (SRC_CERBERUS_CERBERUS_SR1)

/** \brief  0, CPUSoftware Breakpoint Service Request */
#define SRC_CPU_CPU0_SBSRC        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038000u)

/** Alias (User Manual Name) for SRC_CPU_CPU0_SBSRC.
 * To use register names with standard convension, please use SRC_CPU_CPU0_SBSRC.
 */
#define SRC_CPU0SBSRC             (SRC_CPU_CPU0_SBSRC)

/** \brief  500, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH0          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038500u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH0.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH0.
 */
#define SRC_DMACH0                (SRC_DMA_DMA0_CH0)

/** \brief  504, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH1          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038504u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH1.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH1.
 */
#define SRC_DMACH1                (SRC_DMA_DMA0_CH1)

/** \brief  528, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH10         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038528u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH10.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH10.
 */
#define SRC_DMACH10               (SRC_DMA_DMA0_CH10)

/** \brief  52C, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH11         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003852Cu)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH11.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH11.
 */
#define SRC_DMACH11               (SRC_DMA_DMA0_CH11)

/** \brief  530, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH12         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038530u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH12.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH12.
 */
#define SRC_DMACH12               (SRC_DMA_DMA0_CH12)

/** \brief  534, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH13         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038534u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH13.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH13.
 */
#define SRC_DMACH13               (SRC_DMA_DMA0_CH13)

/** \brief  538, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH14         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038538u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH14.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH14.
 */
#define SRC_DMACH14               (SRC_DMA_DMA0_CH14)

/** \brief  53C, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH15         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003853Cu)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH15.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH15.
 */
#define SRC_DMACH15               (SRC_DMA_DMA0_CH15)

/** \brief  508, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH2          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038508u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH2.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH2.
 */
#define SRC_DMACH2                (SRC_DMA_DMA0_CH2)

/** \brief  50C, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH3          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003850Cu)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH3.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH3.
 */
#define SRC_DMACH3                (SRC_DMA_DMA0_CH3)

/** \brief  510, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH4          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038510u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH4.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH4.
 */
#define SRC_DMACH4                (SRC_DMA_DMA0_CH4)

/** \brief  514, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH5          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038514u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH5.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH5.
 */
#define SRC_DMACH5                (SRC_DMA_DMA0_CH5)

/** \brief  518, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH6          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038518u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH6.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH6.
 */
#define SRC_DMACH6                (SRC_DMA_DMA0_CH6)

/** \brief  51C, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH7          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003851Cu)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH7.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH7.
 */
#define SRC_DMACH7                (SRC_DMA_DMA0_CH7)

/** \brief  520, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH8          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038520u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH8.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH8.
 */
#define SRC_DMACH8                (SRC_DMA_DMA0_CH8)

/** \brief  524, DMA Channel Service Request */
#define SRC_DMA_DMA0_CH9          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038524u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_CH9.
 * To use register names with standard convension, please use SRC_DMA_DMA0_CH9.
 */
#define SRC_DMACH9                (SRC_DMA_DMA0_CH9)

/** \brief  4F0, DMA Error Service Request */
#define SRC_DMA_DMA0_ERR          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00384F0u)

/** Alias (User Manual Name) for SRC_DMA_DMA0_ERR.
 * To use register names with standard convension, please use SRC_DMA_DMA0_ERR.
 */
#define SRC_DMAERR                (SRC_DMA_DMA0_ERR)

/** \brief  FB4, EVR Supply Service Request */
#define SRC_EVR_EVR0_SCDC         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038FB4u)

/** Alias (User Manual Name) for SRC_EVR_EVR0_SCDC.
 * To use register names with standard convension, please use SRC_EVR_EVR0_SCDC.
 */
#define SRC_EVRSCDC               (SRC_EVR_EVR0_SCDC)

/** \brief  FB0, EVR Wake Up Timer Service Request */
#define SRC_EVR_EVR0_WUT          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038FB0u)

/** Alias (User Manual Name) for SRC_EVR_EVR0_WUT.
 * To use register names with standard convension, please use SRC_EVR_EVR0_WUT.
 */
#define SRC_EVRWUT                (SRC_EVR_EVR0_WUT)

/** \brief  1000, General Purpose Service Request 0 */
#define SRC_GPSR_GPSR0_SR0        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039000u)

/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR0.
 * To use register names with standard convension, please use SRC_GPSR_GPSR0_SR0.
 */
#define SRC_GPSR00                (SRC_GPSR_GPSR0_SR0)

/** \brief  1004, General Purpose Service Request 1 */
#define SRC_GPSR_GPSR0_SR1        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039004u)

/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR1.
 * To use register names with standard convension, please use SRC_GPSR_GPSR0_SR1.
 */
#define SRC_GPSR01                (SRC_GPSR_GPSR0_SR1)

/** \brief  1008, General Purpose Service Request 2 */
#define SRC_GPSR_GPSR0_SR2        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039008u)

/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR2.
 * To use register names with standard convension, please use SRC_GPSR_GPSR0_SR2.
 */
#define SRC_GPSR02                (SRC_GPSR_GPSR0_SR2)

/** \brief  100C, General Purpose Service Request 3 */
#define SRC_GPSR_GPSR0_SR3        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003900Cu)

/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR3.
 * To use register names with standard convension, please use SRC_GPSR_GPSR0_SR3.
 */
#define SRC_GPSR03                (SRC_GPSR_GPSR0_SR3)

/** \brief  460, GPT12 CAPREL Service Request */
#define SRC_GPT12_GPT120_CIRQ     /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038460u)

/** Alias (User Manual Name) for SRC_GPT12_GPT120_CIRQ.
 * To use register names with standard convension, please use SRC_GPT12_GPT120_CIRQ.
 */
#define SRC_GPT120CIRQ            (SRC_GPT12_GPT120_CIRQ)

/** \brief  464, GPT12 T2 Overflow/Underflow Service Request */
#define SRC_GPT12_GPT120_T2       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038464u)

/** Alias (User Manual Name) for SRC_GPT12_GPT120_T2.
 * To use register names with standard convension, please use SRC_GPT12_GPT120_T2.
 */
#define SRC_GPT120T2              (SRC_GPT12_GPT120_T2)

/** \brief  468, GPT12 T3 Overflow/Underflow Service Request */
#define SRC_GPT12_GPT120_T3       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038468u)

/** Alias (User Manual Name) for SRC_GPT12_GPT120_T3.
 * To use register names with standard convension, please use SRC_GPT12_GPT120_T3.
 */
#define SRC_GPT120T3              (SRC_GPT12_GPT120_T3)

/** \brief  46C, GPT12 T4 Overflow/Underflow Service Request */
#define SRC_GPT12_GPT120_T4       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003846Cu)

/** Alias (User Manual Name) for SRC_GPT12_GPT120_T4.
 * To use register names with standard convension, please use SRC_GPT12_GPT120_T4.
 */
#define SRC_GPT120T4              (SRC_GPT12_GPT120_T4)

/** \brief  470, GPT12 T5 Overflow/Underflow Service Request */
#define SRC_GPT12_GPT120_T5       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038470u)

/** Alias (User Manual Name) for SRC_GPT12_GPT120_T5.
 * To use register names with standard convension, please use SRC_GPT12_GPT120_T5.
 */
#define SRC_GPT120T5              (SRC_GPT12_GPT120_T5)

/** \brief  474, GPT12 T6 Overflow/Underflow Service Request */
#define SRC_GPT12_GPT120_T6       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038474u)

/** Alias (User Manual Name) for SRC_GPT12_GPT120_T6.
 * To use register names with standard convension, please use SRC_GPT12_GPT120_T6.
 */
#define SRC_GPT120T6              (SRC_GPT12_GPT120_T6)

/** \brief  1600, GTM AEI Shared Service Request */
#define SRC_GTM_GTM0_AEIIRQ       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039600u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_AEIIRQ.
 * To use register names with standard convension, please use SRC_GTM_GTM0_AEIIRQ.
 */
#define SRC_GTMAEIIRQ             (SRC_GTM_GTM0_AEIIRQ)

/** \brief  1770, GTM Error Service Request */
#define SRC_GTM_GTM0_ERR          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039770u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_ERR.
 * To use register names with standard convension, please use SRC_GTM_GTM0_ERR.
 */
#define SRC_GTMERR                (SRC_GTM_GTM0_ERR)

/** \brief  1780, GTM TIM Shared Service Request */
#define SRC_GTM_GTM0_TIM0_0       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039780u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TIM0_0.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TIM0_0.
 */
#define SRC_GTMTIM00              (SRC_GTM_GTM0_TIM0_0)

/** \brief  1784, GTM TIM Shared Service Request */
#define SRC_GTM_GTM0_TIM0_1       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039784u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TIM0_1.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TIM0_1.
 */
#define SRC_GTMTIM01              (SRC_GTM_GTM0_TIM0_1)

/** \brief  1788, GTM TIM Shared Service Request */
#define SRC_GTM_GTM0_TIM0_2       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039788u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TIM0_2.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TIM0_2.
 */
#define SRC_GTMTIM02              (SRC_GTM_GTM0_TIM0_2)

/** \brief  178C, GTM TIM Shared Service Request */
#define SRC_GTM_GTM0_TIM0_3       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003978Cu)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TIM0_3.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TIM0_3.
 */
#define SRC_GTMTIM03              (SRC_GTM_GTM0_TIM0_3)

/** \brief  1790, GTM TIM Shared Service Request */
#define SRC_GTM_GTM0_TIM0_4       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039790u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TIM0_4.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TIM0_4.
 */
#define SRC_GTMTIM04              (SRC_GTM_GTM0_TIM0_4)

/** \brief  1794, GTM TIM Shared Service Request */
#define SRC_GTM_GTM0_TIM0_5       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039794u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TIM0_5.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TIM0_5.
 */
#define SRC_GTMTIM05              (SRC_GTM_GTM0_TIM0_5)

/** \brief  1798, GTM TIM Shared Service Request */
#define SRC_GTM_GTM0_TIM0_6       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039798u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TIM0_6.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TIM0_6.
 */
#define SRC_GTMTIM06              (SRC_GTM_GTM0_TIM0_6)

/** \brief  179C, GTM TIM Shared Service Request */
#define SRC_GTM_GTM0_TIM0_7       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003979Cu)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TIM0_7.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TIM0_7.
 */
#define SRC_GTMTIM07              (SRC_GTM_GTM0_TIM0_7)

/** \brief  1B80, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM0_0       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039B80u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM0_0.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM0_0.
 */
#define SRC_GTMTOM00              (SRC_GTM_GTM0_TOM0_0)

/** \brief  1B84, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM0_1       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039B84u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM0_1.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM0_1.
 */
#define SRC_GTMTOM01              (SRC_GTM_GTM0_TOM0_1)

/** \brief  1B88, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM0_2       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039B88u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM0_2.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM0_2.
 */
#define SRC_GTMTOM02              (SRC_GTM_GTM0_TOM0_2)

/** \brief  1B8C, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM0_3       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039B8Cu)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM0_3.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM0_3.
 */
#define SRC_GTMTOM03              (SRC_GTM_GTM0_TOM0_3)

/** \brief  1B90, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM0_4       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039B90u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM0_4.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM0_4.
 */
#define SRC_GTMTOM04              (SRC_GTM_GTM0_TOM0_4)

/** \brief  1B94, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM0_5       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039B94u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM0_5.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM0_5.
 */
#define SRC_GTMTOM05              (SRC_GTM_GTM0_TOM0_5)

/** \brief  1B98, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM0_6       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039B98u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM0_6.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM0_6.
 */
#define SRC_GTMTOM06              (SRC_GTM_GTM0_TOM0_6)

/** \brief  1B9C, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM0_7       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039B9Cu)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM0_7.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM0_7.
 */
#define SRC_GTMTOM07              (SRC_GTM_GTM0_TOM0_7)

/** \brief  1BA0, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM1_0       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039BA0u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM1_0.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM1_0.
 */
#define SRC_GTMTOM10              (SRC_GTM_GTM0_TOM1_0)

/** \brief  1BA4, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM1_1       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039BA4u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM1_1.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM1_1.
 */
#define SRC_GTMTOM11              (SRC_GTM_GTM0_TOM1_1)

/** \brief  1BA8, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM1_2       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039BA8u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM1_2.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM1_2.
 */
#define SRC_GTMTOM12              (SRC_GTM_GTM0_TOM1_2)

/** \brief  1BAC, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM1_3       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039BACu)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM1_3.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM1_3.
 */
#define SRC_GTMTOM13              (SRC_GTM_GTM0_TOM1_3)

/** \brief  1BB0, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM1_4       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039BB0u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM1_4.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM1_4.
 */
#define SRC_GTMTOM14              (SRC_GTM_GTM0_TOM1_4)

/** \brief  1BB4, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM1_5       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039BB4u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM1_5.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM1_5.
 */
#define SRC_GTMTOM15              (SRC_GTM_GTM0_TOM1_5)

/** \brief  1BB8, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM1_6       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039BB8u)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM1_6.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM1_6.
 */
#define SRC_GTMTOM16              (SRC_GTM_GTM0_TOM1_6)

/** \brief  1BBC, GTM TOM Shared Service Request */
#define SRC_GTM_GTM0_TOM1_7       /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0039BBCu)

/** Alias (User Manual Name) for SRC_GTM_GTM0_TOM1_7.
 * To use register names with standard convension, please use SRC_GTM_GTM0_TOM1_7.
 */
#define SRC_GTMTOM17              (SRC_GTM_GTM0_TOM1_7)

/** \brief  C30, PMU  Service Request */
#define SRC_PMU_PMU0_SR           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038C30u)

/** Alias (User Manual Name) for SRC_PMU_PMU0_SR.
 * To use register names with standard convension, please use SRC_PMU_PMU0_SR.
 */
#define SRC_PMU00                 (SRC_PMU_PMU0_SR)

/** \brief  C34, PMU  Service Request */
#define SRC_PMU_PMU1_SR           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038C34u)

/** Alias (User Manual Name) for SRC_PMU_PMU1_SR.
 * To use register names with standard convension, please use SRC_PMU_PMU1_SR.
 */
#define SRC_PMU01                 (SRC_PMU_PMU1_SR)

/** \brief  198, QSPI Error Service Request */
#define SRC_QSPI_QSPI0_ERR        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038198u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI0_ERR.
 * To use register names with standard convension, please use SRC_QSPI_QSPI0_ERR.
 */
#define SRC_QSPI0ERR              (SRC_QSPI_QSPI0_ERR)

/** \brief  1A0, QSPI High Speed Capture Service Request */
#define SRC_QSPI_QSPI0_HC         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381A0u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI0_HC.
 * To use register names with standard convension, please use SRC_QSPI_QSPI0_HC.
 */
#define SRC_RESERVED10            (SRC_QSPI_QSPI0_HC)

/** \brief  19C, QSPI Phase Transition Service Request */
#define SRC_QSPI_QSPI0_PT         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003819Cu)

/** Alias (User Manual Name) for SRC_QSPI_QSPI0_PT.
 * To use register names with standard convension, please use SRC_QSPI_QSPI0_PT.
 */
#define SRC_QSPI0PT               (SRC_QSPI_QSPI0_PT)

/** \brief  194, QSPI Receive Service Request */
#define SRC_QSPI_QSPI0_RX         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038194u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI0_RX.
 * To use register names with standard convension, please use SRC_QSPI_QSPI0_RX.
 */
#define SRC_QSPI0RX               (SRC_QSPI_QSPI0_RX)

/** \brief  190, QSPI Transmit Service Request */
#define SRC_QSPI_QSPI0_TX         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038190u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI0_TX.
 * To use register names with standard convension, please use SRC_QSPI_QSPI0_TX.
 */
#define SRC_QSPI0TX               (SRC_QSPI_QSPI0_TX)

/** \brief  1A4, QSPI User Defined Service Request */
#define SRC_QSPI_QSPI0_U          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381A4u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI0_U.
 * To use register names with standard convension, please use SRC_QSPI_QSPI0_U.
 */
#define SRC_QSPI0U                (SRC_QSPI_QSPI0_U)

/** \brief  1B0, QSPI Error Service Request */
#define SRC_QSPI_QSPI1_ERR        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381B0u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI1_ERR.
 * To use register names with standard convension, please use SRC_QSPI_QSPI1_ERR.
 */
#define SRC_QSPI1ERR              (SRC_QSPI_QSPI1_ERR)

/** \brief  1B8, QSPI High Speed Capture Service Request */
#define SRC_QSPI_QSPI1_HC         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381B8u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI1_HC.
 * To use register names with standard convension, please use SRC_QSPI_QSPI1_HC.
 */
#define SRC_RESERVED11            (SRC_QSPI_QSPI1_HC)

/** \brief  1B4, QSPI Phase Transition Service Request */
#define SRC_QSPI_QSPI1_PT         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381B4u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI1_PT.
 * To use register names with standard convension, please use SRC_QSPI_QSPI1_PT.
 */
#define SRC_QSPI1PT               (SRC_QSPI_QSPI1_PT)

/** \brief  1AC, QSPI Receive Service Request */
#define SRC_QSPI_QSPI1_RX         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381ACu)

/** Alias (User Manual Name) for SRC_QSPI_QSPI1_RX.
 * To use register names with standard convension, please use SRC_QSPI_QSPI1_RX.
 */
#define SRC_QSPI1RX               (SRC_QSPI_QSPI1_RX)

/** \brief  1A8, QSPI Transmit Service Request */
#define SRC_QSPI_QSPI1_TX         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381A8u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI1_TX.
 * To use register names with standard convension, please use SRC_QSPI_QSPI1_TX.
 */
#define SRC_QSPI1TX               (SRC_QSPI_QSPI1_TX)

/** \brief  1BC, QSPI User Defined Service Request */
#define SRC_QSPI_QSPI1_U          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381BCu)

/** Alias (User Manual Name) for SRC_QSPI_QSPI1_U.
 * To use register names with standard convension, please use SRC_QSPI_QSPI1_U.
 */
#define SRC_QSPI1U                (SRC_QSPI_QSPI1_U)

/** \brief  1C8, QSPI Error Service Request */
#define SRC_QSPI_QSPI2_ERR        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381C8u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI2_ERR.
 * To use register names with standard convension, please use SRC_QSPI_QSPI2_ERR.
 */
#define SRC_QSPI2ERR              (SRC_QSPI_QSPI2_ERR)

/** \brief  1D0, QSPI High Speed Capture Service Request */
#define SRC_QSPI_QSPI2_HC         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381D0u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI2_HC.
 * To use register names with standard convension, please use SRC_QSPI_QSPI2_HC.
 */
#define SRC_QSPI2HC               (SRC_QSPI_QSPI2_HC)

/** \brief  1CC, QSPI Phase Transition Service Request */
#define SRC_QSPI_QSPI2_PT         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381CCu)

/** Alias (User Manual Name) for SRC_QSPI_QSPI2_PT.
 * To use register names with standard convension, please use SRC_QSPI_QSPI2_PT.
 */
#define SRC_QSPI2PT               (SRC_QSPI_QSPI2_PT)

/** \brief  1C4, QSPI Receive Service Request */
#define SRC_QSPI_QSPI2_RX         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381C4u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI2_RX.
 * To use register names with standard convension, please use SRC_QSPI_QSPI2_RX.
 */
#define SRC_QSPI2RX               (SRC_QSPI_QSPI2_RX)

/** \brief  1C0, QSPI Transmit Service Request */
#define SRC_QSPI_QSPI2_TX         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381C0u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI2_TX.
 * To use register names with standard convension, please use SRC_QSPI_QSPI2_TX.
 */
#define SRC_QSPI2TX               (SRC_QSPI_QSPI2_TX)

/** \brief  1D4, QSPI User Defined Service Request */
#define SRC_QSPI_QSPI2_U          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381D4u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI2_U.
 * To use register names with standard convension, please use SRC_QSPI_QSPI2_U.
 */
#define SRC_QSPI2U                (SRC_QSPI_QSPI2_U)

/** \brief  1E0, QSPI Error Service Request */
#define SRC_QSPI_QSPI3_ERR        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381E0u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI3_ERR.
 * To use register names with standard convension, please use SRC_QSPI_QSPI3_ERR.
 */
#define SRC_QSPI3ERR              (SRC_QSPI_QSPI3_ERR)

/** \brief  1E8, QSPI High Speed Capture Service Request */
#define SRC_QSPI_QSPI3_HC         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381E8u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI3_HC.
 * To use register names with standard convension, please use SRC_QSPI_QSPI3_HC.
 */
#define SRC_QSPI3HC               (SRC_QSPI_QSPI3_HC)

/** \brief  1E4, QSPI Phase Transition Service Request */
#define SRC_QSPI_QSPI3_PT         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381E4u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI3_PT.
 * To use register names with standard convension, please use SRC_QSPI_QSPI3_PT.
 */
#define SRC_QSPI3PT               (SRC_QSPI_QSPI3_PT)

/** \brief  1DC, QSPI Receive Service Request */
#define SRC_QSPI_QSPI3_RX         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381DCu)

/** Alias (User Manual Name) for SRC_QSPI_QSPI3_RX.
 * To use register names with standard convension, please use SRC_QSPI_QSPI3_RX.
 */
#define SRC_QSPI3RX               (SRC_QSPI_QSPI3_RX)

/** \brief  1D8, QSPI Transmit Service Request */
#define SRC_QSPI_QSPI3_TX         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381D8u)

/** Alias (User Manual Name) for SRC_QSPI_QSPI3_TX.
 * To use register names with standard convension, please use SRC_QSPI_QSPI3_TX.
 */
#define SRC_QSPI3TX               (SRC_QSPI_QSPI3_TX)

/** \brief  1EC, QSPI User Defined Service Request */
#define SRC_QSPI_QSPI3_U          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF00381ECu)

/** Alias (User Manual Name) for SRC_QSPI_QSPI3_U.
 * To use register names with standard convension, please use SRC_QSPI_QSPI3_U.
 */
#define SRC_QSPI3U                (SRC_QSPI_QSPI3_U)

/** \brief  CD0, SCU DTS Busy Service Request */
#define SRC_SCU_SCU_DTS           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038CD0u)

/** Alias (User Manual Name) for SRC_SCU_SCU_DTS.
 * To use register names with standard convension, please use SRC_SCU_SCU_DTS.
 */
#define SRC_SCUDTS                (SRC_SCU_SCU_DTS)

/** \brief  CD4, SCU ERU Service Request */
#define SRC_SCU_SCU_ERU0          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038CD4u)

/** Alias (User Manual Name) for SRC_SCU_SCU_ERU0.
 * To use register names with standard convension, please use SRC_SCU_SCU_ERU0.
 */
#define SRC_SCUERU0               (SRC_SCU_SCU_ERU0)

/** \brief  CD8, SCU ERU Service Request */
#define SRC_SCU_SCU_ERU1          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038CD8u)

/** Alias (User Manual Name) for SRC_SCU_SCU_ERU1.
 * To use register names with standard convension, please use SRC_SCU_SCU_ERU1.
 */
#define SRC_SCUERU1               (SRC_SCU_SCU_ERU1)

/** \brief  CDC, SCU ERU Service Request */
#define SRC_SCU_SCU_ERU2          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038CDCu)

/** Alias (User Manual Name) for SRC_SCU_SCU_ERU2.
 * To use register names with standard convension, please use SRC_SCU_SCU_ERU2.
 */
#define SRC_SCUERU2               (SRC_SCU_SCU_ERU2)

/** \brief  CE0, SCU ERU Service Request */
#define SRC_SCU_SCU_ERU3          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038CE0u)

/** Alias (User Manual Name) for SRC_SCU_SCU_ERU3.
 * To use register names with standard convension, please use SRC_SCU_SCU_ERU3.
 */
#define SRC_SCUERU3               (SRC_SCU_SCU_ERU3)

/** \brief  350, SENT TRIG Service Request */
#define SRC_SENT_SENT0_SR0        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038350u)

/** Alias (User Manual Name) for SRC_SENT_SENT0_SR0.
 * To use register names with standard convension, please use SRC_SENT_SENT0_SR0.
 */
#define SRC_SENT0                 (SRC_SENT_SENT0_SR0)

/** \brief  354, SENT TRIG Service Request */
#define SRC_SENT_SENT0_SR1        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038354u)

/** Alias (User Manual Name) for SRC_SENT_SENT0_SR1.
 * To use register names with standard convension, please use SRC_SENT_SENT0_SR1.
 */
#define SRC_SENT1                 (SRC_SENT_SENT0_SR1)

/** \brief  358, SENT TRIG Service Request */
#define SRC_SENT_SENT0_SR2        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038358u)

/** Alias (User Manual Name) for SRC_SENT_SENT0_SR2.
 * To use register names with standard convension, please use SRC_SENT_SENT0_SR2.
 */
#define SRC_SENT2                 (SRC_SENT_SENT0_SR2)

/** \brief  35C, SENT TRIG Service Request */
#define SRC_SENT_SENT0_SR3        /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003835Cu)

/** Alias (User Manual Name) for SRC_SENT_SENT0_SR3.
 * To use register names with standard convension, please use SRC_SENT_SENT0_SR3.
 */
#define SRC_SENT3                 (SRC_SENT_SENT0_SR3)

/** \brief  D10, SMU Service Request */
#define SRC_SMU_SMU0_SR0          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038D10u)

/** Alias (User Manual Name) for SRC_SMU_SMU0_SR0.
 * To use register names with standard convension, please use SRC_SMU_SMU0_SR0.
 */
#define SRC_SMU0                  (SRC_SMU_SMU0_SR0)

/** \brief  D14, SMU Service Request */
#define SRC_SMU_SMU0_SR1          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038D14u)

/** Alias (User Manual Name) for SRC_SMU_SMU0_SR1.
 * To use register names with standard convension, please use SRC_SMU_SMU0_SR1.
 */
#define SRC_SMU1                  (SRC_SMU_SMU0_SR1)

/** \brief  D18, SMU Service Request */
#define SRC_SMU_SMU0_SR2          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038D18u)

/** Alias (User Manual Name) for SRC_SMU_SMU0_SR2.
 * To use register names with standard convension, please use SRC_SMU_SMU0_SR2.
 */
#define SRC_SMU2                  (SRC_SMU_SMU0_SR2)

/** \brief  490, System Timer  Service Request 0 */
#define SRC_STM_STM0_SR0          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038490u)

/** Alias (User Manual Name) for SRC_STM_STM0_SR0.
 * To use register names with standard convension, please use SRC_STM_STM0_SR0.
 */
#define SRC_STM0SR0               (SRC_STM_STM0_SR0)

/** \brief  494, System Timer  Service Request 1 */
#define SRC_STM_STM0_SR1          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038494u)

/** Alias (User Manual Name) for SRC_STM_STM0_SR1.
 * To use register names with standard convension, please use SRC_STM_STM0_SR1.
 */
#define SRC_STM0SR1               (SRC_STM_STM0_SR1)

/** \brief  AA0, VADC Common Group  Service Request 0 */
#define SRC_VADC_CG0_SR0          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038AA0u)

/** Alias (User Manual Name) for SRC_VADC_CG0_SR0.
 * To use register names with standard convension, please use SRC_VADC_CG0_SR0.
 */
#define SRC_VADCCG0SR0            (SRC_VADC_CG0_SR0)

/** \brief  AA4, VADC Common Group  Service Request 1 */
#define SRC_VADC_CG0_SR1          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038AA4u)

/** Alias (User Manual Name) for SRC_VADC_CG0_SR1.
 * To use register names with standard convension, please use SRC_VADC_CG0_SR1.
 */
#define SRC_VADCCG0SR1            (SRC_VADC_CG0_SR1)

/** \brief  AA8, VADC Common Group  Service Request 2 */
#define SRC_VADC_CG0_SR2          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038AA8u)

/** Alias (User Manual Name) for SRC_VADC_CG0_SR2.
 * To use register names with standard convension, please use SRC_VADC_CG0_SR2.
 */
#define SRC_VADCCG0SR2            (SRC_VADC_CG0_SR2)

/** \brief  AAC, VADC Common Group  Service Request 3 */
#define SRC_VADC_CG0_SR3          /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038AACu)

/** Alias (User Manual Name) for SRC_VADC_CG0_SR3.
 * To use register names with standard convension, please use SRC_VADC_CG0_SR3.
 */
#define SRC_VADCCG0SR3            (SRC_VADC_CG0_SR3)

/** \brief  980, VADC Group  Service Request 0 */
#define SRC_VADC_G0_SR0           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038980u)

/** Alias (User Manual Name) for SRC_VADC_G0_SR0.
 * To use register names with standard convension, please use SRC_VADC_G0_SR0.
 */
#define SRC_VADCG0SR0             (SRC_VADC_G0_SR0)

/** \brief  984, VADC Group  Service Request 1 */
#define SRC_VADC_G0_SR1           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038984u)

/** Alias (User Manual Name) for SRC_VADC_G0_SR1.
 * To use register names with standard convension, please use SRC_VADC_G0_SR1.
 */
#define SRC_VADCG0SR1             (SRC_VADC_G0_SR1)

/** \brief  988, VADC Group  Service Request 2 */
#define SRC_VADC_G0_SR2           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038988u)

/** Alias (User Manual Name) for SRC_VADC_G0_SR2.
 * To use register names with standard convension, please use SRC_VADC_G0_SR2.
 */
#define SRC_VADCG0SR2             (SRC_VADC_G0_SR2)

/** \brief  98C, VADC Group  Service Request 3 */
#define SRC_VADC_G0_SR3           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003898Cu)

/** Alias (User Manual Name) for SRC_VADC_G0_SR3.
 * To use register names with standard convension, please use SRC_VADC_G0_SR3.
 */
#define SRC_VADCG0SR3             (SRC_VADC_G0_SR3)

/** \brief  990, VADC Group  Service Request 0 */
#define SRC_VADC_G1_SR0           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038990u)

/** Alias (User Manual Name) for SRC_VADC_G1_SR0.
 * To use register names with standard convension, please use SRC_VADC_G1_SR0.
 */
#define SRC_VADCG1SR0             (SRC_VADC_G1_SR0)

/** \brief  994, VADC Group  Service Request 1 */
#define SRC_VADC_G1_SR1           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038994u)

/** Alias (User Manual Name) for SRC_VADC_G1_SR1.
 * To use register names with standard convension, please use SRC_VADC_G1_SR1.
 */
#define SRC_VADCG1SR1             (SRC_VADC_G1_SR1)

/** \brief  998, VADC Group  Service Request 2 */
#define SRC_VADC_G1_SR2           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038998u)

/** Alias (User Manual Name) for SRC_VADC_G1_SR2.
 * To use register names with standard convension, please use SRC_VADC_G1_SR2.
 */
#define SRC_VADCG1SR2             (SRC_VADC_G1_SR2)

/** \brief  99C, VADC Group  Service Request 3 */
#define SRC_VADC_G1_SR3           /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF003899Cu)

/** Alias (User Manual Name) for SRC_VADC_G1_SR3.
 * To use register names with standard convension, please use SRC_VADC_G1_SR3.
 */
#define SRC_VADCG1SR3             (SRC_VADC_G1_SR3)

/** \brief  48, XBAR_SRI Service Request */
#define SRC_XBAR_XBAR_SRC         /*lint --e(923)*/ (*(volatile Ifx_SRC_SRCR *)0xF0038048u)

/** Alias (User Manual Name) for SRC_XBAR_XBAR_SRC.
 * To use register names with standard convension, please use SRC_XBAR_XBAR_SRC.
 */
#define SRC_XBARSRC               (SRC_XBAR_XBAR_SRC)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSRC_REG_H */

/**
 * \file IfxCan_reg.h
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
 * \defgroup IfxLld_Can_Cfg Can address
 * \ingroup IfxLld_Can
 *
 * \defgroup IfxLld_Can_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Can_Cfg
 *
 * \defgroup IfxLld_Can_Cfg_Can 2-CAN
 * \ingroup IfxLld_Can_Cfg
 *
 */
#ifndef IFXCAN_REG_H
#define IFXCAN_REG_H 1
/******************************************************************************/
#include "IfxCan_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Can_Cfg_BaseAddress
 * \{  */

/** \brief  CAN object */
#define MODULE_CAN /*lint --e(923)*/ (*(Ifx_CAN *)0xF0018000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Can_Cfg_Can
 * \{  */

/** \brief  FC, Access Enable Register 0 */
#define CAN_ACCEN0       /*lint --e(923)*/ (*(volatile Ifx_CAN_ACCEN0 *)0xF00180FCu)

/** \brief  F8, Access Enable Register 1 */
#define CAN_ACCEN1       /*lint --e(923)*/ (*(volatile Ifx_CAN_ACCEN1 *)0xF00180F8u)

/** \brief  0, CAN Clock Control Register */
#define CAN_CLC          /*lint --e(923)*/ (*(volatile Ifx_CAN_CLC *)0xF0018000u)

/** \brief  C, CAN Fractional Divider Register */
#define CAN_FDR          /*lint --e(923)*/ (*(volatile Ifx_CAN_FDR *)0xF001800Cu)

/** \brief  8, Module Identification Register */
#define CAN_ID           /*lint --e(923)*/ (*(volatile Ifx_CAN_ID *)0xF0018008u)

/** \brief  F4, Kernel Reset Register 0 */
#define CAN_KRST0        /*lint --e(923)*/ (*(volatile Ifx_CAN_KRST0 *)0xF00180F4u)

/** \brief  F0, Kernel Reset Register 1 */
#define CAN_KRST1        /*lint --e(923)*/ (*(volatile Ifx_CAN_KRST1 *)0xF00180F0u)

/** \brief  EC, Kernel Reset Status Clear Register */
#define CAN_KRSTCLR      /*lint --e(923)*/ (*(volatile Ifx_CAN_KRSTCLR *)0xF00180ECu)

/** \brief  100, List Register */
#define CAN_LIST0        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018100u)

/** \brief  104, List Register */
#define CAN_LIST1        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018104u)

/** \brief  128, List Register */
#define CAN_LIST10       /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018128u)

/** \brief  12C, List Register */
#define CAN_LIST11       /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF001812Cu)

/** \brief  130, List Register */
#define CAN_LIST12       /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018130u)

/** \brief  134, List Register */
#define CAN_LIST13       /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018134u)

/** \brief  138, List Register */
#define CAN_LIST14       /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018138u)

/** \brief  13C, List Register */
#define CAN_LIST15       /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF001813Cu)

/** \brief  108, List Register */
#define CAN_LIST2        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018108u)

/** \brief  10C, List Register */
#define CAN_LIST3        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF001810Cu)

/** \brief  110, List Register */
#define CAN_LIST4        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018110u)

/** \brief  114, List Register */
#define CAN_LIST5        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018114u)

/** \brief  118, List Register */
#define CAN_LIST6        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018118u)

/** \brief  11C, List Register */
#define CAN_LIST7        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF001811Cu)

/** \brief  120, List Register */
#define CAN_LIST8        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018120u)

/** \brief  124, List Register */
#define CAN_LIST9        /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST *)0xF0018124u)

/** \brief  1C8, Module Control Register */
#define CAN_MCR          /*lint --e(923)*/ (*(volatile Ifx_CAN_MCR *)0xF00181C8u)

/** \brief  1D0, Measurement Control Register */
#define CAN_MECR         /*lint --e(923)*/ (*(volatile Ifx_CAN_MECR *)0xF00181D0u)

/** \brief  1D4, Measurement Status Register */
#define CAN_MESTAT       /*lint --e(923)*/ (*(volatile Ifx_CAN_MESTAT *)0xF00181D4u)

/** \brief  1CC, Module Interrupt Trigger Register */
#define CAN_MITR         /*lint --e(923)*/ (*(volatile Ifx_CAN_MITR *)0xF00181CCu)

/** \brief  100C, Message Object  Acceptance Mask Register */
#define CAN_MO0_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001900Cu)

/** Alias (User Manual Name) for CAN_MO0_AMR.
 * To use register names with standard convension, please use CAN_MO0_AMR.
 */
#define CAN_MOAMR0       (CAN_MO0_AMR)

/** \brief  1018, Message Object  Arbitration Register */
#define CAN_MO0_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019018u)

/** Alias (User Manual Name) for CAN_MO0_AR.
 * To use register names with standard convension, please use CAN_MO0_AR.
 */
#define CAN_MOAR0        (CAN_MO0_AR)

/** \brief  101C, Message Object  Control Register */
#define CAN_MO0_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001901Cu)

/** Alias (User Manual Name) for CAN_MO0_CTR.
 * To use register names with standard convension, please use CAN_MO0_CTR.
 */
#define CAN_MOCTR0       (CAN_MO0_CTR)

/** \brief  1014, Message Object  Data Register High */
#define CAN_MO0_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019014u)

/** Alias (User Manual Name) for CAN_MO0_DATAH.
 * To use register names with standard convension, please use CAN_MO0_DATAH.
 */
#define CAN_MODATAH0     (CAN_MO0_DATAH)

/** \brief  1010, Message Object  Data Register Low */
#define CAN_MO0_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019010u)

/** Alias (User Manual Name) for CAN_MO0_DATAL.
 * To use register names with standard convension, please use CAN_MO0_DATAL.
 */
#define CAN_MODATAL0     (CAN_MO0_DATAL)

/** \brief  1000, Message Object  Function Control Register */
#define CAN_MO0_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019000u)

/** Alias (User Manual Name) for CAN_MO0_EDATA0.
 * To use register names with standard convension, please use CAN_MO0_EDATA0.
 */
#define CAN_EMO0DATA0    (CAN_MO0_EDATA0)

/** \brief  1004, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO0_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019004u)

/** Alias (User Manual Name) for CAN_MO0_EDATA1.
 * To use register names with standard convension, please use CAN_MO0_EDATA1.
 */
#define CAN_EMO0DATA1    (CAN_MO0_EDATA1)

/** \brief  1008, Message Object  Interrupt Pointer Register */
#define CAN_MO0_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019008u)

/** Alias (User Manual Name) for CAN_MO0_EDATA2.
 * To use register names with standard convension, please use CAN_MO0_EDATA2.
 */
#define CAN_EMO0DATA2    (CAN_MO0_EDATA2)

/** \brief  100C, Message Object  Acceptance Mask Register */
#define CAN_MO0_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001900Cu)

/** Alias (User Manual Name) for CAN_MO0_EDATA3.
 * To use register names with standard convension, please use CAN_MO0_EDATA3.
 */
#define CAN_EMO0DATA3    (CAN_MO0_EDATA3)

/** \brief  1010, Message Object  Data Register Low */
#define CAN_MO0_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019010u)

/** Alias (User Manual Name) for CAN_MO0_EDATA4.
 * To use register names with standard convension, please use CAN_MO0_EDATA4.
 */
#define CAN_EMO0DATA4    (CAN_MO0_EDATA4)

/** \brief  1014, Message Object  Data Register High */
#define CAN_MO0_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019014u)

/** Alias (User Manual Name) for CAN_MO0_EDATA5.
 * To use register names with standard convension, please use CAN_MO0_EDATA5.
 */
#define CAN_EMO0DATA5    (CAN_MO0_EDATA5)

/** \brief  1018, Message Object  Arbitration Register */
#define CAN_MO0_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019018u)

/** Alias (User Manual Name) for CAN_MO0_EDATA6.
 * To use register names with standard convension, please use CAN_MO0_EDATA6.
 */
#define CAN_EMO0DATA6    (CAN_MO0_EDATA6)

/** \brief  1000, Message Object  Function Control Register */
#define CAN_MO0_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019000u)

/** Alias (User Manual Name) for CAN_MO0_FCR.
 * To use register names with standard convension, please use CAN_MO0_FCR.
 */
#define CAN_MOFCR0       (CAN_MO0_FCR)

/** \brief  1004, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO0_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019004u)

/** Alias (User Manual Name) for CAN_MO0_FGPR.
 * To use register names with standard convension, please use CAN_MO0_FGPR.
 */
#define CAN_MOFGPR0      (CAN_MO0_FGPR)

/** \brief  1008, Message Object  Interrupt Pointer Register */
#define CAN_MO0_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019008u)

/** Alias (User Manual Name) for CAN_MO0_IPR.
 * To use register names with standard convension, please use CAN_MO0_IPR.
 */
#define CAN_MOIPR0       (CAN_MO0_IPR)

/** \brief  101C, Message Object  Control Register */
#define CAN_MO0_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001901Cu)

/** Alias (User Manual Name) for CAN_MO0_STAT.
 * To use register names with standard convension, please use CAN_MO0_STAT.
 */
#define CAN_MOSTAT0      (CAN_MO0_STAT)

/** \brief  1C8C, Message Object  Acceptance Mask Register */
#define CAN_MO100_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019C8Cu)

/** Alias (User Manual Name) for CAN_MO100_AMR.
 * To use register names with standard convension, please use CAN_MO100_AMR.
 */
#define CAN_MOAMR100     (CAN_MO100_AMR)

/** \brief  1C98, Message Object  Arbitration Register */
#define CAN_MO100_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019C98u)

/** Alias (User Manual Name) for CAN_MO100_AR.
 * To use register names with standard convension, please use CAN_MO100_AR.
 */
#define CAN_MOAR100      (CAN_MO100_AR)

/** \brief  1C9C, Message Object  Control Register */
#define CAN_MO100_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019C9Cu)

/** Alias (User Manual Name) for CAN_MO100_CTR.
 * To use register names with standard convension, please use CAN_MO100_CTR.
 */
#define CAN_MOCTR100     (CAN_MO100_CTR)

/** \brief  1C94, Message Object  Data Register High */
#define CAN_MO100_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019C94u)

/** Alias (User Manual Name) for CAN_MO100_DATAH.
 * To use register names with standard convension, please use CAN_MO100_DATAH.
 */
#define CAN_MODATAH100   (CAN_MO100_DATAH)

/** \brief  1C90, Message Object  Data Register Low */
#define CAN_MO100_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019C90u)

/** Alias (User Manual Name) for CAN_MO100_DATAL.
 * To use register names with standard convension, please use CAN_MO100_DATAL.
 */
#define CAN_MODATAL100   (CAN_MO100_DATAL)

/** \brief  1C80, Message Object  Function Control Register */
#define CAN_MO100_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019C80u)

/** Alias (User Manual Name) for CAN_MO100_EDATA0.
 * To use register names with standard convension, please use CAN_MO100_EDATA0.
 */
#define CAN_EMO100DATA0  (CAN_MO100_EDATA0)

/** \brief  1C84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO100_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019C84u)

/** Alias (User Manual Name) for CAN_MO100_EDATA1.
 * To use register names with standard convension, please use CAN_MO100_EDATA1.
 */
#define CAN_EMO100DATA1  (CAN_MO100_EDATA1)

/** \brief  1C88, Message Object  Interrupt Pointer Register */
#define CAN_MO100_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019C88u)

/** Alias (User Manual Name) for CAN_MO100_EDATA2.
 * To use register names with standard convension, please use CAN_MO100_EDATA2.
 */
#define CAN_EMO100DATA2  (CAN_MO100_EDATA2)

/** \brief  1C8C, Message Object  Acceptance Mask Register */
#define CAN_MO100_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019C8Cu)

/** Alias (User Manual Name) for CAN_MO100_EDATA3.
 * To use register names with standard convension, please use CAN_MO100_EDATA3.
 */
#define CAN_EMO100DATA3  (CAN_MO100_EDATA3)

/** \brief  1C90, Message Object  Data Register Low */
#define CAN_MO100_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019C90u)

/** Alias (User Manual Name) for CAN_MO100_EDATA4.
 * To use register names with standard convension, please use CAN_MO100_EDATA4.
 */
#define CAN_EMO100DATA4  (CAN_MO100_EDATA4)

/** \brief  1C94, Message Object  Data Register High */
#define CAN_MO100_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019C94u)

/** Alias (User Manual Name) for CAN_MO100_EDATA5.
 * To use register names with standard convension, please use CAN_MO100_EDATA5.
 */
#define CAN_EMO100DATA5  (CAN_MO100_EDATA5)

/** \brief  1C98, Message Object  Arbitration Register */
#define CAN_MO100_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019C98u)

/** Alias (User Manual Name) for CAN_MO100_EDATA6.
 * To use register names with standard convension, please use CAN_MO100_EDATA6.
 */
#define CAN_EMO100DATA6  (CAN_MO100_EDATA6)

/** \brief  1C80, Message Object  Function Control Register */
#define CAN_MO100_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019C80u)

/** Alias (User Manual Name) for CAN_MO100_FCR.
 * To use register names with standard convension, please use CAN_MO100_FCR.
 */
#define CAN_MOFCR100     (CAN_MO100_FCR)

/** \brief  1C84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO100_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019C84u)

/** Alias (User Manual Name) for CAN_MO100_FGPR.
 * To use register names with standard convension, please use CAN_MO100_FGPR.
 */
#define CAN_MOFGPR100    (CAN_MO100_FGPR)

/** \brief  1C88, Message Object  Interrupt Pointer Register */
#define CAN_MO100_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019C88u)

/** Alias (User Manual Name) for CAN_MO100_IPR.
 * To use register names with standard convension, please use CAN_MO100_IPR.
 */
#define CAN_MOIPR100     (CAN_MO100_IPR)

/** \brief  1C9C, Message Object  Control Register */
#define CAN_MO100_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019C9Cu)

/** Alias (User Manual Name) for CAN_MO100_STAT.
 * To use register names with standard convension, please use CAN_MO100_STAT.
 */
#define CAN_MOSTAT100    (CAN_MO100_STAT)

/** \brief  1CAC, Message Object  Acceptance Mask Register */
#define CAN_MO101_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019CACu)

/** Alias (User Manual Name) for CAN_MO101_AMR.
 * To use register names with standard convension, please use CAN_MO101_AMR.
 */
#define CAN_MOAMR101     (CAN_MO101_AMR)

/** \brief  1CB8, Message Object  Arbitration Register */
#define CAN_MO101_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019CB8u)

/** Alias (User Manual Name) for CAN_MO101_AR.
 * To use register names with standard convension, please use CAN_MO101_AR.
 */
#define CAN_MOAR101      (CAN_MO101_AR)

/** \brief  1CBC, Message Object  Control Register */
#define CAN_MO101_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019CBCu)

/** Alias (User Manual Name) for CAN_MO101_CTR.
 * To use register names with standard convension, please use CAN_MO101_CTR.
 */
#define CAN_MOCTR101     (CAN_MO101_CTR)

/** \brief  1CB4, Message Object  Data Register High */
#define CAN_MO101_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019CB4u)

/** Alias (User Manual Name) for CAN_MO101_DATAH.
 * To use register names with standard convension, please use CAN_MO101_DATAH.
 */
#define CAN_MODATAH101   (CAN_MO101_DATAH)

/** \brief  1CB0, Message Object  Data Register Low */
#define CAN_MO101_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019CB0u)

/** Alias (User Manual Name) for CAN_MO101_DATAL.
 * To use register names with standard convension, please use CAN_MO101_DATAL.
 */
#define CAN_MODATAL101   (CAN_MO101_DATAL)

/** \brief  1CA0, Message Object  Function Control Register */
#define CAN_MO101_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019CA0u)

/** Alias (User Manual Name) for CAN_MO101_EDATA0.
 * To use register names with standard convension, please use CAN_MO101_EDATA0.
 */
#define CAN_EMO101DATA0  (CAN_MO101_EDATA0)

/** \brief  1CA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO101_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019CA4u)

/** Alias (User Manual Name) for CAN_MO101_EDATA1.
 * To use register names with standard convension, please use CAN_MO101_EDATA1.
 */
#define CAN_EMO101DATA1  (CAN_MO101_EDATA1)

/** \brief  1CA8, Message Object  Interrupt Pointer Register */
#define CAN_MO101_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019CA8u)

/** Alias (User Manual Name) for CAN_MO101_EDATA2.
 * To use register names with standard convension, please use CAN_MO101_EDATA2.
 */
#define CAN_EMO101DATA2  (CAN_MO101_EDATA2)

/** \brief  1CAC, Message Object  Acceptance Mask Register */
#define CAN_MO101_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019CACu)

/** Alias (User Manual Name) for CAN_MO101_EDATA3.
 * To use register names with standard convension, please use CAN_MO101_EDATA3.
 */
#define CAN_EMO101DATA3  (CAN_MO101_EDATA3)

/** \brief  1CB0, Message Object  Data Register Low */
#define CAN_MO101_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019CB0u)

/** Alias (User Manual Name) for CAN_MO101_EDATA4.
 * To use register names with standard convension, please use CAN_MO101_EDATA4.
 */
#define CAN_EMO101DATA4  (CAN_MO101_EDATA4)

/** \brief  1CB4, Message Object  Data Register High */
#define CAN_MO101_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019CB4u)

/** Alias (User Manual Name) for CAN_MO101_EDATA5.
 * To use register names with standard convension, please use CAN_MO101_EDATA5.
 */
#define CAN_EMO101DATA5  (CAN_MO101_EDATA5)

/** \brief  1CB8, Message Object  Arbitration Register */
#define CAN_MO101_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019CB8u)

/** Alias (User Manual Name) for CAN_MO101_EDATA6.
 * To use register names with standard convension, please use CAN_MO101_EDATA6.
 */
#define CAN_EMO101DATA6  (CAN_MO101_EDATA6)

/** \brief  1CA0, Message Object  Function Control Register */
#define CAN_MO101_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019CA0u)

/** Alias (User Manual Name) for CAN_MO101_FCR.
 * To use register names with standard convension, please use CAN_MO101_FCR.
 */
#define CAN_MOFCR101     (CAN_MO101_FCR)

/** \brief  1CA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO101_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019CA4u)

/** Alias (User Manual Name) for CAN_MO101_FGPR.
 * To use register names with standard convension, please use CAN_MO101_FGPR.
 */
#define CAN_MOFGPR101    (CAN_MO101_FGPR)

/** \brief  1CA8, Message Object  Interrupt Pointer Register */
#define CAN_MO101_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019CA8u)

/** Alias (User Manual Name) for CAN_MO101_IPR.
 * To use register names with standard convension, please use CAN_MO101_IPR.
 */
#define CAN_MOIPR101     (CAN_MO101_IPR)

/** \brief  1CBC, Message Object  Control Register */
#define CAN_MO101_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019CBCu)

/** Alias (User Manual Name) for CAN_MO101_STAT.
 * To use register names with standard convension, please use CAN_MO101_STAT.
 */
#define CAN_MOSTAT101    (CAN_MO101_STAT)

/** \brief  1CCC, Message Object  Acceptance Mask Register */
#define CAN_MO102_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019CCCu)

/** Alias (User Manual Name) for CAN_MO102_AMR.
 * To use register names with standard convension, please use CAN_MO102_AMR.
 */
#define CAN_MOAMR102     (CAN_MO102_AMR)

/** \brief  1CD8, Message Object  Arbitration Register */
#define CAN_MO102_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019CD8u)

/** Alias (User Manual Name) for CAN_MO102_AR.
 * To use register names with standard convension, please use CAN_MO102_AR.
 */
#define CAN_MOAR102      (CAN_MO102_AR)

/** \brief  1CDC, Message Object  Control Register */
#define CAN_MO102_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019CDCu)

/** Alias (User Manual Name) for CAN_MO102_CTR.
 * To use register names with standard convension, please use CAN_MO102_CTR.
 */
#define CAN_MOCTR102     (CAN_MO102_CTR)

/** \brief  1CD4, Message Object  Data Register High */
#define CAN_MO102_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019CD4u)

/** Alias (User Manual Name) for CAN_MO102_DATAH.
 * To use register names with standard convension, please use CAN_MO102_DATAH.
 */
#define CAN_MODATAH102   (CAN_MO102_DATAH)

/** \brief  1CD0, Message Object  Data Register Low */
#define CAN_MO102_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019CD0u)

/** Alias (User Manual Name) for CAN_MO102_DATAL.
 * To use register names with standard convension, please use CAN_MO102_DATAL.
 */
#define CAN_MODATAL102   (CAN_MO102_DATAL)

/** \brief  1CC0, Message Object  Function Control Register */
#define CAN_MO102_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019CC0u)

/** Alias (User Manual Name) for CAN_MO102_EDATA0.
 * To use register names with standard convension, please use CAN_MO102_EDATA0.
 */
#define CAN_EMO102DATA0  (CAN_MO102_EDATA0)

/** \brief  1CC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO102_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019CC4u)

/** Alias (User Manual Name) for CAN_MO102_EDATA1.
 * To use register names with standard convension, please use CAN_MO102_EDATA1.
 */
#define CAN_EMO102DATA1  (CAN_MO102_EDATA1)

/** \brief  1CC8, Message Object  Interrupt Pointer Register */
#define CAN_MO102_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019CC8u)

/** Alias (User Manual Name) for CAN_MO102_EDATA2.
 * To use register names with standard convension, please use CAN_MO102_EDATA2.
 */
#define CAN_EMO102DATA2  (CAN_MO102_EDATA2)

/** \brief  1CCC, Message Object  Acceptance Mask Register */
#define CAN_MO102_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019CCCu)

/** Alias (User Manual Name) for CAN_MO102_EDATA3.
 * To use register names with standard convension, please use CAN_MO102_EDATA3.
 */
#define CAN_EMO102DATA3  (CAN_MO102_EDATA3)

/** \brief  1CD0, Message Object  Data Register Low */
#define CAN_MO102_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019CD0u)

/** Alias (User Manual Name) for CAN_MO102_EDATA4.
 * To use register names with standard convension, please use CAN_MO102_EDATA4.
 */
#define CAN_EMO102DATA4  (CAN_MO102_EDATA4)

/** \brief  1CD4, Message Object  Data Register High */
#define CAN_MO102_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019CD4u)

/** Alias (User Manual Name) for CAN_MO102_EDATA5.
 * To use register names with standard convension, please use CAN_MO102_EDATA5.
 */
#define CAN_EMO102DATA5  (CAN_MO102_EDATA5)

/** \brief  1CD8, Message Object  Arbitration Register */
#define CAN_MO102_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019CD8u)

/** Alias (User Manual Name) for CAN_MO102_EDATA6.
 * To use register names with standard convension, please use CAN_MO102_EDATA6.
 */
#define CAN_EMO102DATA6  (CAN_MO102_EDATA6)

/** \brief  1CC0, Message Object  Function Control Register */
#define CAN_MO102_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019CC0u)

/** Alias (User Manual Name) for CAN_MO102_FCR.
 * To use register names with standard convension, please use CAN_MO102_FCR.
 */
#define CAN_MOFCR102     (CAN_MO102_FCR)

/** \brief  1CC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO102_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019CC4u)

/** Alias (User Manual Name) for CAN_MO102_FGPR.
 * To use register names with standard convension, please use CAN_MO102_FGPR.
 */
#define CAN_MOFGPR102    (CAN_MO102_FGPR)

/** \brief  1CC8, Message Object  Interrupt Pointer Register */
#define CAN_MO102_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019CC8u)

/** Alias (User Manual Name) for CAN_MO102_IPR.
 * To use register names with standard convension, please use CAN_MO102_IPR.
 */
#define CAN_MOIPR102     (CAN_MO102_IPR)

/** \brief  1CDC, Message Object  Control Register */
#define CAN_MO102_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019CDCu)

/** Alias (User Manual Name) for CAN_MO102_STAT.
 * To use register names with standard convension, please use CAN_MO102_STAT.
 */
#define CAN_MOSTAT102    (CAN_MO102_STAT)

/** \brief  1CEC, Message Object  Acceptance Mask Register */
#define CAN_MO103_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019CECu)

/** Alias (User Manual Name) for CAN_MO103_AMR.
 * To use register names with standard convension, please use CAN_MO103_AMR.
 */
#define CAN_MOAMR103     (CAN_MO103_AMR)

/** \brief  1CF8, Message Object  Arbitration Register */
#define CAN_MO103_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019CF8u)

/** Alias (User Manual Name) for CAN_MO103_AR.
 * To use register names with standard convension, please use CAN_MO103_AR.
 */
#define CAN_MOAR103      (CAN_MO103_AR)

/** \brief  1CFC, Message Object  Control Register */
#define CAN_MO103_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019CFCu)

/** Alias (User Manual Name) for CAN_MO103_CTR.
 * To use register names with standard convension, please use CAN_MO103_CTR.
 */
#define CAN_MOCTR103     (CAN_MO103_CTR)

/** \brief  1CF4, Message Object  Data Register High */
#define CAN_MO103_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019CF4u)

/** Alias (User Manual Name) for CAN_MO103_DATAH.
 * To use register names with standard convension, please use CAN_MO103_DATAH.
 */
#define CAN_MODATAH103   (CAN_MO103_DATAH)

/** \brief  1CF0, Message Object  Data Register Low */
#define CAN_MO103_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019CF0u)

/** Alias (User Manual Name) for CAN_MO103_DATAL.
 * To use register names with standard convension, please use CAN_MO103_DATAL.
 */
#define CAN_MODATAL103   (CAN_MO103_DATAL)

/** \brief  1CE0, Message Object  Function Control Register */
#define CAN_MO103_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019CE0u)

/** Alias (User Manual Name) for CAN_MO103_EDATA0.
 * To use register names with standard convension, please use CAN_MO103_EDATA0.
 */
#define CAN_EMO103DATA0  (CAN_MO103_EDATA0)

/** \brief  1CE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO103_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019CE4u)

/** Alias (User Manual Name) for CAN_MO103_EDATA1.
 * To use register names with standard convension, please use CAN_MO103_EDATA1.
 */
#define CAN_EMO103DATA1  (CAN_MO103_EDATA1)

/** \brief  1CE8, Message Object  Interrupt Pointer Register */
#define CAN_MO103_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019CE8u)

/** Alias (User Manual Name) for CAN_MO103_EDATA2.
 * To use register names with standard convension, please use CAN_MO103_EDATA2.
 */
#define CAN_EMO103DATA2  (CAN_MO103_EDATA2)

/** \brief  1CEC, Message Object  Acceptance Mask Register */
#define CAN_MO103_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019CECu)

/** Alias (User Manual Name) for CAN_MO103_EDATA3.
 * To use register names with standard convension, please use CAN_MO103_EDATA3.
 */
#define CAN_EMO103DATA3  (CAN_MO103_EDATA3)

/** \brief  1CF0, Message Object  Data Register Low */
#define CAN_MO103_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019CF0u)

/** Alias (User Manual Name) for CAN_MO103_EDATA4.
 * To use register names with standard convension, please use CAN_MO103_EDATA4.
 */
#define CAN_EMO103DATA4  (CAN_MO103_EDATA4)

/** \brief  1CF4, Message Object  Data Register High */
#define CAN_MO103_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019CF4u)

/** Alias (User Manual Name) for CAN_MO103_EDATA5.
 * To use register names with standard convension, please use CAN_MO103_EDATA5.
 */
#define CAN_EMO103DATA5  (CAN_MO103_EDATA5)

/** \brief  1CF8, Message Object  Arbitration Register */
#define CAN_MO103_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019CF8u)

/** Alias (User Manual Name) for CAN_MO103_EDATA6.
 * To use register names with standard convension, please use CAN_MO103_EDATA6.
 */
#define CAN_EMO103DATA6  (CAN_MO103_EDATA6)

/** \brief  1CE0, Message Object  Function Control Register */
#define CAN_MO103_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019CE0u)

/** Alias (User Manual Name) for CAN_MO103_FCR.
 * To use register names with standard convension, please use CAN_MO103_FCR.
 */
#define CAN_MOFCR103     (CAN_MO103_FCR)

/** \brief  1CE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO103_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019CE4u)

/** Alias (User Manual Name) for CAN_MO103_FGPR.
 * To use register names with standard convension, please use CAN_MO103_FGPR.
 */
#define CAN_MOFGPR103    (CAN_MO103_FGPR)

/** \brief  1CE8, Message Object  Interrupt Pointer Register */
#define CAN_MO103_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019CE8u)

/** Alias (User Manual Name) for CAN_MO103_IPR.
 * To use register names with standard convension, please use CAN_MO103_IPR.
 */
#define CAN_MOIPR103     (CAN_MO103_IPR)

/** \brief  1CFC, Message Object  Control Register */
#define CAN_MO103_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019CFCu)

/** Alias (User Manual Name) for CAN_MO103_STAT.
 * To use register names with standard convension, please use CAN_MO103_STAT.
 */
#define CAN_MOSTAT103    (CAN_MO103_STAT)

/** \brief  1D0C, Message Object  Acceptance Mask Register */
#define CAN_MO104_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019D0Cu)

/** Alias (User Manual Name) for CAN_MO104_AMR.
 * To use register names with standard convension, please use CAN_MO104_AMR.
 */
#define CAN_MOAMR104     (CAN_MO104_AMR)

/** \brief  1D18, Message Object  Arbitration Register */
#define CAN_MO104_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019D18u)

/** Alias (User Manual Name) for CAN_MO104_AR.
 * To use register names with standard convension, please use CAN_MO104_AR.
 */
#define CAN_MOAR104      (CAN_MO104_AR)

/** \brief  1D1C, Message Object  Control Register */
#define CAN_MO104_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019D1Cu)

/** Alias (User Manual Name) for CAN_MO104_CTR.
 * To use register names with standard convension, please use CAN_MO104_CTR.
 */
#define CAN_MOCTR104     (CAN_MO104_CTR)

/** \brief  1D14, Message Object  Data Register High */
#define CAN_MO104_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019D14u)

/** Alias (User Manual Name) for CAN_MO104_DATAH.
 * To use register names with standard convension, please use CAN_MO104_DATAH.
 */
#define CAN_MODATAH104   (CAN_MO104_DATAH)

/** \brief  1D10, Message Object  Data Register Low */
#define CAN_MO104_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019D10u)

/** Alias (User Manual Name) for CAN_MO104_DATAL.
 * To use register names with standard convension, please use CAN_MO104_DATAL.
 */
#define CAN_MODATAL104   (CAN_MO104_DATAL)

/** \brief  1D00, Message Object  Function Control Register */
#define CAN_MO104_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019D00u)

/** Alias (User Manual Name) for CAN_MO104_EDATA0.
 * To use register names with standard convension, please use CAN_MO104_EDATA0.
 */
#define CAN_EMO104DATA0  (CAN_MO104_EDATA0)

/** \brief  1D04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO104_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019D04u)

/** Alias (User Manual Name) for CAN_MO104_EDATA1.
 * To use register names with standard convension, please use CAN_MO104_EDATA1.
 */
#define CAN_EMO104DATA1  (CAN_MO104_EDATA1)

/** \brief  1D08, Message Object  Interrupt Pointer Register */
#define CAN_MO104_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019D08u)

/** Alias (User Manual Name) for CAN_MO104_EDATA2.
 * To use register names with standard convension, please use CAN_MO104_EDATA2.
 */
#define CAN_EMO104DATA2  (CAN_MO104_EDATA2)

/** \brief  1D0C, Message Object  Acceptance Mask Register */
#define CAN_MO104_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019D0Cu)

/** Alias (User Manual Name) for CAN_MO104_EDATA3.
 * To use register names with standard convension, please use CAN_MO104_EDATA3.
 */
#define CAN_EMO104DATA3  (CAN_MO104_EDATA3)

/** \brief  1D10, Message Object  Data Register Low */
#define CAN_MO104_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019D10u)

/** Alias (User Manual Name) for CAN_MO104_EDATA4.
 * To use register names with standard convension, please use CAN_MO104_EDATA4.
 */
#define CAN_EMO104DATA4  (CAN_MO104_EDATA4)

/** \brief  1D14, Message Object  Data Register High */
#define CAN_MO104_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019D14u)

/** Alias (User Manual Name) for CAN_MO104_EDATA5.
 * To use register names with standard convension, please use CAN_MO104_EDATA5.
 */
#define CAN_EMO104DATA5  (CAN_MO104_EDATA5)

/** \brief  1D18, Message Object  Arbitration Register */
#define CAN_MO104_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019D18u)

/** Alias (User Manual Name) for CAN_MO104_EDATA6.
 * To use register names with standard convension, please use CAN_MO104_EDATA6.
 */
#define CAN_EMO104DATA6  (CAN_MO104_EDATA6)

/** \brief  1D00, Message Object  Function Control Register */
#define CAN_MO104_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019D00u)

/** Alias (User Manual Name) for CAN_MO104_FCR.
 * To use register names with standard convension, please use CAN_MO104_FCR.
 */
#define CAN_MOFCR104     (CAN_MO104_FCR)

/** \brief  1D04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO104_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019D04u)

/** Alias (User Manual Name) for CAN_MO104_FGPR.
 * To use register names with standard convension, please use CAN_MO104_FGPR.
 */
#define CAN_MOFGPR104    (CAN_MO104_FGPR)

/** \brief  1D08, Message Object  Interrupt Pointer Register */
#define CAN_MO104_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019D08u)

/** Alias (User Manual Name) for CAN_MO104_IPR.
 * To use register names with standard convension, please use CAN_MO104_IPR.
 */
#define CAN_MOIPR104     (CAN_MO104_IPR)

/** \brief  1D1C, Message Object  Control Register */
#define CAN_MO104_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019D1Cu)

/** Alias (User Manual Name) for CAN_MO104_STAT.
 * To use register names with standard convension, please use CAN_MO104_STAT.
 */
#define CAN_MOSTAT104    (CAN_MO104_STAT)

/** \brief  1D2C, Message Object  Acceptance Mask Register */
#define CAN_MO105_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019D2Cu)

/** Alias (User Manual Name) for CAN_MO105_AMR.
 * To use register names with standard convension, please use CAN_MO105_AMR.
 */
#define CAN_MOAMR105     (CAN_MO105_AMR)

/** \brief  1D38, Message Object  Arbitration Register */
#define CAN_MO105_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019D38u)

/** Alias (User Manual Name) for CAN_MO105_AR.
 * To use register names with standard convension, please use CAN_MO105_AR.
 */
#define CAN_MOAR105      (CAN_MO105_AR)

/** \brief  1D3C, Message Object  Control Register */
#define CAN_MO105_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019D3Cu)

/** Alias (User Manual Name) for CAN_MO105_CTR.
 * To use register names with standard convension, please use CAN_MO105_CTR.
 */
#define CAN_MOCTR105     (CAN_MO105_CTR)

/** \brief  1D34, Message Object  Data Register High */
#define CAN_MO105_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019D34u)

/** Alias (User Manual Name) for CAN_MO105_DATAH.
 * To use register names with standard convension, please use CAN_MO105_DATAH.
 */
#define CAN_MODATAH105   (CAN_MO105_DATAH)

/** \brief  1D30, Message Object  Data Register Low */
#define CAN_MO105_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019D30u)

/** Alias (User Manual Name) for CAN_MO105_DATAL.
 * To use register names with standard convension, please use CAN_MO105_DATAL.
 */
#define CAN_MODATAL105   (CAN_MO105_DATAL)

/** \brief  1D20, Message Object  Function Control Register */
#define CAN_MO105_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019D20u)

/** Alias (User Manual Name) for CAN_MO105_EDATA0.
 * To use register names with standard convension, please use CAN_MO105_EDATA0.
 */
#define CAN_EMO105DATA0  (CAN_MO105_EDATA0)

/** \brief  1D24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO105_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019D24u)

/** Alias (User Manual Name) for CAN_MO105_EDATA1.
 * To use register names with standard convension, please use CAN_MO105_EDATA1.
 */
#define CAN_EMO105DATA1  (CAN_MO105_EDATA1)

/** \brief  1D28, Message Object  Interrupt Pointer Register */
#define CAN_MO105_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019D28u)

/** Alias (User Manual Name) for CAN_MO105_EDATA2.
 * To use register names with standard convension, please use CAN_MO105_EDATA2.
 */
#define CAN_EMO105DATA2  (CAN_MO105_EDATA2)

/** \brief  1D2C, Message Object  Acceptance Mask Register */
#define CAN_MO105_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019D2Cu)

/** Alias (User Manual Name) for CAN_MO105_EDATA3.
 * To use register names with standard convension, please use CAN_MO105_EDATA3.
 */
#define CAN_EMO105DATA3  (CAN_MO105_EDATA3)

/** \brief  1D30, Message Object  Data Register Low */
#define CAN_MO105_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019D30u)

/** Alias (User Manual Name) for CAN_MO105_EDATA4.
 * To use register names with standard convension, please use CAN_MO105_EDATA4.
 */
#define CAN_EMO105DATA4  (CAN_MO105_EDATA4)

/** \brief  1D34, Message Object  Data Register High */
#define CAN_MO105_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019D34u)

/** Alias (User Manual Name) for CAN_MO105_EDATA5.
 * To use register names with standard convension, please use CAN_MO105_EDATA5.
 */
#define CAN_EMO105DATA5  (CAN_MO105_EDATA5)

/** \brief  1D38, Message Object  Arbitration Register */
#define CAN_MO105_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019D38u)

/** Alias (User Manual Name) for CAN_MO105_EDATA6.
 * To use register names with standard convension, please use CAN_MO105_EDATA6.
 */
#define CAN_EMO105DATA6  (CAN_MO105_EDATA6)

/** \brief  1D20, Message Object  Function Control Register */
#define CAN_MO105_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019D20u)

/** Alias (User Manual Name) for CAN_MO105_FCR.
 * To use register names with standard convension, please use CAN_MO105_FCR.
 */
#define CAN_MOFCR105     (CAN_MO105_FCR)

/** \brief  1D24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO105_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019D24u)

/** Alias (User Manual Name) for CAN_MO105_FGPR.
 * To use register names with standard convension, please use CAN_MO105_FGPR.
 */
#define CAN_MOFGPR105    (CAN_MO105_FGPR)

/** \brief  1D28, Message Object  Interrupt Pointer Register */
#define CAN_MO105_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019D28u)

/** Alias (User Manual Name) for CAN_MO105_IPR.
 * To use register names with standard convension, please use CAN_MO105_IPR.
 */
#define CAN_MOIPR105     (CAN_MO105_IPR)

/** \brief  1D3C, Message Object  Control Register */
#define CAN_MO105_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019D3Cu)

/** Alias (User Manual Name) for CAN_MO105_STAT.
 * To use register names with standard convension, please use CAN_MO105_STAT.
 */
#define CAN_MOSTAT105    (CAN_MO105_STAT)

/** \brief  1D4C, Message Object  Acceptance Mask Register */
#define CAN_MO106_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019D4Cu)

/** Alias (User Manual Name) for CAN_MO106_AMR.
 * To use register names with standard convension, please use CAN_MO106_AMR.
 */
#define CAN_MOAMR106     (CAN_MO106_AMR)

/** \brief  1D58, Message Object  Arbitration Register */
#define CAN_MO106_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019D58u)

/** Alias (User Manual Name) for CAN_MO106_AR.
 * To use register names with standard convension, please use CAN_MO106_AR.
 */
#define CAN_MOAR106      (CAN_MO106_AR)

/** \brief  1D5C, Message Object  Control Register */
#define CAN_MO106_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019D5Cu)

/** Alias (User Manual Name) for CAN_MO106_CTR.
 * To use register names with standard convension, please use CAN_MO106_CTR.
 */
#define CAN_MOCTR106     (CAN_MO106_CTR)

/** \brief  1D54, Message Object  Data Register High */
#define CAN_MO106_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019D54u)

/** Alias (User Manual Name) for CAN_MO106_DATAH.
 * To use register names with standard convension, please use CAN_MO106_DATAH.
 */
#define CAN_MODATAH106   (CAN_MO106_DATAH)

/** \brief  1D50, Message Object  Data Register Low */
#define CAN_MO106_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019D50u)

/** Alias (User Manual Name) for CAN_MO106_DATAL.
 * To use register names with standard convension, please use CAN_MO106_DATAL.
 */
#define CAN_MODATAL106   (CAN_MO106_DATAL)

/** \brief  1D40, Message Object  Function Control Register */
#define CAN_MO106_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019D40u)

/** Alias (User Manual Name) for CAN_MO106_EDATA0.
 * To use register names with standard convension, please use CAN_MO106_EDATA0.
 */
#define CAN_EMO106DATA0  (CAN_MO106_EDATA0)

/** \brief  1D44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO106_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019D44u)

/** Alias (User Manual Name) for CAN_MO106_EDATA1.
 * To use register names with standard convension, please use CAN_MO106_EDATA1.
 */
#define CAN_EMO106DATA1  (CAN_MO106_EDATA1)

/** \brief  1D48, Message Object  Interrupt Pointer Register */
#define CAN_MO106_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019D48u)

/** Alias (User Manual Name) for CAN_MO106_EDATA2.
 * To use register names with standard convension, please use CAN_MO106_EDATA2.
 */
#define CAN_EMO106DATA2  (CAN_MO106_EDATA2)

/** \brief  1D4C, Message Object  Acceptance Mask Register */
#define CAN_MO106_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019D4Cu)

/** Alias (User Manual Name) for CAN_MO106_EDATA3.
 * To use register names with standard convension, please use CAN_MO106_EDATA3.
 */
#define CAN_EMO106DATA3  (CAN_MO106_EDATA3)

/** \brief  1D50, Message Object  Data Register Low */
#define CAN_MO106_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019D50u)

/** Alias (User Manual Name) for CAN_MO106_EDATA4.
 * To use register names with standard convension, please use CAN_MO106_EDATA4.
 */
#define CAN_EMO106DATA4  (CAN_MO106_EDATA4)

/** \brief  1D54, Message Object  Data Register High */
#define CAN_MO106_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019D54u)

/** Alias (User Manual Name) for CAN_MO106_EDATA5.
 * To use register names with standard convension, please use CAN_MO106_EDATA5.
 */
#define CAN_EMO106DATA5  (CAN_MO106_EDATA5)

/** \brief  1D58, Message Object  Arbitration Register */
#define CAN_MO106_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019D58u)

/** Alias (User Manual Name) for CAN_MO106_EDATA6.
 * To use register names with standard convension, please use CAN_MO106_EDATA6.
 */
#define CAN_EMO106DATA6  (CAN_MO106_EDATA6)

/** \brief  1D40, Message Object  Function Control Register */
#define CAN_MO106_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019D40u)

/** Alias (User Manual Name) for CAN_MO106_FCR.
 * To use register names with standard convension, please use CAN_MO106_FCR.
 */
#define CAN_MOFCR106     (CAN_MO106_FCR)

/** \brief  1D44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO106_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019D44u)

/** Alias (User Manual Name) for CAN_MO106_FGPR.
 * To use register names with standard convension, please use CAN_MO106_FGPR.
 */
#define CAN_MOFGPR106    (CAN_MO106_FGPR)

/** \brief  1D48, Message Object  Interrupt Pointer Register */
#define CAN_MO106_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019D48u)

/** Alias (User Manual Name) for CAN_MO106_IPR.
 * To use register names with standard convension, please use CAN_MO106_IPR.
 */
#define CAN_MOIPR106     (CAN_MO106_IPR)

/** \brief  1D5C, Message Object  Control Register */
#define CAN_MO106_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019D5Cu)

/** Alias (User Manual Name) for CAN_MO106_STAT.
 * To use register names with standard convension, please use CAN_MO106_STAT.
 */
#define CAN_MOSTAT106    (CAN_MO106_STAT)

/** \brief  1D6C, Message Object  Acceptance Mask Register */
#define CAN_MO107_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019D6Cu)

/** Alias (User Manual Name) for CAN_MO107_AMR.
 * To use register names with standard convension, please use CAN_MO107_AMR.
 */
#define CAN_MOAMR107     (CAN_MO107_AMR)

/** \brief  1D78, Message Object  Arbitration Register */
#define CAN_MO107_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019D78u)

/** Alias (User Manual Name) for CAN_MO107_AR.
 * To use register names with standard convension, please use CAN_MO107_AR.
 */
#define CAN_MOAR107      (CAN_MO107_AR)

/** \brief  1D7C, Message Object  Control Register */
#define CAN_MO107_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019D7Cu)

/** Alias (User Manual Name) for CAN_MO107_CTR.
 * To use register names with standard convension, please use CAN_MO107_CTR.
 */
#define CAN_MOCTR107     (CAN_MO107_CTR)

/** \brief  1D74, Message Object  Data Register High */
#define CAN_MO107_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019D74u)

/** Alias (User Manual Name) for CAN_MO107_DATAH.
 * To use register names with standard convension, please use CAN_MO107_DATAH.
 */
#define CAN_MODATAH107   (CAN_MO107_DATAH)

/** \brief  1D70, Message Object  Data Register Low */
#define CAN_MO107_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019D70u)

/** Alias (User Manual Name) for CAN_MO107_DATAL.
 * To use register names with standard convension, please use CAN_MO107_DATAL.
 */
#define CAN_MODATAL107   (CAN_MO107_DATAL)

/** \brief  1D60, Message Object  Function Control Register */
#define CAN_MO107_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019D60u)

/** Alias (User Manual Name) for CAN_MO107_EDATA0.
 * To use register names with standard convension, please use CAN_MO107_EDATA0.
 */
#define CAN_EMO107DATA0  (CAN_MO107_EDATA0)

/** \brief  1D64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO107_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019D64u)

/** Alias (User Manual Name) for CAN_MO107_EDATA1.
 * To use register names with standard convension, please use CAN_MO107_EDATA1.
 */
#define CAN_EMO107DATA1  (CAN_MO107_EDATA1)

/** \brief  1D68, Message Object  Interrupt Pointer Register */
#define CAN_MO107_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019D68u)

/** Alias (User Manual Name) for CAN_MO107_EDATA2.
 * To use register names with standard convension, please use CAN_MO107_EDATA2.
 */
#define CAN_EMO107DATA2  (CAN_MO107_EDATA2)

/** \brief  1D6C, Message Object  Acceptance Mask Register */
#define CAN_MO107_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019D6Cu)

/** Alias (User Manual Name) for CAN_MO107_EDATA3.
 * To use register names with standard convension, please use CAN_MO107_EDATA3.
 */
#define CAN_EMO107DATA3  (CAN_MO107_EDATA3)

/** \brief  1D70, Message Object  Data Register Low */
#define CAN_MO107_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019D70u)

/** Alias (User Manual Name) for CAN_MO107_EDATA4.
 * To use register names with standard convension, please use CAN_MO107_EDATA4.
 */
#define CAN_EMO107DATA4  (CAN_MO107_EDATA4)

/** \brief  1D74, Message Object  Data Register High */
#define CAN_MO107_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019D74u)

/** Alias (User Manual Name) for CAN_MO107_EDATA5.
 * To use register names with standard convension, please use CAN_MO107_EDATA5.
 */
#define CAN_EMO107DATA5  (CAN_MO107_EDATA5)

/** \brief  1D78, Message Object  Arbitration Register */
#define CAN_MO107_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019D78u)

/** Alias (User Manual Name) for CAN_MO107_EDATA6.
 * To use register names with standard convension, please use CAN_MO107_EDATA6.
 */
#define CAN_EMO107DATA6  (CAN_MO107_EDATA6)

/** \brief  1D60, Message Object  Function Control Register */
#define CAN_MO107_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019D60u)

/** Alias (User Manual Name) for CAN_MO107_FCR.
 * To use register names with standard convension, please use CAN_MO107_FCR.
 */
#define CAN_MOFCR107     (CAN_MO107_FCR)

/** \brief  1D64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO107_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019D64u)

/** Alias (User Manual Name) for CAN_MO107_FGPR.
 * To use register names with standard convension, please use CAN_MO107_FGPR.
 */
#define CAN_MOFGPR107    (CAN_MO107_FGPR)

/** \brief  1D68, Message Object  Interrupt Pointer Register */
#define CAN_MO107_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019D68u)

/** Alias (User Manual Name) for CAN_MO107_IPR.
 * To use register names with standard convension, please use CAN_MO107_IPR.
 */
#define CAN_MOIPR107     (CAN_MO107_IPR)

/** \brief  1D7C, Message Object  Control Register */
#define CAN_MO107_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019D7Cu)

/** Alias (User Manual Name) for CAN_MO107_STAT.
 * To use register names with standard convension, please use CAN_MO107_STAT.
 */
#define CAN_MOSTAT107    (CAN_MO107_STAT)

/** \brief  1D8C, Message Object  Acceptance Mask Register */
#define CAN_MO108_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019D8Cu)

/** Alias (User Manual Name) for CAN_MO108_AMR.
 * To use register names with standard convension, please use CAN_MO108_AMR.
 */
#define CAN_MOAMR108     (CAN_MO108_AMR)

/** \brief  1D98, Message Object  Arbitration Register */
#define CAN_MO108_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019D98u)

/** Alias (User Manual Name) for CAN_MO108_AR.
 * To use register names with standard convension, please use CAN_MO108_AR.
 */
#define CAN_MOAR108      (CAN_MO108_AR)

/** \brief  1D9C, Message Object  Control Register */
#define CAN_MO108_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019D9Cu)

/** Alias (User Manual Name) for CAN_MO108_CTR.
 * To use register names with standard convension, please use CAN_MO108_CTR.
 */
#define CAN_MOCTR108     (CAN_MO108_CTR)

/** \brief  1D94, Message Object  Data Register High */
#define CAN_MO108_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019D94u)

/** Alias (User Manual Name) for CAN_MO108_DATAH.
 * To use register names with standard convension, please use CAN_MO108_DATAH.
 */
#define CAN_MODATAH108   (CAN_MO108_DATAH)

/** \brief  1D90, Message Object  Data Register Low */
#define CAN_MO108_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019D90u)

/** Alias (User Manual Name) for CAN_MO108_DATAL.
 * To use register names with standard convension, please use CAN_MO108_DATAL.
 */
#define CAN_MODATAL108   (CAN_MO108_DATAL)

/** \brief  1D80, Message Object  Function Control Register */
#define CAN_MO108_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019D80u)

/** Alias (User Manual Name) for CAN_MO108_EDATA0.
 * To use register names with standard convension, please use CAN_MO108_EDATA0.
 */
#define CAN_EMO108DATA0  (CAN_MO108_EDATA0)

/** \brief  1D84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO108_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019D84u)

/** Alias (User Manual Name) for CAN_MO108_EDATA1.
 * To use register names with standard convension, please use CAN_MO108_EDATA1.
 */
#define CAN_EMO108DATA1  (CAN_MO108_EDATA1)

/** \brief  1D88, Message Object  Interrupt Pointer Register */
#define CAN_MO108_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019D88u)

/** Alias (User Manual Name) for CAN_MO108_EDATA2.
 * To use register names with standard convension, please use CAN_MO108_EDATA2.
 */
#define CAN_EMO108DATA2  (CAN_MO108_EDATA2)

/** \brief  1D8C, Message Object  Acceptance Mask Register */
#define CAN_MO108_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019D8Cu)

/** Alias (User Manual Name) for CAN_MO108_EDATA3.
 * To use register names with standard convension, please use CAN_MO108_EDATA3.
 */
#define CAN_EMO108DATA3  (CAN_MO108_EDATA3)

/** \brief  1D90, Message Object  Data Register Low */
#define CAN_MO108_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019D90u)

/** Alias (User Manual Name) for CAN_MO108_EDATA4.
 * To use register names with standard convension, please use CAN_MO108_EDATA4.
 */
#define CAN_EMO108DATA4  (CAN_MO108_EDATA4)

/** \brief  1D94, Message Object  Data Register High */
#define CAN_MO108_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019D94u)

/** Alias (User Manual Name) for CAN_MO108_EDATA5.
 * To use register names with standard convension, please use CAN_MO108_EDATA5.
 */
#define CAN_EMO108DATA5  (CAN_MO108_EDATA5)

/** \brief  1D98, Message Object  Arbitration Register */
#define CAN_MO108_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019D98u)

/** Alias (User Manual Name) for CAN_MO108_EDATA6.
 * To use register names with standard convension, please use CAN_MO108_EDATA6.
 */
#define CAN_EMO108DATA6  (CAN_MO108_EDATA6)

/** \brief  1D80, Message Object  Function Control Register */
#define CAN_MO108_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019D80u)

/** Alias (User Manual Name) for CAN_MO108_FCR.
 * To use register names with standard convension, please use CAN_MO108_FCR.
 */
#define CAN_MOFCR108     (CAN_MO108_FCR)

/** \brief  1D84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO108_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019D84u)

/** Alias (User Manual Name) for CAN_MO108_FGPR.
 * To use register names with standard convension, please use CAN_MO108_FGPR.
 */
#define CAN_MOFGPR108    (CAN_MO108_FGPR)

/** \brief  1D88, Message Object  Interrupt Pointer Register */
#define CAN_MO108_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019D88u)

/** Alias (User Manual Name) for CAN_MO108_IPR.
 * To use register names with standard convension, please use CAN_MO108_IPR.
 */
#define CAN_MOIPR108     (CAN_MO108_IPR)

/** \brief  1D9C, Message Object  Control Register */
#define CAN_MO108_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019D9Cu)

/** Alias (User Manual Name) for CAN_MO108_STAT.
 * To use register names with standard convension, please use CAN_MO108_STAT.
 */
#define CAN_MOSTAT108    (CAN_MO108_STAT)

/** \brief  1DAC, Message Object  Acceptance Mask Register */
#define CAN_MO109_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019DACu)

/** Alias (User Manual Name) for CAN_MO109_AMR.
 * To use register names with standard convension, please use CAN_MO109_AMR.
 */
#define CAN_MOAMR109     (CAN_MO109_AMR)

/** \brief  1DB8, Message Object  Arbitration Register */
#define CAN_MO109_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019DB8u)

/** Alias (User Manual Name) for CAN_MO109_AR.
 * To use register names with standard convension, please use CAN_MO109_AR.
 */
#define CAN_MOAR109      (CAN_MO109_AR)

/** \brief  1DBC, Message Object  Control Register */
#define CAN_MO109_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019DBCu)

/** Alias (User Manual Name) for CAN_MO109_CTR.
 * To use register names with standard convension, please use CAN_MO109_CTR.
 */
#define CAN_MOCTR109     (CAN_MO109_CTR)

/** \brief  1DB4, Message Object  Data Register High */
#define CAN_MO109_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019DB4u)

/** Alias (User Manual Name) for CAN_MO109_DATAH.
 * To use register names with standard convension, please use CAN_MO109_DATAH.
 */
#define CAN_MODATAH109   (CAN_MO109_DATAH)

/** \brief  1DB0, Message Object  Data Register Low */
#define CAN_MO109_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019DB0u)

/** Alias (User Manual Name) for CAN_MO109_DATAL.
 * To use register names with standard convension, please use CAN_MO109_DATAL.
 */
#define CAN_MODATAL109   (CAN_MO109_DATAL)

/** \brief  1DA0, Message Object  Function Control Register */
#define CAN_MO109_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019DA0u)

/** Alias (User Manual Name) for CAN_MO109_EDATA0.
 * To use register names with standard convension, please use CAN_MO109_EDATA0.
 */
#define CAN_EMO109DATA0  (CAN_MO109_EDATA0)

/** \brief  1DA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO109_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019DA4u)

/** Alias (User Manual Name) for CAN_MO109_EDATA1.
 * To use register names with standard convension, please use CAN_MO109_EDATA1.
 */
#define CAN_EMO109DATA1  (CAN_MO109_EDATA1)

/** \brief  1DA8, Message Object  Interrupt Pointer Register */
#define CAN_MO109_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019DA8u)

/** Alias (User Manual Name) for CAN_MO109_EDATA2.
 * To use register names with standard convension, please use CAN_MO109_EDATA2.
 */
#define CAN_EMO109DATA2  (CAN_MO109_EDATA2)

/** \brief  1DAC, Message Object  Acceptance Mask Register */
#define CAN_MO109_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019DACu)

/** Alias (User Manual Name) for CAN_MO109_EDATA3.
 * To use register names with standard convension, please use CAN_MO109_EDATA3.
 */
#define CAN_EMO109DATA3  (CAN_MO109_EDATA3)

/** \brief  1DB0, Message Object  Data Register Low */
#define CAN_MO109_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019DB0u)

/** Alias (User Manual Name) for CAN_MO109_EDATA4.
 * To use register names with standard convension, please use CAN_MO109_EDATA4.
 */
#define CAN_EMO109DATA4  (CAN_MO109_EDATA4)

/** \brief  1DB4, Message Object  Data Register High */
#define CAN_MO109_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019DB4u)

/** Alias (User Manual Name) for CAN_MO109_EDATA5.
 * To use register names with standard convension, please use CAN_MO109_EDATA5.
 */
#define CAN_EMO109DATA5  (CAN_MO109_EDATA5)

/** \brief  1DB8, Message Object  Arbitration Register */
#define CAN_MO109_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019DB8u)

/** Alias (User Manual Name) for CAN_MO109_EDATA6.
 * To use register names with standard convension, please use CAN_MO109_EDATA6.
 */
#define CAN_EMO109DATA6  (CAN_MO109_EDATA6)

/** \brief  1DA0, Message Object  Function Control Register */
#define CAN_MO109_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019DA0u)

/** Alias (User Manual Name) for CAN_MO109_FCR.
 * To use register names with standard convension, please use CAN_MO109_FCR.
 */
#define CAN_MOFCR109     (CAN_MO109_FCR)

/** \brief  1DA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO109_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019DA4u)

/** Alias (User Manual Name) for CAN_MO109_FGPR.
 * To use register names with standard convension, please use CAN_MO109_FGPR.
 */
#define CAN_MOFGPR109    (CAN_MO109_FGPR)

/** \brief  1DA8, Message Object  Interrupt Pointer Register */
#define CAN_MO109_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019DA8u)

/** Alias (User Manual Name) for CAN_MO109_IPR.
 * To use register names with standard convension, please use CAN_MO109_IPR.
 */
#define CAN_MOIPR109     (CAN_MO109_IPR)

/** \brief  1DBC, Message Object  Control Register */
#define CAN_MO109_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019DBCu)

/** Alias (User Manual Name) for CAN_MO109_STAT.
 * To use register names with standard convension, please use CAN_MO109_STAT.
 */
#define CAN_MOSTAT109    (CAN_MO109_STAT)

/** \brief  114C, Message Object  Acceptance Mask Register */
#define CAN_MO10_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001914Cu)

/** Alias (User Manual Name) for CAN_MO10_AMR.
 * To use register names with standard convension, please use CAN_MO10_AMR.
 */
#define CAN_MOAMR10      (CAN_MO10_AMR)

/** \brief  1158, Message Object  Arbitration Register */
#define CAN_MO10_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019158u)

/** Alias (User Manual Name) for CAN_MO10_AR.
 * To use register names with standard convension, please use CAN_MO10_AR.
 */
#define CAN_MOAR10       (CAN_MO10_AR)

/** \brief  115C, Message Object  Control Register */
#define CAN_MO10_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001915Cu)

/** Alias (User Manual Name) for CAN_MO10_CTR.
 * To use register names with standard convension, please use CAN_MO10_CTR.
 */
#define CAN_MOCTR10      (CAN_MO10_CTR)

/** \brief  1154, Message Object  Data Register High */
#define CAN_MO10_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019154u)

/** Alias (User Manual Name) for CAN_MO10_DATAH.
 * To use register names with standard convension, please use CAN_MO10_DATAH.
 */
#define CAN_MODATAH10    (CAN_MO10_DATAH)

/** \brief  1150, Message Object  Data Register Low */
#define CAN_MO10_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019150u)

/** Alias (User Manual Name) for CAN_MO10_DATAL.
 * To use register names with standard convension, please use CAN_MO10_DATAL.
 */
#define CAN_MODATAL10    (CAN_MO10_DATAL)

/** \brief  1140, Message Object  Function Control Register */
#define CAN_MO10_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019140u)

/** Alias (User Manual Name) for CAN_MO10_EDATA0.
 * To use register names with standard convension, please use CAN_MO10_EDATA0.
 */
#define CAN_EMO10DATA0   (CAN_MO10_EDATA0)

/** \brief  1144, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO10_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019144u)

/** Alias (User Manual Name) for CAN_MO10_EDATA1.
 * To use register names with standard convension, please use CAN_MO10_EDATA1.
 */
#define CAN_EMO10DATA1   (CAN_MO10_EDATA1)

/** \brief  1148, Message Object  Interrupt Pointer Register */
#define CAN_MO10_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019148u)

/** Alias (User Manual Name) for CAN_MO10_EDATA2.
 * To use register names with standard convension, please use CAN_MO10_EDATA2.
 */
#define CAN_EMO10DATA2   (CAN_MO10_EDATA2)

/** \brief  114C, Message Object  Acceptance Mask Register */
#define CAN_MO10_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001914Cu)

/** Alias (User Manual Name) for CAN_MO10_EDATA3.
 * To use register names with standard convension, please use CAN_MO10_EDATA3.
 */
#define CAN_EMO10DATA3   (CAN_MO10_EDATA3)

/** \brief  1150, Message Object  Data Register Low */
#define CAN_MO10_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019150u)

/** Alias (User Manual Name) for CAN_MO10_EDATA4.
 * To use register names with standard convension, please use CAN_MO10_EDATA4.
 */
#define CAN_EMO10DATA4   (CAN_MO10_EDATA4)

/** \brief  1154, Message Object  Data Register High */
#define CAN_MO10_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019154u)

/** Alias (User Manual Name) for CAN_MO10_EDATA5.
 * To use register names with standard convension, please use CAN_MO10_EDATA5.
 */
#define CAN_EMO10DATA5   (CAN_MO10_EDATA5)

/** \brief  1158, Message Object  Arbitration Register */
#define CAN_MO10_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019158u)

/** Alias (User Manual Name) for CAN_MO10_EDATA6.
 * To use register names with standard convension, please use CAN_MO10_EDATA6.
 */
#define CAN_EMO10DATA6   (CAN_MO10_EDATA6)

/** \brief  1140, Message Object  Function Control Register */
#define CAN_MO10_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019140u)

/** Alias (User Manual Name) for CAN_MO10_FCR.
 * To use register names with standard convension, please use CAN_MO10_FCR.
 */
#define CAN_MOFCR10      (CAN_MO10_FCR)

/** \brief  1144, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO10_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019144u)

/** Alias (User Manual Name) for CAN_MO10_FGPR.
 * To use register names with standard convension, please use CAN_MO10_FGPR.
 */
#define CAN_MOFGPR10     (CAN_MO10_FGPR)

/** \brief  1148, Message Object  Interrupt Pointer Register */
#define CAN_MO10_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019148u)

/** Alias (User Manual Name) for CAN_MO10_IPR.
 * To use register names with standard convension, please use CAN_MO10_IPR.
 */
#define CAN_MOIPR10      (CAN_MO10_IPR)

/** \brief  115C, Message Object  Control Register */
#define CAN_MO10_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001915Cu)

/** Alias (User Manual Name) for CAN_MO10_STAT.
 * To use register names with standard convension, please use CAN_MO10_STAT.
 */
#define CAN_MOSTAT10     (CAN_MO10_STAT)

/** \brief  1DCC, Message Object  Acceptance Mask Register */
#define CAN_MO110_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019DCCu)

/** Alias (User Manual Name) for CAN_MO110_AMR.
 * To use register names with standard convension, please use CAN_MO110_AMR.
 */
#define CAN_MOAMR110     (CAN_MO110_AMR)

/** \brief  1DD8, Message Object  Arbitration Register */
#define CAN_MO110_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019DD8u)

/** Alias (User Manual Name) for CAN_MO110_AR.
 * To use register names with standard convension, please use CAN_MO110_AR.
 */
#define CAN_MOAR110      (CAN_MO110_AR)

/** \brief  1DDC, Message Object  Control Register */
#define CAN_MO110_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019DDCu)

/** Alias (User Manual Name) for CAN_MO110_CTR.
 * To use register names with standard convension, please use CAN_MO110_CTR.
 */
#define CAN_MOCTR110     (CAN_MO110_CTR)

/** \brief  1DD4, Message Object  Data Register High */
#define CAN_MO110_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019DD4u)

/** Alias (User Manual Name) for CAN_MO110_DATAH.
 * To use register names with standard convension, please use CAN_MO110_DATAH.
 */
#define CAN_MODATAH110   (CAN_MO110_DATAH)

/** \brief  1DD0, Message Object  Data Register Low */
#define CAN_MO110_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019DD0u)

/** Alias (User Manual Name) for CAN_MO110_DATAL.
 * To use register names with standard convension, please use CAN_MO110_DATAL.
 */
#define CAN_MODATAL110   (CAN_MO110_DATAL)

/** \brief  1DC0, Message Object  Function Control Register */
#define CAN_MO110_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019DC0u)

/** Alias (User Manual Name) for CAN_MO110_EDATA0.
 * To use register names with standard convension, please use CAN_MO110_EDATA0.
 */
#define CAN_EMO110DATA0  (CAN_MO110_EDATA0)

/** \brief  1DC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO110_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019DC4u)

/** Alias (User Manual Name) for CAN_MO110_EDATA1.
 * To use register names with standard convension, please use CAN_MO110_EDATA1.
 */
#define CAN_EMO110DATA1  (CAN_MO110_EDATA1)

/** \brief  1DC8, Message Object  Interrupt Pointer Register */
#define CAN_MO110_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019DC8u)

/** Alias (User Manual Name) for CAN_MO110_EDATA2.
 * To use register names with standard convension, please use CAN_MO110_EDATA2.
 */
#define CAN_EMO110DATA2  (CAN_MO110_EDATA2)

/** \brief  1DCC, Message Object  Acceptance Mask Register */
#define CAN_MO110_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019DCCu)

/** Alias (User Manual Name) for CAN_MO110_EDATA3.
 * To use register names with standard convension, please use CAN_MO110_EDATA3.
 */
#define CAN_EMO110DATA3  (CAN_MO110_EDATA3)

/** \brief  1DD0, Message Object  Data Register Low */
#define CAN_MO110_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019DD0u)

/** Alias (User Manual Name) for CAN_MO110_EDATA4.
 * To use register names with standard convension, please use CAN_MO110_EDATA4.
 */
#define CAN_EMO110DATA4  (CAN_MO110_EDATA4)

/** \brief  1DD4, Message Object  Data Register High */
#define CAN_MO110_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019DD4u)

/** Alias (User Manual Name) for CAN_MO110_EDATA5.
 * To use register names with standard convension, please use CAN_MO110_EDATA5.
 */
#define CAN_EMO110DATA5  (CAN_MO110_EDATA5)

/** \brief  1DD8, Message Object  Arbitration Register */
#define CAN_MO110_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019DD8u)

/** Alias (User Manual Name) for CAN_MO110_EDATA6.
 * To use register names with standard convension, please use CAN_MO110_EDATA6.
 */
#define CAN_EMO110DATA6  (CAN_MO110_EDATA6)

/** \brief  1DC0, Message Object  Function Control Register */
#define CAN_MO110_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019DC0u)

/** Alias (User Manual Name) for CAN_MO110_FCR.
 * To use register names with standard convension, please use CAN_MO110_FCR.
 */
#define CAN_MOFCR110     (CAN_MO110_FCR)

/** \brief  1DC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO110_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019DC4u)

/** Alias (User Manual Name) for CAN_MO110_FGPR.
 * To use register names with standard convension, please use CAN_MO110_FGPR.
 */
#define CAN_MOFGPR110    (CAN_MO110_FGPR)

/** \brief  1DC8, Message Object  Interrupt Pointer Register */
#define CAN_MO110_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019DC8u)

/** Alias (User Manual Name) for CAN_MO110_IPR.
 * To use register names with standard convension, please use CAN_MO110_IPR.
 */
#define CAN_MOIPR110     (CAN_MO110_IPR)

/** \brief  1DDC, Message Object  Control Register */
#define CAN_MO110_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019DDCu)

/** Alias (User Manual Name) for CAN_MO110_STAT.
 * To use register names with standard convension, please use CAN_MO110_STAT.
 */
#define CAN_MOSTAT110    (CAN_MO110_STAT)

/** \brief  1DEC, Message Object  Acceptance Mask Register */
#define CAN_MO111_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019DECu)

/** Alias (User Manual Name) for CAN_MO111_AMR.
 * To use register names with standard convension, please use CAN_MO111_AMR.
 */
#define CAN_MOAMR111     (CAN_MO111_AMR)

/** \brief  1DF8, Message Object  Arbitration Register */
#define CAN_MO111_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019DF8u)

/** Alias (User Manual Name) for CAN_MO111_AR.
 * To use register names with standard convension, please use CAN_MO111_AR.
 */
#define CAN_MOAR111      (CAN_MO111_AR)

/** \brief  1DFC, Message Object  Control Register */
#define CAN_MO111_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019DFCu)

/** Alias (User Manual Name) for CAN_MO111_CTR.
 * To use register names with standard convension, please use CAN_MO111_CTR.
 */
#define CAN_MOCTR111     (CAN_MO111_CTR)

/** \brief  1DF4, Message Object  Data Register High */
#define CAN_MO111_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019DF4u)

/** Alias (User Manual Name) for CAN_MO111_DATAH.
 * To use register names with standard convension, please use CAN_MO111_DATAH.
 */
#define CAN_MODATAH111   (CAN_MO111_DATAH)

/** \brief  1DF0, Message Object  Data Register Low */
#define CAN_MO111_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019DF0u)

/** Alias (User Manual Name) for CAN_MO111_DATAL.
 * To use register names with standard convension, please use CAN_MO111_DATAL.
 */
#define CAN_MODATAL111   (CAN_MO111_DATAL)

/** \brief  1DE0, Message Object  Function Control Register */
#define CAN_MO111_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019DE0u)

/** Alias (User Manual Name) for CAN_MO111_EDATA0.
 * To use register names with standard convension, please use CAN_MO111_EDATA0.
 */
#define CAN_EMO111DATA0  (CAN_MO111_EDATA0)

/** \brief  1DE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO111_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019DE4u)

/** Alias (User Manual Name) for CAN_MO111_EDATA1.
 * To use register names with standard convension, please use CAN_MO111_EDATA1.
 */
#define CAN_EMO111DATA1  (CAN_MO111_EDATA1)

/** \brief  1DE8, Message Object  Interrupt Pointer Register */
#define CAN_MO111_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019DE8u)

/** Alias (User Manual Name) for CAN_MO111_EDATA2.
 * To use register names with standard convension, please use CAN_MO111_EDATA2.
 */
#define CAN_EMO111DATA2  (CAN_MO111_EDATA2)

/** \brief  1DEC, Message Object  Acceptance Mask Register */
#define CAN_MO111_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019DECu)

/** Alias (User Manual Name) for CAN_MO111_EDATA3.
 * To use register names with standard convension, please use CAN_MO111_EDATA3.
 */
#define CAN_EMO111DATA3  (CAN_MO111_EDATA3)

/** \brief  1DF0, Message Object  Data Register Low */
#define CAN_MO111_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019DF0u)

/** Alias (User Manual Name) for CAN_MO111_EDATA4.
 * To use register names with standard convension, please use CAN_MO111_EDATA4.
 */
#define CAN_EMO111DATA4  (CAN_MO111_EDATA4)

/** \brief  1DF4, Message Object  Data Register High */
#define CAN_MO111_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019DF4u)

/** Alias (User Manual Name) for CAN_MO111_EDATA5.
 * To use register names with standard convension, please use CAN_MO111_EDATA5.
 */
#define CAN_EMO111DATA5  (CAN_MO111_EDATA5)

/** \brief  1DF8, Message Object  Arbitration Register */
#define CAN_MO111_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019DF8u)

/** Alias (User Manual Name) for CAN_MO111_EDATA6.
 * To use register names with standard convension, please use CAN_MO111_EDATA6.
 */
#define CAN_EMO111DATA6  (CAN_MO111_EDATA6)

/** \brief  1DE0, Message Object  Function Control Register */
#define CAN_MO111_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019DE0u)

/** Alias (User Manual Name) for CAN_MO111_FCR.
 * To use register names with standard convension, please use CAN_MO111_FCR.
 */
#define CAN_MOFCR111     (CAN_MO111_FCR)

/** \brief  1DE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO111_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019DE4u)

/** Alias (User Manual Name) for CAN_MO111_FGPR.
 * To use register names with standard convension, please use CAN_MO111_FGPR.
 */
#define CAN_MOFGPR111    (CAN_MO111_FGPR)

/** \brief  1DE8, Message Object  Interrupt Pointer Register */
#define CAN_MO111_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019DE8u)

/** Alias (User Manual Name) for CAN_MO111_IPR.
 * To use register names with standard convension, please use CAN_MO111_IPR.
 */
#define CAN_MOIPR111     (CAN_MO111_IPR)

/** \brief  1DFC, Message Object  Control Register */
#define CAN_MO111_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019DFCu)

/** Alias (User Manual Name) for CAN_MO111_STAT.
 * To use register names with standard convension, please use CAN_MO111_STAT.
 */
#define CAN_MOSTAT111    (CAN_MO111_STAT)

/** \brief  1E0C, Message Object  Acceptance Mask Register */
#define CAN_MO112_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019E0Cu)

/** Alias (User Manual Name) for CAN_MO112_AMR.
 * To use register names with standard convension, please use CAN_MO112_AMR.
 */
#define CAN_MOAMR112     (CAN_MO112_AMR)

/** \brief  1E18, Message Object  Arbitration Register */
#define CAN_MO112_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019E18u)

/** Alias (User Manual Name) for CAN_MO112_AR.
 * To use register names with standard convension, please use CAN_MO112_AR.
 */
#define CAN_MOAR112      (CAN_MO112_AR)

/** \brief  1E1C, Message Object  Control Register */
#define CAN_MO112_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019E1Cu)

/** Alias (User Manual Name) for CAN_MO112_CTR.
 * To use register names with standard convension, please use CAN_MO112_CTR.
 */
#define CAN_MOCTR112     (CAN_MO112_CTR)

/** \brief  1E14, Message Object  Data Register High */
#define CAN_MO112_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019E14u)

/** Alias (User Manual Name) for CAN_MO112_DATAH.
 * To use register names with standard convension, please use CAN_MO112_DATAH.
 */
#define CAN_MODATAH112   (CAN_MO112_DATAH)

/** \brief  1E10, Message Object  Data Register Low */
#define CAN_MO112_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019E10u)

/** Alias (User Manual Name) for CAN_MO112_DATAL.
 * To use register names with standard convension, please use CAN_MO112_DATAL.
 */
#define CAN_MODATAL112   (CAN_MO112_DATAL)

/** \brief  1E00, Message Object  Function Control Register */
#define CAN_MO112_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019E00u)

/** Alias (User Manual Name) for CAN_MO112_EDATA0.
 * To use register names with standard convension, please use CAN_MO112_EDATA0.
 */
#define CAN_EMO112DATA0  (CAN_MO112_EDATA0)

/** \brief  1E04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO112_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019E04u)

/** Alias (User Manual Name) for CAN_MO112_EDATA1.
 * To use register names with standard convension, please use CAN_MO112_EDATA1.
 */
#define CAN_EMO112DATA1  (CAN_MO112_EDATA1)

/** \brief  1E08, Message Object  Interrupt Pointer Register */
#define CAN_MO112_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019E08u)

/** Alias (User Manual Name) for CAN_MO112_EDATA2.
 * To use register names with standard convension, please use CAN_MO112_EDATA2.
 */
#define CAN_EMO112DATA2  (CAN_MO112_EDATA2)

/** \brief  1E0C, Message Object  Acceptance Mask Register */
#define CAN_MO112_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019E0Cu)

/** Alias (User Manual Name) for CAN_MO112_EDATA3.
 * To use register names with standard convension, please use CAN_MO112_EDATA3.
 */
#define CAN_EMO112DATA3  (CAN_MO112_EDATA3)

/** \brief  1E10, Message Object  Data Register Low */
#define CAN_MO112_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019E10u)

/** Alias (User Manual Name) for CAN_MO112_EDATA4.
 * To use register names with standard convension, please use CAN_MO112_EDATA4.
 */
#define CAN_EMO112DATA4  (CAN_MO112_EDATA4)

/** \brief  1E14, Message Object  Data Register High */
#define CAN_MO112_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019E14u)

/** Alias (User Manual Name) for CAN_MO112_EDATA5.
 * To use register names with standard convension, please use CAN_MO112_EDATA5.
 */
#define CAN_EMO112DATA5  (CAN_MO112_EDATA5)

/** \brief  1E18, Message Object  Arbitration Register */
#define CAN_MO112_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019E18u)

/** Alias (User Manual Name) for CAN_MO112_EDATA6.
 * To use register names with standard convension, please use CAN_MO112_EDATA6.
 */
#define CAN_EMO112DATA6  (CAN_MO112_EDATA6)

/** \brief  1E00, Message Object  Function Control Register */
#define CAN_MO112_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019E00u)

/** Alias (User Manual Name) for CAN_MO112_FCR.
 * To use register names with standard convension, please use CAN_MO112_FCR.
 */
#define CAN_MOFCR112     (CAN_MO112_FCR)

/** \brief  1E04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO112_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019E04u)

/** Alias (User Manual Name) for CAN_MO112_FGPR.
 * To use register names with standard convension, please use CAN_MO112_FGPR.
 */
#define CAN_MOFGPR112    (CAN_MO112_FGPR)

/** \brief  1E08, Message Object  Interrupt Pointer Register */
#define CAN_MO112_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019E08u)

/** Alias (User Manual Name) for CAN_MO112_IPR.
 * To use register names with standard convension, please use CAN_MO112_IPR.
 */
#define CAN_MOIPR112     (CAN_MO112_IPR)

/** \brief  1E1C, Message Object  Control Register */
#define CAN_MO112_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019E1Cu)

/** Alias (User Manual Name) for CAN_MO112_STAT.
 * To use register names with standard convension, please use CAN_MO112_STAT.
 */
#define CAN_MOSTAT112    (CAN_MO112_STAT)

/** \brief  1E2C, Message Object  Acceptance Mask Register */
#define CAN_MO113_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019E2Cu)

/** Alias (User Manual Name) for CAN_MO113_AMR.
 * To use register names with standard convension, please use CAN_MO113_AMR.
 */
#define CAN_MOAMR113     (CAN_MO113_AMR)

/** \brief  1E38, Message Object  Arbitration Register */
#define CAN_MO113_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019E38u)

/** Alias (User Manual Name) for CAN_MO113_AR.
 * To use register names with standard convension, please use CAN_MO113_AR.
 */
#define CAN_MOAR113      (CAN_MO113_AR)

/** \brief  1E3C, Message Object  Control Register */
#define CAN_MO113_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019E3Cu)

/** Alias (User Manual Name) for CAN_MO113_CTR.
 * To use register names with standard convension, please use CAN_MO113_CTR.
 */
#define CAN_MOCTR113     (CAN_MO113_CTR)

/** \brief  1E34, Message Object  Data Register High */
#define CAN_MO113_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019E34u)

/** Alias (User Manual Name) for CAN_MO113_DATAH.
 * To use register names with standard convension, please use CAN_MO113_DATAH.
 */
#define CAN_MODATAH113   (CAN_MO113_DATAH)

/** \brief  1E30, Message Object  Data Register Low */
#define CAN_MO113_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019E30u)

/** Alias (User Manual Name) for CAN_MO113_DATAL.
 * To use register names with standard convension, please use CAN_MO113_DATAL.
 */
#define CAN_MODATAL113   (CAN_MO113_DATAL)

/** \brief  1E20, Message Object  Function Control Register */
#define CAN_MO113_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019E20u)

/** Alias (User Manual Name) for CAN_MO113_EDATA0.
 * To use register names with standard convension, please use CAN_MO113_EDATA0.
 */
#define CAN_EMO113DATA0  (CAN_MO113_EDATA0)

/** \brief  1E24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO113_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019E24u)

/** Alias (User Manual Name) for CAN_MO113_EDATA1.
 * To use register names with standard convension, please use CAN_MO113_EDATA1.
 */
#define CAN_EMO113DATA1  (CAN_MO113_EDATA1)

/** \brief  1E28, Message Object  Interrupt Pointer Register */
#define CAN_MO113_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019E28u)

/** Alias (User Manual Name) for CAN_MO113_EDATA2.
 * To use register names with standard convension, please use CAN_MO113_EDATA2.
 */
#define CAN_EMO113DATA2  (CAN_MO113_EDATA2)

/** \brief  1E2C, Message Object  Acceptance Mask Register */
#define CAN_MO113_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019E2Cu)

/** Alias (User Manual Name) for CAN_MO113_EDATA3.
 * To use register names with standard convension, please use CAN_MO113_EDATA3.
 */
#define CAN_EMO113DATA3  (CAN_MO113_EDATA3)

/** \brief  1E30, Message Object  Data Register Low */
#define CAN_MO113_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019E30u)

/** Alias (User Manual Name) for CAN_MO113_EDATA4.
 * To use register names with standard convension, please use CAN_MO113_EDATA4.
 */
#define CAN_EMO113DATA4  (CAN_MO113_EDATA4)

/** \brief  1E34, Message Object  Data Register High */
#define CAN_MO113_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019E34u)

/** Alias (User Manual Name) for CAN_MO113_EDATA5.
 * To use register names with standard convension, please use CAN_MO113_EDATA5.
 */
#define CAN_EMO113DATA5  (CAN_MO113_EDATA5)

/** \brief  1E38, Message Object  Arbitration Register */
#define CAN_MO113_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019E38u)

/** Alias (User Manual Name) for CAN_MO113_EDATA6.
 * To use register names with standard convension, please use CAN_MO113_EDATA6.
 */
#define CAN_EMO113DATA6  (CAN_MO113_EDATA6)

/** \brief  1E20, Message Object  Function Control Register */
#define CAN_MO113_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019E20u)

/** Alias (User Manual Name) for CAN_MO113_FCR.
 * To use register names with standard convension, please use CAN_MO113_FCR.
 */
#define CAN_MOFCR113     (CAN_MO113_FCR)

/** \brief  1E24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO113_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019E24u)

/** Alias (User Manual Name) for CAN_MO113_FGPR.
 * To use register names with standard convension, please use CAN_MO113_FGPR.
 */
#define CAN_MOFGPR113    (CAN_MO113_FGPR)

/** \brief  1E28, Message Object  Interrupt Pointer Register */
#define CAN_MO113_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019E28u)

/** Alias (User Manual Name) for CAN_MO113_IPR.
 * To use register names with standard convension, please use CAN_MO113_IPR.
 */
#define CAN_MOIPR113     (CAN_MO113_IPR)

/** \brief  1E3C, Message Object  Control Register */
#define CAN_MO113_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019E3Cu)

/** Alias (User Manual Name) for CAN_MO113_STAT.
 * To use register names with standard convension, please use CAN_MO113_STAT.
 */
#define CAN_MOSTAT113    (CAN_MO113_STAT)

/** \brief  1E4C, Message Object  Acceptance Mask Register */
#define CAN_MO114_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019E4Cu)

/** Alias (User Manual Name) for CAN_MO114_AMR.
 * To use register names with standard convension, please use CAN_MO114_AMR.
 */
#define CAN_MOAMR114     (CAN_MO114_AMR)

/** \brief  1E58, Message Object  Arbitration Register */
#define CAN_MO114_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019E58u)

/** Alias (User Manual Name) for CAN_MO114_AR.
 * To use register names with standard convension, please use CAN_MO114_AR.
 */
#define CAN_MOAR114      (CAN_MO114_AR)

/** \brief  1E5C, Message Object  Control Register */
#define CAN_MO114_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019E5Cu)

/** Alias (User Manual Name) for CAN_MO114_CTR.
 * To use register names with standard convension, please use CAN_MO114_CTR.
 */
#define CAN_MOCTR114     (CAN_MO114_CTR)

/** \brief  1E54, Message Object  Data Register High */
#define CAN_MO114_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019E54u)

/** Alias (User Manual Name) for CAN_MO114_DATAH.
 * To use register names with standard convension, please use CAN_MO114_DATAH.
 */
#define CAN_MODATAH114   (CAN_MO114_DATAH)

/** \brief  1E50, Message Object  Data Register Low */
#define CAN_MO114_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019E50u)

/** Alias (User Manual Name) for CAN_MO114_DATAL.
 * To use register names with standard convension, please use CAN_MO114_DATAL.
 */
#define CAN_MODATAL114   (CAN_MO114_DATAL)

/** \brief  1E40, Message Object  Function Control Register */
#define CAN_MO114_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019E40u)

/** Alias (User Manual Name) for CAN_MO114_EDATA0.
 * To use register names with standard convension, please use CAN_MO114_EDATA0.
 */
#define CAN_EMO114DATA0  (CAN_MO114_EDATA0)

/** \brief  1E44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO114_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019E44u)

/** Alias (User Manual Name) for CAN_MO114_EDATA1.
 * To use register names with standard convension, please use CAN_MO114_EDATA1.
 */
#define CAN_EMO114DATA1  (CAN_MO114_EDATA1)

/** \brief  1E48, Message Object  Interrupt Pointer Register */
#define CAN_MO114_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019E48u)

/** Alias (User Manual Name) for CAN_MO114_EDATA2.
 * To use register names with standard convension, please use CAN_MO114_EDATA2.
 */
#define CAN_EMO114DATA2  (CAN_MO114_EDATA2)

/** \brief  1E4C, Message Object  Acceptance Mask Register */
#define CAN_MO114_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019E4Cu)

/** Alias (User Manual Name) for CAN_MO114_EDATA3.
 * To use register names with standard convension, please use CAN_MO114_EDATA3.
 */
#define CAN_EMO114DATA3  (CAN_MO114_EDATA3)

/** \brief  1E50, Message Object  Data Register Low */
#define CAN_MO114_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019E50u)

/** Alias (User Manual Name) for CAN_MO114_EDATA4.
 * To use register names with standard convension, please use CAN_MO114_EDATA4.
 */
#define CAN_EMO114DATA4  (CAN_MO114_EDATA4)

/** \brief  1E54, Message Object  Data Register High */
#define CAN_MO114_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019E54u)

/** Alias (User Manual Name) for CAN_MO114_EDATA5.
 * To use register names with standard convension, please use CAN_MO114_EDATA5.
 */
#define CAN_EMO114DATA5  (CAN_MO114_EDATA5)

/** \brief  1E58, Message Object  Arbitration Register */
#define CAN_MO114_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019E58u)

/** Alias (User Manual Name) for CAN_MO114_EDATA6.
 * To use register names with standard convension, please use CAN_MO114_EDATA6.
 */
#define CAN_EMO114DATA6  (CAN_MO114_EDATA6)

/** \brief  1E40, Message Object  Function Control Register */
#define CAN_MO114_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019E40u)

/** Alias (User Manual Name) for CAN_MO114_FCR.
 * To use register names with standard convension, please use CAN_MO114_FCR.
 */
#define CAN_MOFCR114     (CAN_MO114_FCR)

/** \brief  1E44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO114_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019E44u)

/** Alias (User Manual Name) for CAN_MO114_FGPR.
 * To use register names with standard convension, please use CAN_MO114_FGPR.
 */
#define CAN_MOFGPR114    (CAN_MO114_FGPR)

/** \brief  1E48, Message Object  Interrupt Pointer Register */
#define CAN_MO114_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019E48u)

/** Alias (User Manual Name) for CAN_MO114_IPR.
 * To use register names with standard convension, please use CAN_MO114_IPR.
 */
#define CAN_MOIPR114     (CAN_MO114_IPR)

/** \brief  1E5C, Message Object  Control Register */
#define CAN_MO114_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019E5Cu)

/** Alias (User Manual Name) for CAN_MO114_STAT.
 * To use register names with standard convension, please use CAN_MO114_STAT.
 */
#define CAN_MOSTAT114    (CAN_MO114_STAT)

/** \brief  1E6C, Message Object  Acceptance Mask Register */
#define CAN_MO115_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019E6Cu)

/** Alias (User Manual Name) for CAN_MO115_AMR.
 * To use register names with standard convension, please use CAN_MO115_AMR.
 */
#define CAN_MOAMR115     (CAN_MO115_AMR)

/** \brief  1E78, Message Object  Arbitration Register */
#define CAN_MO115_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019E78u)

/** Alias (User Manual Name) for CAN_MO115_AR.
 * To use register names with standard convension, please use CAN_MO115_AR.
 */
#define CAN_MOAR115      (CAN_MO115_AR)

/** \brief  1E7C, Message Object  Control Register */
#define CAN_MO115_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019E7Cu)

/** Alias (User Manual Name) for CAN_MO115_CTR.
 * To use register names with standard convension, please use CAN_MO115_CTR.
 */
#define CAN_MOCTR115     (CAN_MO115_CTR)

/** \brief  1E74, Message Object  Data Register High */
#define CAN_MO115_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019E74u)

/** Alias (User Manual Name) for CAN_MO115_DATAH.
 * To use register names with standard convension, please use CAN_MO115_DATAH.
 */
#define CAN_MODATAH115   (CAN_MO115_DATAH)

/** \brief  1E70, Message Object  Data Register Low */
#define CAN_MO115_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019E70u)

/** Alias (User Manual Name) for CAN_MO115_DATAL.
 * To use register names with standard convension, please use CAN_MO115_DATAL.
 */
#define CAN_MODATAL115   (CAN_MO115_DATAL)

/** \brief  1E60, Message Object  Function Control Register */
#define CAN_MO115_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019E60u)

/** Alias (User Manual Name) for CAN_MO115_EDATA0.
 * To use register names with standard convension, please use CAN_MO115_EDATA0.
 */
#define CAN_EMO115DATA0  (CAN_MO115_EDATA0)

/** \brief  1E64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO115_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019E64u)

/** Alias (User Manual Name) for CAN_MO115_EDATA1.
 * To use register names with standard convension, please use CAN_MO115_EDATA1.
 */
#define CAN_EMO115DATA1  (CAN_MO115_EDATA1)

/** \brief  1E68, Message Object  Interrupt Pointer Register */
#define CAN_MO115_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019E68u)

/** Alias (User Manual Name) for CAN_MO115_EDATA2.
 * To use register names with standard convension, please use CAN_MO115_EDATA2.
 */
#define CAN_EMO115DATA2  (CAN_MO115_EDATA2)

/** \brief  1E6C, Message Object  Acceptance Mask Register */
#define CAN_MO115_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019E6Cu)

/** Alias (User Manual Name) for CAN_MO115_EDATA3.
 * To use register names with standard convension, please use CAN_MO115_EDATA3.
 */
#define CAN_EMO115DATA3  (CAN_MO115_EDATA3)

/** \brief  1E70, Message Object  Data Register Low */
#define CAN_MO115_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019E70u)

/** Alias (User Manual Name) for CAN_MO115_EDATA4.
 * To use register names with standard convension, please use CAN_MO115_EDATA4.
 */
#define CAN_EMO115DATA4  (CAN_MO115_EDATA4)

/** \brief  1E74, Message Object  Data Register High */
#define CAN_MO115_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019E74u)

/** Alias (User Manual Name) for CAN_MO115_EDATA5.
 * To use register names with standard convension, please use CAN_MO115_EDATA5.
 */
#define CAN_EMO115DATA5  (CAN_MO115_EDATA5)

/** \brief  1E78, Message Object  Arbitration Register */
#define CAN_MO115_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019E78u)

/** Alias (User Manual Name) for CAN_MO115_EDATA6.
 * To use register names with standard convension, please use CAN_MO115_EDATA6.
 */
#define CAN_EMO115DATA6  (CAN_MO115_EDATA6)

/** \brief  1E60, Message Object  Function Control Register */
#define CAN_MO115_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019E60u)

/** Alias (User Manual Name) for CAN_MO115_FCR.
 * To use register names with standard convension, please use CAN_MO115_FCR.
 */
#define CAN_MOFCR115     (CAN_MO115_FCR)

/** \brief  1E64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO115_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019E64u)

/** Alias (User Manual Name) for CAN_MO115_FGPR.
 * To use register names with standard convension, please use CAN_MO115_FGPR.
 */
#define CAN_MOFGPR115    (CAN_MO115_FGPR)

/** \brief  1E68, Message Object  Interrupt Pointer Register */
#define CAN_MO115_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019E68u)

/** Alias (User Manual Name) for CAN_MO115_IPR.
 * To use register names with standard convension, please use CAN_MO115_IPR.
 */
#define CAN_MOIPR115     (CAN_MO115_IPR)

/** \brief  1E7C, Message Object  Control Register */
#define CAN_MO115_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019E7Cu)

/** Alias (User Manual Name) for CAN_MO115_STAT.
 * To use register names with standard convension, please use CAN_MO115_STAT.
 */
#define CAN_MOSTAT115    (CAN_MO115_STAT)

/** \brief  1E8C, Message Object  Acceptance Mask Register */
#define CAN_MO116_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019E8Cu)

/** Alias (User Manual Name) for CAN_MO116_AMR.
 * To use register names with standard convension, please use CAN_MO116_AMR.
 */
#define CAN_MOAMR116     (CAN_MO116_AMR)

/** \brief  1E98, Message Object  Arbitration Register */
#define CAN_MO116_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019E98u)

/** Alias (User Manual Name) for CAN_MO116_AR.
 * To use register names with standard convension, please use CAN_MO116_AR.
 */
#define CAN_MOAR116      (CAN_MO116_AR)

/** \brief  1E9C, Message Object  Control Register */
#define CAN_MO116_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019E9Cu)

/** Alias (User Manual Name) for CAN_MO116_CTR.
 * To use register names with standard convension, please use CAN_MO116_CTR.
 */
#define CAN_MOCTR116     (CAN_MO116_CTR)

/** \brief  1E94, Message Object  Data Register High */
#define CAN_MO116_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019E94u)

/** Alias (User Manual Name) for CAN_MO116_DATAH.
 * To use register names with standard convension, please use CAN_MO116_DATAH.
 */
#define CAN_MODATAH116   (CAN_MO116_DATAH)

/** \brief  1E90, Message Object  Data Register Low */
#define CAN_MO116_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019E90u)

/** Alias (User Manual Name) for CAN_MO116_DATAL.
 * To use register names with standard convension, please use CAN_MO116_DATAL.
 */
#define CAN_MODATAL116   (CAN_MO116_DATAL)

/** \brief  1E80, Message Object  Function Control Register */
#define CAN_MO116_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019E80u)

/** Alias (User Manual Name) for CAN_MO116_EDATA0.
 * To use register names with standard convension, please use CAN_MO116_EDATA0.
 */
#define CAN_EMO116DATA0  (CAN_MO116_EDATA0)

/** \brief  1E84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO116_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019E84u)

/** Alias (User Manual Name) for CAN_MO116_EDATA1.
 * To use register names with standard convension, please use CAN_MO116_EDATA1.
 */
#define CAN_EMO116DATA1  (CAN_MO116_EDATA1)

/** \brief  1E88, Message Object  Interrupt Pointer Register */
#define CAN_MO116_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019E88u)

/** Alias (User Manual Name) for CAN_MO116_EDATA2.
 * To use register names with standard convension, please use CAN_MO116_EDATA2.
 */
#define CAN_EMO116DATA2  (CAN_MO116_EDATA2)

/** \brief  1E8C, Message Object  Acceptance Mask Register */
#define CAN_MO116_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019E8Cu)

/** Alias (User Manual Name) for CAN_MO116_EDATA3.
 * To use register names with standard convension, please use CAN_MO116_EDATA3.
 */
#define CAN_EMO116DATA3  (CAN_MO116_EDATA3)

/** \brief  1E90, Message Object  Data Register Low */
#define CAN_MO116_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019E90u)

/** Alias (User Manual Name) for CAN_MO116_EDATA4.
 * To use register names with standard convension, please use CAN_MO116_EDATA4.
 */
#define CAN_EMO116DATA4  (CAN_MO116_EDATA4)

/** \brief  1E94, Message Object  Data Register High */
#define CAN_MO116_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019E94u)

/** Alias (User Manual Name) for CAN_MO116_EDATA5.
 * To use register names with standard convension, please use CAN_MO116_EDATA5.
 */
#define CAN_EMO116DATA5  (CAN_MO116_EDATA5)

/** \brief  1E98, Message Object  Arbitration Register */
#define CAN_MO116_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019E98u)

/** Alias (User Manual Name) for CAN_MO116_EDATA6.
 * To use register names with standard convension, please use CAN_MO116_EDATA6.
 */
#define CAN_EMO116DATA6  (CAN_MO116_EDATA6)

/** \brief  1E80, Message Object  Function Control Register */
#define CAN_MO116_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019E80u)

/** Alias (User Manual Name) for CAN_MO116_FCR.
 * To use register names with standard convension, please use CAN_MO116_FCR.
 */
#define CAN_MOFCR116     (CAN_MO116_FCR)

/** \brief  1E84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO116_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019E84u)

/** Alias (User Manual Name) for CAN_MO116_FGPR.
 * To use register names with standard convension, please use CAN_MO116_FGPR.
 */
#define CAN_MOFGPR116    (CAN_MO116_FGPR)

/** \brief  1E88, Message Object  Interrupt Pointer Register */
#define CAN_MO116_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019E88u)

/** Alias (User Manual Name) for CAN_MO116_IPR.
 * To use register names with standard convension, please use CAN_MO116_IPR.
 */
#define CAN_MOIPR116     (CAN_MO116_IPR)

/** \brief  1E9C, Message Object  Control Register */
#define CAN_MO116_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019E9Cu)

/** Alias (User Manual Name) for CAN_MO116_STAT.
 * To use register names with standard convension, please use CAN_MO116_STAT.
 */
#define CAN_MOSTAT116    (CAN_MO116_STAT)

/** \brief  1EAC, Message Object  Acceptance Mask Register */
#define CAN_MO117_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019EACu)

/** Alias (User Manual Name) for CAN_MO117_AMR.
 * To use register names with standard convension, please use CAN_MO117_AMR.
 */
#define CAN_MOAMR117     (CAN_MO117_AMR)

/** \brief  1EB8, Message Object  Arbitration Register */
#define CAN_MO117_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019EB8u)

/** Alias (User Manual Name) for CAN_MO117_AR.
 * To use register names with standard convension, please use CAN_MO117_AR.
 */
#define CAN_MOAR117      (CAN_MO117_AR)

/** \brief  1EBC, Message Object  Control Register */
#define CAN_MO117_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019EBCu)

/** Alias (User Manual Name) for CAN_MO117_CTR.
 * To use register names with standard convension, please use CAN_MO117_CTR.
 */
#define CAN_MOCTR117     (CAN_MO117_CTR)

/** \brief  1EB4, Message Object  Data Register High */
#define CAN_MO117_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019EB4u)

/** Alias (User Manual Name) for CAN_MO117_DATAH.
 * To use register names with standard convension, please use CAN_MO117_DATAH.
 */
#define CAN_MODATAH117   (CAN_MO117_DATAH)

/** \brief  1EB0, Message Object  Data Register Low */
#define CAN_MO117_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019EB0u)

/** Alias (User Manual Name) for CAN_MO117_DATAL.
 * To use register names with standard convension, please use CAN_MO117_DATAL.
 */
#define CAN_MODATAL117   (CAN_MO117_DATAL)

/** \brief  1EA0, Message Object  Function Control Register */
#define CAN_MO117_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019EA0u)

/** Alias (User Manual Name) for CAN_MO117_EDATA0.
 * To use register names with standard convension, please use CAN_MO117_EDATA0.
 */
#define CAN_EMO117DATA0  (CAN_MO117_EDATA0)

/** \brief  1EA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO117_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019EA4u)

/** Alias (User Manual Name) for CAN_MO117_EDATA1.
 * To use register names with standard convension, please use CAN_MO117_EDATA1.
 */
#define CAN_EMO117DATA1  (CAN_MO117_EDATA1)

/** \brief  1EA8, Message Object  Interrupt Pointer Register */
#define CAN_MO117_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019EA8u)

/** Alias (User Manual Name) for CAN_MO117_EDATA2.
 * To use register names with standard convension, please use CAN_MO117_EDATA2.
 */
#define CAN_EMO117DATA2  (CAN_MO117_EDATA2)

/** \brief  1EAC, Message Object  Acceptance Mask Register */
#define CAN_MO117_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019EACu)

/** Alias (User Manual Name) for CAN_MO117_EDATA3.
 * To use register names with standard convension, please use CAN_MO117_EDATA3.
 */
#define CAN_EMO117DATA3  (CAN_MO117_EDATA3)

/** \brief  1EB0, Message Object  Data Register Low */
#define CAN_MO117_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019EB0u)

/** Alias (User Manual Name) for CAN_MO117_EDATA4.
 * To use register names with standard convension, please use CAN_MO117_EDATA4.
 */
#define CAN_EMO117DATA4  (CAN_MO117_EDATA4)

/** \brief  1EB4, Message Object  Data Register High */
#define CAN_MO117_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019EB4u)

/** Alias (User Manual Name) for CAN_MO117_EDATA5.
 * To use register names with standard convension, please use CAN_MO117_EDATA5.
 */
#define CAN_EMO117DATA5  (CAN_MO117_EDATA5)

/** \brief  1EB8, Message Object  Arbitration Register */
#define CAN_MO117_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019EB8u)

/** Alias (User Manual Name) for CAN_MO117_EDATA6.
 * To use register names with standard convension, please use CAN_MO117_EDATA6.
 */
#define CAN_EMO117DATA6  (CAN_MO117_EDATA6)

/** \brief  1EA0, Message Object  Function Control Register */
#define CAN_MO117_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019EA0u)

/** Alias (User Manual Name) for CAN_MO117_FCR.
 * To use register names with standard convension, please use CAN_MO117_FCR.
 */
#define CAN_MOFCR117     (CAN_MO117_FCR)

/** \brief  1EA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO117_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019EA4u)

/** Alias (User Manual Name) for CAN_MO117_FGPR.
 * To use register names with standard convension, please use CAN_MO117_FGPR.
 */
#define CAN_MOFGPR117    (CAN_MO117_FGPR)

/** \brief  1EA8, Message Object  Interrupt Pointer Register */
#define CAN_MO117_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019EA8u)

/** Alias (User Manual Name) for CAN_MO117_IPR.
 * To use register names with standard convension, please use CAN_MO117_IPR.
 */
#define CAN_MOIPR117     (CAN_MO117_IPR)

/** \brief  1EBC, Message Object  Control Register */
#define CAN_MO117_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019EBCu)

/** Alias (User Manual Name) for CAN_MO117_STAT.
 * To use register names with standard convension, please use CAN_MO117_STAT.
 */
#define CAN_MOSTAT117    (CAN_MO117_STAT)

/** \brief  1ECC, Message Object  Acceptance Mask Register */
#define CAN_MO118_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019ECCu)

/** Alias (User Manual Name) for CAN_MO118_AMR.
 * To use register names with standard convension, please use CAN_MO118_AMR.
 */
#define CAN_MOAMR118     (CAN_MO118_AMR)

/** \brief  1ED8, Message Object  Arbitration Register */
#define CAN_MO118_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019ED8u)

/** Alias (User Manual Name) for CAN_MO118_AR.
 * To use register names with standard convension, please use CAN_MO118_AR.
 */
#define CAN_MOAR118      (CAN_MO118_AR)

/** \brief  1EDC, Message Object  Control Register */
#define CAN_MO118_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019EDCu)

/** Alias (User Manual Name) for CAN_MO118_CTR.
 * To use register names with standard convension, please use CAN_MO118_CTR.
 */
#define CAN_MOCTR118     (CAN_MO118_CTR)

/** \brief  1ED4, Message Object  Data Register High */
#define CAN_MO118_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019ED4u)

/** Alias (User Manual Name) for CAN_MO118_DATAH.
 * To use register names with standard convension, please use CAN_MO118_DATAH.
 */
#define CAN_MODATAH118   (CAN_MO118_DATAH)

/** \brief  1ED0, Message Object  Data Register Low */
#define CAN_MO118_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019ED0u)

/** Alias (User Manual Name) for CAN_MO118_DATAL.
 * To use register names with standard convension, please use CAN_MO118_DATAL.
 */
#define CAN_MODATAL118   (CAN_MO118_DATAL)

/** \brief  1EC0, Message Object  Function Control Register */
#define CAN_MO118_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019EC0u)

/** Alias (User Manual Name) for CAN_MO118_EDATA0.
 * To use register names with standard convension, please use CAN_MO118_EDATA0.
 */
#define CAN_EMO118DATA0  (CAN_MO118_EDATA0)

/** \brief  1EC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO118_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019EC4u)

/** Alias (User Manual Name) for CAN_MO118_EDATA1.
 * To use register names with standard convension, please use CAN_MO118_EDATA1.
 */
#define CAN_EMO118DATA1  (CAN_MO118_EDATA1)

/** \brief  1EC8, Message Object  Interrupt Pointer Register */
#define CAN_MO118_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019EC8u)

/** Alias (User Manual Name) for CAN_MO118_EDATA2.
 * To use register names with standard convension, please use CAN_MO118_EDATA2.
 */
#define CAN_EMO118DATA2  (CAN_MO118_EDATA2)

/** \brief  1ECC, Message Object  Acceptance Mask Register */
#define CAN_MO118_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019ECCu)

/** Alias (User Manual Name) for CAN_MO118_EDATA3.
 * To use register names with standard convension, please use CAN_MO118_EDATA3.
 */
#define CAN_EMO118DATA3  (CAN_MO118_EDATA3)

/** \brief  1ED0, Message Object  Data Register Low */
#define CAN_MO118_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019ED0u)

/** Alias (User Manual Name) for CAN_MO118_EDATA4.
 * To use register names with standard convension, please use CAN_MO118_EDATA4.
 */
#define CAN_EMO118DATA4  (CAN_MO118_EDATA4)

/** \brief  1ED4, Message Object  Data Register High */
#define CAN_MO118_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019ED4u)

/** Alias (User Manual Name) for CAN_MO118_EDATA5.
 * To use register names with standard convension, please use CAN_MO118_EDATA5.
 */
#define CAN_EMO118DATA5  (CAN_MO118_EDATA5)

/** \brief  1ED8, Message Object  Arbitration Register */
#define CAN_MO118_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019ED8u)

/** Alias (User Manual Name) for CAN_MO118_EDATA6.
 * To use register names with standard convension, please use CAN_MO118_EDATA6.
 */
#define CAN_EMO118DATA6  (CAN_MO118_EDATA6)

/** \brief  1EC0, Message Object  Function Control Register */
#define CAN_MO118_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019EC0u)

/** Alias (User Manual Name) for CAN_MO118_FCR.
 * To use register names with standard convension, please use CAN_MO118_FCR.
 */
#define CAN_MOFCR118     (CAN_MO118_FCR)

/** \brief  1EC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO118_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019EC4u)

/** Alias (User Manual Name) for CAN_MO118_FGPR.
 * To use register names with standard convension, please use CAN_MO118_FGPR.
 */
#define CAN_MOFGPR118    (CAN_MO118_FGPR)

/** \brief  1EC8, Message Object  Interrupt Pointer Register */
#define CAN_MO118_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019EC8u)

/** Alias (User Manual Name) for CAN_MO118_IPR.
 * To use register names with standard convension, please use CAN_MO118_IPR.
 */
#define CAN_MOIPR118     (CAN_MO118_IPR)

/** \brief  1EDC, Message Object  Control Register */
#define CAN_MO118_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019EDCu)

/** Alias (User Manual Name) for CAN_MO118_STAT.
 * To use register names with standard convension, please use CAN_MO118_STAT.
 */
#define CAN_MOSTAT118    (CAN_MO118_STAT)

/** \brief  1EEC, Message Object  Acceptance Mask Register */
#define CAN_MO119_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019EECu)

/** Alias (User Manual Name) for CAN_MO119_AMR.
 * To use register names with standard convension, please use CAN_MO119_AMR.
 */
#define CAN_MOAMR119     (CAN_MO119_AMR)

/** \brief  1EF8, Message Object  Arbitration Register */
#define CAN_MO119_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019EF8u)

/** Alias (User Manual Name) for CAN_MO119_AR.
 * To use register names with standard convension, please use CAN_MO119_AR.
 */
#define CAN_MOAR119      (CAN_MO119_AR)

/** \brief  1EFC, Message Object  Control Register */
#define CAN_MO119_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019EFCu)

/** Alias (User Manual Name) for CAN_MO119_CTR.
 * To use register names with standard convension, please use CAN_MO119_CTR.
 */
#define CAN_MOCTR119     (CAN_MO119_CTR)

/** \brief  1EF4, Message Object  Data Register High */
#define CAN_MO119_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019EF4u)

/** Alias (User Manual Name) for CAN_MO119_DATAH.
 * To use register names with standard convension, please use CAN_MO119_DATAH.
 */
#define CAN_MODATAH119   (CAN_MO119_DATAH)

/** \brief  1EF0, Message Object  Data Register Low */
#define CAN_MO119_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019EF0u)

/** Alias (User Manual Name) for CAN_MO119_DATAL.
 * To use register names with standard convension, please use CAN_MO119_DATAL.
 */
#define CAN_MODATAL119   (CAN_MO119_DATAL)

/** \brief  1EE0, Message Object  Function Control Register */
#define CAN_MO119_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019EE0u)

/** Alias (User Manual Name) for CAN_MO119_EDATA0.
 * To use register names with standard convension, please use CAN_MO119_EDATA0.
 */
#define CAN_EMO119DATA0  (CAN_MO119_EDATA0)

/** \brief  1EE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO119_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019EE4u)

/** Alias (User Manual Name) for CAN_MO119_EDATA1.
 * To use register names with standard convension, please use CAN_MO119_EDATA1.
 */
#define CAN_EMO119DATA1  (CAN_MO119_EDATA1)

/** \brief  1EE8, Message Object  Interrupt Pointer Register */
#define CAN_MO119_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019EE8u)

/** Alias (User Manual Name) for CAN_MO119_EDATA2.
 * To use register names with standard convension, please use CAN_MO119_EDATA2.
 */
#define CAN_EMO119DATA2  (CAN_MO119_EDATA2)

/** \brief  1EEC, Message Object  Acceptance Mask Register */
#define CAN_MO119_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019EECu)

/** Alias (User Manual Name) for CAN_MO119_EDATA3.
 * To use register names with standard convension, please use CAN_MO119_EDATA3.
 */
#define CAN_EMO119DATA3  (CAN_MO119_EDATA3)

/** \brief  1EF0, Message Object  Data Register Low */
#define CAN_MO119_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019EF0u)

/** Alias (User Manual Name) for CAN_MO119_EDATA4.
 * To use register names with standard convension, please use CAN_MO119_EDATA4.
 */
#define CAN_EMO119DATA4  (CAN_MO119_EDATA4)

/** \brief  1EF4, Message Object  Data Register High */
#define CAN_MO119_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019EF4u)

/** Alias (User Manual Name) for CAN_MO119_EDATA5.
 * To use register names with standard convension, please use CAN_MO119_EDATA5.
 */
#define CAN_EMO119DATA5  (CAN_MO119_EDATA5)

/** \brief  1EF8, Message Object  Arbitration Register */
#define CAN_MO119_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019EF8u)

/** Alias (User Manual Name) for CAN_MO119_EDATA6.
 * To use register names with standard convension, please use CAN_MO119_EDATA6.
 */
#define CAN_EMO119DATA6  (CAN_MO119_EDATA6)

/** \brief  1EE0, Message Object  Function Control Register */
#define CAN_MO119_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019EE0u)

/** Alias (User Manual Name) for CAN_MO119_FCR.
 * To use register names with standard convension, please use CAN_MO119_FCR.
 */
#define CAN_MOFCR119     (CAN_MO119_FCR)

/** \brief  1EE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO119_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019EE4u)

/** Alias (User Manual Name) for CAN_MO119_FGPR.
 * To use register names with standard convension, please use CAN_MO119_FGPR.
 */
#define CAN_MOFGPR119    (CAN_MO119_FGPR)

/** \brief  1EE8, Message Object  Interrupt Pointer Register */
#define CAN_MO119_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019EE8u)

/** Alias (User Manual Name) for CAN_MO119_IPR.
 * To use register names with standard convension, please use CAN_MO119_IPR.
 */
#define CAN_MOIPR119     (CAN_MO119_IPR)

/** \brief  1EFC, Message Object  Control Register */
#define CAN_MO119_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019EFCu)

/** Alias (User Manual Name) for CAN_MO119_STAT.
 * To use register names with standard convension, please use CAN_MO119_STAT.
 */
#define CAN_MOSTAT119    (CAN_MO119_STAT)

/** \brief  116C, Message Object  Acceptance Mask Register */
#define CAN_MO11_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001916Cu)

/** Alias (User Manual Name) for CAN_MO11_AMR.
 * To use register names with standard convension, please use CAN_MO11_AMR.
 */
#define CAN_MOAMR11      (CAN_MO11_AMR)

/** \brief  1178, Message Object  Arbitration Register */
#define CAN_MO11_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019178u)

/** Alias (User Manual Name) for CAN_MO11_AR.
 * To use register names with standard convension, please use CAN_MO11_AR.
 */
#define CAN_MOAR11       (CAN_MO11_AR)

/** \brief  117C, Message Object  Control Register */
#define CAN_MO11_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001917Cu)

/** Alias (User Manual Name) for CAN_MO11_CTR.
 * To use register names with standard convension, please use CAN_MO11_CTR.
 */
#define CAN_MOCTR11      (CAN_MO11_CTR)

/** \brief  1174, Message Object  Data Register High */
#define CAN_MO11_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019174u)

/** Alias (User Manual Name) for CAN_MO11_DATAH.
 * To use register names with standard convension, please use CAN_MO11_DATAH.
 */
#define CAN_MODATAH11    (CAN_MO11_DATAH)

/** \brief  1170, Message Object  Data Register Low */
#define CAN_MO11_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019170u)

/** Alias (User Manual Name) for CAN_MO11_DATAL.
 * To use register names with standard convension, please use CAN_MO11_DATAL.
 */
#define CAN_MODATAL11    (CAN_MO11_DATAL)

/** \brief  1160, Message Object  Function Control Register */
#define CAN_MO11_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019160u)

/** Alias (User Manual Name) for CAN_MO11_EDATA0.
 * To use register names with standard convension, please use CAN_MO11_EDATA0.
 */
#define CAN_EMO11DATA0   (CAN_MO11_EDATA0)

/** \brief  1164, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO11_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019164u)

/** Alias (User Manual Name) for CAN_MO11_EDATA1.
 * To use register names with standard convension, please use CAN_MO11_EDATA1.
 */
#define CAN_EMO11DATA1   (CAN_MO11_EDATA1)

/** \brief  1168, Message Object  Interrupt Pointer Register */
#define CAN_MO11_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019168u)

/** Alias (User Manual Name) for CAN_MO11_EDATA2.
 * To use register names with standard convension, please use CAN_MO11_EDATA2.
 */
#define CAN_EMO11DATA2   (CAN_MO11_EDATA2)

/** \brief  116C, Message Object  Acceptance Mask Register */
#define CAN_MO11_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001916Cu)

/** Alias (User Manual Name) for CAN_MO11_EDATA3.
 * To use register names with standard convension, please use CAN_MO11_EDATA3.
 */
#define CAN_EMO11DATA3   (CAN_MO11_EDATA3)

/** \brief  1170, Message Object  Data Register Low */
#define CAN_MO11_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019170u)

/** Alias (User Manual Name) for CAN_MO11_EDATA4.
 * To use register names with standard convension, please use CAN_MO11_EDATA4.
 */
#define CAN_EMO11DATA4   (CAN_MO11_EDATA4)

/** \brief  1174, Message Object  Data Register High */
#define CAN_MO11_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019174u)

/** Alias (User Manual Name) for CAN_MO11_EDATA5.
 * To use register names with standard convension, please use CAN_MO11_EDATA5.
 */
#define CAN_EMO11DATA5   (CAN_MO11_EDATA5)

/** \brief  1178, Message Object  Arbitration Register */
#define CAN_MO11_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019178u)

/** Alias (User Manual Name) for CAN_MO11_EDATA6.
 * To use register names with standard convension, please use CAN_MO11_EDATA6.
 */
#define CAN_EMO11DATA6   (CAN_MO11_EDATA6)

/** \brief  1160, Message Object  Function Control Register */
#define CAN_MO11_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019160u)

/** Alias (User Manual Name) for CAN_MO11_FCR.
 * To use register names with standard convension, please use CAN_MO11_FCR.
 */
#define CAN_MOFCR11      (CAN_MO11_FCR)

/** \brief  1164, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO11_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019164u)

/** Alias (User Manual Name) for CAN_MO11_FGPR.
 * To use register names with standard convension, please use CAN_MO11_FGPR.
 */
#define CAN_MOFGPR11     (CAN_MO11_FGPR)

/** \brief  1168, Message Object  Interrupt Pointer Register */
#define CAN_MO11_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019168u)

/** Alias (User Manual Name) for CAN_MO11_IPR.
 * To use register names with standard convension, please use CAN_MO11_IPR.
 */
#define CAN_MOIPR11      (CAN_MO11_IPR)

/** \brief  117C, Message Object  Control Register */
#define CAN_MO11_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001917Cu)

/** Alias (User Manual Name) for CAN_MO11_STAT.
 * To use register names with standard convension, please use CAN_MO11_STAT.
 */
#define CAN_MOSTAT11     (CAN_MO11_STAT)

/** \brief  1F0C, Message Object  Acceptance Mask Register */
#define CAN_MO120_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019F0Cu)

/** Alias (User Manual Name) for CAN_MO120_AMR.
 * To use register names with standard convension, please use CAN_MO120_AMR.
 */
#define CAN_MOAMR120     (CAN_MO120_AMR)

/** \brief  1F18, Message Object  Arbitration Register */
#define CAN_MO120_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019F18u)

/** Alias (User Manual Name) for CAN_MO120_AR.
 * To use register names with standard convension, please use CAN_MO120_AR.
 */
#define CAN_MOAR120      (CAN_MO120_AR)

/** \brief  1F1C, Message Object  Control Register */
#define CAN_MO120_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019F1Cu)

/** Alias (User Manual Name) for CAN_MO120_CTR.
 * To use register names with standard convension, please use CAN_MO120_CTR.
 */
#define CAN_MOCTR120     (CAN_MO120_CTR)

/** \brief  1F14, Message Object  Data Register High */
#define CAN_MO120_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019F14u)

/** Alias (User Manual Name) for CAN_MO120_DATAH.
 * To use register names with standard convension, please use CAN_MO120_DATAH.
 */
#define CAN_MODATAH120   (CAN_MO120_DATAH)

/** \brief  1F10, Message Object  Data Register Low */
#define CAN_MO120_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019F10u)

/** Alias (User Manual Name) for CAN_MO120_DATAL.
 * To use register names with standard convension, please use CAN_MO120_DATAL.
 */
#define CAN_MODATAL120   (CAN_MO120_DATAL)

/** \brief  1F00, Message Object  Function Control Register */
#define CAN_MO120_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019F00u)

/** Alias (User Manual Name) for CAN_MO120_EDATA0.
 * To use register names with standard convension, please use CAN_MO120_EDATA0.
 */
#define CAN_EMO120DATA0  (CAN_MO120_EDATA0)

/** \brief  1F04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO120_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019F04u)

/** Alias (User Manual Name) for CAN_MO120_EDATA1.
 * To use register names with standard convension, please use CAN_MO120_EDATA1.
 */
#define CAN_EMO120DATA1  (CAN_MO120_EDATA1)

/** \brief  1F08, Message Object  Interrupt Pointer Register */
#define CAN_MO120_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019F08u)

/** Alias (User Manual Name) for CAN_MO120_EDATA2.
 * To use register names with standard convension, please use CAN_MO120_EDATA2.
 */
#define CAN_EMO120DATA2  (CAN_MO120_EDATA2)

/** \brief  1F0C, Message Object  Acceptance Mask Register */
#define CAN_MO120_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019F0Cu)

/** Alias (User Manual Name) for CAN_MO120_EDATA3.
 * To use register names with standard convension, please use CAN_MO120_EDATA3.
 */
#define CAN_EMO120DATA3  (CAN_MO120_EDATA3)

/** \brief  1F10, Message Object  Data Register Low */
#define CAN_MO120_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019F10u)

/** Alias (User Manual Name) for CAN_MO120_EDATA4.
 * To use register names with standard convension, please use CAN_MO120_EDATA4.
 */
#define CAN_EMO120DATA4  (CAN_MO120_EDATA4)

/** \brief  1F14, Message Object  Data Register High */
#define CAN_MO120_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019F14u)

/** Alias (User Manual Name) for CAN_MO120_EDATA5.
 * To use register names with standard convension, please use CAN_MO120_EDATA5.
 */
#define CAN_EMO120DATA5  (CAN_MO120_EDATA5)

/** \brief  1F18, Message Object  Arbitration Register */
#define CAN_MO120_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019F18u)

/** Alias (User Manual Name) for CAN_MO120_EDATA6.
 * To use register names with standard convension, please use CAN_MO120_EDATA6.
 */
#define CAN_EMO120DATA6  (CAN_MO120_EDATA6)

/** \brief  1F00, Message Object  Function Control Register */
#define CAN_MO120_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019F00u)

/** Alias (User Manual Name) for CAN_MO120_FCR.
 * To use register names with standard convension, please use CAN_MO120_FCR.
 */
#define CAN_MOFCR120     (CAN_MO120_FCR)

/** \brief  1F04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO120_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019F04u)

/** Alias (User Manual Name) for CAN_MO120_FGPR.
 * To use register names with standard convension, please use CAN_MO120_FGPR.
 */
#define CAN_MOFGPR120    (CAN_MO120_FGPR)

/** \brief  1F08, Message Object  Interrupt Pointer Register */
#define CAN_MO120_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019F08u)

/** Alias (User Manual Name) for CAN_MO120_IPR.
 * To use register names with standard convension, please use CAN_MO120_IPR.
 */
#define CAN_MOIPR120     (CAN_MO120_IPR)

/** \brief  1F1C, Message Object  Control Register */
#define CAN_MO120_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019F1Cu)

/** Alias (User Manual Name) for CAN_MO120_STAT.
 * To use register names with standard convension, please use CAN_MO120_STAT.
 */
#define CAN_MOSTAT120    (CAN_MO120_STAT)

/** \brief  1F2C, Message Object  Acceptance Mask Register */
#define CAN_MO121_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019F2Cu)

/** Alias (User Manual Name) for CAN_MO121_AMR.
 * To use register names with standard convension, please use CAN_MO121_AMR.
 */
#define CAN_MOAMR121     (CAN_MO121_AMR)

/** \brief  1F38, Message Object  Arbitration Register */
#define CAN_MO121_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019F38u)

/** Alias (User Manual Name) for CAN_MO121_AR.
 * To use register names with standard convension, please use CAN_MO121_AR.
 */
#define CAN_MOAR121      (CAN_MO121_AR)

/** \brief  1F3C, Message Object  Control Register */
#define CAN_MO121_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019F3Cu)

/** Alias (User Manual Name) for CAN_MO121_CTR.
 * To use register names with standard convension, please use CAN_MO121_CTR.
 */
#define CAN_MOCTR121     (CAN_MO121_CTR)

/** \brief  1F34, Message Object  Data Register High */
#define CAN_MO121_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019F34u)

/** Alias (User Manual Name) for CAN_MO121_DATAH.
 * To use register names with standard convension, please use CAN_MO121_DATAH.
 */
#define CAN_MODATAH121   (CAN_MO121_DATAH)

/** \brief  1F30, Message Object  Data Register Low */
#define CAN_MO121_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019F30u)

/** Alias (User Manual Name) for CAN_MO121_DATAL.
 * To use register names with standard convension, please use CAN_MO121_DATAL.
 */
#define CAN_MODATAL121   (CAN_MO121_DATAL)

/** \brief  1F20, Message Object  Function Control Register */
#define CAN_MO121_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019F20u)

/** Alias (User Manual Name) for CAN_MO121_EDATA0.
 * To use register names with standard convension, please use CAN_MO121_EDATA0.
 */
#define CAN_EMO121DATA0  (CAN_MO121_EDATA0)

/** \brief  1F24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO121_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019F24u)

/** Alias (User Manual Name) for CAN_MO121_EDATA1.
 * To use register names with standard convension, please use CAN_MO121_EDATA1.
 */
#define CAN_EMO121DATA1  (CAN_MO121_EDATA1)

/** \brief  1F28, Message Object  Interrupt Pointer Register */
#define CAN_MO121_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019F28u)

/** Alias (User Manual Name) for CAN_MO121_EDATA2.
 * To use register names with standard convension, please use CAN_MO121_EDATA2.
 */
#define CAN_EMO121DATA2  (CAN_MO121_EDATA2)

/** \brief  1F2C, Message Object  Acceptance Mask Register */
#define CAN_MO121_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019F2Cu)

/** Alias (User Manual Name) for CAN_MO121_EDATA3.
 * To use register names with standard convension, please use CAN_MO121_EDATA3.
 */
#define CAN_EMO121DATA3  (CAN_MO121_EDATA3)

/** \brief  1F30, Message Object  Data Register Low */
#define CAN_MO121_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019F30u)

/** Alias (User Manual Name) for CAN_MO121_EDATA4.
 * To use register names with standard convension, please use CAN_MO121_EDATA4.
 */
#define CAN_EMO121DATA4  (CAN_MO121_EDATA4)

/** \brief  1F34, Message Object  Data Register High */
#define CAN_MO121_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019F34u)

/** Alias (User Manual Name) for CAN_MO121_EDATA5.
 * To use register names with standard convension, please use CAN_MO121_EDATA5.
 */
#define CAN_EMO121DATA5  (CAN_MO121_EDATA5)

/** \brief  1F38, Message Object  Arbitration Register */
#define CAN_MO121_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019F38u)

/** Alias (User Manual Name) for CAN_MO121_EDATA6.
 * To use register names with standard convension, please use CAN_MO121_EDATA6.
 */
#define CAN_EMO121DATA6  (CAN_MO121_EDATA6)

/** \brief  1F20, Message Object  Function Control Register */
#define CAN_MO121_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019F20u)

/** Alias (User Manual Name) for CAN_MO121_FCR.
 * To use register names with standard convension, please use CAN_MO121_FCR.
 */
#define CAN_MOFCR121     (CAN_MO121_FCR)

/** \brief  1F24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO121_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019F24u)

/** Alias (User Manual Name) for CAN_MO121_FGPR.
 * To use register names with standard convension, please use CAN_MO121_FGPR.
 */
#define CAN_MOFGPR121    (CAN_MO121_FGPR)

/** \brief  1F28, Message Object  Interrupt Pointer Register */
#define CAN_MO121_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019F28u)

/** Alias (User Manual Name) for CAN_MO121_IPR.
 * To use register names with standard convension, please use CAN_MO121_IPR.
 */
#define CAN_MOIPR121     (CAN_MO121_IPR)

/** \brief  1F3C, Message Object  Control Register */
#define CAN_MO121_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019F3Cu)

/** Alias (User Manual Name) for CAN_MO121_STAT.
 * To use register names with standard convension, please use CAN_MO121_STAT.
 */
#define CAN_MOSTAT121    (CAN_MO121_STAT)

/** \brief  1F4C, Message Object  Acceptance Mask Register */
#define CAN_MO122_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019F4Cu)

/** Alias (User Manual Name) for CAN_MO122_AMR.
 * To use register names with standard convension, please use CAN_MO122_AMR.
 */
#define CAN_MOAMR122     (CAN_MO122_AMR)

/** \brief  1F58, Message Object  Arbitration Register */
#define CAN_MO122_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019F58u)

/** Alias (User Manual Name) for CAN_MO122_AR.
 * To use register names with standard convension, please use CAN_MO122_AR.
 */
#define CAN_MOAR122      (CAN_MO122_AR)

/** \brief  1F5C, Message Object  Control Register */
#define CAN_MO122_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019F5Cu)

/** Alias (User Manual Name) for CAN_MO122_CTR.
 * To use register names with standard convension, please use CAN_MO122_CTR.
 */
#define CAN_MOCTR122     (CAN_MO122_CTR)

/** \brief  1F54, Message Object  Data Register High */
#define CAN_MO122_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019F54u)

/** Alias (User Manual Name) for CAN_MO122_DATAH.
 * To use register names with standard convension, please use CAN_MO122_DATAH.
 */
#define CAN_MODATAH122   (CAN_MO122_DATAH)

/** \brief  1F50, Message Object  Data Register Low */
#define CAN_MO122_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019F50u)

/** Alias (User Manual Name) for CAN_MO122_DATAL.
 * To use register names with standard convension, please use CAN_MO122_DATAL.
 */
#define CAN_MODATAL122   (CAN_MO122_DATAL)

/** \brief  1F40, Message Object  Function Control Register */
#define CAN_MO122_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019F40u)

/** Alias (User Manual Name) for CAN_MO122_EDATA0.
 * To use register names with standard convension, please use CAN_MO122_EDATA0.
 */
#define CAN_EMO122DATA0  (CAN_MO122_EDATA0)

/** \brief  1F44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO122_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019F44u)

/** Alias (User Manual Name) for CAN_MO122_EDATA1.
 * To use register names with standard convension, please use CAN_MO122_EDATA1.
 */
#define CAN_EMO122DATA1  (CAN_MO122_EDATA1)

/** \brief  1F48, Message Object  Interrupt Pointer Register */
#define CAN_MO122_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019F48u)

/** Alias (User Manual Name) for CAN_MO122_EDATA2.
 * To use register names with standard convension, please use CAN_MO122_EDATA2.
 */
#define CAN_EMO122DATA2  (CAN_MO122_EDATA2)

/** \brief  1F4C, Message Object  Acceptance Mask Register */
#define CAN_MO122_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019F4Cu)

/** Alias (User Manual Name) for CAN_MO122_EDATA3.
 * To use register names with standard convension, please use CAN_MO122_EDATA3.
 */
#define CAN_EMO122DATA3  (CAN_MO122_EDATA3)

/** \brief  1F50, Message Object  Data Register Low */
#define CAN_MO122_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019F50u)

/** Alias (User Manual Name) for CAN_MO122_EDATA4.
 * To use register names with standard convension, please use CAN_MO122_EDATA4.
 */
#define CAN_EMO122DATA4  (CAN_MO122_EDATA4)

/** \brief  1F54, Message Object  Data Register High */
#define CAN_MO122_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019F54u)

/** Alias (User Manual Name) for CAN_MO122_EDATA5.
 * To use register names with standard convension, please use CAN_MO122_EDATA5.
 */
#define CAN_EMO122DATA5  (CAN_MO122_EDATA5)

/** \brief  1F58, Message Object  Arbitration Register */
#define CAN_MO122_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019F58u)

/** Alias (User Manual Name) for CAN_MO122_EDATA6.
 * To use register names with standard convension, please use CAN_MO122_EDATA6.
 */
#define CAN_EMO122DATA6  (CAN_MO122_EDATA6)

/** \brief  1F40, Message Object  Function Control Register */
#define CAN_MO122_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019F40u)

/** Alias (User Manual Name) for CAN_MO122_FCR.
 * To use register names with standard convension, please use CAN_MO122_FCR.
 */
#define CAN_MOFCR122     (CAN_MO122_FCR)

/** \brief  1F44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO122_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019F44u)

/** Alias (User Manual Name) for CAN_MO122_FGPR.
 * To use register names with standard convension, please use CAN_MO122_FGPR.
 */
#define CAN_MOFGPR122    (CAN_MO122_FGPR)

/** \brief  1F48, Message Object  Interrupt Pointer Register */
#define CAN_MO122_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019F48u)

/** Alias (User Manual Name) for CAN_MO122_IPR.
 * To use register names with standard convension, please use CAN_MO122_IPR.
 */
#define CAN_MOIPR122     (CAN_MO122_IPR)

/** \brief  1F5C, Message Object  Control Register */
#define CAN_MO122_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019F5Cu)

/** Alias (User Manual Name) for CAN_MO122_STAT.
 * To use register names with standard convension, please use CAN_MO122_STAT.
 */
#define CAN_MOSTAT122    (CAN_MO122_STAT)

/** \brief  1F6C, Message Object  Acceptance Mask Register */
#define CAN_MO123_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019F6Cu)

/** Alias (User Manual Name) for CAN_MO123_AMR.
 * To use register names with standard convension, please use CAN_MO123_AMR.
 */
#define CAN_MOAMR123     (CAN_MO123_AMR)

/** \brief  1F78, Message Object  Arbitration Register */
#define CAN_MO123_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019F78u)

/** Alias (User Manual Name) for CAN_MO123_AR.
 * To use register names with standard convension, please use CAN_MO123_AR.
 */
#define CAN_MOAR123      (CAN_MO123_AR)

/** \brief  1F7C, Message Object  Control Register */
#define CAN_MO123_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019F7Cu)

/** Alias (User Manual Name) for CAN_MO123_CTR.
 * To use register names with standard convension, please use CAN_MO123_CTR.
 */
#define CAN_MOCTR123     (CAN_MO123_CTR)

/** \brief  1F74, Message Object  Data Register High */
#define CAN_MO123_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019F74u)

/** Alias (User Manual Name) for CAN_MO123_DATAH.
 * To use register names with standard convension, please use CAN_MO123_DATAH.
 */
#define CAN_MODATAH123   (CAN_MO123_DATAH)

/** \brief  1F70, Message Object  Data Register Low */
#define CAN_MO123_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019F70u)

/** Alias (User Manual Name) for CAN_MO123_DATAL.
 * To use register names with standard convension, please use CAN_MO123_DATAL.
 */
#define CAN_MODATAL123   (CAN_MO123_DATAL)

/** \brief  1F60, Message Object  Function Control Register */
#define CAN_MO123_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019F60u)

/** Alias (User Manual Name) for CAN_MO123_EDATA0.
 * To use register names with standard convension, please use CAN_MO123_EDATA0.
 */
#define CAN_EMO123DATA0  (CAN_MO123_EDATA0)

/** \brief  1F64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO123_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019F64u)

/** Alias (User Manual Name) for CAN_MO123_EDATA1.
 * To use register names with standard convension, please use CAN_MO123_EDATA1.
 */
#define CAN_EMO123DATA1  (CAN_MO123_EDATA1)

/** \brief  1F68, Message Object  Interrupt Pointer Register */
#define CAN_MO123_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019F68u)

/** Alias (User Manual Name) for CAN_MO123_EDATA2.
 * To use register names with standard convension, please use CAN_MO123_EDATA2.
 */
#define CAN_EMO123DATA2  (CAN_MO123_EDATA2)

/** \brief  1F6C, Message Object  Acceptance Mask Register */
#define CAN_MO123_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019F6Cu)

/** Alias (User Manual Name) for CAN_MO123_EDATA3.
 * To use register names with standard convension, please use CAN_MO123_EDATA3.
 */
#define CAN_EMO123DATA3  (CAN_MO123_EDATA3)

/** \brief  1F70, Message Object  Data Register Low */
#define CAN_MO123_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019F70u)

/** Alias (User Manual Name) for CAN_MO123_EDATA4.
 * To use register names with standard convension, please use CAN_MO123_EDATA4.
 */
#define CAN_EMO123DATA4  (CAN_MO123_EDATA4)

/** \brief  1F74, Message Object  Data Register High */
#define CAN_MO123_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019F74u)

/** Alias (User Manual Name) for CAN_MO123_EDATA5.
 * To use register names with standard convension, please use CAN_MO123_EDATA5.
 */
#define CAN_EMO123DATA5  (CAN_MO123_EDATA5)

/** \brief  1F78, Message Object  Arbitration Register */
#define CAN_MO123_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019F78u)

/** Alias (User Manual Name) for CAN_MO123_EDATA6.
 * To use register names with standard convension, please use CAN_MO123_EDATA6.
 */
#define CAN_EMO123DATA6  (CAN_MO123_EDATA6)

/** \brief  1F60, Message Object  Function Control Register */
#define CAN_MO123_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019F60u)

/** Alias (User Manual Name) for CAN_MO123_FCR.
 * To use register names with standard convension, please use CAN_MO123_FCR.
 */
#define CAN_MOFCR123     (CAN_MO123_FCR)

/** \brief  1F64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO123_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019F64u)

/** Alias (User Manual Name) for CAN_MO123_FGPR.
 * To use register names with standard convension, please use CAN_MO123_FGPR.
 */
#define CAN_MOFGPR123    (CAN_MO123_FGPR)

/** \brief  1F68, Message Object  Interrupt Pointer Register */
#define CAN_MO123_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019F68u)

/** Alias (User Manual Name) for CAN_MO123_IPR.
 * To use register names with standard convension, please use CAN_MO123_IPR.
 */
#define CAN_MOIPR123     (CAN_MO123_IPR)

/** \brief  1F7C, Message Object  Control Register */
#define CAN_MO123_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019F7Cu)

/** Alias (User Manual Name) for CAN_MO123_STAT.
 * To use register names with standard convension, please use CAN_MO123_STAT.
 */
#define CAN_MOSTAT123    (CAN_MO123_STAT)

/** \brief  1F8C, Message Object  Acceptance Mask Register */
#define CAN_MO124_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019F8Cu)

/** Alias (User Manual Name) for CAN_MO124_AMR.
 * To use register names with standard convension, please use CAN_MO124_AMR.
 */
#define CAN_MOAMR124     (CAN_MO124_AMR)

/** \brief  1F98, Message Object  Arbitration Register */
#define CAN_MO124_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019F98u)

/** Alias (User Manual Name) for CAN_MO124_AR.
 * To use register names with standard convension, please use CAN_MO124_AR.
 */
#define CAN_MOAR124      (CAN_MO124_AR)

/** \brief  1F9C, Message Object  Control Register */
#define CAN_MO124_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019F9Cu)

/** Alias (User Manual Name) for CAN_MO124_CTR.
 * To use register names with standard convension, please use CAN_MO124_CTR.
 */
#define CAN_MOCTR124     (CAN_MO124_CTR)

/** \brief  1F94, Message Object  Data Register High */
#define CAN_MO124_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019F94u)

/** Alias (User Manual Name) for CAN_MO124_DATAH.
 * To use register names with standard convension, please use CAN_MO124_DATAH.
 */
#define CAN_MODATAH124   (CAN_MO124_DATAH)

/** \brief  1F90, Message Object  Data Register Low */
#define CAN_MO124_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019F90u)

/** Alias (User Manual Name) for CAN_MO124_DATAL.
 * To use register names with standard convension, please use CAN_MO124_DATAL.
 */
#define CAN_MODATAL124   (CAN_MO124_DATAL)

/** \brief  1F80, Message Object  Function Control Register */
#define CAN_MO124_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019F80u)

/** Alias (User Manual Name) for CAN_MO124_EDATA0.
 * To use register names with standard convension, please use CAN_MO124_EDATA0.
 */
#define CAN_EMO124DATA0  (CAN_MO124_EDATA0)

/** \brief  1F84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO124_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019F84u)

/** Alias (User Manual Name) for CAN_MO124_EDATA1.
 * To use register names with standard convension, please use CAN_MO124_EDATA1.
 */
#define CAN_EMO124DATA1  (CAN_MO124_EDATA1)

/** \brief  1F88, Message Object  Interrupt Pointer Register */
#define CAN_MO124_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019F88u)

/** Alias (User Manual Name) for CAN_MO124_EDATA2.
 * To use register names with standard convension, please use CAN_MO124_EDATA2.
 */
#define CAN_EMO124DATA2  (CAN_MO124_EDATA2)

/** \brief  1F8C, Message Object  Acceptance Mask Register */
#define CAN_MO124_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019F8Cu)

/** Alias (User Manual Name) for CAN_MO124_EDATA3.
 * To use register names with standard convension, please use CAN_MO124_EDATA3.
 */
#define CAN_EMO124DATA3  (CAN_MO124_EDATA3)

/** \brief  1F90, Message Object  Data Register Low */
#define CAN_MO124_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019F90u)

/** Alias (User Manual Name) for CAN_MO124_EDATA4.
 * To use register names with standard convension, please use CAN_MO124_EDATA4.
 */
#define CAN_EMO124DATA4  (CAN_MO124_EDATA4)

/** \brief  1F94, Message Object  Data Register High */
#define CAN_MO124_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019F94u)

/** Alias (User Manual Name) for CAN_MO124_EDATA5.
 * To use register names with standard convension, please use CAN_MO124_EDATA5.
 */
#define CAN_EMO124DATA5  (CAN_MO124_EDATA5)

/** \brief  1F98, Message Object  Arbitration Register */
#define CAN_MO124_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019F98u)

/** Alias (User Manual Name) for CAN_MO124_EDATA6.
 * To use register names with standard convension, please use CAN_MO124_EDATA6.
 */
#define CAN_EMO124DATA6  (CAN_MO124_EDATA6)

/** \brief  1F80, Message Object  Function Control Register */
#define CAN_MO124_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019F80u)

/** Alias (User Manual Name) for CAN_MO124_FCR.
 * To use register names with standard convension, please use CAN_MO124_FCR.
 */
#define CAN_MOFCR124     (CAN_MO124_FCR)

/** \brief  1F84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO124_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019F84u)

/** Alias (User Manual Name) for CAN_MO124_FGPR.
 * To use register names with standard convension, please use CAN_MO124_FGPR.
 */
#define CAN_MOFGPR124    (CAN_MO124_FGPR)

/** \brief  1F88, Message Object  Interrupt Pointer Register */
#define CAN_MO124_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019F88u)

/** Alias (User Manual Name) for CAN_MO124_IPR.
 * To use register names with standard convension, please use CAN_MO124_IPR.
 */
#define CAN_MOIPR124     (CAN_MO124_IPR)

/** \brief  1F9C, Message Object  Control Register */
#define CAN_MO124_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019F9Cu)

/** Alias (User Manual Name) for CAN_MO124_STAT.
 * To use register names with standard convension, please use CAN_MO124_STAT.
 */
#define CAN_MOSTAT124    (CAN_MO124_STAT)

/** \brief  1FAC, Message Object  Acceptance Mask Register */
#define CAN_MO125_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019FACu)

/** Alias (User Manual Name) for CAN_MO125_AMR.
 * To use register names with standard convension, please use CAN_MO125_AMR.
 */
#define CAN_MOAMR125     (CAN_MO125_AMR)

/** \brief  1FB8, Message Object  Arbitration Register */
#define CAN_MO125_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019FB8u)

/** Alias (User Manual Name) for CAN_MO125_AR.
 * To use register names with standard convension, please use CAN_MO125_AR.
 */
#define CAN_MOAR125      (CAN_MO125_AR)

/** \brief  1FBC, Message Object  Control Register */
#define CAN_MO125_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019FBCu)

/** Alias (User Manual Name) for CAN_MO125_CTR.
 * To use register names with standard convension, please use CAN_MO125_CTR.
 */
#define CAN_MOCTR125     (CAN_MO125_CTR)

/** \brief  1FB4, Message Object  Data Register High */
#define CAN_MO125_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019FB4u)

/** Alias (User Manual Name) for CAN_MO125_DATAH.
 * To use register names with standard convension, please use CAN_MO125_DATAH.
 */
#define CAN_MODATAH125   (CAN_MO125_DATAH)

/** \brief  1FB0, Message Object  Data Register Low */
#define CAN_MO125_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019FB0u)

/** Alias (User Manual Name) for CAN_MO125_DATAL.
 * To use register names with standard convension, please use CAN_MO125_DATAL.
 */
#define CAN_MODATAL125   (CAN_MO125_DATAL)

/** \brief  1FA0, Message Object  Function Control Register */
#define CAN_MO125_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019FA0u)

/** Alias (User Manual Name) for CAN_MO125_EDATA0.
 * To use register names with standard convension, please use CAN_MO125_EDATA0.
 */
#define CAN_EMO125DATA0  (CAN_MO125_EDATA0)

/** \brief  1FA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO125_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019FA4u)

/** Alias (User Manual Name) for CAN_MO125_EDATA1.
 * To use register names with standard convension, please use CAN_MO125_EDATA1.
 */
#define CAN_EMO125DATA1  (CAN_MO125_EDATA1)

/** \brief  1FA8, Message Object  Interrupt Pointer Register */
#define CAN_MO125_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019FA8u)

/** Alias (User Manual Name) for CAN_MO125_EDATA2.
 * To use register names with standard convension, please use CAN_MO125_EDATA2.
 */
#define CAN_EMO125DATA2  (CAN_MO125_EDATA2)

/** \brief  1FAC, Message Object  Acceptance Mask Register */
#define CAN_MO125_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019FACu)

/** Alias (User Manual Name) for CAN_MO125_EDATA3.
 * To use register names with standard convension, please use CAN_MO125_EDATA3.
 */
#define CAN_EMO125DATA3  (CAN_MO125_EDATA3)

/** \brief  1FB0, Message Object  Data Register Low */
#define CAN_MO125_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019FB0u)

/** Alias (User Manual Name) for CAN_MO125_EDATA4.
 * To use register names with standard convension, please use CAN_MO125_EDATA4.
 */
#define CAN_EMO125DATA4  (CAN_MO125_EDATA4)

/** \brief  1FB4, Message Object  Data Register High */
#define CAN_MO125_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019FB4u)

/** Alias (User Manual Name) for CAN_MO125_EDATA5.
 * To use register names with standard convension, please use CAN_MO125_EDATA5.
 */
#define CAN_EMO125DATA5  (CAN_MO125_EDATA5)

/** \brief  1FB8, Message Object  Arbitration Register */
#define CAN_MO125_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019FB8u)

/** Alias (User Manual Name) for CAN_MO125_EDATA6.
 * To use register names with standard convension, please use CAN_MO125_EDATA6.
 */
#define CAN_EMO125DATA6  (CAN_MO125_EDATA6)

/** \brief  1FA0, Message Object  Function Control Register */
#define CAN_MO125_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019FA0u)

/** Alias (User Manual Name) for CAN_MO125_FCR.
 * To use register names with standard convension, please use CAN_MO125_FCR.
 */
#define CAN_MOFCR125     (CAN_MO125_FCR)

/** \brief  1FA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO125_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019FA4u)

/** Alias (User Manual Name) for CAN_MO125_FGPR.
 * To use register names with standard convension, please use CAN_MO125_FGPR.
 */
#define CAN_MOFGPR125    (CAN_MO125_FGPR)

/** \brief  1FA8, Message Object  Interrupt Pointer Register */
#define CAN_MO125_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019FA8u)

/** Alias (User Manual Name) for CAN_MO125_IPR.
 * To use register names with standard convension, please use CAN_MO125_IPR.
 */
#define CAN_MOIPR125     (CAN_MO125_IPR)

/** \brief  1FBC, Message Object  Control Register */
#define CAN_MO125_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019FBCu)

/** Alias (User Manual Name) for CAN_MO125_STAT.
 * To use register names with standard convension, please use CAN_MO125_STAT.
 */
#define CAN_MOSTAT125    (CAN_MO125_STAT)

/** \brief  1FCC, Message Object  Acceptance Mask Register */
#define CAN_MO126_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019FCCu)

/** Alias (User Manual Name) for CAN_MO126_AMR.
 * To use register names with standard convension, please use CAN_MO126_AMR.
 */
#define CAN_MOAMR126     (CAN_MO126_AMR)

/** \brief  1FD8, Message Object  Arbitration Register */
#define CAN_MO126_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019FD8u)

/** Alias (User Manual Name) for CAN_MO126_AR.
 * To use register names with standard convension, please use CAN_MO126_AR.
 */
#define CAN_MOAR126      (CAN_MO126_AR)

/** \brief  1FDC, Message Object  Control Register */
#define CAN_MO126_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019FDCu)

/** Alias (User Manual Name) for CAN_MO126_CTR.
 * To use register names with standard convension, please use CAN_MO126_CTR.
 */
#define CAN_MOCTR126     (CAN_MO126_CTR)

/** \brief  1FD4, Message Object  Data Register High */
#define CAN_MO126_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019FD4u)

/** Alias (User Manual Name) for CAN_MO126_DATAH.
 * To use register names with standard convension, please use CAN_MO126_DATAH.
 */
#define CAN_MODATAH126   (CAN_MO126_DATAH)

/** \brief  1FD0, Message Object  Data Register Low */
#define CAN_MO126_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019FD0u)

/** Alias (User Manual Name) for CAN_MO126_DATAL.
 * To use register names with standard convension, please use CAN_MO126_DATAL.
 */
#define CAN_MODATAL126   (CAN_MO126_DATAL)

/** \brief  1FC0, Message Object  Function Control Register */
#define CAN_MO126_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019FC0u)

/** Alias (User Manual Name) for CAN_MO126_EDATA0.
 * To use register names with standard convension, please use CAN_MO126_EDATA0.
 */
#define CAN_EMO126DATA0  (CAN_MO126_EDATA0)

/** \brief  1FC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO126_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019FC4u)

/** Alias (User Manual Name) for CAN_MO126_EDATA1.
 * To use register names with standard convension, please use CAN_MO126_EDATA1.
 */
#define CAN_EMO126DATA1  (CAN_MO126_EDATA1)

/** \brief  1FC8, Message Object  Interrupt Pointer Register */
#define CAN_MO126_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019FC8u)

/** Alias (User Manual Name) for CAN_MO126_EDATA2.
 * To use register names with standard convension, please use CAN_MO126_EDATA2.
 */
#define CAN_EMO126DATA2  (CAN_MO126_EDATA2)

/** \brief  1FCC, Message Object  Acceptance Mask Register */
#define CAN_MO126_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019FCCu)

/** Alias (User Manual Name) for CAN_MO126_EDATA3.
 * To use register names with standard convension, please use CAN_MO126_EDATA3.
 */
#define CAN_EMO126DATA3  (CAN_MO126_EDATA3)

/** \brief  1FD0, Message Object  Data Register Low */
#define CAN_MO126_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019FD0u)

/** Alias (User Manual Name) for CAN_MO126_EDATA4.
 * To use register names with standard convension, please use CAN_MO126_EDATA4.
 */
#define CAN_EMO126DATA4  (CAN_MO126_EDATA4)

/** \brief  1FD4, Message Object  Data Register High */
#define CAN_MO126_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019FD4u)

/** Alias (User Manual Name) for CAN_MO126_EDATA5.
 * To use register names with standard convension, please use CAN_MO126_EDATA5.
 */
#define CAN_EMO126DATA5  (CAN_MO126_EDATA5)

/** \brief  1FD8, Message Object  Arbitration Register */
#define CAN_MO126_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019FD8u)

/** Alias (User Manual Name) for CAN_MO126_EDATA6.
 * To use register names with standard convension, please use CAN_MO126_EDATA6.
 */
#define CAN_EMO126DATA6  (CAN_MO126_EDATA6)

/** \brief  1FC0, Message Object  Function Control Register */
#define CAN_MO126_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019FC0u)

/** Alias (User Manual Name) for CAN_MO126_FCR.
 * To use register names with standard convension, please use CAN_MO126_FCR.
 */
#define CAN_MOFCR126     (CAN_MO126_FCR)

/** \brief  1FC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO126_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019FC4u)

/** Alias (User Manual Name) for CAN_MO126_FGPR.
 * To use register names with standard convension, please use CAN_MO126_FGPR.
 */
#define CAN_MOFGPR126    (CAN_MO126_FGPR)

/** \brief  1FC8, Message Object  Interrupt Pointer Register */
#define CAN_MO126_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019FC8u)

/** Alias (User Manual Name) for CAN_MO126_IPR.
 * To use register names with standard convension, please use CAN_MO126_IPR.
 */
#define CAN_MOIPR126     (CAN_MO126_IPR)

/** \brief  1FDC, Message Object  Control Register */
#define CAN_MO126_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019FDCu)

/** Alias (User Manual Name) for CAN_MO126_STAT.
 * To use register names with standard convension, please use CAN_MO126_STAT.
 */
#define CAN_MOSTAT126    (CAN_MO126_STAT)

/** \brief  1FEC, Message Object  Acceptance Mask Register */
#define CAN_MO127_AMR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019FECu)

/** Alias (User Manual Name) for CAN_MO127_AMR.
 * To use register names with standard convension, please use CAN_MO127_AMR.
 */
#define CAN_MOAMR127     (CAN_MO127_AMR)

/** \brief  1FF8, Message Object  Arbitration Register */
#define CAN_MO127_AR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019FF8u)

/** Alias (User Manual Name) for CAN_MO127_AR.
 * To use register names with standard convension, please use CAN_MO127_AR.
 */
#define CAN_MOAR127      (CAN_MO127_AR)

/** \brief  1FFC, Message Object  Control Register */
#define CAN_MO127_CTR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019FFCu)

/** Alias (User Manual Name) for CAN_MO127_CTR.
 * To use register names with standard convension, please use CAN_MO127_CTR.
 */
#define CAN_MOCTR127     (CAN_MO127_CTR)

/** \brief  1FF4, Message Object  Data Register High */
#define CAN_MO127_DATAH  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019FF4u)

/** Alias (User Manual Name) for CAN_MO127_DATAH.
 * To use register names with standard convension, please use CAN_MO127_DATAH.
 */
#define CAN_MODATAH127   (CAN_MO127_DATAH)

/** \brief  1FF0, Message Object  Data Register Low */
#define CAN_MO127_DATAL  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019FF0u)

/** Alias (User Manual Name) for CAN_MO127_DATAL.
 * To use register names with standard convension, please use CAN_MO127_DATAL.
 */
#define CAN_MODATAL127   (CAN_MO127_DATAL)

/** \brief  1FE0, Message Object  Function Control Register */
#define CAN_MO127_EDATA0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019FE0u)

/** Alias (User Manual Name) for CAN_MO127_EDATA0.
 * To use register names with standard convension, please use CAN_MO127_EDATA0.
 */
#define CAN_EMO127DATA0  (CAN_MO127_EDATA0)

/** \brief  1FE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO127_EDATA1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019FE4u)

/** Alias (User Manual Name) for CAN_MO127_EDATA1.
 * To use register names with standard convension, please use CAN_MO127_EDATA1.
 */
#define CAN_EMO127DATA1  (CAN_MO127_EDATA1)

/** \brief  1FE8, Message Object  Interrupt Pointer Register */
#define CAN_MO127_EDATA2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019FE8u)

/** Alias (User Manual Name) for CAN_MO127_EDATA2.
 * To use register names with standard convension, please use CAN_MO127_EDATA2.
 */
#define CAN_EMO127DATA2  (CAN_MO127_EDATA2)

/** \brief  1FEC, Message Object  Acceptance Mask Register */
#define CAN_MO127_EDATA3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019FECu)

/** Alias (User Manual Name) for CAN_MO127_EDATA3.
 * To use register names with standard convension, please use CAN_MO127_EDATA3.
 */
#define CAN_EMO127DATA3  (CAN_MO127_EDATA3)

/** \brief  1FF0, Message Object  Data Register Low */
#define CAN_MO127_EDATA4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019FF0u)

/** Alias (User Manual Name) for CAN_MO127_EDATA4.
 * To use register names with standard convension, please use CAN_MO127_EDATA4.
 */
#define CAN_EMO127DATA4  (CAN_MO127_EDATA4)

/** \brief  1FF4, Message Object  Data Register High */
#define CAN_MO127_EDATA5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019FF4u)

/** Alias (User Manual Name) for CAN_MO127_EDATA5.
 * To use register names with standard convension, please use CAN_MO127_EDATA5.
 */
#define CAN_EMO127DATA5  (CAN_MO127_EDATA5)

/** \brief  1FF8, Message Object  Arbitration Register */
#define CAN_MO127_EDATA6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019FF8u)

/** Alias (User Manual Name) for CAN_MO127_EDATA6.
 * To use register names with standard convension, please use CAN_MO127_EDATA6.
 */
#define CAN_EMO127DATA6  (CAN_MO127_EDATA6)

/** \brief  1FE0, Message Object  Function Control Register */
#define CAN_MO127_FCR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019FE0u)

/** Alias (User Manual Name) for CAN_MO127_FCR.
 * To use register names with standard convension, please use CAN_MO127_FCR.
 */
#define CAN_MOFCR127     (CAN_MO127_FCR)

/** \brief  1FE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO127_FGPR   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019FE4u)

/** Alias (User Manual Name) for CAN_MO127_FGPR.
 * To use register names with standard convension, please use CAN_MO127_FGPR.
 */
#define CAN_MOFGPR127    (CAN_MO127_FGPR)

/** \brief  1FE8, Message Object  Interrupt Pointer Register */
#define CAN_MO127_IPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019FE8u)

/** Alias (User Manual Name) for CAN_MO127_IPR.
 * To use register names with standard convension, please use CAN_MO127_IPR.
 */
#define CAN_MOIPR127     (CAN_MO127_IPR)

/** \brief  1FFC, Message Object  Control Register */
#define CAN_MO127_STAT   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019FFCu)

/** Alias (User Manual Name) for CAN_MO127_STAT.
 * To use register names with standard convension, please use CAN_MO127_STAT.
 */
#define CAN_MOSTAT127    (CAN_MO127_STAT)

/** \brief  118C, Message Object  Acceptance Mask Register */
#define CAN_MO12_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001918Cu)

/** Alias (User Manual Name) for CAN_MO12_AMR.
 * To use register names with standard convension, please use CAN_MO12_AMR.
 */
#define CAN_MOAMR12      (CAN_MO12_AMR)

/** \brief  1198, Message Object  Arbitration Register */
#define CAN_MO12_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019198u)

/** Alias (User Manual Name) for CAN_MO12_AR.
 * To use register names with standard convension, please use CAN_MO12_AR.
 */
#define CAN_MOAR12       (CAN_MO12_AR)

/** \brief  119C, Message Object  Control Register */
#define CAN_MO12_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001919Cu)

/** Alias (User Manual Name) for CAN_MO12_CTR.
 * To use register names with standard convension, please use CAN_MO12_CTR.
 */
#define CAN_MOCTR12      (CAN_MO12_CTR)

/** \brief  1194, Message Object  Data Register High */
#define CAN_MO12_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019194u)

/** Alias (User Manual Name) for CAN_MO12_DATAH.
 * To use register names with standard convension, please use CAN_MO12_DATAH.
 */
#define CAN_MODATAH12    (CAN_MO12_DATAH)

/** \brief  1190, Message Object  Data Register Low */
#define CAN_MO12_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019190u)

/** Alias (User Manual Name) for CAN_MO12_DATAL.
 * To use register names with standard convension, please use CAN_MO12_DATAL.
 */
#define CAN_MODATAL12    (CAN_MO12_DATAL)

/** \brief  1180, Message Object  Function Control Register */
#define CAN_MO12_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019180u)

/** Alias (User Manual Name) for CAN_MO12_EDATA0.
 * To use register names with standard convension, please use CAN_MO12_EDATA0.
 */
#define CAN_EMO12DATA0   (CAN_MO12_EDATA0)

/** \brief  1184, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO12_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019184u)

/** Alias (User Manual Name) for CAN_MO12_EDATA1.
 * To use register names with standard convension, please use CAN_MO12_EDATA1.
 */
#define CAN_EMO12DATA1   (CAN_MO12_EDATA1)

/** \brief  1188, Message Object  Interrupt Pointer Register */
#define CAN_MO12_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019188u)

/** Alias (User Manual Name) for CAN_MO12_EDATA2.
 * To use register names with standard convension, please use CAN_MO12_EDATA2.
 */
#define CAN_EMO12DATA2   (CAN_MO12_EDATA2)

/** \brief  118C, Message Object  Acceptance Mask Register */
#define CAN_MO12_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001918Cu)

/** Alias (User Manual Name) for CAN_MO12_EDATA3.
 * To use register names with standard convension, please use CAN_MO12_EDATA3.
 */
#define CAN_EMO12DATA3   (CAN_MO12_EDATA3)

/** \brief  1190, Message Object  Data Register Low */
#define CAN_MO12_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019190u)

/** Alias (User Manual Name) for CAN_MO12_EDATA4.
 * To use register names with standard convension, please use CAN_MO12_EDATA4.
 */
#define CAN_EMO12DATA4   (CAN_MO12_EDATA4)

/** \brief  1194, Message Object  Data Register High */
#define CAN_MO12_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019194u)

/** Alias (User Manual Name) for CAN_MO12_EDATA5.
 * To use register names with standard convension, please use CAN_MO12_EDATA5.
 */
#define CAN_EMO12DATA5   (CAN_MO12_EDATA5)

/** \brief  1198, Message Object  Arbitration Register */
#define CAN_MO12_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019198u)

/** Alias (User Manual Name) for CAN_MO12_EDATA6.
 * To use register names with standard convension, please use CAN_MO12_EDATA6.
 */
#define CAN_EMO12DATA6   (CAN_MO12_EDATA6)

/** \brief  1180, Message Object  Function Control Register */
#define CAN_MO12_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019180u)

/** Alias (User Manual Name) for CAN_MO12_FCR.
 * To use register names with standard convension, please use CAN_MO12_FCR.
 */
#define CAN_MOFCR12      (CAN_MO12_FCR)

/** \brief  1184, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO12_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019184u)

/** Alias (User Manual Name) for CAN_MO12_FGPR.
 * To use register names with standard convension, please use CAN_MO12_FGPR.
 */
#define CAN_MOFGPR12     (CAN_MO12_FGPR)

/** \brief  1188, Message Object  Interrupt Pointer Register */
#define CAN_MO12_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019188u)

/** Alias (User Manual Name) for CAN_MO12_IPR.
 * To use register names with standard convension, please use CAN_MO12_IPR.
 */
#define CAN_MOIPR12      (CAN_MO12_IPR)

/** \brief  119C, Message Object  Control Register */
#define CAN_MO12_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001919Cu)

/** Alias (User Manual Name) for CAN_MO12_STAT.
 * To use register names with standard convension, please use CAN_MO12_STAT.
 */
#define CAN_MOSTAT12     (CAN_MO12_STAT)

/** \brief  11AC, Message Object  Acceptance Mask Register */
#define CAN_MO13_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00191ACu)

/** Alias (User Manual Name) for CAN_MO13_AMR.
 * To use register names with standard convension, please use CAN_MO13_AMR.
 */
#define CAN_MOAMR13      (CAN_MO13_AMR)

/** \brief  11B8, Message Object  Arbitration Register */
#define CAN_MO13_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00191B8u)

/** Alias (User Manual Name) for CAN_MO13_AR.
 * To use register names with standard convension, please use CAN_MO13_AR.
 */
#define CAN_MOAR13       (CAN_MO13_AR)

/** \brief  11BC, Message Object  Control Register */
#define CAN_MO13_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00191BCu)

/** Alias (User Manual Name) for CAN_MO13_CTR.
 * To use register names with standard convension, please use CAN_MO13_CTR.
 */
#define CAN_MOCTR13      (CAN_MO13_CTR)

/** \brief  11B4, Message Object  Data Register High */
#define CAN_MO13_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00191B4u)

/** Alias (User Manual Name) for CAN_MO13_DATAH.
 * To use register names with standard convension, please use CAN_MO13_DATAH.
 */
#define CAN_MODATAH13    (CAN_MO13_DATAH)

/** \brief  11B0, Message Object  Data Register Low */
#define CAN_MO13_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00191B0u)

/** Alias (User Manual Name) for CAN_MO13_DATAL.
 * To use register names with standard convension, please use CAN_MO13_DATAL.
 */
#define CAN_MODATAL13    (CAN_MO13_DATAL)

/** \brief  11A0, Message Object  Function Control Register */
#define CAN_MO13_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00191A0u)

/** Alias (User Manual Name) for CAN_MO13_EDATA0.
 * To use register names with standard convension, please use CAN_MO13_EDATA0.
 */
#define CAN_EMO13DATA0   (CAN_MO13_EDATA0)

/** \brief  11A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO13_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00191A4u)

/** Alias (User Manual Name) for CAN_MO13_EDATA1.
 * To use register names with standard convension, please use CAN_MO13_EDATA1.
 */
#define CAN_EMO13DATA1   (CAN_MO13_EDATA1)

/** \brief  11A8, Message Object  Interrupt Pointer Register */
#define CAN_MO13_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00191A8u)

/** Alias (User Manual Name) for CAN_MO13_EDATA2.
 * To use register names with standard convension, please use CAN_MO13_EDATA2.
 */
#define CAN_EMO13DATA2   (CAN_MO13_EDATA2)

/** \brief  11AC, Message Object  Acceptance Mask Register */
#define CAN_MO13_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00191ACu)

/** Alias (User Manual Name) for CAN_MO13_EDATA3.
 * To use register names with standard convension, please use CAN_MO13_EDATA3.
 */
#define CAN_EMO13DATA3   (CAN_MO13_EDATA3)

/** \brief  11B0, Message Object  Data Register Low */
#define CAN_MO13_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00191B0u)

/** Alias (User Manual Name) for CAN_MO13_EDATA4.
 * To use register names with standard convension, please use CAN_MO13_EDATA4.
 */
#define CAN_EMO13DATA4   (CAN_MO13_EDATA4)

/** \brief  11B4, Message Object  Data Register High */
#define CAN_MO13_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00191B4u)

/** Alias (User Manual Name) for CAN_MO13_EDATA5.
 * To use register names with standard convension, please use CAN_MO13_EDATA5.
 */
#define CAN_EMO13DATA5   (CAN_MO13_EDATA5)

/** \brief  11B8, Message Object  Arbitration Register */
#define CAN_MO13_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00191B8u)

/** Alias (User Manual Name) for CAN_MO13_EDATA6.
 * To use register names with standard convension, please use CAN_MO13_EDATA6.
 */
#define CAN_EMO13DATA6   (CAN_MO13_EDATA6)

/** \brief  11A0, Message Object  Function Control Register */
#define CAN_MO13_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00191A0u)

/** Alias (User Manual Name) for CAN_MO13_FCR.
 * To use register names with standard convension, please use CAN_MO13_FCR.
 */
#define CAN_MOFCR13      (CAN_MO13_FCR)

/** \brief  11A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO13_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00191A4u)

/** Alias (User Manual Name) for CAN_MO13_FGPR.
 * To use register names with standard convension, please use CAN_MO13_FGPR.
 */
#define CAN_MOFGPR13     (CAN_MO13_FGPR)

/** \brief  11A8, Message Object  Interrupt Pointer Register */
#define CAN_MO13_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00191A8u)

/** Alias (User Manual Name) for CAN_MO13_IPR.
 * To use register names with standard convension, please use CAN_MO13_IPR.
 */
#define CAN_MOIPR13      (CAN_MO13_IPR)

/** \brief  11BC, Message Object  Control Register */
#define CAN_MO13_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00191BCu)

/** Alias (User Manual Name) for CAN_MO13_STAT.
 * To use register names with standard convension, please use CAN_MO13_STAT.
 */
#define CAN_MOSTAT13     (CAN_MO13_STAT)

/** \brief  11CC, Message Object  Acceptance Mask Register */
#define CAN_MO14_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00191CCu)

/** Alias (User Manual Name) for CAN_MO14_AMR.
 * To use register names with standard convension, please use CAN_MO14_AMR.
 */
#define CAN_MOAMR14      (CAN_MO14_AMR)

/** \brief  11D8, Message Object  Arbitration Register */
#define CAN_MO14_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00191D8u)

/** Alias (User Manual Name) for CAN_MO14_AR.
 * To use register names with standard convension, please use CAN_MO14_AR.
 */
#define CAN_MOAR14       (CAN_MO14_AR)

/** \brief  11DC, Message Object  Control Register */
#define CAN_MO14_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00191DCu)

/** Alias (User Manual Name) for CAN_MO14_CTR.
 * To use register names with standard convension, please use CAN_MO14_CTR.
 */
#define CAN_MOCTR14      (CAN_MO14_CTR)

/** \brief  11D4, Message Object  Data Register High */
#define CAN_MO14_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00191D4u)

/** Alias (User Manual Name) for CAN_MO14_DATAH.
 * To use register names with standard convension, please use CAN_MO14_DATAH.
 */
#define CAN_MODATAH14    (CAN_MO14_DATAH)

/** \brief  11D0, Message Object  Data Register Low */
#define CAN_MO14_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00191D0u)

/** Alias (User Manual Name) for CAN_MO14_DATAL.
 * To use register names with standard convension, please use CAN_MO14_DATAL.
 */
#define CAN_MODATAL14    (CAN_MO14_DATAL)

/** \brief  11C0, Message Object  Function Control Register */
#define CAN_MO14_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00191C0u)

/** Alias (User Manual Name) for CAN_MO14_EDATA0.
 * To use register names with standard convension, please use CAN_MO14_EDATA0.
 */
#define CAN_EMO14DATA0   (CAN_MO14_EDATA0)

/** \brief  11C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO14_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00191C4u)

/** Alias (User Manual Name) for CAN_MO14_EDATA1.
 * To use register names with standard convension, please use CAN_MO14_EDATA1.
 */
#define CAN_EMO14DATA1   (CAN_MO14_EDATA1)

/** \brief  11C8, Message Object  Interrupt Pointer Register */
#define CAN_MO14_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00191C8u)

/** Alias (User Manual Name) for CAN_MO14_EDATA2.
 * To use register names with standard convension, please use CAN_MO14_EDATA2.
 */
#define CAN_EMO14DATA2   (CAN_MO14_EDATA2)

/** \brief  11CC, Message Object  Acceptance Mask Register */
#define CAN_MO14_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00191CCu)

/** Alias (User Manual Name) for CAN_MO14_EDATA3.
 * To use register names with standard convension, please use CAN_MO14_EDATA3.
 */
#define CAN_EMO14DATA3   (CAN_MO14_EDATA3)

/** \brief  11D0, Message Object  Data Register Low */
#define CAN_MO14_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00191D0u)

/** Alias (User Manual Name) for CAN_MO14_EDATA4.
 * To use register names with standard convension, please use CAN_MO14_EDATA4.
 */
#define CAN_EMO14DATA4   (CAN_MO14_EDATA4)

/** \brief  11D4, Message Object  Data Register High */
#define CAN_MO14_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00191D4u)

/** Alias (User Manual Name) for CAN_MO14_EDATA5.
 * To use register names with standard convension, please use CAN_MO14_EDATA5.
 */
#define CAN_EMO14DATA5   (CAN_MO14_EDATA5)

/** \brief  11D8, Message Object  Arbitration Register */
#define CAN_MO14_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00191D8u)

/** Alias (User Manual Name) for CAN_MO14_EDATA6.
 * To use register names with standard convension, please use CAN_MO14_EDATA6.
 */
#define CAN_EMO14DATA6   (CAN_MO14_EDATA6)

/** \brief  11C0, Message Object  Function Control Register */
#define CAN_MO14_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00191C0u)

/** Alias (User Manual Name) for CAN_MO14_FCR.
 * To use register names with standard convension, please use CAN_MO14_FCR.
 */
#define CAN_MOFCR14      (CAN_MO14_FCR)

/** \brief  11C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO14_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00191C4u)

/** Alias (User Manual Name) for CAN_MO14_FGPR.
 * To use register names with standard convension, please use CAN_MO14_FGPR.
 */
#define CAN_MOFGPR14     (CAN_MO14_FGPR)

/** \brief  11C8, Message Object  Interrupt Pointer Register */
#define CAN_MO14_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00191C8u)

/** Alias (User Manual Name) for CAN_MO14_IPR.
 * To use register names with standard convension, please use CAN_MO14_IPR.
 */
#define CAN_MOIPR14      (CAN_MO14_IPR)

/** \brief  11DC, Message Object  Control Register */
#define CAN_MO14_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00191DCu)

/** Alias (User Manual Name) for CAN_MO14_STAT.
 * To use register names with standard convension, please use CAN_MO14_STAT.
 */
#define CAN_MOSTAT14     (CAN_MO14_STAT)

/** \brief  11EC, Message Object  Acceptance Mask Register */
#define CAN_MO15_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00191ECu)

/** Alias (User Manual Name) for CAN_MO15_AMR.
 * To use register names with standard convension, please use CAN_MO15_AMR.
 */
#define CAN_MOAMR15      (CAN_MO15_AMR)

/** \brief  11F8, Message Object  Arbitration Register */
#define CAN_MO15_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00191F8u)

/** Alias (User Manual Name) for CAN_MO15_AR.
 * To use register names with standard convension, please use CAN_MO15_AR.
 */
#define CAN_MOAR15       (CAN_MO15_AR)

/** \brief  11FC, Message Object  Control Register */
#define CAN_MO15_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00191FCu)

/** Alias (User Manual Name) for CAN_MO15_CTR.
 * To use register names with standard convension, please use CAN_MO15_CTR.
 */
#define CAN_MOCTR15      (CAN_MO15_CTR)

/** \brief  11F4, Message Object  Data Register High */
#define CAN_MO15_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00191F4u)

/** Alias (User Manual Name) for CAN_MO15_DATAH.
 * To use register names with standard convension, please use CAN_MO15_DATAH.
 */
#define CAN_MODATAH15    (CAN_MO15_DATAH)

/** \brief  11F0, Message Object  Data Register Low */
#define CAN_MO15_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00191F0u)

/** Alias (User Manual Name) for CAN_MO15_DATAL.
 * To use register names with standard convension, please use CAN_MO15_DATAL.
 */
#define CAN_MODATAL15    (CAN_MO15_DATAL)

/** \brief  11E0, Message Object  Function Control Register */
#define CAN_MO15_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00191E0u)

/** Alias (User Manual Name) for CAN_MO15_EDATA0.
 * To use register names with standard convension, please use CAN_MO15_EDATA0.
 */
#define CAN_EMO15DATA0   (CAN_MO15_EDATA0)

/** \brief  11E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO15_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00191E4u)

/** Alias (User Manual Name) for CAN_MO15_EDATA1.
 * To use register names with standard convension, please use CAN_MO15_EDATA1.
 */
#define CAN_EMO15DATA1   (CAN_MO15_EDATA1)

/** \brief  11E8, Message Object  Interrupt Pointer Register */
#define CAN_MO15_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00191E8u)

/** Alias (User Manual Name) for CAN_MO15_EDATA2.
 * To use register names with standard convension, please use CAN_MO15_EDATA2.
 */
#define CAN_EMO15DATA2   (CAN_MO15_EDATA2)

/** \brief  11EC, Message Object  Acceptance Mask Register */
#define CAN_MO15_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00191ECu)

/** Alias (User Manual Name) for CAN_MO15_EDATA3.
 * To use register names with standard convension, please use CAN_MO15_EDATA3.
 */
#define CAN_EMO15DATA3   (CAN_MO15_EDATA3)

/** \brief  11F0, Message Object  Data Register Low */
#define CAN_MO15_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00191F0u)

/** Alias (User Manual Name) for CAN_MO15_EDATA4.
 * To use register names with standard convension, please use CAN_MO15_EDATA4.
 */
#define CAN_EMO15DATA4   (CAN_MO15_EDATA4)

/** \brief  11F4, Message Object  Data Register High */
#define CAN_MO15_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00191F4u)

/** Alias (User Manual Name) for CAN_MO15_EDATA5.
 * To use register names with standard convension, please use CAN_MO15_EDATA5.
 */
#define CAN_EMO15DATA5   (CAN_MO15_EDATA5)

/** \brief  11F8, Message Object  Arbitration Register */
#define CAN_MO15_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00191F8u)

/** Alias (User Manual Name) for CAN_MO15_EDATA6.
 * To use register names with standard convension, please use CAN_MO15_EDATA6.
 */
#define CAN_EMO15DATA6   (CAN_MO15_EDATA6)

/** \brief  11E0, Message Object  Function Control Register */
#define CAN_MO15_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00191E0u)

/** Alias (User Manual Name) for CAN_MO15_FCR.
 * To use register names with standard convension, please use CAN_MO15_FCR.
 */
#define CAN_MOFCR15      (CAN_MO15_FCR)

/** \brief  11E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO15_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00191E4u)

/** Alias (User Manual Name) for CAN_MO15_FGPR.
 * To use register names with standard convension, please use CAN_MO15_FGPR.
 */
#define CAN_MOFGPR15     (CAN_MO15_FGPR)

/** \brief  11E8, Message Object  Interrupt Pointer Register */
#define CAN_MO15_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00191E8u)

/** Alias (User Manual Name) for CAN_MO15_IPR.
 * To use register names with standard convension, please use CAN_MO15_IPR.
 */
#define CAN_MOIPR15      (CAN_MO15_IPR)

/** \brief  11FC, Message Object  Control Register */
#define CAN_MO15_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00191FCu)

/** Alias (User Manual Name) for CAN_MO15_STAT.
 * To use register names with standard convension, please use CAN_MO15_STAT.
 */
#define CAN_MOSTAT15     (CAN_MO15_STAT)

/** \brief  120C, Message Object  Acceptance Mask Register */
#define CAN_MO16_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001920Cu)

/** Alias (User Manual Name) for CAN_MO16_AMR.
 * To use register names with standard convension, please use CAN_MO16_AMR.
 */
#define CAN_MOAMR16      (CAN_MO16_AMR)

/** \brief  1218, Message Object  Arbitration Register */
#define CAN_MO16_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019218u)

/** Alias (User Manual Name) for CAN_MO16_AR.
 * To use register names with standard convension, please use CAN_MO16_AR.
 */
#define CAN_MOAR16       (CAN_MO16_AR)

/** \brief  121C, Message Object  Control Register */
#define CAN_MO16_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001921Cu)

/** Alias (User Manual Name) for CAN_MO16_CTR.
 * To use register names with standard convension, please use CAN_MO16_CTR.
 */
#define CAN_MOCTR16      (CAN_MO16_CTR)

/** \brief  1214, Message Object  Data Register High */
#define CAN_MO16_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019214u)

/** Alias (User Manual Name) for CAN_MO16_DATAH.
 * To use register names with standard convension, please use CAN_MO16_DATAH.
 */
#define CAN_MODATAH16    (CAN_MO16_DATAH)

/** \brief  1210, Message Object  Data Register Low */
#define CAN_MO16_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019210u)

/** Alias (User Manual Name) for CAN_MO16_DATAL.
 * To use register names with standard convension, please use CAN_MO16_DATAL.
 */
#define CAN_MODATAL16    (CAN_MO16_DATAL)

/** \brief  1200, Message Object  Function Control Register */
#define CAN_MO16_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019200u)

/** Alias (User Manual Name) for CAN_MO16_EDATA0.
 * To use register names with standard convension, please use CAN_MO16_EDATA0.
 */
#define CAN_EMO16DATA0   (CAN_MO16_EDATA0)

/** \brief  1204, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO16_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019204u)

/** Alias (User Manual Name) for CAN_MO16_EDATA1.
 * To use register names with standard convension, please use CAN_MO16_EDATA1.
 */
#define CAN_EMO16DATA1   (CAN_MO16_EDATA1)

/** \brief  1208, Message Object  Interrupt Pointer Register */
#define CAN_MO16_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019208u)

/** Alias (User Manual Name) for CAN_MO16_EDATA2.
 * To use register names with standard convension, please use CAN_MO16_EDATA2.
 */
#define CAN_EMO16DATA2   (CAN_MO16_EDATA2)

/** \brief  120C, Message Object  Acceptance Mask Register */
#define CAN_MO16_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001920Cu)

/** Alias (User Manual Name) for CAN_MO16_EDATA3.
 * To use register names with standard convension, please use CAN_MO16_EDATA3.
 */
#define CAN_EMO16DATA3   (CAN_MO16_EDATA3)

/** \brief  1210, Message Object  Data Register Low */
#define CAN_MO16_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019210u)

/** Alias (User Manual Name) for CAN_MO16_EDATA4.
 * To use register names with standard convension, please use CAN_MO16_EDATA4.
 */
#define CAN_EMO16DATA4   (CAN_MO16_EDATA4)

/** \brief  1214, Message Object  Data Register High */
#define CAN_MO16_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019214u)

/** Alias (User Manual Name) for CAN_MO16_EDATA5.
 * To use register names with standard convension, please use CAN_MO16_EDATA5.
 */
#define CAN_EMO16DATA5   (CAN_MO16_EDATA5)

/** \brief  1218, Message Object  Arbitration Register */
#define CAN_MO16_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019218u)

/** Alias (User Manual Name) for CAN_MO16_EDATA6.
 * To use register names with standard convension, please use CAN_MO16_EDATA6.
 */
#define CAN_EMO16DATA6   (CAN_MO16_EDATA6)

/** \brief  1200, Message Object  Function Control Register */
#define CAN_MO16_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019200u)

/** Alias (User Manual Name) for CAN_MO16_FCR.
 * To use register names with standard convension, please use CAN_MO16_FCR.
 */
#define CAN_MOFCR16      (CAN_MO16_FCR)

/** \brief  1204, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO16_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019204u)

/** Alias (User Manual Name) for CAN_MO16_FGPR.
 * To use register names with standard convension, please use CAN_MO16_FGPR.
 */
#define CAN_MOFGPR16     (CAN_MO16_FGPR)

/** \brief  1208, Message Object  Interrupt Pointer Register */
#define CAN_MO16_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019208u)

/** Alias (User Manual Name) for CAN_MO16_IPR.
 * To use register names with standard convension, please use CAN_MO16_IPR.
 */
#define CAN_MOIPR16      (CAN_MO16_IPR)

/** \brief  121C, Message Object  Control Register */
#define CAN_MO16_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001921Cu)

/** Alias (User Manual Name) for CAN_MO16_STAT.
 * To use register names with standard convension, please use CAN_MO16_STAT.
 */
#define CAN_MOSTAT16     (CAN_MO16_STAT)

/** \brief  122C, Message Object  Acceptance Mask Register */
#define CAN_MO17_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001922Cu)

/** Alias (User Manual Name) for CAN_MO17_AMR.
 * To use register names with standard convension, please use CAN_MO17_AMR.
 */
#define CAN_MOAMR17      (CAN_MO17_AMR)

/** \brief  1238, Message Object  Arbitration Register */
#define CAN_MO17_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019238u)

/** Alias (User Manual Name) for CAN_MO17_AR.
 * To use register names with standard convension, please use CAN_MO17_AR.
 */
#define CAN_MOAR17       (CAN_MO17_AR)

/** \brief  123C, Message Object  Control Register */
#define CAN_MO17_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001923Cu)

/** Alias (User Manual Name) for CAN_MO17_CTR.
 * To use register names with standard convension, please use CAN_MO17_CTR.
 */
#define CAN_MOCTR17      (CAN_MO17_CTR)

/** \brief  1234, Message Object  Data Register High */
#define CAN_MO17_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019234u)

/** Alias (User Manual Name) for CAN_MO17_DATAH.
 * To use register names with standard convension, please use CAN_MO17_DATAH.
 */
#define CAN_MODATAH17    (CAN_MO17_DATAH)

/** \brief  1230, Message Object  Data Register Low */
#define CAN_MO17_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019230u)

/** Alias (User Manual Name) for CAN_MO17_DATAL.
 * To use register names with standard convension, please use CAN_MO17_DATAL.
 */
#define CAN_MODATAL17    (CAN_MO17_DATAL)

/** \brief  1220, Message Object  Function Control Register */
#define CAN_MO17_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019220u)

/** Alias (User Manual Name) for CAN_MO17_EDATA0.
 * To use register names with standard convension, please use CAN_MO17_EDATA0.
 */
#define CAN_EMO17DATA0   (CAN_MO17_EDATA0)

/** \brief  1224, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO17_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019224u)

/** Alias (User Manual Name) for CAN_MO17_EDATA1.
 * To use register names with standard convension, please use CAN_MO17_EDATA1.
 */
#define CAN_EMO17DATA1   (CAN_MO17_EDATA1)

/** \brief  1228, Message Object  Interrupt Pointer Register */
#define CAN_MO17_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019228u)

/** Alias (User Manual Name) for CAN_MO17_EDATA2.
 * To use register names with standard convension, please use CAN_MO17_EDATA2.
 */
#define CAN_EMO17DATA2   (CAN_MO17_EDATA2)

/** \brief  122C, Message Object  Acceptance Mask Register */
#define CAN_MO17_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001922Cu)

/** Alias (User Manual Name) for CAN_MO17_EDATA3.
 * To use register names with standard convension, please use CAN_MO17_EDATA3.
 */
#define CAN_EMO17DATA3   (CAN_MO17_EDATA3)

/** \brief  1230, Message Object  Data Register Low */
#define CAN_MO17_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019230u)

/** Alias (User Manual Name) for CAN_MO17_EDATA4.
 * To use register names with standard convension, please use CAN_MO17_EDATA4.
 */
#define CAN_EMO17DATA4   (CAN_MO17_EDATA4)

/** \brief  1234, Message Object  Data Register High */
#define CAN_MO17_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019234u)

/** Alias (User Manual Name) for CAN_MO17_EDATA5.
 * To use register names with standard convension, please use CAN_MO17_EDATA5.
 */
#define CAN_EMO17DATA5   (CAN_MO17_EDATA5)

/** \brief  1238, Message Object  Arbitration Register */
#define CAN_MO17_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019238u)

/** Alias (User Manual Name) for CAN_MO17_EDATA6.
 * To use register names with standard convension, please use CAN_MO17_EDATA6.
 */
#define CAN_EMO17DATA6   (CAN_MO17_EDATA6)

/** \brief  1220, Message Object  Function Control Register */
#define CAN_MO17_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019220u)

/** Alias (User Manual Name) for CAN_MO17_FCR.
 * To use register names with standard convension, please use CAN_MO17_FCR.
 */
#define CAN_MOFCR17      (CAN_MO17_FCR)

/** \brief  1224, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO17_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019224u)

/** Alias (User Manual Name) for CAN_MO17_FGPR.
 * To use register names with standard convension, please use CAN_MO17_FGPR.
 */
#define CAN_MOFGPR17     (CAN_MO17_FGPR)

/** \brief  1228, Message Object  Interrupt Pointer Register */
#define CAN_MO17_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019228u)

/** Alias (User Manual Name) for CAN_MO17_IPR.
 * To use register names with standard convension, please use CAN_MO17_IPR.
 */
#define CAN_MOIPR17      (CAN_MO17_IPR)

/** \brief  123C, Message Object  Control Register */
#define CAN_MO17_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001923Cu)

/** Alias (User Manual Name) for CAN_MO17_STAT.
 * To use register names with standard convension, please use CAN_MO17_STAT.
 */
#define CAN_MOSTAT17     (CAN_MO17_STAT)

/** \brief  124C, Message Object  Acceptance Mask Register */
#define CAN_MO18_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001924Cu)

/** Alias (User Manual Name) for CAN_MO18_AMR.
 * To use register names with standard convension, please use CAN_MO18_AMR.
 */
#define CAN_MOAMR18      (CAN_MO18_AMR)

/** \brief  1258, Message Object  Arbitration Register */
#define CAN_MO18_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019258u)

/** Alias (User Manual Name) for CAN_MO18_AR.
 * To use register names with standard convension, please use CAN_MO18_AR.
 */
#define CAN_MOAR18       (CAN_MO18_AR)

/** \brief  125C, Message Object  Control Register */
#define CAN_MO18_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001925Cu)

/** Alias (User Manual Name) for CAN_MO18_CTR.
 * To use register names with standard convension, please use CAN_MO18_CTR.
 */
#define CAN_MOCTR18      (CAN_MO18_CTR)

/** \brief  1254, Message Object  Data Register High */
#define CAN_MO18_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019254u)

/** Alias (User Manual Name) for CAN_MO18_DATAH.
 * To use register names with standard convension, please use CAN_MO18_DATAH.
 */
#define CAN_MODATAH18    (CAN_MO18_DATAH)

/** \brief  1250, Message Object  Data Register Low */
#define CAN_MO18_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019250u)

/** Alias (User Manual Name) for CAN_MO18_DATAL.
 * To use register names with standard convension, please use CAN_MO18_DATAL.
 */
#define CAN_MODATAL18    (CAN_MO18_DATAL)

/** \brief  1240, Message Object  Function Control Register */
#define CAN_MO18_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019240u)

/** Alias (User Manual Name) for CAN_MO18_EDATA0.
 * To use register names with standard convension, please use CAN_MO18_EDATA0.
 */
#define CAN_EMO18DATA0   (CAN_MO18_EDATA0)

/** \brief  1244, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO18_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019244u)

/** Alias (User Manual Name) for CAN_MO18_EDATA1.
 * To use register names with standard convension, please use CAN_MO18_EDATA1.
 */
#define CAN_EMO18DATA1   (CAN_MO18_EDATA1)

/** \brief  1248, Message Object  Interrupt Pointer Register */
#define CAN_MO18_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019248u)

/** Alias (User Manual Name) for CAN_MO18_EDATA2.
 * To use register names with standard convension, please use CAN_MO18_EDATA2.
 */
#define CAN_EMO18DATA2   (CAN_MO18_EDATA2)

/** \brief  124C, Message Object  Acceptance Mask Register */
#define CAN_MO18_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001924Cu)

/** Alias (User Manual Name) for CAN_MO18_EDATA3.
 * To use register names with standard convension, please use CAN_MO18_EDATA3.
 */
#define CAN_EMO18DATA3   (CAN_MO18_EDATA3)

/** \brief  1250, Message Object  Data Register Low */
#define CAN_MO18_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019250u)

/** Alias (User Manual Name) for CAN_MO18_EDATA4.
 * To use register names with standard convension, please use CAN_MO18_EDATA4.
 */
#define CAN_EMO18DATA4   (CAN_MO18_EDATA4)

/** \brief  1254, Message Object  Data Register High */
#define CAN_MO18_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019254u)

/** Alias (User Manual Name) for CAN_MO18_EDATA5.
 * To use register names with standard convension, please use CAN_MO18_EDATA5.
 */
#define CAN_EMO18DATA5   (CAN_MO18_EDATA5)

/** \brief  1258, Message Object  Arbitration Register */
#define CAN_MO18_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019258u)

/** Alias (User Manual Name) for CAN_MO18_EDATA6.
 * To use register names with standard convension, please use CAN_MO18_EDATA6.
 */
#define CAN_EMO18DATA6   (CAN_MO18_EDATA6)

/** \brief  1240, Message Object  Function Control Register */
#define CAN_MO18_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019240u)

/** Alias (User Manual Name) for CAN_MO18_FCR.
 * To use register names with standard convension, please use CAN_MO18_FCR.
 */
#define CAN_MOFCR18      (CAN_MO18_FCR)

/** \brief  1244, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO18_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019244u)

/** Alias (User Manual Name) for CAN_MO18_FGPR.
 * To use register names with standard convension, please use CAN_MO18_FGPR.
 */
#define CAN_MOFGPR18     (CAN_MO18_FGPR)

/** \brief  1248, Message Object  Interrupt Pointer Register */
#define CAN_MO18_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019248u)

/** Alias (User Manual Name) for CAN_MO18_IPR.
 * To use register names with standard convension, please use CAN_MO18_IPR.
 */
#define CAN_MOIPR18      (CAN_MO18_IPR)

/** \brief  125C, Message Object  Control Register */
#define CAN_MO18_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001925Cu)

/** Alias (User Manual Name) for CAN_MO18_STAT.
 * To use register names with standard convension, please use CAN_MO18_STAT.
 */
#define CAN_MOSTAT18     (CAN_MO18_STAT)

/** \brief  126C, Message Object  Acceptance Mask Register */
#define CAN_MO19_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001926Cu)

/** Alias (User Manual Name) for CAN_MO19_AMR.
 * To use register names with standard convension, please use CAN_MO19_AMR.
 */
#define CAN_MOAMR19      (CAN_MO19_AMR)

/** \brief  1278, Message Object  Arbitration Register */
#define CAN_MO19_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019278u)

/** Alias (User Manual Name) for CAN_MO19_AR.
 * To use register names with standard convension, please use CAN_MO19_AR.
 */
#define CAN_MOAR19       (CAN_MO19_AR)

/** \brief  127C, Message Object  Control Register */
#define CAN_MO19_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001927Cu)

/** Alias (User Manual Name) for CAN_MO19_CTR.
 * To use register names with standard convension, please use CAN_MO19_CTR.
 */
#define CAN_MOCTR19      (CAN_MO19_CTR)

/** \brief  1274, Message Object  Data Register High */
#define CAN_MO19_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019274u)

/** Alias (User Manual Name) for CAN_MO19_DATAH.
 * To use register names with standard convension, please use CAN_MO19_DATAH.
 */
#define CAN_MODATAH19    (CAN_MO19_DATAH)

/** \brief  1270, Message Object  Data Register Low */
#define CAN_MO19_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019270u)

/** Alias (User Manual Name) for CAN_MO19_DATAL.
 * To use register names with standard convension, please use CAN_MO19_DATAL.
 */
#define CAN_MODATAL19    (CAN_MO19_DATAL)

/** \brief  1260, Message Object  Function Control Register */
#define CAN_MO19_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019260u)

/** Alias (User Manual Name) for CAN_MO19_EDATA0.
 * To use register names with standard convension, please use CAN_MO19_EDATA0.
 */
#define CAN_EMO19DATA0   (CAN_MO19_EDATA0)

/** \brief  1264, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO19_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019264u)

/** Alias (User Manual Name) for CAN_MO19_EDATA1.
 * To use register names with standard convension, please use CAN_MO19_EDATA1.
 */
#define CAN_EMO19DATA1   (CAN_MO19_EDATA1)

/** \brief  1268, Message Object  Interrupt Pointer Register */
#define CAN_MO19_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019268u)

/** Alias (User Manual Name) for CAN_MO19_EDATA2.
 * To use register names with standard convension, please use CAN_MO19_EDATA2.
 */
#define CAN_EMO19DATA2   (CAN_MO19_EDATA2)

/** \brief  126C, Message Object  Acceptance Mask Register */
#define CAN_MO19_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001926Cu)

/** Alias (User Manual Name) for CAN_MO19_EDATA3.
 * To use register names with standard convension, please use CAN_MO19_EDATA3.
 */
#define CAN_EMO19DATA3   (CAN_MO19_EDATA3)

/** \brief  1270, Message Object  Data Register Low */
#define CAN_MO19_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019270u)

/** Alias (User Manual Name) for CAN_MO19_EDATA4.
 * To use register names with standard convension, please use CAN_MO19_EDATA4.
 */
#define CAN_EMO19DATA4   (CAN_MO19_EDATA4)

/** \brief  1274, Message Object  Data Register High */
#define CAN_MO19_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019274u)

/** Alias (User Manual Name) for CAN_MO19_EDATA5.
 * To use register names with standard convension, please use CAN_MO19_EDATA5.
 */
#define CAN_EMO19DATA5   (CAN_MO19_EDATA5)

/** \brief  1278, Message Object  Arbitration Register */
#define CAN_MO19_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019278u)

/** Alias (User Manual Name) for CAN_MO19_EDATA6.
 * To use register names with standard convension, please use CAN_MO19_EDATA6.
 */
#define CAN_EMO19DATA6   (CAN_MO19_EDATA6)

/** \brief  1260, Message Object  Function Control Register */
#define CAN_MO19_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019260u)

/** Alias (User Manual Name) for CAN_MO19_FCR.
 * To use register names with standard convension, please use CAN_MO19_FCR.
 */
#define CAN_MOFCR19      (CAN_MO19_FCR)

/** \brief  1264, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO19_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019264u)

/** Alias (User Manual Name) for CAN_MO19_FGPR.
 * To use register names with standard convension, please use CAN_MO19_FGPR.
 */
#define CAN_MOFGPR19     (CAN_MO19_FGPR)

/** \brief  1268, Message Object  Interrupt Pointer Register */
#define CAN_MO19_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019268u)

/** Alias (User Manual Name) for CAN_MO19_IPR.
 * To use register names with standard convension, please use CAN_MO19_IPR.
 */
#define CAN_MOIPR19      (CAN_MO19_IPR)

/** \brief  127C, Message Object  Control Register */
#define CAN_MO19_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001927Cu)

/** Alias (User Manual Name) for CAN_MO19_STAT.
 * To use register names with standard convension, please use CAN_MO19_STAT.
 */
#define CAN_MOSTAT19     (CAN_MO19_STAT)

/** \brief  102C, Message Object  Acceptance Mask Register */
#define CAN_MO1_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001902Cu)

/** Alias (User Manual Name) for CAN_MO1_AMR.
 * To use register names with standard convension, please use CAN_MO1_AMR.
 */
#define CAN_MOAMR1       (CAN_MO1_AMR)

/** \brief  1038, Message Object  Arbitration Register */
#define CAN_MO1_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019038u)

/** Alias (User Manual Name) for CAN_MO1_AR.
 * To use register names with standard convension, please use CAN_MO1_AR.
 */
#define CAN_MOAR1        (CAN_MO1_AR)

/** \brief  103C, Message Object  Control Register */
#define CAN_MO1_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001903Cu)

/** Alias (User Manual Name) for CAN_MO1_CTR.
 * To use register names with standard convension, please use CAN_MO1_CTR.
 */
#define CAN_MOCTR1       (CAN_MO1_CTR)

/** \brief  1034, Message Object  Data Register High */
#define CAN_MO1_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019034u)

/** Alias (User Manual Name) for CAN_MO1_DATAH.
 * To use register names with standard convension, please use CAN_MO1_DATAH.
 */
#define CAN_MODATAH1     (CAN_MO1_DATAH)

/** \brief  1030, Message Object  Data Register Low */
#define CAN_MO1_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019030u)

/** Alias (User Manual Name) for CAN_MO1_DATAL.
 * To use register names with standard convension, please use CAN_MO1_DATAL.
 */
#define CAN_MODATAL1     (CAN_MO1_DATAL)

/** \brief  1020, Message Object  Function Control Register */
#define CAN_MO1_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019020u)

/** Alias (User Manual Name) for CAN_MO1_EDATA0.
 * To use register names with standard convension, please use CAN_MO1_EDATA0.
 */
#define CAN_EMO1DATA0    (CAN_MO1_EDATA0)

/** \brief  1024, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO1_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019024u)

/** Alias (User Manual Name) for CAN_MO1_EDATA1.
 * To use register names with standard convension, please use CAN_MO1_EDATA1.
 */
#define CAN_EMO1DATA1    (CAN_MO1_EDATA1)

/** \brief  1028, Message Object  Interrupt Pointer Register */
#define CAN_MO1_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019028u)

/** Alias (User Manual Name) for CAN_MO1_EDATA2.
 * To use register names with standard convension, please use CAN_MO1_EDATA2.
 */
#define CAN_EMO1DATA2    (CAN_MO1_EDATA2)

/** \brief  102C, Message Object  Acceptance Mask Register */
#define CAN_MO1_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001902Cu)

/** Alias (User Manual Name) for CAN_MO1_EDATA3.
 * To use register names with standard convension, please use CAN_MO1_EDATA3.
 */
#define CAN_EMO1DATA3    (CAN_MO1_EDATA3)

/** \brief  1030, Message Object  Data Register Low */
#define CAN_MO1_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019030u)

/** Alias (User Manual Name) for CAN_MO1_EDATA4.
 * To use register names with standard convension, please use CAN_MO1_EDATA4.
 */
#define CAN_EMO1DATA4    (CAN_MO1_EDATA4)

/** \brief  1034, Message Object  Data Register High */
#define CAN_MO1_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019034u)

/** Alias (User Manual Name) for CAN_MO1_EDATA5.
 * To use register names with standard convension, please use CAN_MO1_EDATA5.
 */
#define CAN_EMO1DATA5    (CAN_MO1_EDATA5)

/** \brief  1038, Message Object  Arbitration Register */
#define CAN_MO1_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019038u)

/** Alias (User Manual Name) for CAN_MO1_EDATA6.
 * To use register names with standard convension, please use CAN_MO1_EDATA6.
 */
#define CAN_EMO1DATA6    (CAN_MO1_EDATA6)

/** \brief  1020, Message Object  Function Control Register */
#define CAN_MO1_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019020u)

/** Alias (User Manual Name) for CAN_MO1_FCR.
 * To use register names with standard convension, please use CAN_MO1_FCR.
 */
#define CAN_MOFCR1       (CAN_MO1_FCR)

/** \brief  1024, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO1_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019024u)

/** Alias (User Manual Name) for CAN_MO1_FGPR.
 * To use register names with standard convension, please use CAN_MO1_FGPR.
 */
#define CAN_MOFGPR1      (CAN_MO1_FGPR)

/** \brief  1028, Message Object  Interrupt Pointer Register */
#define CAN_MO1_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019028u)

/** Alias (User Manual Name) for CAN_MO1_IPR.
 * To use register names with standard convension, please use CAN_MO1_IPR.
 */
#define CAN_MOIPR1       (CAN_MO1_IPR)

/** \brief  103C, Message Object  Control Register */
#define CAN_MO1_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001903Cu)

/** Alias (User Manual Name) for CAN_MO1_STAT.
 * To use register names with standard convension, please use CAN_MO1_STAT.
 */
#define CAN_MOSTAT1      (CAN_MO1_STAT)

/** \brief  128C, Message Object  Acceptance Mask Register */
#define CAN_MO20_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001928Cu)

/** Alias (User Manual Name) for CAN_MO20_AMR.
 * To use register names with standard convension, please use CAN_MO20_AMR.
 */
#define CAN_MOAMR20      (CAN_MO20_AMR)

/** \brief  1298, Message Object  Arbitration Register */
#define CAN_MO20_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019298u)

/** Alias (User Manual Name) for CAN_MO20_AR.
 * To use register names with standard convension, please use CAN_MO20_AR.
 */
#define CAN_MOAR20       (CAN_MO20_AR)

/** \brief  129C, Message Object  Control Register */
#define CAN_MO20_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001929Cu)

/** Alias (User Manual Name) for CAN_MO20_CTR.
 * To use register names with standard convension, please use CAN_MO20_CTR.
 */
#define CAN_MOCTR20      (CAN_MO20_CTR)

/** \brief  1294, Message Object  Data Register High */
#define CAN_MO20_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019294u)

/** Alias (User Manual Name) for CAN_MO20_DATAH.
 * To use register names with standard convension, please use CAN_MO20_DATAH.
 */
#define CAN_MODATAH20    (CAN_MO20_DATAH)

/** \brief  1290, Message Object  Data Register Low */
#define CAN_MO20_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019290u)

/** Alias (User Manual Name) for CAN_MO20_DATAL.
 * To use register names with standard convension, please use CAN_MO20_DATAL.
 */
#define CAN_MODATAL20    (CAN_MO20_DATAL)

/** \brief  1280, Message Object  Function Control Register */
#define CAN_MO20_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019280u)

/** Alias (User Manual Name) for CAN_MO20_EDATA0.
 * To use register names with standard convension, please use CAN_MO20_EDATA0.
 */
#define CAN_EMO20DATA0   (CAN_MO20_EDATA0)

/** \brief  1284, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO20_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019284u)

/** Alias (User Manual Name) for CAN_MO20_EDATA1.
 * To use register names with standard convension, please use CAN_MO20_EDATA1.
 */
#define CAN_EMO20DATA1   (CAN_MO20_EDATA1)

/** \brief  1288, Message Object  Interrupt Pointer Register */
#define CAN_MO20_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019288u)

/** Alias (User Manual Name) for CAN_MO20_EDATA2.
 * To use register names with standard convension, please use CAN_MO20_EDATA2.
 */
#define CAN_EMO20DATA2   (CAN_MO20_EDATA2)

/** \brief  128C, Message Object  Acceptance Mask Register */
#define CAN_MO20_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001928Cu)

/** Alias (User Manual Name) for CAN_MO20_EDATA3.
 * To use register names with standard convension, please use CAN_MO20_EDATA3.
 */
#define CAN_EMO20DATA3   (CAN_MO20_EDATA3)

/** \brief  1290, Message Object  Data Register Low */
#define CAN_MO20_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019290u)

/** Alias (User Manual Name) for CAN_MO20_EDATA4.
 * To use register names with standard convension, please use CAN_MO20_EDATA4.
 */
#define CAN_EMO20DATA4   (CAN_MO20_EDATA4)

/** \brief  1294, Message Object  Data Register High */
#define CAN_MO20_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019294u)

/** Alias (User Manual Name) for CAN_MO20_EDATA5.
 * To use register names with standard convension, please use CAN_MO20_EDATA5.
 */
#define CAN_EMO20DATA5   (CAN_MO20_EDATA5)

/** \brief  1298, Message Object  Arbitration Register */
#define CAN_MO20_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019298u)

/** Alias (User Manual Name) for CAN_MO20_EDATA6.
 * To use register names with standard convension, please use CAN_MO20_EDATA6.
 */
#define CAN_EMO20DATA6   (CAN_MO20_EDATA6)

/** \brief  1280, Message Object  Function Control Register */
#define CAN_MO20_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019280u)

/** Alias (User Manual Name) for CAN_MO20_FCR.
 * To use register names with standard convension, please use CAN_MO20_FCR.
 */
#define CAN_MOFCR20      (CAN_MO20_FCR)

/** \brief  1284, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO20_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019284u)

/** Alias (User Manual Name) for CAN_MO20_FGPR.
 * To use register names with standard convension, please use CAN_MO20_FGPR.
 */
#define CAN_MOFGPR20     (CAN_MO20_FGPR)

/** \brief  1288, Message Object  Interrupt Pointer Register */
#define CAN_MO20_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019288u)

/** Alias (User Manual Name) for CAN_MO20_IPR.
 * To use register names with standard convension, please use CAN_MO20_IPR.
 */
#define CAN_MOIPR20      (CAN_MO20_IPR)

/** \brief  129C, Message Object  Control Register */
#define CAN_MO20_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001929Cu)

/** Alias (User Manual Name) for CAN_MO20_STAT.
 * To use register names with standard convension, please use CAN_MO20_STAT.
 */
#define CAN_MOSTAT20     (CAN_MO20_STAT)

/** \brief  12AC, Message Object  Acceptance Mask Register */
#define CAN_MO21_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00192ACu)

/** Alias (User Manual Name) for CAN_MO21_AMR.
 * To use register names with standard convension, please use CAN_MO21_AMR.
 */
#define CAN_MOAMR21      (CAN_MO21_AMR)

/** \brief  12B8, Message Object  Arbitration Register */
#define CAN_MO21_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00192B8u)

/** Alias (User Manual Name) for CAN_MO21_AR.
 * To use register names with standard convension, please use CAN_MO21_AR.
 */
#define CAN_MOAR21       (CAN_MO21_AR)

/** \brief  12BC, Message Object  Control Register */
#define CAN_MO21_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00192BCu)

/** Alias (User Manual Name) for CAN_MO21_CTR.
 * To use register names with standard convension, please use CAN_MO21_CTR.
 */
#define CAN_MOCTR21      (CAN_MO21_CTR)

/** \brief  12B4, Message Object  Data Register High */
#define CAN_MO21_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00192B4u)

/** Alias (User Manual Name) for CAN_MO21_DATAH.
 * To use register names with standard convension, please use CAN_MO21_DATAH.
 */
#define CAN_MODATAH21    (CAN_MO21_DATAH)

/** \brief  12B0, Message Object  Data Register Low */
#define CAN_MO21_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00192B0u)

/** Alias (User Manual Name) for CAN_MO21_DATAL.
 * To use register names with standard convension, please use CAN_MO21_DATAL.
 */
#define CAN_MODATAL21    (CAN_MO21_DATAL)

/** \brief  12A0, Message Object  Function Control Register */
#define CAN_MO21_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00192A0u)

/** Alias (User Manual Name) for CAN_MO21_EDATA0.
 * To use register names with standard convension, please use CAN_MO21_EDATA0.
 */
#define CAN_EMO21DATA0   (CAN_MO21_EDATA0)

/** \brief  12A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO21_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00192A4u)

/** Alias (User Manual Name) for CAN_MO21_EDATA1.
 * To use register names with standard convension, please use CAN_MO21_EDATA1.
 */
#define CAN_EMO21DATA1   (CAN_MO21_EDATA1)

/** \brief  12A8, Message Object  Interrupt Pointer Register */
#define CAN_MO21_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00192A8u)

/** Alias (User Manual Name) for CAN_MO21_EDATA2.
 * To use register names with standard convension, please use CAN_MO21_EDATA2.
 */
#define CAN_EMO21DATA2   (CAN_MO21_EDATA2)

/** \brief  12AC, Message Object  Acceptance Mask Register */
#define CAN_MO21_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00192ACu)

/** Alias (User Manual Name) for CAN_MO21_EDATA3.
 * To use register names with standard convension, please use CAN_MO21_EDATA3.
 */
#define CAN_EMO21DATA3   (CAN_MO21_EDATA3)

/** \brief  12B0, Message Object  Data Register Low */
#define CAN_MO21_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00192B0u)

/** Alias (User Manual Name) for CAN_MO21_EDATA4.
 * To use register names with standard convension, please use CAN_MO21_EDATA4.
 */
#define CAN_EMO21DATA4   (CAN_MO21_EDATA4)

/** \brief  12B4, Message Object  Data Register High */
#define CAN_MO21_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00192B4u)

/** Alias (User Manual Name) for CAN_MO21_EDATA5.
 * To use register names with standard convension, please use CAN_MO21_EDATA5.
 */
#define CAN_EMO21DATA5   (CAN_MO21_EDATA5)

/** \brief  12B8, Message Object  Arbitration Register */
#define CAN_MO21_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00192B8u)

/** Alias (User Manual Name) for CAN_MO21_EDATA6.
 * To use register names with standard convension, please use CAN_MO21_EDATA6.
 */
#define CAN_EMO21DATA6   (CAN_MO21_EDATA6)

/** \brief  12A0, Message Object  Function Control Register */
#define CAN_MO21_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00192A0u)

/** Alias (User Manual Name) for CAN_MO21_FCR.
 * To use register names with standard convension, please use CAN_MO21_FCR.
 */
#define CAN_MOFCR21      (CAN_MO21_FCR)

/** \brief  12A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO21_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00192A4u)

/** Alias (User Manual Name) for CAN_MO21_FGPR.
 * To use register names with standard convension, please use CAN_MO21_FGPR.
 */
#define CAN_MOFGPR21     (CAN_MO21_FGPR)

/** \brief  12A8, Message Object  Interrupt Pointer Register */
#define CAN_MO21_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00192A8u)

/** Alias (User Manual Name) for CAN_MO21_IPR.
 * To use register names with standard convension, please use CAN_MO21_IPR.
 */
#define CAN_MOIPR21      (CAN_MO21_IPR)

/** \brief  12BC, Message Object  Control Register */
#define CAN_MO21_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00192BCu)

/** Alias (User Manual Name) for CAN_MO21_STAT.
 * To use register names with standard convension, please use CAN_MO21_STAT.
 */
#define CAN_MOSTAT21     (CAN_MO21_STAT)

/** \brief  12CC, Message Object  Acceptance Mask Register */
#define CAN_MO22_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00192CCu)

/** Alias (User Manual Name) for CAN_MO22_AMR.
 * To use register names with standard convension, please use CAN_MO22_AMR.
 */
#define CAN_MOAMR22      (CAN_MO22_AMR)

/** \brief  12D8, Message Object  Arbitration Register */
#define CAN_MO22_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00192D8u)

/** Alias (User Manual Name) for CAN_MO22_AR.
 * To use register names with standard convension, please use CAN_MO22_AR.
 */
#define CAN_MOAR22       (CAN_MO22_AR)

/** \brief  12DC, Message Object  Control Register */
#define CAN_MO22_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00192DCu)

/** Alias (User Manual Name) for CAN_MO22_CTR.
 * To use register names with standard convension, please use CAN_MO22_CTR.
 */
#define CAN_MOCTR22      (CAN_MO22_CTR)

/** \brief  12D4, Message Object  Data Register High */
#define CAN_MO22_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00192D4u)

/** Alias (User Manual Name) for CAN_MO22_DATAH.
 * To use register names with standard convension, please use CAN_MO22_DATAH.
 */
#define CAN_MODATAH22    (CAN_MO22_DATAH)

/** \brief  12D0, Message Object  Data Register Low */
#define CAN_MO22_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00192D0u)

/** Alias (User Manual Name) for CAN_MO22_DATAL.
 * To use register names with standard convension, please use CAN_MO22_DATAL.
 */
#define CAN_MODATAL22    (CAN_MO22_DATAL)

/** \brief  12C0, Message Object  Function Control Register */
#define CAN_MO22_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00192C0u)

/** Alias (User Manual Name) for CAN_MO22_EDATA0.
 * To use register names with standard convension, please use CAN_MO22_EDATA0.
 */
#define CAN_EMO22DATA0   (CAN_MO22_EDATA0)

/** \brief  12C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO22_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00192C4u)

/** Alias (User Manual Name) for CAN_MO22_EDATA1.
 * To use register names with standard convension, please use CAN_MO22_EDATA1.
 */
#define CAN_EMO22DATA1   (CAN_MO22_EDATA1)

/** \brief  12C8, Message Object  Interrupt Pointer Register */
#define CAN_MO22_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00192C8u)

/** Alias (User Manual Name) for CAN_MO22_EDATA2.
 * To use register names with standard convension, please use CAN_MO22_EDATA2.
 */
#define CAN_EMO22DATA2   (CAN_MO22_EDATA2)

/** \brief  12CC, Message Object  Acceptance Mask Register */
#define CAN_MO22_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00192CCu)

/** Alias (User Manual Name) for CAN_MO22_EDATA3.
 * To use register names with standard convension, please use CAN_MO22_EDATA3.
 */
#define CAN_EMO22DATA3   (CAN_MO22_EDATA3)

/** \brief  12D0, Message Object  Data Register Low */
#define CAN_MO22_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00192D0u)

/** Alias (User Manual Name) for CAN_MO22_EDATA4.
 * To use register names with standard convension, please use CAN_MO22_EDATA4.
 */
#define CAN_EMO22DATA4   (CAN_MO22_EDATA4)

/** \brief  12D4, Message Object  Data Register High */
#define CAN_MO22_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00192D4u)

/** Alias (User Manual Name) for CAN_MO22_EDATA5.
 * To use register names with standard convension, please use CAN_MO22_EDATA5.
 */
#define CAN_EMO22DATA5   (CAN_MO22_EDATA5)

/** \brief  12D8, Message Object  Arbitration Register */
#define CAN_MO22_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00192D8u)

/** Alias (User Manual Name) for CAN_MO22_EDATA6.
 * To use register names with standard convension, please use CAN_MO22_EDATA6.
 */
#define CAN_EMO22DATA6   (CAN_MO22_EDATA6)

/** \brief  12C0, Message Object  Function Control Register */
#define CAN_MO22_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00192C0u)

/** Alias (User Manual Name) for CAN_MO22_FCR.
 * To use register names with standard convension, please use CAN_MO22_FCR.
 */
#define CAN_MOFCR22      (CAN_MO22_FCR)

/** \brief  12C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO22_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00192C4u)

/** Alias (User Manual Name) for CAN_MO22_FGPR.
 * To use register names with standard convension, please use CAN_MO22_FGPR.
 */
#define CAN_MOFGPR22     (CAN_MO22_FGPR)

/** \brief  12C8, Message Object  Interrupt Pointer Register */
#define CAN_MO22_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00192C8u)

/** Alias (User Manual Name) for CAN_MO22_IPR.
 * To use register names with standard convension, please use CAN_MO22_IPR.
 */
#define CAN_MOIPR22      (CAN_MO22_IPR)

/** \brief  12DC, Message Object  Control Register */
#define CAN_MO22_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00192DCu)

/** Alias (User Manual Name) for CAN_MO22_STAT.
 * To use register names with standard convension, please use CAN_MO22_STAT.
 */
#define CAN_MOSTAT22     (CAN_MO22_STAT)

/** \brief  12EC, Message Object  Acceptance Mask Register */
#define CAN_MO23_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00192ECu)

/** Alias (User Manual Name) for CAN_MO23_AMR.
 * To use register names with standard convension, please use CAN_MO23_AMR.
 */
#define CAN_MOAMR23      (CAN_MO23_AMR)

/** \brief  12F8, Message Object  Arbitration Register */
#define CAN_MO23_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00192F8u)

/** Alias (User Manual Name) for CAN_MO23_AR.
 * To use register names with standard convension, please use CAN_MO23_AR.
 */
#define CAN_MOAR23       (CAN_MO23_AR)

/** \brief  12FC, Message Object  Control Register */
#define CAN_MO23_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00192FCu)

/** Alias (User Manual Name) for CAN_MO23_CTR.
 * To use register names with standard convension, please use CAN_MO23_CTR.
 */
#define CAN_MOCTR23      (CAN_MO23_CTR)

/** \brief  12F4, Message Object  Data Register High */
#define CAN_MO23_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00192F4u)

/** Alias (User Manual Name) for CAN_MO23_DATAH.
 * To use register names with standard convension, please use CAN_MO23_DATAH.
 */
#define CAN_MODATAH23    (CAN_MO23_DATAH)

/** \brief  12F0, Message Object  Data Register Low */
#define CAN_MO23_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00192F0u)

/** Alias (User Manual Name) for CAN_MO23_DATAL.
 * To use register names with standard convension, please use CAN_MO23_DATAL.
 */
#define CAN_MODATAL23    (CAN_MO23_DATAL)

/** \brief  12E0, Message Object  Function Control Register */
#define CAN_MO23_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00192E0u)

/** Alias (User Manual Name) for CAN_MO23_EDATA0.
 * To use register names with standard convension, please use CAN_MO23_EDATA0.
 */
#define CAN_EMO23DATA0   (CAN_MO23_EDATA0)

/** \brief  12E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO23_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00192E4u)

/** Alias (User Manual Name) for CAN_MO23_EDATA1.
 * To use register names with standard convension, please use CAN_MO23_EDATA1.
 */
#define CAN_EMO23DATA1   (CAN_MO23_EDATA1)

/** \brief  12E8, Message Object  Interrupt Pointer Register */
#define CAN_MO23_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00192E8u)

/** Alias (User Manual Name) for CAN_MO23_EDATA2.
 * To use register names with standard convension, please use CAN_MO23_EDATA2.
 */
#define CAN_EMO23DATA2   (CAN_MO23_EDATA2)

/** \brief  12EC, Message Object  Acceptance Mask Register */
#define CAN_MO23_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00192ECu)

/** Alias (User Manual Name) for CAN_MO23_EDATA3.
 * To use register names with standard convension, please use CAN_MO23_EDATA3.
 */
#define CAN_EMO23DATA3   (CAN_MO23_EDATA3)

/** \brief  12F0, Message Object  Data Register Low */
#define CAN_MO23_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00192F0u)

/** Alias (User Manual Name) for CAN_MO23_EDATA4.
 * To use register names with standard convension, please use CAN_MO23_EDATA4.
 */
#define CAN_EMO23DATA4   (CAN_MO23_EDATA4)

/** \brief  12F4, Message Object  Data Register High */
#define CAN_MO23_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00192F4u)

/** Alias (User Manual Name) for CAN_MO23_EDATA5.
 * To use register names with standard convension, please use CAN_MO23_EDATA5.
 */
#define CAN_EMO23DATA5   (CAN_MO23_EDATA5)

/** \brief  12F8, Message Object  Arbitration Register */
#define CAN_MO23_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00192F8u)

/** Alias (User Manual Name) for CAN_MO23_EDATA6.
 * To use register names with standard convension, please use CAN_MO23_EDATA6.
 */
#define CAN_EMO23DATA6   (CAN_MO23_EDATA6)

/** \brief  12E0, Message Object  Function Control Register */
#define CAN_MO23_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00192E0u)

/** Alias (User Manual Name) for CAN_MO23_FCR.
 * To use register names with standard convension, please use CAN_MO23_FCR.
 */
#define CAN_MOFCR23      (CAN_MO23_FCR)

/** \brief  12E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO23_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00192E4u)

/** Alias (User Manual Name) for CAN_MO23_FGPR.
 * To use register names with standard convension, please use CAN_MO23_FGPR.
 */
#define CAN_MOFGPR23     (CAN_MO23_FGPR)

/** \brief  12E8, Message Object  Interrupt Pointer Register */
#define CAN_MO23_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00192E8u)

/** Alias (User Manual Name) for CAN_MO23_IPR.
 * To use register names with standard convension, please use CAN_MO23_IPR.
 */
#define CAN_MOIPR23      (CAN_MO23_IPR)

/** \brief  12FC, Message Object  Control Register */
#define CAN_MO23_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00192FCu)

/** Alias (User Manual Name) for CAN_MO23_STAT.
 * To use register names with standard convension, please use CAN_MO23_STAT.
 */
#define CAN_MOSTAT23     (CAN_MO23_STAT)

/** \brief  130C, Message Object  Acceptance Mask Register */
#define CAN_MO24_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001930Cu)

/** Alias (User Manual Name) for CAN_MO24_AMR.
 * To use register names with standard convension, please use CAN_MO24_AMR.
 */
#define CAN_MOAMR24      (CAN_MO24_AMR)

/** \brief  1318, Message Object  Arbitration Register */
#define CAN_MO24_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019318u)

/** Alias (User Manual Name) for CAN_MO24_AR.
 * To use register names with standard convension, please use CAN_MO24_AR.
 */
#define CAN_MOAR24       (CAN_MO24_AR)

/** \brief  131C, Message Object  Control Register */
#define CAN_MO24_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001931Cu)

/** Alias (User Manual Name) for CAN_MO24_CTR.
 * To use register names with standard convension, please use CAN_MO24_CTR.
 */
#define CAN_MOCTR24      (CAN_MO24_CTR)

/** \brief  1314, Message Object  Data Register High */
#define CAN_MO24_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019314u)

/** Alias (User Manual Name) for CAN_MO24_DATAH.
 * To use register names with standard convension, please use CAN_MO24_DATAH.
 */
#define CAN_MODATAH24    (CAN_MO24_DATAH)

/** \brief  1310, Message Object  Data Register Low */
#define CAN_MO24_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019310u)

/** Alias (User Manual Name) for CAN_MO24_DATAL.
 * To use register names with standard convension, please use CAN_MO24_DATAL.
 */
#define CAN_MODATAL24    (CAN_MO24_DATAL)

/** \brief  1300, Message Object  Function Control Register */
#define CAN_MO24_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019300u)

/** Alias (User Manual Name) for CAN_MO24_EDATA0.
 * To use register names with standard convension, please use CAN_MO24_EDATA0.
 */
#define CAN_EMO24DATA0   (CAN_MO24_EDATA0)

/** \brief  1304, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO24_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019304u)

/** Alias (User Manual Name) for CAN_MO24_EDATA1.
 * To use register names with standard convension, please use CAN_MO24_EDATA1.
 */
#define CAN_EMO24DATA1   (CAN_MO24_EDATA1)

/** \brief  1308, Message Object  Interrupt Pointer Register */
#define CAN_MO24_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019308u)

/** Alias (User Manual Name) for CAN_MO24_EDATA2.
 * To use register names with standard convension, please use CAN_MO24_EDATA2.
 */
#define CAN_EMO24DATA2   (CAN_MO24_EDATA2)

/** \brief  130C, Message Object  Acceptance Mask Register */
#define CAN_MO24_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001930Cu)

/** Alias (User Manual Name) for CAN_MO24_EDATA3.
 * To use register names with standard convension, please use CAN_MO24_EDATA3.
 */
#define CAN_EMO24DATA3   (CAN_MO24_EDATA3)

/** \brief  1310, Message Object  Data Register Low */
#define CAN_MO24_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019310u)

/** Alias (User Manual Name) for CAN_MO24_EDATA4.
 * To use register names with standard convension, please use CAN_MO24_EDATA4.
 */
#define CAN_EMO24DATA4   (CAN_MO24_EDATA4)

/** \brief  1314, Message Object  Data Register High */
#define CAN_MO24_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019314u)

/** Alias (User Manual Name) for CAN_MO24_EDATA5.
 * To use register names with standard convension, please use CAN_MO24_EDATA5.
 */
#define CAN_EMO24DATA5   (CAN_MO24_EDATA5)

/** \brief  1318, Message Object  Arbitration Register */
#define CAN_MO24_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019318u)

/** Alias (User Manual Name) for CAN_MO24_EDATA6.
 * To use register names with standard convension, please use CAN_MO24_EDATA6.
 */
#define CAN_EMO24DATA6   (CAN_MO24_EDATA6)

/** \brief  1300, Message Object  Function Control Register */
#define CAN_MO24_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019300u)

/** Alias (User Manual Name) for CAN_MO24_FCR.
 * To use register names with standard convension, please use CAN_MO24_FCR.
 */
#define CAN_MOFCR24      (CAN_MO24_FCR)

/** \brief  1304, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO24_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019304u)

/** Alias (User Manual Name) for CAN_MO24_FGPR.
 * To use register names with standard convension, please use CAN_MO24_FGPR.
 */
#define CAN_MOFGPR24     (CAN_MO24_FGPR)

/** \brief  1308, Message Object  Interrupt Pointer Register */
#define CAN_MO24_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019308u)

/** Alias (User Manual Name) for CAN_MO24_IPR.
 * To use register names with standard convension, please use CAN_MO24_IPR.
 */
#define CAN_MOIPR24      (CAN_MO24_IPR)

/** \brief  131C, Message Object  Control Register */
#define CAN_MO24_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001931Cu)

/** Alias (User Manual Name) for CAN_MO24_STAT.
 * To use register names with standard convension, please use CAN_MO24_STAT.
 */
#define CAN_MOSTAT24     (CAN_MO24_STAT)

/** \brief  132C, Message Object  Acceptance Mask Register */
#define CAN_MO25_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001932Cu)

/** Alias (User Manual Name) for CAN_MO25_AMR.
 * To use register names with standard convension, please use CAN_MO25_AMR.
 */
#define CAN_MOAMR25      (CAN_MO25_AMR)

/** \brief  1338, Message Object  Arbitration Register */
#define CAN_MO25_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019338u)

/** Alias (User Manual Name) for CAN_MO25_AR.
 * To use register names with standard convension, please use CAN_MO25_AR.
 */
#define CAN_MOAR25       (CAN_MO25_AR)

/** \brief  133C, Message Object  Control Register */
#define CAN_MO25_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001933Cu)

/** Alias (User Manual Name) for CAN_MO25_CTR.
 * To use register names with standard convension, please use CAN_MO25_CTR.
 */
#define CAN_MOCTR25      (CAN_MO25_CTR)

/** \brief  1334, Message Object  Data Register High */
#define CAN_MO25_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019334u)

/** Alias (User Manual Name) for CAN_MO25_DATAH.
 * To use register names with standard convension, please use CAN_MO25_DATAH.
 */
#define CAN_MODATAH25    (CAN_MO25_DATAH)

/** \brief  1330, Message Object  Data Register Low */
#define CAN_MO25_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019330u)

/** Alias (User Manual Name) for CAN_MO25_DATAL.
 * To use register names with standard convension, please use CAN_MO25_DATAL.
 */
#define CAN_MODATAL25    (CAN_MO25_DATAL)

/** \brief  1320, Message Object  Function Control Register */
#define CAN_MO25_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019320u)

/** Alias (User Manual Name) for CAN_MO25_EDATA0.
 * To use register names with standard convension, please use CAN_MO25_EDATA0.
 */
#define CAN_EMO25DATA0   (CAN_MO25_EDATA0)

/** \brief  1324, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO25_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019324u)

/** Alias (User Manual Name) for CAN_MO25_EDATA1.
 * To use register names with standard convension, please use CAN_MO25_EDATA1.
 */
#define CAN_EMO25DATA1   (CAN_MO25_EDATA1)

/** \brief  1328, Message Object  Interrupt Pointer Register */
#define CAN_MO25_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019328u)

/** Alias (User Manual Name) for CAN_MO25_EDATA2.
 * To use register names with standard convension, please use CAN_MO25_EDATA2.
 */
#define CAN_EMO25DATA2   (CAN_MO25_EDATA2)

/** \brief  132C, Message Object  Acceptance Mask Register */
#define CAN_MO25_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001932Cu)

/** Alias (User Manual Name) for CAN_MO25_EDATA3.
 * To use register names with standard convension, please use CAN_MO25_EDATA3.
 */
#define CAN_EMO25DATA3   (CAN_MO25_EDATA3)

/** \brief  1330, Message Object  Data Register Low */
#define CAN_MO25_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019330u)

/** Alias (User Manual Name) for CAN_MO25_EDATA4.
 * To use register names with standard convension, please use CAN_MO25_EDATA4.
 */
#define CAN_EMO25DATA4   (CAN_MO25_EDATA4)

/** \brief  1334, Message Object  Data Register High */
#define CAN_MO25_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019334u)

/** Alias (User Manual Name) for CAN_MO25_EDATA5.
 * To use register names with standard convension, please use CAN_MO25_EDATA5.
 */
#define CAN_EMO25DATA5   (CAN_MO25_EDATA5)

/** \brief  1338, Message Object  Arbitration Register */
#define CAN_MO25_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019338u)

/** Alias (User Manual Name) for CAN_MO25_EDATA6.
 * To use register names with standard convension, please use CAN_MO25_EDATA6.
 */
#define CAN_EMO25DATA6   (CAN_MO25_EDATA6)

/** \brief  1320, Message Object  Function Control Register */
#define CAN_MO25_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019320u)

/** Alias (User Manual Name) for CAN_MO25_FCR.
 * To use register names with standard convension, please use CAN_MO25_FCR.
 */
#define CAN_MOFCR25      (CAN_MO25_FCR)

/** \brief  1324, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO25_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019324u)

/** Alias (User Manual Name) for CAN_MO25_FGPR.
 * To use register names with standard convension, please use CAN_MO25_FGPR.
 */
#define CAN_MOFGPR25     (CAN_MO25_FGPR)

/** \brief  1328, Message Object  Interrupt Pointer Register */
#define CAN_MO25_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019328u)

/** Alias (User Manual Name) for CAN_MO25_IPR.
 * To use register names with standard convension, please use CAN_MO25_IPR.
 */
#define CAN_MOIPR25      (CAN_MO25_IPR)

/** \brief  133C, Message Object  Control Register */
#define CAN_MO25_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001933Cu)

/** Alias (User Manual Name) for CAN_MO25_STAT.
 * To use register names with standard convension, please use CAN_MO25_STAT.
 */
#define CAN_MOSTAT25     (CAN_MO25_STAT)

/** \brief  134C, Message Object  Acceptance Mask Register */
#define CAN_MO26_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001934Cu)

/** Alias (User Manual Name) for CAN_MO26_AMR.
 * To use register names with standard convension, please use CAN_MO26_AMR.
 */
#define CAN_MOAMR26      (CAN_MO26_AMR)

/** \brief  1358, Message Object  Arbitration Register */
#define CAN_MO26_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019358u)

/** Alias (User Manual Name) for CAN_MO26_AR.
 * To use register names with standard convension, please use CAN_MO26_AR.
 */
#define CAN_MOAR26       (CAN_MO26_AR)

/** \brief  135C, Message Object  Control Register */
#define CAN_MO26_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001935Cu)

/** Alias (User Manual Name) for CAN_MO26_CTR.
 * To use register names with standard convension, please use CAN_MO26_CTR.
 */
#define CAN_MOCTR26      (CAN_MO26_CTR)

/** \brief  1354, Message Object  Data Register High */
#define CAN_MO26_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019354u)

/** Alias (User Manual Name) for CAN_MO26_DATAH.
 * To use register names with standard convension, please use CAN_MO26_DATAH.
 */
#define CAN_MODATAH26    (CAN_MO26_DATAH)

/** \brief  1350, Message Object  Data Register Low */
#define CAN_MO26_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019350u)

/** Alias (User Manual Name) for CAN_MO26_DATAL.
 * To use register names with standard convension, please use CAN_MO26_DATAL.
 */
#define CAN_MODATAL26    (CAN_MO26_DATAL)

/** \brief  1340, Message Object  Function Control Register */
#define CAN_MO26_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019340u)

/** Alias (User Manual Name) for CAN_MO26_EDATA0.
 * To use register names with standard convension, please use CAN_MO26_EDATA0.
 */
#define CAN_EMO26DATA0   (CAN_MO26_EDATA0)

/** \brief  1344, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO26_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019344u)

/** Alias (User Manual Name) for CAN_MO26_EDATA1.
 * To use register names with standard convension, please use CAN_MO26_EDATA1.
 */
#define CAN_EMO26DATA1   (CAN_MO26_EDATA1)

/** \brief  1348, Message Object  Interrupt Pointer Register */
#define CAN_MO26_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019348u)

/** Alias (User Manual Name) for CAN_MO26_EDATA2.
 * To use register names with standard convension, please use CAN_MO26_EDATA2.
 */
#define CAN_EMO26DATA2   (CAN_MO26_EDATA2)

/** \brief  134C, Message Object  Acceptance Mask Register */
#define CAN_MO26_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001934Cu)

/** Alias (User Manual Name) for CAN_MO26_EDATA3.
 * To use register names with standard convension, please use CAN_MO26_EDATA3.
 */
#define CAN_EMO26DATA3   (CAN_MO26_EDATA3)

/** \brief  1350, Message Object  Data Register Low */
#define CAN_MO26_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019350u)

/** Alias (User Manual Name) for CAN_MO26_EDATA4.
 * To use register names with standard convension, please use CAN_MO26_EDATA4.
 */
#define CAN_EMO26DATA4   (CAN_MO26_EDATA4)

/** \brief  1354, Message Object  Data Register High */
#define CAN_MO26_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019354u)

/** Alias (User Manual Name) for CAN_MO26_EDATA5.
 * To use register names with standard convension, please use CAN_MO26_EDATA5.
 */
#define CAN_EMO26DATA5   (CAN_MO26_EDATA5)

/** \brief  1358, Message Object  Arbitration Register */
#define CAN_MO26_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019358u)

/** Alias (User Manual Name) for CAN_MO26_EDATA6.
 * To use register names with standard convension, please use CAN_MO26_EDATA6.
 */
#define CAN_EMO26DATA6   (CAN_MO26_EDATA6)

/** \brief  1340, Message Object  Function Control Register */
#define CAN_MO26_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019340u)

/** Alias (User Manual Name) for CAN_MO26_FCR.
 * To use register names with standard convension, please use CAN_MO26_FCR.
 */
#define CAN_MOFCR26      (CAN_MO26_FCR)

/** \brief  1344, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO26_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019344u)

/** Alias (User Manual Name) for CAN_MO26_FGPR.
 * To use register names with standard convension, please use CAN_MO26_FGPR.
 */
#define CAN_MOFGPR26     (CAN_MO26_FGPR)

/** \brief  1348, Message Object  Interrupt Pointer Register */
#define CAN_MO26_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019348u)

/** Alias (User Manual Name) for CAN_MO26_IPR.
 * To use register names with standard convension, please use CAN_MO26_IPR.
 */
#define CAN_MOIPR26      (CAN_MO26_IPR)

/** \brief  135C, Message Object  Control Register */
#define CAN_MO26_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001935Cu)

/** Alias (User Manual Name) for CAN_MO26_STAT.
 * To use register names with standard convension, please use CAN_MO26_STAT.
 */
#define CAN_MOSTAT26     (CAN_MO26_STAT)

/** \brief  136C, Message Object  Acceptance Mask Register */
#define CAN_MO27_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001936Cu)

/** Alias (User Manual Name) for CAN_MO27_AMR.
 * To use register names with standard convension, please use CAN_MO27_AMR.
 */
#define CAN_MOAMR27      (CAN_MO27_AMR)

/** \brief  1378, Message Object  Arbitration Register */
#define CAN_MO27_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019378u)

/** Alias (User Manual Name) for CAN_MO27_AR.
 * To use register names with standard convension, please use CAN_MO27_AR.
 */
#define CAN_MOAR27       (CAN_MO27_AR)

/** \brief  137C, Message Object  Control Register */
#define CAN_MO27_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001937Cu)

/** Alias (User Manual Name) for CAN_MO27_CTR.
 * To use register names with standard convension, please use CAN_MO27_CTR.
 */
#define CAN_MOCTR27      (CAN_MO27_CTR)

/** \brief  1374, Message Object  Data Register High */
#define CAN_MO27_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019374u)

/** Alias (User Manual Name) for CAN_MO27_DATAH.
 * To use register names with standard convension, please use CAN_MO27_DATAH.
 */
#define CAN_MODATAH27    (CAN_MO27_DATAH)

/** \brief  1370, Message Object  Data Register Low */
#define CAN_MO27_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019370u)

/** Alias (User Manual Name) for CAN_MO27_DATAL.
 * To use register names with standard convension, please use CAN_MO27_DATAL.
 */
#define CAN_MODATAL27    (CAN_MO27_DATAL)

/** \brief  1360, Message Object  Function Control Register */
#define CAN_MO27_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019360u)

/** Alias (User Manual Name) for CAN_MO27_EDATA0.
 * To use register names with standard convension, please use CAN_MO27_EDATA0.
 */
#define CAN_EMO27DATA0   (CAN_MO27_EDATA0)

/** \brief  1364, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO27_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019364u)

/** Alias (User Manual Name) for CAN_MO27_EDATA1.
 * To use register names with standard convension, please use CAN_MO27_EDATA1.
 */
#define CAN_EMO27DATA1   (CAN_MO27_EDATA1)

/** \brief  1368, Message Object  Interrupt Pointer Register */
#define CAN_MO27_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019368u)

/** Alias (User Manual Name) for CAN_MO27_EDATA2.
 * To use register names with standard convension, please use CAN_MO27_EDATA2.
 */
#define CAN_EMO27DATA2   (CAN_MO27_EDATA2)

/** \brief  136C, Message Object  Acceptance Mask Register */
#define CAN_MO27_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001936Cu)

/** Alias (User Manual Name) for CAN_MO27_EDATA3.
 * To use register names with standard convension, please use CAN_MO27_EDATA3.
 */
#define CAN_EMO27DATA3   (CAN_MO27_EDATA3)

/** \brief  1370, Message Object  Data Register Low */
#define CAN_MO27_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019370u)

/** Alias (User Manual Name) for CAN_MO27_EDATA4.
 * To use register names with standard convension, please use CAN_MO27_EDATA4.
 */
#define CAN_EMO27DATA4   (CAN_MO27_EDATA4)

/** \brief  1374, Message Object  Data Register High */
#define CAN_MO27_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019374u)

/** Alias (User Manual Name) for CAN_MO27_EDATA5.
 * To use register names with standard convension, please use CAN_MO27_EDATA5.
 */
#define CAN_EMO27DATA5   (CAN_MO27_EDATA5)

/** \brief  1378, Message Object  Arbitration Register */
#define CAN_MO27_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019378u)

/** Alias (User Manual Name) for CAN_MO27_EDATA6.
 * To use register names with standard convension, please use CAN_MO27_EDATA6.
 */
#define CAN_EMO27DATA6   (CAN_MO27_EDATA6)

/** \brief  1360, Message Object  Function Control Register */
#define CAN_MO27_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019360u)

/** Alias (User Manual Name) for CAN_MO27_FCR.
 * To use register names with standard convension, please use CAN_MO27_FCR.
 */
#define CAN_MOFCR27      (CAN_MO27_FCR)

/** \brief  1364, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO27_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019364u)

/** Alias (User Manual Name) for CAN_MO27_FGPR.
 * To use register names with standard convension, please use CAN_MO27_FGPR.
 */
#define CAN_MOFGPR27     (CAN_MO27_FGPR)

/** \brief  1368, Message Object  Interrupt Pointer Register */
#define CAN_MO27_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019368u)

/** Alias (User Manual Name) for CAN_MO27_IPR.
 * To use register names with standard convension, please use CAN_MO27_IPR.
 */
#define CAN_MOIPR27      (CAN_MO27_IPR)

/** \brief  137C, Message Object  Control Register */
#define CAN_MO27_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001937Cu)

/** Alias (User Manual Name) for CAN_MO27_STAT.
 * To use register names with standard convension, please use CAN_MO27_STAT.
 */
#define CAN_MOSTAT27     (CAN_MO27_STAT)

/** \brief  138C, Message Object  Acceptance Mask Register */
#define CAN_MO28_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001938Cu)

/** Alias (User Manual Name) for CAN_MO28_AMR.
 * To use register names with standard convension, please use CAN_MO28_AMR.
 */
#define CAN_MOAMR28      (CAN_MO28_AMR)

/** \brief  1398, Message Object  Arbitration Register */
#define CAN_MO28_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019398u)

/** Alias (User Manual Name) for CAN_MO28_AR.
 * To use register names with standard convension, please use CAN_MO28_AR.
 */
#define CAN_MOAR28       (CAN_MO28_AR)

/** \brief  139C, Message Object  Control Register */
#define CAN_MO28_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001939Cu)

/** Alias (User Manual Name) for CAN_MO28_CTR.
 * To use register names with standard convension, please use CAN_MO28_CTR.
 */
#define CAN_MOCTR28      (CAN_MO28_CTR)

/** \brief  1394, Message Object  Data Register High */
#define CAN_MO28_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019394u)

/** Alias (User Manual Name) for CAN_MO28_DATAH.
 * To use register names with standard convension, please use CAN_MO28_DATAH.
 */
#define CAN_MODATAH28    (CAN_MO28_DATAH)

/** \brief  1390, Message Object  Data Register Low */
#define CAN_MO28_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019390u)

/** Alias (User Manual Name) for CAN_MO28_DATAL.
 * To use register names with standard convension, please use CAN_MO28_DATAL.
 */
#define CAN_MODATAL28    (CAN_MO28_DATAL)

/** \brief  1380, Message Object  Function Control Register */
#define CAN_MO28_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019380u)

/** Alias (User Manual Name) for CAN_MO28_EDATA0.
 * To use register names with standard convension, please use CAN_MO28_EDATA0.
 */
#define CAN_EMO28DATA0   (CAN_MO28_EDATA0)

/** \brief  1384, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO28_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019384u)

/** Alias (User Manual Name) for CAN_MO28_EDATA1.
 * To use register names with standard convension, please use CAN_MO28_EDATA1.
 */
#define CAN_EMO28DATA1   (CAN_MO28_EDATA1)

/** \brief  1388, Message Object  Interrupt Pointer Register */
#define CAN_MO28_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019388u)

/** Alias (User Manual Name) for CAN_MO28_EDATA2.
 * To use register names with standard convension, please use CAN_MO28_EDATA2.
 */
#define CAN_EMO28DATA2   (CAN_MO28_EDATA2)

/** \brief  138C, Message Object  Acceptance Mask Register */
#define CAN_MO28_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001938Cu)

/** Alias (User Manual Name) for CAN_MO28_EDATA3.
 * To use register names with standard convension, please use CAN_MO28_EDATA3.
 */
#define CAN_EMO28DATA3   (CAN_MO28_EDATA3)

/** \brief  1390, Message Object  Data Register Low */
#define CAN_MO28_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019390u)

/** Alias (User Manual Name) for CAN_MO28_EDATA4.
 * To use register names with standard convension, please use CAN_MO28_EDATA4.
 */
#define CAN_EMO28DATA4   (CAN_MO28_EDATA4)

/** \brief  1394, Message Object  Data Register High */
#define CAN_MO28_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019394u)

/** Alias (User Manual Name) for CAN_MO28_EDATA5.
 * To use register names with standard convension, please use CAN_MO28_EDATA5.
 */
#define CAN_EMO28DATA5   (CAN_MO28_EDATA5)

/** \brief  1398, Message Object  Arbitration Register */
#define CAN_MO28_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019398u)

/** Alias (User Manual Name) for CAN_MO28_EDATA6.
 * To use register names with standard convension, please use CAN_MO28_EDATA6.
 */
#define CAN_EMO28DATA6   (CAN_MO28_EDATA6)

/** \brief  1380, Message Object  Function Control Register */
#define CAN_MO28_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019380u)

/** Alias (User Manual Name) for CAN_MO28_FCR.
 * To use register names with standard convension, please use CAN_MO28_FCR.
 */
#define CAN_MOFCR28      (CAN_MO28_FCR)

/** \brief  1384, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO28_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019384u)

/** Alias (User Manual Name) for CAN_MO28_FGPR.
 * To use register names with standard convension, please use CAN_MO28_FGPR.
 */
#define CAN_MOFGPR28     (CAN_MO28_FGPR)

/** \brief  1388, Message Object  Interrupt Pointer Register */
#define CAN_MO28_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019388u)

/** Alias (User Manual Name) for CAN_MO28_IPR.
 * To use register names with standard convension, please use CAN_MO28_IPR.
 */
#define CAN_MOIPR28      (CAN_MO28_IPR)

/** \brief  139C, Message Object  Control Register */
#define CAN_MO28_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001939Cu)

/** Alias (User Manual Name) for CAN_MO28_STAT.
 * To use register names with standard convension, please use CAN_MO28_STAT.
 */
#define CAN_MOSTAT28     (CAN_MO28_STAT)

/** \brief  13AC, Message Object  Acceptance Mask Register */
#define CAN_MO29_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00193ACu)

/** Alias (User Manual Name) for CAN_MO29_AMR.
 * To use register names with standard convension, please use CAN_MO29_AMR.
 */
#define CAN_MOAMR29      (CAN_MO29_AMR)

/** \brief  13B8, Message Object  Arbitration Register */
#define CAN_MO29_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00193B8u)

/** Alias (User Manual Name) for CAN_MO29_AR.
 * To use register names with standard convension, please use CAN_MO29_AR.
 */
#define CAN_MOAR29       (CAN_MO29_AR)

/** \brief  13BC, Message Object  Control Register */
#define CAN_MO29_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00193BCu)

/** Alias (User Manual Name) for CAN_MO29_CTR.
 * To use register names with standard convension, please use CAN_MO29_CTR.
 */
#define CAN_MOCTR29      (CAN_MO29_CTR)

/** \brief  13B4, Message Object  Data Register High */
#define CAN_MO29_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00193B4u)

/** Alias (User Manual Name) for CAN_MO29_DATAH.
 * To use register names with standard convension, please use CAN_MO29_DATAH.
 */
#define CAN_MODATAH29    (CAN_MO29_DATAH)

/** \brief  13B0, Message Object  Data Register Low */
#define CAN_MO29_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00193B0u)

/** Alias (User Manual Name) for CAN_MO29_DATAL.
 * To use register names with standard convension, please use CAN_MO29_DATAL.
 */
#define CAN_MODATAL29    (CAN_MO29_DATAL)

/** \brief  13A0, Message Object  Function Control Register */
#define CAN_MO29_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00193A0u)

/** Alias (User Manual Name) for CAN_MO29_EDATA0.
 * To use register names with standard convension, please use CAN_MO29_EDATA0.
 */
#define CAN_EMO29DATA0   (CAN_MO29_EDATA0)

/** \brief  13A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO29_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00193A4u)

/** Alias (User Manual Name) for CAN_MO29_EDATA1.
 * To use register names with standard convension, please use CAN_MO29_EDATA1.
 */
#define CAN_EMO29DATA1   (CAN_MO29_EDATA1)

/** \brief  13A8, Message Object  Interrupt Pointer Register */
#define CAN_MO29_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00193A8u)

/** Alias (User Manual Name) for CAN_MO29_EDATA2.
 * To use register names with standard convension, please use CAN_MO29_EDATA2.
 */
#define CAN_EMO29DATA2   (CAN_MO29_EDATA2)

/** \brief  13AC, Message Object  Acceptance Mask Register */
#define CAN_MO29_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00193ACu)

/** Alias (User Manual Name) for CAN_MO29_EDATA3.
 * To use register names with standard convension, please use CAN_MO29_EDATA3.
 */
#define CAN_EMO29DATA3   (CAN_MO29_EDATA3)

/** \brief  13B0, Message Object  Data Register Low */
#define CAN_MO29_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00193B0u)

/** Alias (User Manual Name) for CAN_MO29_EDATA4.
 * To use register names with standard convension, please use CAN_MO29_EDATA4.
 */
#define CAN_EMO29DATA4   (CAN_MO29_EDATA4)

/** \brief  13B4, Message Object  Data Register High */
#define CAN_MO29_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00193B4u)

/** Alias (User Manual Name) for CAN_MO29_EDATA5.
 * To use register names with standard convension, please use CAN_MO29_EDATA5.
 */
#define CAN_EMO29DATA5   (CAN_MO29_EDATA5)

/** \brief  13B8, Message Object  Arbitration Register */
#define CAN_MO29_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00193B8u)

/** Alias (User Manual Name) for CAN_MO29_EDATA6.
 * To use register names with standard convension, please use CAN_MO29_EDATA6.
 */
#define CAN_EMO29DATA6   (CAN_MO29_EDATA6)

/** \brief  13A0, Message Object  Function Control Register */
#define CAN_MO29_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00193A0u)

/** Alias (User Manual Name) for CAN_MO29_FCR.
 * To use register names with standard convension, please use CAN_MO29_FCR.
 */
#define CAN_MOFCR29      (CAN_MO29_FCR)

/** \brief  13A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO29_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00193A4u)

/** Alias (User Manual Name) for CAN_MO29_FGPR.
 * To use register names with standard convension, please use CAN_MO29_FGPR.
 */
#define CAN_MOFGPR29     (CAN_MO29_FGPR)

/** \brief  13A8, Message Object  Interrupt Pointer Register */
#define CAN_MO29_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00193A8u)

/** Alias (User Manual Name) for CAN_MO29_IPR.
 * To use register names with standard convension, please use CAN_MO29_IPR.
 */
#define CAN_MOIPR29      (CAN_MO29_IPR)

/** \brief  13BC, Message Object  Control Register */
#define CAN_MO29_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00193BCu)

/** Alias (User Manual Name) for CAN_MO29_STAT.
 * To use register names with standard convension, please use CAN_MO29_STAT.
 */
#define CAN_MOSTAT29     (CAN_MO29_STAT)

/** \brief  104C, Message Object  Acceptance Mask Register */
#define CAN_MO2_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001904Cu)

/** Alias (User Manual Name) for CAN_MO2_AMR.
 * To use register names with standard convension, please use CAN_MO2_AMR.
 */
#define CAN_MOAMR2       (CAN_MO2_AMR)

/** \brief  1058, Message Object  Arbitration Register */
#define CAN_MO2_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019058u)

/** Alias (User Manual Name) for CAN_MO2_AR.
 * To use register names with standard convension, please use CAN_MO2_AR.
 */
#define CAN_MOAR2        (CAN_MO2_AR)

/** \brief  105C, Message Object  Control Register */
#define CAN_MO2_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001905Cu)

/** Alias (User Manual Name) for CAN_MO2_CTR.
 * To use register names with standard convension, please use CAN_MO2_CTR.
 */
#define CAN_MOCTR2       (CAN_MO2_CTR)

/** \brief  1054, Message Object  Data Register High */
#define CAN_MO2_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019054u)

/** Alias (User Manual Name) for CAN_MO2_DATAH.
 * To use register names with standard convension, please use CAN_MO2_DATAH.
 */
#define CAN_MODATAH2     (CAN_MO2_DATAH)

/** \brief  1050, Message Object  Data Register Low */
#define CAN_MO2_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019050u)

/** Alias (User Manual Name) for CAN_MO2_DATAL.
 * To use register names with standard convension, please use CAN_MO2_DATAL.
 */
#define CAN_MODATAL2     (CAN_MO2_DATAL)

/** \brief  1040, Message Object  Function Control Register */
#define CAN_MO2_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019040u)

/** Alias (User Manual Name) for CAN_MO2_EDATA0.
 * To use register names with standard convension, please use CAN_MO2_EDATA0.
 */
#define CAN_EMO2DATA0    (CAN_MO2_EDATA0)

/** \brief  1044, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO2_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019044u)

/** Alias (User Manual Name) for CAN_MO2_EDATA1.
 * To use register names with standard convension, please use CAN_MO2_EDATA1.
 */
#define CAN_EMO2DATA1    (CAN_MO2_EDATA1)

/** \brief  1048, Message Object  Interrupt Pointer Register */
#define CAN_MO2_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019048u)

/** Alias (User Manual Name) for CAN_MO2_EDATA2.
 * To use register names with standard convension, please use CAN_MO2_EDATA2.
 */
#define CAN_EMO2DATA2    (CAN_MO2_EDATA2)

/** \brief  104C, Message Object  Acceptance Mask Register */
#define CAN_MO2_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001904Cu)

/** Alias (User Manual Name) for CAN_MO2_EDATA3.
 * To use register names with standard convension, please use CAN_MO2_EDATA3.
 */
#define CAN_EMO2DATA3    (CAN_MO2_EDATA3)

/** \brief  1050, Message Object  Data Register Low */
#define CAN_MO2_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019050u)

/** Alias (User Manual Name) for CAN_MO2_EDATA4.
 * To use register names with standard convension, please use CAN_MO2_EDATA4.
 */
#define CAN_EMO2DATA4    (CAN_MO2_EDATA4)

/** \brief  1054, Message Object  Data Register High */
#define CAN_MO2_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019054u)

/** Alias (User Manual Name) for CAN_MO2_EDATA5.
 * To use register names with standard convension, please use CAN_MO2_EDATA5.
 */
#define CAN_EMO2DATA5    (CAN_MO2_EDATA5)

/** \brief  1058, Message Object  Arbitration Register */
#define CAN_MO2_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019058u)

/** Alias (User Manual Name) for CAN_MO2_EDATA6.
 * To use register names with standard convension, please use CAN_MO2_EDATA6.
 */
#define CAN_EMO2DATA6    (CAN_MO2_EDATA6)

/** \brief  1040, Message Object  Function Control Register */
#define CAN_MO2_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019040u)

/** Alias (User Manual Name) for CAN_MO2_FCR.
 * To use register names with standard convension, please use CAN_MO2_FCR.
 */
#define CAN_MOFCR2       (CAN_MO2_FCR)

/** \brief  1044, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO2_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019044u)

/** Alias (User Manual Name) for CAN_MO2_FGPR.
 * To use register names with standard convension, please use CAN_MO2_FGPR.
 */
#define CAN_MOFGPR2      (CAN_MO2_FGPR)

/** \brief  1048, Message Object  Interrupt Pointer Register */
#define CAN_MO2_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019048u)

/** Alias (User Manual Name) for CAN_MO2_IPR.
 * To use register names with standard convension, please use CAN_MO2_IPR.
 */
#define CAN_MOIPR2       (CAN_MO2_IPR)

/** \brief  105C, Message Object  Control Register */
#define CAN_MO2_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001905Cu)

/** Alias (User Manual Name) for CAN_MO2_STAT.
 * To use register names with standard convension, please use CAN_MO2_STAT.
 */
#define CAN_MOSTAT2      (CAN_MO2_STAT)

/** \brief  13CC, Message Object  Acceptance Mask Register */
#define CAN_MO30_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00193CCu)

/** Alias (User Manual Name) for CAN_MO30_AMR.
 * To use register names with standard convension, please use CAN_MO30_AMR.
 */
#define CAN_MOAMR30      (CAN_MO30_AMR)

/** \brief  13D8, Message Object  Arbitration Register */
#define CAN_MO30_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00193D8u)

/** Alias (User Manual Name) for CAN_MO30_AR.
 * To use register names with standard convension, please use CAN_MO30_AR.
 */
#define CAN_MOAR30       (CAN_MO30_AR)

/** \brief  13DC, Message Object  Control Register */
#define CAN_MO30_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00193DCu)

/** Alias (User Manual Name) for CAN_MO30_CTR.
 * To use register names with standard convension, please use CAN_MO30_CTR.
 */
#define CAN_MOCTR30      (CAN_MO30_CTR)

/** \brief  13D4, Message Object  Data Register High */
#define CAN_MO30_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00193D4u)

/** Alias (User Manual Name) for CAN_MO30_DATAH.
 * To use register names with standard convension, please use CAN_MO30_DATAH.
 */
#define CAN_MODATAH30    (CAN_MO30_DATAH)

/** \brief  13D0, Message Object  Data Register Low */
#define CAN_MO30_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00193D0u)

/** Alias (User Manual Name) for CAN_MO30_DATAL.
 * To use register names with standard convension, please use CAN_MO30_DATAL.
 */
#define CAN_MODATAL30    (CAN_MO30_DATAL)

/** \brief  13C0, Message Object  Function Control Register */
#define CAN_MO30_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00193C0u)

/** Alias (User Manual Name) for CAN_MO30_EDATA0.
 * To use register names with standard convension, please use CAN_MO30_EDATA0.
 */
#define CAN_EMO30DATA0   (CAN_MO30_EDATA0)

/** \brief  13C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO30_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00193C4u)

/** Alias (User Manual Name) for CAN_MO30_EDATA1.
 * To use register names with standard convension, please use CAN_MO30_EDATA1.
 */
#define CAN_EMO30DATA1   (CAN_MO30_EDATA1)

/** \brief  13C8, Message Object  Interrupt Pointer Register */
#define CAN_MO30_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00193C8u)

/** Alias (User Manual Name) for CAN_MO30_EDATA2.
 * To use register names with standard convension, please use CAN_MO30_EDATA2.
 */
#define CAN_EMO30DATA2   (CAN_MO30_EDATA2)

/** \brief  13CC, Message Object  Acceptance Mask Register */
#define CAN_MO30_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00193CCu)

/** Alias (User Manual Name) for CAN_MO30_EDATA3.
 * To use register names with standard convension, please use CAN_MO30_EDATA3.
 */
#define CAN_EMO30DATA3   (CAN_MO30_EDATA3)

/** \brief  13D0, Message Object  Data Register Low */
#define CAN_MO30_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00193D0u)

/** Alias (User Manual Name) for CAN_MO30_EDATA4.
 * To use register names with standard convension, please use CAN_MO30_EDATA4.
 */
#define CAN_EMO30DATA4   (CAN_MO30_EDATA4)

/** \brief  13D4, Message Object  Data Register High */
#define CAN_MO30_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00193D4u)

/** Alias (User Manual Name) for CAN_MO30_EDATA5.
 * To use register names with standard convension, please use CAN_MO30_EDATA5.
 */
#define CAN_EMO30DATA5   (CAN_MO30_EDATA5)

/** \brief  13D8, Message Object  Arbitration Register */
#define CAN_MO30_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00193D8u)

/** Alias (User Manual Name) for CAN_MO30_EDATA6.
 * To use register names with standard convension, please use CAN_MO30_EDATA6.
 */
#define CAN_EMO30DATA6   (CAN_MO30_EDATA6)

/** \brief  13C0, Message Object  Function Control Register */
#define CAN_MO30_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00193C0u)

/** Alias (User Manual Name) for CAN_MO30_FCR.
 * To use register names with standard convension, please use CAN_MO30_FCR.
 */
#define CAN_MOFCR30      (CAN_MO30_FCR)

/** \brief  13C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO30_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00193C4u)

/** Alias (User Manual Name) for CAN_MO30_FGPR.
 * To use register names with standard convension, please use CAN_MO30_FGPR.
 */
#define CAN_MOFGPR30     (CAN_MO30_FGPR)

/** \brief  13C8, Message Object  Interrupt Pointer Register */
#define CAN_MO30_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00193C8u)

/** Alias (User Manual Name) for CAN_MO30_IPR.
 * To use register names with standard convension, please use CAN_MO30_IPR.
 */
#define CAN_MOIPR30      (CAN_MO30_IPR)

/** \brief  13DC, Message Object  Control Register */
#define CAN_MO30_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00193DCu)

/** Alias (User Manual Name) for CAN_MO30_STAT.
 * To use register names with standard convension, please use CAN_MO30_STAT.
 */
#define CAN_MOSTAT30     (CAN_MO30_STAT)

/** \brief  13EC, Message Object  Acceptance Mask Register */
#define CAN_MO31_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00193ECu)

/** Alias (User Manual Name) for CAN_MO31_AMR.
 * To use register names with standard convension, please use CAN_MO31_AMR.
 */
#define CAN_MOAMR31      (CAN_MO31_AMR)

/** \brief  13F8, Message Object  Arbitration Register */
#define CAN_MO31_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00193F8u)

/** Alias (User Manual Name) for CAN_MO31_AR.
 * To use register names with standard convension, please use CAN_MO31_AR.
 */
#define CAN_MOAR31       (CAN_MO31_AR)

/** \brief  13FC, Message Object  Control Register */
#define CAN_MO31_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00193FCu)

/** Alias (User Manual Name) for CAN_MO31_CTR.
 * To use register names with standard convension, please use CAN_MO31_CTR.
 */
#define CAN_MOCTR31      (CAN_MO31_CTR)

/** \brief  13F4, Message Object  Data Register High */
#define CAN_MO31_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00193F4u)

/** Alias (User Manual Name) for CAN_MO31_DATAH.
 * To use register names with standard convension, please use CAN_MO31_DATAH.
 */
#define CAN_MODATAH31    (CAN_MO31_DATAH)

/** \brief  13F0, Message Object  Data Register Low */
#define CAN_MO31_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00193F0u)

/** Alias (User Manual Name) for CAN_MO31_DATAL.
 * To use register names with standard convension, please use CAN_MO31_DATAL.
 */
#define CAN_MODATAL31    (CAN_MO31_DATAL)

/** \brief  13E0, Message Object  Function Control Register */
#define CAN_MO31_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00193E0u)

/** Alias (User Manual Name) for CAN_MO31_EDATA0.
 * To use register names with standard convension, please use CAN_MO31_EDATA0.
 */
#define CAN_EMO31DATA0   (CAN_MO31_EDATA0)

/** \brief  13E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO31_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00193E4u)

/** Alias (User Manual Name) for CAN_MO31_EDATA1.
 * To use register names with standard convension, please use CAN_MO31_EDATA1.
 */
#define CAN_EMO31DATA1   (CAN_MO31_EDATA1)

/** \brief  13E8, Message Object  Interrupt Pointer Register */
#define CAN_MO31_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00193E8u)

/** Alias (User Manual Name) for CAN_MO31_EDATA2.
 * To use register names with standard convension, please use CAN_MO31_EDATA2.
 */
#define CAN_EMO31DATA2   (CAN_MO31_EDATA2)

/** \brief  13EC, Message Object  Acceptance Mask Register */
#define CAN_MO31_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00193ECu)

/** Alias (User Manual Name) for CAN_MO31_EDATA3.
 * To use register names with standard convension, please use CAN_MO31_EDATA3.
 */
#define CAN_EMO31DATA3   (CAN_MO31_EDATA3)

/** \brief  13F0, Message Object  Data Register Low */
#define CAN_MO31_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00193F0u)

/** Alias (User Manual Name) for CAN_MO31_EDATA4.
 * To use register names with standard convension, please use CAN_MO31_EDATA4.
 */
#define CAN_EMO31DATA4   (CAN_MO31_EDATA4)

/** \brief  13F4, Message Object  Data Register High */
#define CAN_MO31_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00193F4u)

/** Alias (User Manual Name) for CAN_MO31_EDATA5.
 * To use register names with standard convension, please use CAN_MO31_EDATA5.
 */
#define CAN_EMO31DATA5   (CAN_MO31_EDATA5)

/** \brief  13F8, Message Object  Arbitration Register */
#define CAN_MO31_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00193F8u)

/** Alias (User Manual Name) for CAN_MO31_EDATA6.
 * To use register names with standard convension, please use CAN_MO31_EDATA6.
 */
#define CAN_EMO31DATA6   (CAN_MO31_EDATA6)

/** \brief  13E0, Message Object  Function Control Register */
#define CAN_MO31_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00193E0u)

/** Alias (User Manual Name) for CAN_MO31_FCR.
 * To use register names with standard convension, please use CAN_MO31_FCR.
 */
#define CAN_MOFCR31      (CAN_MO31_FCR)

/** \brief  13E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO31_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00193E4u)

/** Alias (User Manual Name) for CAN_MO31_FGPR.
 * To use register names with standard convension, please use CAN_MO31_FGPR.
 */
#define CAN_MOFGPR31     (CAN_MO31_FGPR)

/** \brief  13E8, Message Object  Interrupt Pointer Register */
#define CAN_MO31_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00193E8u)

/** Alias (User Manual Name) for CAN_MO31_IPR.
 * To use register names with standard convension, please use CAN_MO31_IPR.
 */
#define CAN_MOIPR31      (CAN_MO31_IPR)

/** \brief  13FC, Message Object  Control Register */
#define CAN_MO31_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00193FCu)

/** Alias (User Manual Name) for CAN_MO31_STAT.
 * To use register names with standard convension, please use CAN_MO31_STAT.
 */
#define CAN_MOSTAT31     (CAN_MO31_STAT)

/** \brief  140C, Message Object  Acceptance Mask Register */
#define CAN_MO32_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001940Cu)

/** Alias (User Manual Name) for CAN_MO32_AMR.
 * To use register names with standard convension, please use CAN_MO32_AMR.
 */
#define CAN_MOAMR32      (CAN_MO32_AMR)

/** \brief  1418, Message Object  Arbitration Register */
#define CAN_MO32_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019418u)

/** Alias (User Manual Name) for CAN_MO32_AR.
 * To use register names with standard convension, please use CAN_MO32_AR.
 */
#define CAN_MOAR32       (CAN_MO32_AR)

/** \brief  141C, Message Object  Control Register */
#define CAN_MO32_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001941Cu)

/** Alias (User Manual Name) for CAN_MO32_CTR.
 * To use register names with standard convension, please use CAN_MO32_CTR.
 */
#define CAN_MOCTR32      (CAN_MO32_CTR)

/** \brief  1414, Message Object  Data Register High */
#define CAN_MO32_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019414u)

/** Alias (User Manual Name) for CAN_MO32_DATAH.
 * To use register names with standard convension, please use CAN_MO32_DATAH.
 */
#define CAN_MODATAH32    (CAN_MO32_DATAH)

/** \brief  1410, Message Object  Data Register Low */
#define CAN_MO32_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019410u)

/** Alias (User Manual Name) for CAN_MO32_DATAL.
 * To use register names with standard convension, please use CAN_MO32_DATAL.
 */
#define CAN_MODATAL32    (CAN_MO32_DATAL)

/** \brief  1400, Message Object  Function Control Register */
#define CAN_MO32_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019400u)

/** Alias (User Manual Name) for CAN_MO32_EDATA0.
 * To use register names with standard convension, please use CAN_MO32_EDATA0.
 */
#define CAN_EMO32DATA0   (CAN_MO32_EDATA0)

/** \brief  1404, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO32_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019404u)

/** Alias (User Manual Name) for CAN_MO32_EDATA1.
 * To use register names with standard convension, please use CAN_MO32_EDATA1.
 */
#define CAN_EMO32DATA1   (CAN_MO32_EDATA1)

/** \brief  1408, Message Object  Interrupt Pointer Register */
#define CAN_MO32_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019408u)

/** Alias (User Manual Name) for CAN_MO32_EDATA2.
 * To use register names with standard convension, please use CAN_MO32_EDATA2.
 */
#define CAN_EMO32DATA2   (CAN_MO32_EDATA2)

/** \brief  140C, Message Object  Acceptance Mask Register */
#define CAN_MO32_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001940Cu)

/** Alias (User Manual Name) for CAN_MO32_EDATA3.
 * To use register names with standard convension, please use CAN_MO32_EDATA3.
 */
#define CAN_EMO32DATA3   (CAN_MO32_EDATA3)

/** \brief  1410, Message Object  Data Register Low */
#define CAN_MO32_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019410u)

/** Alias (User Manual Name) for CAN_MO32_EDATA4.
 * To use register names with standard convension, please use CAN_MO32_EDATA4.
 */
#define CAN_EMO32DATA4   (CAN_MO32_EDATA4)

/** \brief  1414, Message Object  Data Register High */
#define CAN_MO32_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019414u)

/** Alias (User Manual Name) for CAN_MO32_EDATA5.
 * To use register names with standard convension, please use CAN_MO32_EDATA5.
 */
#define CAN_EMO32DATA5   (CAN_MO32_EDATA5)

/** \brief  1418, Message Object  Arbitration Register */
#define CAN_MO32_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019418u)

/** Alias (User Manual Name) for CAN_MO32_EDATA6.
 * To use register names with standard convension, please use CAN_MO32_EDATA6.
 */
#define CAN_EMO32DATA6   (CAN_MO32_EDATA6)

/** \brief  1400, Message Object  Function Control Register */
#define CAN_MO32_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019400u)

/** Alias (User Manual Name) for CAN_MO32_FCR.
 * To use register names with standard convension, please use CAN_MO32_FCR.
 */
#define CAN_MOFCR32      (CAN_MO32_FCR)

/** \brief  1404, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO32_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019404u)

/** Alias (User Manual Name) for CAN_MO32_FGPR.
 * To use register names with standard convension, please use CAN_MO32_FGPR.
 */
#define CAN_MOFGPR32     (CAN_MO32_FGPR)

/** \brief  1408, Message Object  Interrupt Pointer Register */
#define CAN_MO32_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019408u)

/** Alias (User Manual Name) for CAN_MO32_IPR.
 * To use register names with standard convension, please use CAN_MO32_IPR.
 */
#define CAN_MOIPR32      (CAN_MO32_IPR)

/** \brief  141C, Message Object  Control Register */
#define CAN_MO32_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001941Cu)

/** Alias (User Manual Name) for CAN_MO32_STAT.
 * To use register names with standard convension, please use CAN_MO32_STAT.
 */
#define CAN_MOSTAT32     (CAN_MO32_STAT)

/** \brief  142C, Message Object  Acceptance Mask Register */
#define CAN_MO33_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001942Cu)

/** Alias (User Manual Name) for CAN_MO33_AMR.
 * To use register names with standard convension, please use CAN_MO33_AMR.
 */
#define CAN_MOAMR33      (CAN_MO33_AMR)

/** \brief  1438, Message Object  Arbitration Register */
#define CAN_MO33_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019438u)

/** Alias (User Manual Name) for CAN_MO33_AR.
 * To use register names with standard convension, please use CAN_MO33_AR.
 */
#define CAN_MOAR33       (CAN_MO33_AR)

/** \brief  143C, Message Object  Control Register */
#define CAN_MO33_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001943Cu)

/** Alias (User Manual Name) for CAN_MO33_CTR.
 * To use register names with standard convension, please use CAN_MO33_CTR.
 */
#define CAN_MOCTR33      (CAN_MO33_CTR)

/** \brief  1434, Message Object  Data Register High */
#define CAN_MO33_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019434u)

/** Alias (User Manual Name) for CAN_MO33_DATAH.
 * To use register names with standard convension, please use CAN_MO33_DATAH.
 */
#define CAN_MODATAH33    (CAN_MO33_DATAH)

/** \brief  1430, Message Object  Data Register Low */
#define CAN_MO33_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019430u)

/** Alias (User Manual Name) for CAN_MO33_DATAL.
 * To use register names with standard convension, please use CAN_MO33_DATAL.
 */
#define CAN_MODATAL33    (CAN_MO33_DATAL)

/** \brief  1420, Message Object  Function Control Register */
#define CAN_MO33_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019420u)

/** Alias (User Manual Name) for CAN_MO33_EDATA0.
 * To use register names with standard convension, please use CAN_MO33_EDATA0.
 */
#define CAN_EMO33DATA0   (CAN_MO33_EDATA0)

/** \brief  1424, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO33_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019424u)

/** Alias (User Manual Name) for CAN_MO33_EDATA1.
 * To use register names with standard convension, please use CAN_MO33_EDATA1.
 */
#define CAN_EMO33DATA1   (CAN_MO33_EDATA1)

/** \brief  1428, Message Object  Interrupt Pointer Register */
#define CAN_MO33_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019428u)

/** Alias (User Manual Name) for CAN_MO33_EDATA2.
 * To use register names with standard convension, please use CAN_MO33_EDATA2.
 */
#define CAN_EMO33DATA2   (CAN_MO33_EDATA2)

/** \brief  142C, Message Object  Acceptance Mask Register */
#define CAN_MO33_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001942Cu)

/** Alias (User Manual Name) for CAN_MO33_EDATA3.
 * To use register names with standard convension, please use CAN_MO33_EDATA3.
 */
#define CAN_EMO33DATA3   (CAN_MO33_EDATA3)

/** \brief  1430, Message Object  Data Register Low */
#define CAN_MO33_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019430u)

/** Alias (User Manual Name) for CAN_MO33_EDATA4.
 * To use register names with standard convension, please use CAN_MO33_EDATA4.
 */
#define CAN_EMO33DATA4   (CAN_MO33_EDATA4)

/** \brief  1434, Message Object  Data Register High */
#define CAN_MO33_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019434u)

/** Alias (User Manual Name) for CAN_MO33_EDATA5.
 * To use register names with standard convension, please use CAN_MO33_EDATA5.
 */
#define CAN_EMO33DATA5   (CAN_MO33_EDATA5)

/** \brief  1438, Message Object  Arbitration Register */
#define CAN_MO33_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019438u)

/** Alias (User Manual Name) for CAN_MO33_EDATA6.
 * To use register names with standard convension, please use CAN_MO33_EDATA6.
 */
#define CAN_EMO33DATA6   (CAN_MO33_EDATA6)

/** \brief  1420, Message Object  Function Control Register */
#define CAN_MO33_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019420u)

/** Alias (User Manual Name) for CAN_MO33_FCR.
 * To use register names with standard convension, please use CAN_MO33_FCR.
 */
#define CAN_MOFCR33      (CAN_MO33_FCR)

/** \brief  1424, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO33_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019424u)

/** Alias (User Manual Name) for CAN_MO33_FGPR.
 * To use register names with standard convension, please use CAN_MO33_FGPR.
 */
#define CAN_MOFGPR33     (CAN_MO33_FGPR)

/** \brief  1428, Message Object  Interrupt Pointer Register */
#define CAN_MO33_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019428u)

/** Alias (User Manual Name) for CAN_MO33_IPR.
 * To use register names with standard convension, please use CAN_MO33_IPR.
 */
#define CAN_MOIPR33      (CAN_MO33_IPR)

/** \brief  143C, Message Object  Control Register */
#define CAN_MO33_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001943Cu)

/** Alias (User Manual Name) for CAN_MO33_STAT.
 * To use register names with standard convension, please use CAN_MO33_STAT.
 */
#define CAN_MOSTAT33     (CAN_MO33_STAT)

/** \brief  144C, Message Object  Acceptance Mask Register */
#define CAN_MO34_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001944Cu)

/** Alias (User Manual Name) for CAN_MO34_AMR.
 * To use register names with standard convension, please use CAN_MO34_AMR.
 */
#define CAN_MOAMR34      (CAN_MO34_AMR)

/** \brief  1458, Message Object  Arbitration Register */
#define CAN_MO34_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019458u)

/** Alias (User Manual Name) for CAN_MO34_AR.
 * To use register names with standard convension, please use CAN_MO34_AR.
 */
#define CAN_MOAR34       (CAN_MO34_AR)

/** \brief  145C, Message Object  Control Register */
#define CAN_MO34_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001945Cu)

/** Alias (User Manual Name) for CAN_MO34_CTR.
 * To use register names with standard convension, please use CAN_MO34_CTR.
 */
#define CAN_MOCTR34      (CAN_MO34_CTR)

/** \brief  1454, Message Object  Data Register High */
#define CAN_MO34_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019454u)

/** Alias (User Manual Name) for CAN_MO34_DATAH.
 * To use register names with standard convension, please use CAN_MO34_DATAH.
 */
#define CAN_MODATAH34    (CAN_MO34_DATAH)

/** \brief  1450, Message Object  Data Register Low */
#define CAN_MO34_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019450u)

/** Alias (User Manual Name) for CAN_MO34_DATAL.
 * To use register names with standard convension, please use CAN_MO34_DATAL.
 */
#define CAN_MODATAL34    (CAN_MO34_DATAL)

/** \brief  1440, Message Object  Function Control Register */
#define CAN_MO34_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019440u)

/** Alias (User Manual Name) for CAN_MO34_EDATA0.
 * To use register names with standard convension, please use CAN_MO34_EDATA0.
 */
#define CAN_EMO34DATA0   (CAN_MO34_EDATA0)

/** \brief  1444, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO34_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019444u)

/** Alias (User Manual Name) for CAN_MO34_EDATA1.
 * To use register names with standard convension, please use CAN_MO34_EDATA1.
 */
#define CAN_EMO34DATA1   (CAN_MO34_EDATA1)

/** \brief  1448, Message Object  Interrupt Pointer Register */
#define CAN_MO34_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019448u)

/** Alias (User Manual Name) for CAN_MO34_EDATA2.
 * To use register names with standard convension, please use CAN_MO34_EDATA2.
 */
#define CAN_EMO34DATA2   (CAN_MO34_EDATA2)

/** \brief  144C, Message Object  Acceptance Mask Register */
#define CAN_MO34_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001944Cu)

/** Alias (User Manual Name) for CAN_MO34_EDATA3.
 * To use register names with standard convension, please use CAN_MO34_EDATA3.
 */
#define CAN_EMO34DATA3   (CAN_MO34_EDATA3)

/** \brief  1450, Message Object  Data Register Low */
#define CAN_MO34_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019450u)

/** Alias (User Manual Name) for CAN_MO34_EDATA4.
 * To use register names with standard convension, please use CAN_MO34_EDATA4.
 */
#define CAN_EMO34DATA4   (CAN_MO34_EDATA4)

/** \brief  1454, Message Object  Data Register High */
#define CAN_MO34_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019454u)

/** Alias (User Manual Name) for CAN_MO34_EDATA5.
 * To use register names with standard convension, please use CAN_MO34_EDATA5.
 */
#define CAN_EMO34DATA5   (CAN_MO34_EDATA5)

/** \brief  1458, Message Object  Arbitration Register */
#define CAN_MO34_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019458u)

/** Alias (User Manual Name) for CAN_MO34_EDATA6.
 * To use register names with standard convension, please use CAN_MO34_EDATA6.
 */
#define CAN_EMO34DATA6   (CAN_MO34_EDATA6)

/** \brief  1440, Message Object  Function Control Register */
#define CAN_MO34_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019440u)

/** Alias (User Manual Name) for CAN_MO34_FCR.
 * To use register names with standard convension, please use CAN_MO34_FCR.
 */
#define CAN_MOFCR34      (CAN_MO34_FCR)

/** \brief  1444, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO34_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019444u)

/** Alias (User Manual Name) for CAN_MO34_FGPR.
 * To use register names with standard convension, please use CAN_MO34_FGPR.
 */
#define CAN_MOFGPR34     (CAN_MO34_FGPR)

/** \brief  1448, Message Object  Interrupt Pointer Register */
#define CAN_MO34_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019448u)

/** Alias (User Manual Name) for CAN_MO34_IPR.
 * To use register names with standard convension, please use CAN_MO34_IPR.
 */
#define CAN_MOIPR34      (CAN_MO34_IPR)

/** \brief  145C, Message Object  Control Register */
#define CAN_MO34_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001945Cu)

/** Alias (User Manual Name) for CAN_MO34_STAT.
 * To use register names with standard convension, please use CAN_MO34_STAT.
 */
#define CAN_MOSTAT34     (CAN_MO34_STAT)

/** \brief  146C, Message Object  Acceptance Mask Register */
#define CAN_MO35_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001946Cu)

/** Alias (User Manual Name) for CAN_MO35_AMR.
 * To use register names with standard convension, please use CAN_MO35_AMR.
 */
#define CAN_MOAMR35      (CAN_MO35_AMR)

/** \brief  1478, Message Object  Arbitration Register */
#define CAN_MO35_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019478u)

/** Alias (User Manual Name) for CAN_MO35_AR.
 * To use register names with standard convension, please use CAN_MO35_AR.
 */
#define CAN_MOAR35       (CAN_MO35_AR)

/** \brief  147C, Message Object  Control Register */
#define CAN_MO35_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001947Cu)

/** Alias (User Manual Name) for CAN_MO35_CTR.
 * To use register names with standard convension, please use CAN_MO35_CTR.
 */
#define CAN_MOCTR35      (CAN_MO35_CTR)

/** \brief  1474, Message Object  Data Register High */
#define CAN_MO35_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019474u)

/** Alias (User Manual Name) for CAN_MO35_DATAH.
 * To use register names with standard convension, please use CAN_MO35_DATAH.
 */
#define CAN_MODATAH35    (CAN_MO35_DATAH)

/** \brief  1470, Message Object  Data Register Low */
#define CAN_MO35_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019470u)

/** Alias (User Manual Name) for CAN_MO35_DATAL.
 * To use register names with standard convension, please use CAN_MO35_DATAL.
 */
#define CAN_MODATAL35    (CAN_MO35_DATAL)

/** \brief  1460, Message Object  Function Control Register */
#define CAN_MO35_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019460u)

/** Alias (User Manual Name) for CAN_MO35_EDATA0.
 * To use register names with standard convension, please use CAN_MO35_EDATA0.
 */
#define CAN_EMO35DATA0   (CAN_MO35_EDATA0)

/** \brief  1464, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO35_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019464u)

/** Alias (User Manual Name) for CAN_MO35_EDATA1.
 * To use register names with standard convension, please use CAN_MO35_EDATA1.
 */
#define CAN_EMO35DATA1   (CAN_MO35_EDATA1)

/** \brief  1468, Message Object  Interrupt Pointer Register */
#define CAN_MO35_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019468u)

/** Alias (User Manual Name) for CAN_MO35_EDATA2.
 * To use register names with standard convension, please use CAN_MO35_EDATA2.
 */
#define CAN_EMO35DATA2   (CAN_MO35_EDATA2)

/** \brief  146C, Message Object  Acceptance Mask Register */
#define CAN_MO35_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001946Cu)

/** Alias (User Manual Name) for CAN_MO35_EDATA3.
 * To use register names with standard convension, please use CAN_MO35_EDATA3.
 */
#define CAN_EMO35DATA3   (CAN_MO35_EDATA3)

/** \brief  1470, Message Object  Data Register Low */
#define CAN_MO35_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019470u)

/** Alias (User Manual Name) for CAN_MO35_EDATA4.
 * To use register names with standard convension, please use CAN_MO35_EDATA4.
 */
#define CAN_EMO35DATA4   (CAN_MO35_EDATA4)

/** \brief  1474, Message Object  Data Register High */
#define CAN_MO35_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019474u)

/** Alias (User Manual Name) for CAN_MO35_EDATA5.
 * To use register names with standard convension, please use CAN_MO35_EDATA5.
 */
#define CAN_EMO35DATA5   (CAN_MO35_EDATA5)

/** \brief  1478, Message Object  Arbitration Register */
#define CAN_MO35_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019478u)

/** Alias (User Manual Name) for CAN_MO35_EDATA6.
 * To use register names with standard convension, please use CAN_MO35_EDATA6.
 */
#define CAN_EMO35DATA6   (CAN_MO35_EDATA6)

/** \brief  1460, Message Object  Function Control Register */
#define CAN_MO35_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019460u)

/** Alias (User Manual Name) for CAN_MO35_FCR.
 * To use register names with standard convension, please use CAN_MO35_FCR.
 */
#define CAN_MOFCR35      (CAN_MO35_FCR)

/** \brief  1464, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO35_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019464u)

/** Alias (User Manual Name) for CAN_MO35_FGPR.
 * To use register names with standard convension, please use CAN_MO35_FGPR.
 */
#define CAN_MOFGPR35     (CAN_MO35_FGPR)

/** \brief  1468, Message Object  Interrupt Pointer Register */
#define CAN_MO35_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019468u)

/** Alias (User Manual Name) for CAN_MO35_IPR.
 * To use register names with standard convension, please use CAN_MO35_IPR.
 */
#define CAN_MOIPR35      (CAN_MO35_IPR)

/** \brief  147C, Message Object  Control Register */
#define CAN_MO35_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001947Cu)

/** Alias (User Manual Name) for CAN_MO35_STAT.
 * To use register names with standard convension, please use CAN_MO35_STAT.
 */
#define CAN_MOSTAT35     (CAN_MO35_STAT)

/** \brief  148C, Message Object  Acceptance Mask Register */
#define CAN_MO36_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001948Cu)

/** Alias (User Manual Name) for CAN_MO36_AMR.
 * To use register names with standard convension, please use CAN_MO36_AMR.
 */
#define CAN_MOAMR36      (CAN_MO36_AMR)

/** \brief  1498, Message Object  Arbitration Register */
#define CAN_MO36_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019498u)

/** Alias (User Manual Name) for CAN_MO36_AR.
 * To use register names with standard convension, please use CAN_MO36_AR.
 */
#define CAN_MOAR36       (CAN_MO36_AR)

/** \brief  149C, Message Object  Control Register */
#define CAN_MO36_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001949Cu)

/** Alias (User Manual Name) for CAN_MO36_CTR.
 * To use register names with standard convension, please use CAN_MO36_CTR.
 */
#define CAN_MOCTR36      (CAN_MO36_CTR)

/** \brief  1494, Message Object  Data Register High */
#define CAN_MO36_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019494u)

/** Alias (User Manual Name) for CAN_MO36_DATAH.
 * To use register names with standard convension, please use CAN_MO36_DATAH.
 */
#define CAN_MODATAH36    (CAN_MO36_DATAH)

/** \brief  1490, Message Object  Data Register Low */
#define CAN_MO36_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019490u)

/** Alias (User Manual Name) for CAN_MO36_DATAL.
 * To use register names with standard convension, please use CAN_MO36_DATAL.
 */
#define CAN_MODATAL36    (CAN_MO36_DATAL)

/** \brief  1480, Message Object  Function Control Register */
#define CAN_MO36_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019480u)

/** Alias (User Manual Name) for CAN_MO36_EDATA0.
 * To use register names with standard convension, please use CAN_MO36_EDATA0.
 */
#define CAN_EMO36DATA0   (CAN_MO36_EDATA0)

/** \brief  1484, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO36_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019484u)

/** Alias (User Manual Name) for CAN_MO36_EDATA1.
 * To use register names with standard convension, please use CAN_MO36_EDATA1.
 */
#define CAN_EMO36DATA1   (CAN_MO36_EDATA1)

/** \brief  1488, Message Object  Interrupt Pointer Register */
#define CAN_MO36_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019488u)

/** Alias (User Manual Name) for CAN_MO36_EDATA2.
 * To use register names with standard convension, please use CAN_MO36_EDATA2.
 */
#define CAN_EMO36DATA2   (CAN_MO36_EDATA2)

/** \brief  148C, Message Object  Acceptance Mask Register */
#define CAN_MO36_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001948Cu)

/** Alias (User Manual Name) for CAN_MO36_EDATA3.
 * To use register names with standard convension, please use CAN_MO36_EDATA3.
 */
#define CAN_EMO36DATA3   (CAN_MO36_EDATA3)

/** \brief  1490, Message Object  Data Register Low */
#define CAN_MO36_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019490u)

/** Alias (User Manual Name) for CAN_MO36_EDATA4.
 * To use register names with standard convension, please use CAN_MO36_EDATA4.
 */
#define CAN_EMO36DATA4   (CAN_MO36_EDATA4)

/** \brief  1494, Message Object  Data Register High */
#define CAN_MO36_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019494u)

/** Alias (User Manual Name) for CAN_MO36_EDATA5.
 * To use register names with standard convension, please use CAN_MO36_EDATA5.
 */
#define CAN_EMO36DATA5   (CAN_MO36_EDATA5)

/** \brief  1498, Message Object  Arbitration Register */
#define CAN_MO36_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019498u)

/** Alias (User Manual Name) for CAN_MO36_EDATA6.
 * To use register names with standard convension, please use CAN_MO36_EDATA6.
 */
#define CAN_EMO36DATA6   (CAN_MO36_EDATA6)

/** \brief  1480, Message Object  Function Control Register */
#define CAN_MO36_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019480u)

/** Alias (User Manual Name) for CAN_MO36_FCR.
 * To use register names with standard convension, please use CAN_MO36_FCR.
 */
#define CAN_MOFCR36      (CAN_MO36_FCR)

/** \brief  1484, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO36_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019484u)

/** Alias (User Manual Name) for CAN_MO36_FGPR.
 * To use register names with standard convension, please use CAN_MO36_FGPR.
 */
#define CAN_MOFGPR36     (CAN_MO36_FGPR)

/** \brief  1488, Message Object  Interrupt Pointer Register */
#define CAN_MO36_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019488u)

/** Alias (User Manual Name) for CAN_MO36_IPR.
 * To use register names with standard convension, please use CAN_MO36_IPR.
 */
#define CAN_MOIPR36      (CAN_MO36_IPR)

/** \brief  149C, Message Object  Control Register */
#define CAN_MO36_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001949Cu)

/** Alias (User Manual Name) for CAN_MO36_STAT.
 * To use register names with standard convension, please use CAN_MO36_STAT.
 */
#define CAN_MOSTAT36     (CAN_MO36_STAT)

/** \brief  14AC, Message Object  Acceptance Mask Register */
#define CAN_MO37_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00194ACu)

/** Alias (User Manual Name) for CAN_MO37_AMR.
 * To use register names with standard convension, please use CAN_MO37_AMR.
 */
#define CAN_MOAMR37      (CAN_MO37_AMR)

/** \brief  14B8, Message Object  Arbitration Register */
#define CAN_MO37_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00194B8u)

/** Alias (User Manual Name) for CAN_MO37_AR.
 * To use register names with standard convension, please use CAN_MO37_AR.
 */
#define CAN_MOAR37       (CAN_MO37_AR)

/** \brief  14BC, Message Object  Control Register */
#define CAN_MO37_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00194BCu)

/** Alias (User Manual Name) for CAN_MO37_CTR.
 * To use register names with standard convension, please use CAN_MO37_CTR.
 */
#define CAN_MOCTR37      (CAN_MO37_CTR)

/** \brief  14B4, Message Object  Data Register High */
#define CAN_MO37_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00194B4u)

/** Alias (User Manual Name) for CAN_MO37_DATAH.
 * To use register names with standard convension, please use CAN_MO37_DATAH.
 */
#define CAN_MODATAH37    (CAN_MO37_DATAH)

/** \brief  14B0, Message Object  Data Register Low */
#define CAN_MO37_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00194B0u)

/** Alias (User Manual Name) for CAN_MO37_DATAL.
 * To use register names with standard convension, please use CAN_MO37_DATAL.
 */
#define CAN_MODATAL37    (CAN_MO37_DATAL)

/** \brief  14A0, Message Object  Function Control Register */
#define CAN_MO37_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00194A0u)

/** Alias (User Manual Name) for CAN_MO37_EDATA0.
 * To use register names with standard convension, please use CAN_MO37_EDATA0.
 */
#define CAN_EMO37DATA0   (CAN_MO37_EDATA0)

/** \brief  14A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO37_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00194A4u)

/** Alias (User Manual Name) for CAN_MO37_EDATA1.
 * To use register names with standard convension, please use CAN_MO37_EDATA1.
 */
#define CAN_EMO37DATA1   (CAN_MO37_EDATA1)

/** \brief  14A8, Message Object  Interrupt Pointer Register */
#define CAN_MO37_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00194A8u)

/** Alias (User Manual Name) for CAN_MO37_EDATA2.
 * To use register names with standard convension, please use CAN_MO37_EDATA2.
 */
#define CAN_EMO37DATA2   (CAN_MO37_EDATA2)

/** \brief  14AC, Message Object  Acceptance Mask Register */
#define CAN_MO37_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00194ACu)

/** Alias (User Manual Name) for CAN_MO37_EDATA3.
 * To use register names with standard convension, please use CAN_MO37_EDATA3.
 */
#define CAN_EMO37DATA3   (CAN_MO37_EDATA3)

/** \brief  14B0, Message Object  Data Register Low */
#define CAN_MO37_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00194B0u)

/** Alias (User Manual Name) for CAN_MO37_EDATA4.
 * To use register names with standard convension, please use CAN_MO37_EDATA4.
 */
#define CAN_EMO37DATA4   (CAN_MO37_EDATA4)

/** \brief  14B4, Message Object  Data Register High */
#define CAN_MO37_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00194B4u)

/** Alias (User Manual Name) for CAN_MO37_EDATA5.
 * To use register names with standard convension, please use CAN_MO37_EDATA5.
 */
#define CAN_EMO37DATA5   (CAN_MO37_EDATA5)

/** \brief  14B8, Message Object  Arbitration Register */
#define CAN_MO37_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00194B8u)

/** Alias (User Manual Name) for CAN_MO37_EDATA6.
 * To use register names with standard convension, please use CAN_MO37_EDATA6.
 */
#define CAN_EMO37DATA6   (CAN_MO37_EDATA6)

/** \brief  14A0, Message Object  Function Control Register */
#define CAN_MO37_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00194A0u)

/** Alias (User Manual Name) for CAN_MO37_FCR.
 * To use register names with standard convension, please use CAN_MO37_FCR.
 */
#define CAN_MOFCR37      (CAN_MO37_FCR)

/** \brief  14A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO37_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00194A4u)

/** Alias (User Manual Name) for CAN_MO37_FGPR.
 * To use register names with standard convension, please use CAN_MO37_FGPR.
 */
#define CAN_MOFGPR37     (CAN_MO37_FGPR)

/** \brief  14A8, Message Object  Interrupt Pointer Register */
#define CAN_MO37_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00194A8u)

/** Alias (User Manual Name) for CAN_MO37_IPR.
 * To use register names with standard convension, please use CAN_MO37_IPR.
 */
#define CAN_MOIPR37      (CAN_MO37_IPR)

/** \brief  14BC, Message Object  Control Register */
#define CAN_MO37_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00194BCu)

/** Alias (User Manual Name) for CAN_MO37_STAT.
 * To use register names with standard convension, please use CAN_MO37_STAT.
 */
#define CAN_MOSTAT37     (CAN_MO37_STAT)

/** \brief  14CC, Message Object  Acceptance Mask Register */
#define CAN_MO38_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00194CCu)

/** Alias (User Manual Name) for CAN_MO38_AMR.
 * To use register names with standard convension, please use CAN_MO38_AMR.
 */
#define CAN_MOAMR38      (CAN_MO38_AMR)

/** \brief  14D8, Message Object  Arbitration Register */
#define CAN_MO38_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00194D8u)

/** Alias (User Manual Name) for CAN_MO38_AR.
 * To use register names with standard convension, please use CAN_MO38_AR.
 */
#define CAN_MOAR38       (CAN_MO38_AR)

/** \brief  14DC, Message Object  Control Register */
#define CAN_MO38_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00194DCu)

/** Alias (User Manual Name) for CAN_MO38_CTR.
 * To use register names with standard convension, please use CAN_MO38_CTR.
 */
#define CAN_MOCTR38      (CAN_MO38_CTR)

/** \brief  14D4, Message Object  Data Register High */
#define CAN_MO38_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00194D4u)

/** Alias (User Manual Name) for CAN_MO38_DATAH.
 * To use register names with standard convension, please use CAN_MO38_DATAH.
 */
#define CAN_MODATAH38    (CAN_MO38_DATAH)

/** \brief  14D0, Message Object  Data Register Low */
#define CAN_MO38_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00194D0u)

/** Alias (User Manual Name) for CAN_MO38_DATAL.
 * To use register names with standard convension, please use CAN_MO38_DATAL.
 */
#define CAN_MODATAL38    (CAN_MO38_DATAL)

/** \brief  14C0, Message Object  Function Control Register */
#define CAN_MO38_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00194C0u)

/** Alias (User Manual Name) for CAN_MO38_EDATA0.
 * To use register names with standard convension, please use CAN_MO38_EDATA0.
 */
#define CAN_EMO38DATA0   (CAN_MO38_EDATA0)

/** \brief  14C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO38_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00194C4u)

/** Alias (User Manual Name) for CAN_MO38_EDATA1.
 * To use register names with standard convension, please use CAN_MO38_EDATA1.
 */
#define CAN_EMO38DATA1   (CAN_MO38_EDATA1)

/** \brief  14C8, Message Object  Interrupt Pointer Register */
#define CAN_MO38_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00194C8u)

/** Alias (User Manual Name) for CAN_MO38_EDATA2.
 * To use register names with standard convension, please use CAN_MO38_EDATA2.
 */
#define CAN_EMO38DATA2   (CAN_MO38_EDATA2)

/** \brief  14CC, Message Object  Acceptance Mask Register */
#define CAN_MO38_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00194CCu)

/** Alias (User Manual Name) for CAN_MO38_EDATA3.
 * To use register names with standard convension, please use CAN_MO38_EDATA3.
 */
#define CAN_EMO38DATA3   (CAN_MO38_EDATA3)

/** \brief  14D0, Message Object  Data Register Low */
#define CAN_MO38_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00194D0u)

/** Alias (User Manual Name) for CAN_MO38_EDATA4.
 * To use register names with standard convension, please use CAN_MO38_EDATA4.
 */
#define CAN_EMO38DATA4   (CAN_MO38_EDATA4)

/** \brief  14D4, Message Object  Data Register High */
#define CAN_MO38_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00194D4u)

/** Alias (User Manual Name) for CAN_MO38_EDATA5.
 * To use register names with standard convension, please use CAN_MO38_EDATA5.
 */
#define CAN_EMO38DATA5   (CAN_MO38_EDATA5)

/** \brief  14D8, Message Object  Arbitration Register */
#define CAN_MO38_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00194D8u)

/** Alias (User Manual Name) for CAN_MO38_EDATA6.
 * To use register names with standard convension, please use CAN_MO38_EDATA6.
 */
#define CAN_EMO38DATA6   (CAN_MO38_EDATA6)

/** \brief  14C0, Message Object  Function Control Register */
#define CAN_MO38_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00194C0u)

/** Alias (User Manual Name) for CAN_MO38_FCR.
 * To use register names with standard convension, please use CAN_MO38_FCR.
 */
#define CAN_MOFCR38      (CAN_MO38_FCR)

/** \brief  14C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO38_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00194C4u)

/** Alias (User Manual Name) for CAN_MO38_FGPR.
 * To use register names with standard convension, please use CAN_MO38_FGPR.
 */
#define CAN_MOFGPR38     (CAN_MO38_FGPR)

/** \brief  14C8, Message Object  Interrupt Pointer Register */
#define CAN_MO38_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00194C8u)

/** Alias (User Manual Name) for CAN_MO38_IPR.
 * To use register names with standard convension, please use CAN_MO38_IPR.
 */
#define CAN_MOIPR38      (CAN_MO38_IPR)

/** \brief  14DC, Message Object  Control Register */
#define CAN_MO38_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00194DCu)

/** Alias (User Manual Name) for CAN_MO38_STAT.
 * To use register names with standard convension, please use CAN_MO38_STAT.
 */
#define CAN_MOSTAT38     (CAN_MO38_STAT)

/** \brief  14EC, Message Object  Acceptance Mask Register */
#define CAN_MO39_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00194ECu)

/** Alias (User Manual Name) for CAN_MO39_AMR.
 * To use register names with standard convension, please use CAN_MO39_AMR.
 */
#define CAN_MOAMR39      (CAN_MO39_AMR)

/** \brief  14F8, Message Object  Arbitration Register */
#define CAN_MO39_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00194F8u)

/** Alias (User Manual Name) for CAN_MO39_AR.
 * To use register names with standard convension, please use CAN_MO39_AR.
 */
#define CAN_MOAR39       (CAN_MO39_AR)

/** \brief  14FC, Message Object  Control Register */
#define CAN_MO39_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00194FCu)

/** Alias (User Manual Name) for CAN_MO39_CTR.
 * To use register names with standard convension, please use CAN_MO39_CTR.
 */
#define CAN_MOCTR39      (CAN_MO39_CTR)

/** \brief  14F4, Message Object  Data Register High */
#define CAN_MO39_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00194F4u)

/** Alias (User Manual Name) for CAN_MO39_DATAH.
 * To use register names with standard convension, please use CAN_MO39_DATAH.
 */
#define CAN_MODATAH39    (CAN_MO39_DATAH)

/** \brief  14F0, Message Object  Data Register Low */
#define CAN_MO39_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00194F0u)

/** Alias (User Manual Name) for CAN_MO39_DATAL.
 * To use register names with standard convension, please use CAN_MO39_DATAL.
 */
#define CAN_MODATAL39    (CAN_MO39_DATAL)

/** \brief  14E0, Message Object  Function Control Register */
#define CAN_MO39_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00194E0u)

/** Alias (User Manual Name) for CAN_MO39_EDATA0.
 * To use register names with standard convension, please use CAN_MO39_EDATA0.
 */
#define CAN_EMO39DATA0   (CAN_MO39_EDATA0)

/** \brief  14E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO39_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00194E4u)

/** Alias (User Manual Name) for CAN_MO39_EDATA1.
 * To use register names with standard convension, please use CAN_MO39_EDATA1.
 */
#define CAN_EMO39DATA1   (CAN_MO39_EDATA1)

/** \brief  14E8, Message Object  Interrupt Pointer Register */
#define CAN_MO39_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00194E8u)

/** Alias (User Manual Name) for CAN_MO39_EDATA2.
 * To use register names with standard convension, please use CAN_MO39_EDATA2.
 */
#define CAN_EMO39DATA2   (CAN_MO39_EDATA2)

/** \brief  14EC, Message Object  Acceptance Mask Register */
#define CAN_MO39_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00194ECu)

/** Alias (User Manual Name) for CAN_MO39_EDATA3.
 * To use register names with standard convension, please use CAN_MO39_EDATA3.
 */
#define CAN_EMO39DATA3   (CAN_MO39_EDATA3)

/** \brief  14F0, Message Object  Data Register Low */
#define CAN_MO39_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00194F0u)

/** Alias (User Manual Name) for CAN_MO39_EDATA4.
 * To use register names with standard convension, please use CAN_MO39_EDATA4.
 */
#define CAN_EMO39DATA4   (CAN_MO39_EDATA4)

/** \brief  14F4, Message Object  Data Register High */
#define CAN_MO39_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00194F4u)

/** Alias (User Manual Name) for CAN_MO39_EDATA5.
 * To use register names with standard convension, please use CAN_MO39_EDATA5.
 */
#define CAN_EMO39DATA5   (CAN_MO39_EDATA5)

/** \brief  14F8, Message Object  Arbitration Register */
#define CAN_MO39_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00194F8u)

/** Alias (User Manual Name) for CAN_MO39_EDATA6.
 * To use register names with standard convension, please use CAN_MO39_EDATA6.
 */
#define CAN_EMO39DATA6   (CAN_MO39_EDATA6)

/** \brief  14E0, Message Object  Function Control Register */
#define CAN_MO39_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00194E0u)

/** Alias (User Manual Name) for CAN_MO39_FCR.
 * To use register names with standard convension, please use CAN_MO39_FCR.
 */
#define CAN_MOFCR39      (CAN_MO39_FCR)

/** \brief  14E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO39_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00194E4u)

/** Alias (User Manual Name) for CAN_MO39_FGPR.
 * To use register names with standard convension, please use CAN_MO39_FGPR.
 */
#define CAN_MOFGPR39     (CAN_MO39_FGPR)

/** \brief  14E8, Message Object  Interrupt Pointer Register */
#define CAN_MO39_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00194E8u)

/** Alias (User Manual Name) for CAN_MO39_IPR.
 * To use register names with standard convension, please use CAN_MO39_IPR.
 */
#define CAN_MOIPR39      (CAN_MO39_IPR)

/** \brief  14FC, Message Object  Control Register */
#define CAN_MO39_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00194FCu)

/** Alias (User Manual Name) for CAN_MO39_STAT.
 * To use register names with standard convension, please use CAN_MO39_STAT.
 */
#define CAN_MOSTAT39     (CAN_MO39_STAT)

/** \brief  106C, Message Object  Acceptance Mask Register */
#define CAN_MO3_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001906Cu)

/** Alias (User Manual Name) for CAN_MO3_AMR.
 * To use register names with standard convension, please use CAN_MO3_AMR.
 */
#define CAN_MOAMR3       (CAN_MO3_AMR)

/** \brief  1078, Message Object  Arbitration Register */
#define CAN_MO3_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019078u)

/** Alias (User Manual Name) for CAN_MO3_AR.
 * To use register names with standard convension, please use CAN_MO3_AR.
 */
#define CAN_MOAR3        (CAN_MO3_AR)

/** \brief  107C, Message Object  Control Register */
#define CAN_MO3_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001907Cu)

/** Alias (User Manual Name) for CAN_MO3_CTR.
 * To use register names with standard convension, please use CAN_MO3_CTR.
 */
#define CAN_MOCTR3       (CAN_MO3_CTR)

/** \brief  1074, Message Object  Data Register High */
#define CAN_MO3_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019074u)

/** Alias (User Manual Name) for CAN_MO3_DATAH.
 * To use register names with standard convension, please use CAN_MO3_DATAH.
 */
#define CAN_MODATAH3     (CAN_MO3_DATAH)

/** \brief  1070, Message Object  Data Register Low */
#define CAN_MO3_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019070u)

/** Alias (User Manual Name) for CAN_MO3_DATAL.
 * To use register names with standard convension, please use CAN_MO3_DATAL.
 */
#define CAN_MODATAL3     (CAN_MO3_DATAL)

/** \brief  1060, Message Object  Function Control Register */
#define CAN_MO3_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019060u)

/** Alias (User Manual Name) for CAN_MO3_EDATA0.
 * To use register names with standard convension, please use CAN_MO3_EDATA0.
 */
#define CAN_EMO3DATA0    (CAN_MO3_EDATA0)

/** \brief  1064, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO3_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019064u)

/** Alias (User Manual Name) for CAN_MO3_EDATA1.
 * To use register names with standard convension, please use CAN_MO3_EDATA1.
 */
#define CAN_EMO3DATA1    (CAN_MO3_EDATA1)

/** \brief  1068, Message Object  Interrupt Pointer Register */
#define CAN_MO3_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019068u)

/** Alias (User Manual Name) for CAN_MO3_EDATA2.
 * To use register names with standard convension, please use CAN_MO3_EDATA2.
 */
#define CAN_EMO3DATA2    (CAN_MO3_EDATA2)

/** \brief  106C, Message Object  Acceptance Mask Register */
#define CAN_MO3_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001906Cu)

/** Alias (User Manual Name) for CAN_MO3_EDATA3.
 * To use register names with standard convension, please use CAN_MO3_EDATA3.
 */
#define CAN_EMO3DATA3    (CAN_MO3_EDATA3)

/** \brief  1070, Message Object  Data Register Low */
#define CAN_MO3_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019070u)

/** Alias (User Manual Name) for CAN_MO3_EDATA4.
 * To use register names with standard convension, please use CAN_MO3_EDATA4.
 */
#define CAN_EMO3DATA4    (CAN_MO3_EDATA4)

/** \brief  1074, Message Object  Data Register High */
#define CAN_MO3_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019074u)

/** Alias (User Manual Name) for CAN_MO3_EDATA5.
 * To use register names with standard convension, please use CAN_MO3_EDATA5.
 */
#define CAN_EMO3DATA5    (CAN_MO3_EDATA5)

/** \brief  1078, Message Object  Arbitration Register */
#define CAN_MO3_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019078u)

/** Alias (User Manual Name) for CAN_MO3_EDATA6.
 * To use register names with standard convension, please use CAN_MO3_EDATA6.
 */
#define CAN_EMO3DATA6    (CAN_MO3_EDATA6)

/** \brief  1060, Message Object  Function Control Register */
#define CAN_MO3_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019060u)

/** Alias (User Manual Name) for CAN_MO3_FCR.
 * To use register names with standard convension, please use CAN_MO3_FCR.
 */
#define CAN_MOFCR3       (CAN_MO3_FCR)

/** \brief  1064, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO3_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019064u)

/** Alias (User Manual Name) for CAN_MO3_FGPR.
 * To use register names with standard convension, please use CAN_MO3_FGPR.
 */
#define CAN_MOFGPR3      (CAN_MO3_FGPR)

/** \brief  1068, Message Object  Interrupt Pointer Register */
#define CAN_MO3_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019068u)

/** Alias (User Manual Name) for CAN_MO3_IPR.
 * To use register names with standard convension, please use CAN_MO3_IPR.
 */
#define CAN_MOIPR3       (CAN_MO3_IPR)

/** \brief  107C, Message Object  Control Register */
#define CAN_MO3_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001907Cu)

/** Alias (User Manual Name) for CAN_MO3_STAT.
 * To use register names with standard convension, please use CAN_MO3_STAT.
 */
#define CAN_MOSTAT3      (CAN_MO3_STAT)

/** \brief  150C, Message Object  Acceptance Mask Register */
#define CAN_MO40_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001950Cu)

/** Alias (User Manual Name) for CAN_MO40_AMR.
 * To use register names with standard convension, please use CAN_MO40_AMR.
 */
#define CAN_MOAMR40      (CAN_MO40_AMR)

/** \brief  1518, Message Object  Arbitration Register */
#define CAN_MO40_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019518u)

/** Alias (User Manual Name) for CAN_MO40_AR.
 * To use register names with standard convension, please use CAN_MO40_AR.
 */
#define CAN_MOAR40       (CAN_MO40_AR)

/** \brief  151C, Message Object  Control Register */
#define CAN_MO40_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001951Cu)

/** Alias (User Manual Name) for CAN_MO40_CTR.
 * To use register names with standard convension, please use CAN_MO40_CTR.
 */
#define CAN_MOCTR40      (CAN_MO40_CTR)

/** \brief  1514, Message Object  Data Register High */
#define CAN_MO40_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019514u)

/** Alias (User Manual Name) for CAN_MO40_DATAH.
 * To use register names with standard convension, please use CAN_MO40_DATAH.
 */
#define CAN_MODATAH40    (CAN_MO40_DATAH)

/** \brief  1510, Message Object  Data Register Low */
#define CAN_MO40_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019510u)

/** Alias (User Manual Name) for CAN_MO40_DATAL.
 * To use register names with standard convension, please use CAN_MO40_DATAL.
 */
#define CAN_MODATAL40    (CAN_MO40_DATAL)

/** \brief  1500, Message Object  Function Control Register */
#define CAN_MO40_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019500u)

/** Alias (User Manual Name) for CAN_MO40_EDATA0.
 * To use register names with standard convension, please use CAN_MO40_EDATA0.
 */
#define CAN_EMO40DATA0   (CAN_MO40_EDATA0)

/** \brief  1504, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO40_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019504u)

/** Alias (User Manual Name) for CAN_MO40_EDATA1.
 * To use register names with standard convension, please use CAN_MO40_EDATA1.
 */
#define CAN_EMO40DATA1   (CAN_MO40_EDATA1)

/** \brief  1508, Message Object  Interrupt Pointer Register */
#define CAN_MO40_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019508u)

/** Alias (User Manual Name) for CAN_MO40_EDATA2.
 * To use register names with standard convension, please use CAN_MO40_EDATA2.
 */
#define CAN_EMO40DATA2   (CAN_MO40_EDATA2)

/** \brief  150C, Message Object  Acceptance Mask Register */
#define CAN_MO40_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001950Cu)

/** Alias (User Manual Name) for CAN_MO40_EDATA3.
 * To use register names with standard convension, please use CAN_MO40_EDATA3.
 */
#define CAN_EMO40DATA3   (CAN_MO40_EDATA3)

/** \brief  1510, Message Object  Data Register Low */
#define CAN_MO40_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019510u)

/** Alias (User Manual Name) for CAN_MO40_EDATA4.
 * To use register names with standard convension, please use CAN_MO40_EDATA4.
 */
#define CAN_EMO40DATA4   (CAN_MO40_EDATA4)

/** \brief  1514, Message Object  Data Register High */
#define CAN_MO40_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019514u)

/** Alias (User Manual Name) for CAN_MO40_EDATA5.
 * To use register names with standard convension, please use CAN_MO40_EDATA5.
 */
#define CAN_EMO40DATA5   (CAN_MO40_EDATA5)

/** \brief  1518, Message Object  Arbitration Register */
#define CAN_MO40_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019518u)

/** Alias (User Manual Name) for CAN_MO40_EDATA6.
 * To use register names with standard convension, please use CAN_MO40_EDATA6.
 */
#define CAN_EMO40DATA6   (CAN_MO40_EDATA6)

/** \brief  1500, Message Object  Function Control Register */
#define CAN_MO40_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019500u)

/** Alias (User Manual Name) for CAN_MO40_FCR.
 * To use register names with standard convension, please use CAN_MO40_FCR.
 */
#define CAN_MOFCR40      (CAN_MO40_FCR)

/** \brief  1504, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO40_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019504u)

/** Alias (User Manual Name) for CAN_MO40_FGPR.
 * To use register names with standard convension, please use CAN_MO40_FGPR.
 */
#define CAN_MOFGPR40     (CAN_MO40_FGPR)

/** \brief  1508, Message Object  Interrupt Pointer Register */
#define CAN_MO40_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019508u)

/** Alias (User Manual Name) for CAN_MO40_IPR.
 * To use register names with standard convension, please use CAN_MO40_IPR.
 */
#define CAN_MOIPR40      (CAN_MO40_IPR)

/** \brief  151C, Message Object  Control Register */
#define CAN_MO40_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001951Cu)

/** Alias (User Manual Name) for CAN_MO40_STAT.
 * To use register names with standard convension, please use CAN_MO40_STAT.
 */
#define CAN_MOSTAT40     (CAN_MO40_STAT)

/** \brief  152C, Message Object  Acceptance Mask Register */
#define CAN_MO41_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001952Cu)

/** Alias (User Manual Name) for CAN_MO41_AMR.
 * To use register names with standard convension, please use CAN_MO41_AMR.
 */
#define CAN_MOAMR41      (CAN_MO41_AMR)

/** \brief  1538, Message Object  Arbitration Register */
#define CAN_MO41_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019538u)

/** Alias (User Manual Name) for CAN_MO41_AR.
 * To use register names with standard convension, please use CAN_MO41_AR.
 */
#define CAN_MOAR41       (CAN_MO41_AR)

/** \brief  153C, Message Object  Control Register */
#define CAN_MO41_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001953Cu)

/** Alias (User Manual Name) for CAN_MO41_CTR.
 * To use register names with standard convension, please use CAN_MO41_CTR.
 */
#define CAN_MOCTR41      (CAN_MO41_CTR)

/** \brief  1534, Message Object  Data Register High */
#define CAN_MO41_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019534u)

/** Alias (User Manual Name) for CAN_MO41_DATAH.
 * To use register names with standard convension, please use CAN_MO41_DATAH.
 */
#define CAN_MODATAH41    (CAN_MO41_DATAH)

/** \brief  1530, Message Object  Data Register Low */
#define CAN_MO41_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019530u)

/** Alias (User Manual Name) for CAN_MO41_DATAL.
 * To use register names with standard convension, please use CAN_MO41_DATAL.
 */
#define CAN_MODATAL41    (CAN_MO41_DATAL)

/** \brief  1520, Message Object  Function Control Register */
#define CAN_MO41_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019520u)

/** Alias (User Manual Name) for CAN_MO41_EDATA0.
 * To use register names with standard convension, please use CAN_MO41_EDATA0.
 */
#define CAN_EMO41DATA0   (CAN_MO41_EDATA0)

/** \brief  1524, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO41_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019524u)

/** Alias (User Manual Name) for CAN_MO41_EDATA1.
 * To use register names with standard convension, please use CAN_MO41_EDATA1.
 */
#define CAN_EMO41DATA1   (CAN_MO41_EDATA1)

/** \brief  1528, Message Object  Interrupt Pointer Register */
#define CAN_MO41_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019528u)

/** Alias (User Manual Name) for CAN_MO41_EDATA2.
 * To use register names with standard convension, please use CAN_MO41_EDATA2.
 */
#define CAN_EMO41DATA2   (CAN_MO41_EDATA2)

/** \brief  152C, Message Object  Acceptance Mask Register */
#define CAN_MO41_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001952Cu)

/** Alias (User Manual Name) for CAN_MO41_EDATA3.
 * To use register names with standard convension, please use CAN_MO41_EDATA3.
 */
#define CAN_EMO41DATA3   (CAN_MO41_EDATA3)

/** \brief  1530, Message Object  Data Register Low */
#define CAN_MO41_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019530u)

/** Alias (User Manual Name) for CAN_MO41_EDATA4.
 * To use register names with standard convension, please use CAN_MO41_EDATA4.
 */
#define CAN_EMO41DATA4   (CAN_MO41_EDATA4)

/** \brief  1534, Message Object  Data Register High */
#define CAN_MO41_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019534u)

/** Alias (User Manual Name) for CAN_MO41_EDATA5.
 * To use register names with standard convension, please use CAN_MO41_EDATA5.
 */
#define CAN_EMO41DATA5   (CAN_MO41_EDATA5)

/** \brief  1538, Message Object  Arbitration Register */
#define CAN_MO41_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019538u)

/** Alias (User Manual Name) for CAN_MO41_EDATA6.
 * To use register names with standard convension, please use CAN_MO41_EDATA6.
 */
#define CAN_EMO41DATA6   (CAN_MO41_EDATA6)

/** \brief  1520, Message Object  Function Control Register */
#define CAN_MO41_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019520u)

/** Alias (User Manual Name) for CAN_MO41_FCR.
 * To use register names with standard convension, please use CAN_MO41_FCR.
 */
#define CAN_MOFCR41      (CAN_MO41_FCR)

/** \brief  1524, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO41_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019524u)

/** Alias (User Manual Name) for CAN_MO41_FGPR.
 * To use register names with standard convension, please use CAN_MO41_FGPR.
 */
#define CAN_MOFGPR41     (CAN_MO41_FGPR)

/** \brief  1528, Message Object  Interrupt Pointer Register */
#define CAN_MO41_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019528u)

/** Alias (User Manual Name) for CAN_MO41_IPR.
 * To use register names with standard convension, please use CAN_MO41_IPR.
 */
#define CAN_MOIPR41      (CAN_MO41_IPR)

/** \brief  153C, Message Object  Control Register */
#define CAN_MO41_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001953Cu)

/** Alias (User Manual Name) for CAN_MO41_STAT.
 * To use register names with standard convension, please use CAN_MO41_STAT.
 */
#define CAN_MOSTAT41     (CAN_MO41_STAT)

/** \brief  154C, Message Object  Acceptance Mask Register */
#define CAN_MO42_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001954Cu)

/** Alias (User Manual Name) for CAN_MO42_AMR.
 * To use register names with standard convension, please use CAN_MO42_AMR.
 */
#define CAN_MOAMR42      (CAN_MO42_AMR)

/** \brief  1558, Message Object  Arbitration Register */
#define CAN_MO42_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019558u)

/** Alias (User Manual Name) for CAN_MO42_AR.
 * To use register names with standard convension, please use CAN_MO42_AR.
 */
#define CAN_MOAR42       (CAN_MO42_AR)

/** \brief  155C, Message Object  Control Register */
#define CAN_MO42_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001955Cu)

/** Alias (User Manual Name) for CAN_MO42_CTR.
 * To use register names with standard convension, please use CAN_MO42_CTR.
 */
#define CAN_MOCTR42      (CAN_MO42_CTR)

/** \brief  1554, Message Object  Data Register High */
#define CAN_MO42_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019554u)

/** Alias (User Manual Name) for CAN_MO42_DATAH.
 * To use register names with standard convension, please use CAN_MO42_DATAH.
 */
#define CAN_MODATAH42    (CAN_MO42_DATAH)

/** \brief  1550, Message Object  Data Register Low */
#define CAN_MO42_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019550u)

/** Alias (User Manual Name) for CAN_MO42_DATAL.
 * To use register names with standard convension, please use CAN_MO42_DATAL.
 */
#define CAN_MODATAL42    (CAN_MO42_DATAL)

/** \brief  1540, Message Object  Function Control Register */
#define CAN_MO42_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019540u)

/** Alias (User Manual Name) for CAN_MO42_EDATA0.
 * To use register names with standard convension, please use CAN_MO42_EDATA0.
 */
#define CAN_EMO42DATA0   (CAN_MO42_EDATA0)

/** \brief  1544, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO42_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019544u)

/** Alias (User Manual Name) for CAN_MO42_EDATA1.
 * To use register names with standard convension, please use CAN_MO42_EDATA1.
 */
#define CAN_EMO42DATA1   (CAN_MO42_EDATA1)

/** \brief  1548, Message Object  Interrupt Pointer Register */
#define CAN_MO42_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019548u)

/** Alias (User Manual Name) for CAN_MO42_EDATA2.
 * To use register names with standard convension, please use CAN_MO42_EDATA2.
 */
#define CAN_EMO42DATA2   (CAN_MO42_EDATA2)

/** \brief  154C, Message Object  Acceptance Mask Register */
#define CAN_MO42_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001954Cu)

/** Alias (User Manual Name) for CAN_MO42_EDATA3.
 * To use register names with standard convension, please use CAN_MO42_EDATA3.
 */
#define CAN_EMO42DATA3   (CAN_MO42_EDATA3)

/** \brief  1550, Message Object  Data Register Low */
#define CAN_MO42_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019550u)

/** Alias (User Manual Name) for CAN_MO42_EDATA4.
 * To use register names with standard convension, please use CAN_MO42_EDATA4.
 */
#define CAN_EMO42DATA4   (CAN_MO42_EDATA4)

/** \brief  1554, Message Object  Data Register High */
#define CAN_MO42_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019554u)

/** Alias (User Manual Name) for CAN_MO42_EDATA5.
 * To use register names with standard convension, please use CAN_MO42_EDATA5.
 */
#define CAN_EMO42DATA5   (CAN_MO42_EDATA5)

/** \brief  1558, Message Object  Arbitration Register */
#define CAN_MO42_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019558u)

/** Alias (User Manual Name) for CAN_MO42_EDATA6.
 * To use register names with standard convension, please use CAN_MO42_EDATA6.
 */
#define CAN_EMO42DATA6   (CAN_MO42_EDATA6)

/** \brief  1540, Message Object  Function Control Register */
#define CAN_MO42_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019540u)

/** Alias (User Manual Name) for CAN_MO42_FCR.
 * To use register names with standard convension, please use CAN_MO42_FCR.
 */
#define CAN_MOFCR42      (CAN_MO42_FCR)

/** \brief  1544, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO42_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019544u)

/** Alias (User Manual Name) for CAN_MO42_FGPR.
 * To use register names with standard convension, please use CAN_MO42_FGPR.
 */
#define CAN_MOFGPR42     (CAN_MO42_FGPR)

/** \brief  1548, Message Object  Interrupt Pointer Register */
#define CAN_MO42_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019548u)

/** Alias (User Manual Name) for CAN_MO42_IPR.
 * To use register names with standard convension, please use CAN_MO42_IPR.
 */
#define CAN_MOIPR42      (CAN_MO42_IPR)

/** \brief  155C, Message Object  Control Register */
#define CAN_MO42_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001955Cu)

/** Alias (User Manual Name) for CAN_MO42_STAT.
 * To use register names with standard convension, please use CAN_MO42_STAT.
 */
#define CAN_MOSTAT42     (CAN_MO42_STAT)

/** \brief  156C, Message Object  Acceptance Mask Register */
#define CAN_MO43_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001956Cu)

/** Alias (User Manual Name) for CAN_MO43_AMR.
 * To use register names with standard convension, please use CAN_MO43_AMR.
 */
#define CAN_MOAMR43      (CAN_MO43_AMR)

/** \brief  1578, Message Object  Arbitration Register */
#define CAN_MO43_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019578u)

/** Alias (User Manual Name) for CAN_MO43_AR.
 * To use register names with standard convension, please use CAN_MO43_AR.
 */
#define CAN_MOAR43       (CAN_MO43_AR)

/** \brief  157C, Message Object  Control Register */
#define CAN_MO43_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001957Cu)

/** Alias (User Manual Name) for CAN_MO43_CTR.
 * To use register names with standard convension, please use CAN_MO43_CTR.
 */
#define CAN_MOCTR43      (CAN_MO43_CTR)

/** \brief  1574, Message Object  Data Register High */
#define CAN_MO43_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019574u)

/** Alias (User Manual Name) for CAN_MO43_DATAH.
 * To use register names with standard convension, please use CAN_MO43_DATAH.
 */
#define CAN_MODATAH43    (CAN_MO43_DATAH)

/** \brief  1570, Message Object  Data Register Low */
#define CAN_MO43_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019570u)

/** Alias (User Manual Name) for CAN_MO43_DATAL.
 * To use register names with standard convension, please use CAN_MO43_DATAL.
 */
#define CAN_MODATAL43    (CAN_MO43_DATAL)

/** \brief  1560, Message Object  Function Control Register */
#define CAN_MO43_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019560u)

/** Alias (User Manual Name) for CAN_MO43_EDATA0.
 * To use register names with standard convension, please use CAN_MO43_EDATA0.
 */
#define CAN_EMO43DATA0   (CAN_MO43_EDATA0)

/** \brief  1564, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO43_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019564u)

/** Alias (User Manual Name) for CAN_MO43_EDATA1.
 * To use register names with standard convension, please use CAN_MO43_EDATA1.
 */
#define CAN_EMO43DATA1   (CAN_MO43_EDATA1)

/** \brief  1568, Message Object  Interrupt Pointer Register */
#define CAN_MO43_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019568u)

/** Alias (User Manual Name) for CAN_MO43_EDATA2.
 * To use register names with standard convension, please use CAN_MO43_EDATA2.
 */
#define CAN_EMO43DATA2   (CAN_MO43_EDATA2)

/** \brief  156C, Message Object  Acceptance Mask Register */
#define CAN_MO43_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001956Cu)

/** Alias (User Manual Name) for CAN_MO43_EDATA3.
 * To use register names with standard convension, please use CAN_MO43_EDATA3.
 */
#define CAN_EMO43DATA3   (CAN_MO43_EDATA3)

/** \brief  1570, Message Object  Data Register Low */
#define CAN_MO43_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019570u)

/** Alias (User Manual Name) for CAN_MO43_EDATA4.
 * To use register names with standard convension, please use CAN_MO43_EDATA4.
 */
#define CAN_EMO43DATA4   (CAN_MO43_EDATA4)

/** \brief  1574, Message Object  Data Register High */
#define CAN_MO43_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019574u)

/** Alias (User Manual Name) for CAN_MO43_EDATA5.
 * To use register names with standard convension, please use CAN_MO43_EDATA5.
 */
#define CAN_EMO43DATA5   (CAN_MO43_EDATA5)

/** \brief  1578, Message Object  Arbitration Register */
#define CAN_MO43_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019578u)

/** Alias (User Manual Name) for CAN_MO43_EDATA6.
 * To use register names with standard convension, please use CAN_MO43_EDATA6.
 */
#define CAN_EMO43DATA6   (CAN_MO43_EDATA6)

/** \brief  1560, Message Object  Function Control Register */
#define CAN_MO43_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019560u)

/** Alias (User Manual Name) for CAN_MO43_FCR.
 * To use register names with standard convension, please use CAN_MO43_FCR.
 */
#define CAN_MOFCR43      (CAN_MO43_FCR)

/** \brief  1564, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO43_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019564u)

/** Alias (User Manual Name) for CAN_MO43_FGPR.
 * To use register names with standard convension, please use CAN_MO43_FGPR.
 */
#define CAN_MOFGPR43     (CAN_MO43_FGPR)

/** \brief  1568, Message Object  Interrupt Pointer Register */
#define CAN_MO43_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019568u)

/** Alias (User Manual Name) for CAN_MO43_IPR.
 * To use register names with standard convension, please use CAN_MO43_IPR.
 */
#define CAN_MOIPR43      (CAN_MO43_IPR)

/** \brief  157C, Message Object  Control Register */
#define CAN_MO43_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001957Cu)

/** Alias (User Manual Name) for CAN_MO43_STAT.
 * To use register names with standard convension, please use CAN_MO43_STAT.
 */
#define CAN_MOSTAT43     (CAN_MO43_STAT)

/** \brief  158C, Message Object  Acceptance Mask Register */
#define CAN_MO44_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001958Cu)

/** Alias (User Manual Name) for CAN_MO44_AMR.
 * To use register names with standard convension, please use CAN_MO44_AMR.
 */
#define CAN_MOAMR44      (CAN_MO44_AMR)

/** \brief  1598, Message Object  Arbitration Register */
#define CAN_MO44_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019598u)

/** Alias (User Manual Name) for CAN_MO44_AR.
 * To use register names with standard convension, please use CAN_MO44_AR.
 */
#define CAN_MOAR44       (CAN_MO44_AR)

/** \brief  159C, Message Object  Control Register */
#define CAN_MO44_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001959Cu)

/** Alias (User Manual Name) for CAN_MO44_CTR.
 * To use register names with standard convension, please use CAN_MO44_CTR.
 */
#define CAN_MOCTR44      (CAN_MO44_CTR)

/** \brief  1594, Message Object  Data Register High */
#define CAN_MO44_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019594u)

/** Alias (User Manual Name) for CAN_MO44_DATAH.
 * To use register names with standard convension, please use CAN_MO44_DATAH.
 */
#define CAN_MODATAH44    (CAN_MO44_DATAH)

/** \brief  1590, Message Object  Data Register Low */
#define CAN_MO44_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019590u)

/** Alias (User Manual Name) for CAN_MO44_DATAL.
 * To use register names with standard convension, please use CAN_MO44_DATAL.
 */
#define CAN_MODATAL44    (CAN_MO44_DATAL)

/** \brief  1580, Message Object  Function Control Register */
#define CAN_MO44_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019580u)

/** Alias (User Manual Name) for CAN_MO44_EDATA0.
 * To use register names with standard convension, please use CAN_MO44_EDATA0.
 */
#define CAN_EMO44DATA0   (CAN_MO44_EDATA0)

/** \brief  1584, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO44_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019584u)

/** Alias (User Manual Name) for CAN_MO44_EDATA1.
 * To use register names with standard convension, please use CAN_MO44_EDATA1.
 */
#define CAN_EMO44DATA1   (CAN_MO44_EDATA1)

/** \brief  1588, Message Object  Interrupt Pointer Register */
#define CAN_MO44_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019588u)

/** Alias (User Manual Name) for CAN_MO44_EDATA2.
 * To use register names with standard convension, please use CAN_MO44_EDATA2.
 */
#define CAN_EMO44DATA2   (CAN_MO44_EDATA2)

/** \brief  158C, Message Object  Acceptance Mask Register */
#define CAN_MO44_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001958Cu)

/** Alias (User Manual Name) for CAN_MO44_EDATA3.
 * To use register names with standard convension, please use CAN_MO44_EDATA3.
 */
#define CAN_EMO44DATA3   (CAN_MO44_EDATA3)

/** \brief  1590, Message Object  Data Register Low */
#define CAN_MO44_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019590u)

/** Alias (User Manual Name) for CAN_MO44_EDATA4.
 * To use register names with standard convension, please use CAN_MO44_EDATA4.
 */
#define CAN_EMO44DATA4   (CAN_MO44_EDATA4)

/** \brief  1594, Message Object  Data Register High */
#define CAN_MO44_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019594u)

/** Alias (User Manual Name) for CAN_MO44_EDATA5.
 * To use register names with standard convension, please use CAN_MO44_EDATA5.
 */
#define CAN_EMO44DATA5   (CAN_MO44_EDATA5)

/** \brief  1598, Message Object  Arbitration Register */
#define CAN_MO44_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019598u)

/** Alias (User Manual Name) for CAN_MO44_EDATA6.
 * To use register names with standard convension, please use CAN_MO44_EDATA6.
 */
#define CAN_EMO44DATA6   (CAN_MO44_EDATA6)

/** \brief  1580, Message Object  Function Control Register */
#define CAN_MO44_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019580u)

/** Alias (User Manual Name) for CAN_MO44_FCR.
 * To use register names with standard convension, please use CAN_MO44_FCR.
 */
#define CAN_MOFCR44      (CAN_MO44_FCR)

/** \brief  1584, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO44_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019584u)

/** Alias (User Manual Name) for CAN_MO44_FGPR.
 * To use register names with standard convension, please use CAN_MO44_FGPR.
 */
#define CAN_MOFGPR44     (CAN_MO44_FGPR)

/** \brief  1588, Message Object  Interrupt Pointer Register */
#define CAN_MO44_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019588u)

/** Alias (User Manual Name) for CAN_MO44_IPR.
 * To use register names with standard convension, please use CAN_MO44_IPR.
 */
#define CAN_MOIPR44      (CAN_MO44_IPR)

/** \brief  159C, Message Object  Control Register */
#define CAN_MO44_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001959Cu)

/** Alias (User Manual Name) for CAN_MO44_STAT.
 * To use register names with standard convension, please use CAN_MO44_STAT.
 */
#define CAN_MOSTAT44     (CAN_MO44_STAT)

/** \brief  15AC, Message Object  Acceptance Mask Register */
#define CAN_MO45_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00195ACu)

/** Alias (User Manual Name) for CAN_MO45_AMR.
 * To use register names with standard convension, please use CAN_MO45_AMR.
 */
#define CAN_MOAMR45      (CAN_MO45_AMR)

/** \brief  15B8, Message Object  Arbitration Register */
#define CAN_MO45_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00195B8u)

/** Alias (User Manual Name) for CAN_MO45_AR.
 * To use register names with standard convension, please use CAN_MO45_AR.
 */
#define CAN_MOAR45       (CAN_MO45_AR)

/** \brief  15BC, Message Object  Control Register */
#define CAN_MO45_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00195BCu)

/** Alias (User Manual Name) for CAN_MO45_CTR.
 * To use register names with standard convension, please use CAN_MO45_CTR.
 */
#define CAN_MOCTR45      (CAN_MO45_CTR)

/** \brief  15B4, Message Object  Data Register High */
#define CAN_MO45_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00195B4u)

/** Alias (User Manual Name) for CAN_MO45_DATAH.
 * To use register names with standard convension, please use CAN_MO45_DATAH.
 */
#define CAN_MODATAH45    (CAN_MO45_DATAH)

/** \brief  15B0, Message Object  Data Register Low */
#define CAN_MO45_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00195B0u)

/** Alias (User Manual Name) for CAN_MO45_DATAL.
 * To use register names with standard convension, please use CAN_MO45_DATAL.
 */
#define CAN_MODATAL45    (CAN_MO45_DATAL)

/** \brief  15A0, Message Object  Function Control Register */
#define CAN_MO45_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00195A0u)

/** Alias (User Manual Name) for CAN_MO45_EDATA0.
 * To use register names with standard convension, please use CAN_MO45_EDATA0.
 */
#define CAN_EMO45DATA0   (CAN_MO45_EDATA0)

/** \brief  15A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO45_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00195A4u)

/** Alias (User Manual Name) for CAN_MO45_EDATA1.
 * To use register names with standard convension, please use CAN_MO45_EDATA1.
 */
#define CAN_EMO45DATA1   (CAN_MO45_EDATA1)

/** \brief  15A8, Message Object  Interrupt Pointer Register */
#define CAN_MO45_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00195A8u)

/** Alias (User Manual Name) for CAN_MO45_EDATA2.
 * To use register names with standard convension, please use CAN_MO45_EDATA2.
 */
#define CAN_EMO45DATA2   (CAN_MO45_EDATA2)

/** \brief  15AC, Message Object  Acceptance Mask Register */
#define CAN_MO45_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00195ACu)

/** Alias (User Manual Name) for CAN_MO45_EDATA3.
 * To use register names with standard convension, please use CAN_MO45_EDATA3.
 */
#define CAN_EMO45DATA3   (CAN_MO45_EDATA3)

/** \brief  15B0, Message Object  Data Register Low */
#define CAN_MO45_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00195B0u)

/** Alias (User Manual Name) for CAN_MO45_EDATA4.
 * To use register names with standard convension, please use CAN_MO45_EDATA4.
 */
#define CAN_EMO45DATA4   (CAN_MO45_EDATA4)

/** \brief  15B4, Message Object  Data Register High */
#define CAN_MO45_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00195B4u)

/** Alias (User Manual Name) for CAN_MO45_EDATA5.
 * To use register names with standard convension, please use CAN_MO45_EDATA5.
 */
#define CAN_EMO45DATA5   (CAN_MO45_EDATA5)

/** \brief  15B8, Message Object  Arbitration Register */
#define CAN_MO45_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00195B8u)

/** Alias (User Manual Name) for CAN_MO45_EDATA6.
 * To use register names with standard convension, please use CAN_MO45_EDATA6.
 */
#define CAN_EMO45DATA6   (CAN_MO45_EDATA6)

/** \brief  15A0, Message Object  Function Control Register */
#define CAN_MO45_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00195A0u)

/** Alias (User Manual Name) for CAN_MO45_FCR.
 * To use register names with standard convension, please use CAN_MO45_FCR.
 */
#define CAN_MOFCR45      (CAN_MO45_FCR)

/** \brief  15A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO45_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00195A4u)

/** Alias (User Manual Name) for CAN_MO45_FGPR.
 * To use register names with standard convension, please use CAN_MO45_FGPR.
 */
#define CAN_MOFGPR45     (CAN_MO45_FGPR)

/** \brief  15A8, Message Object  Interrupt Pointer Register */
#define CAN_MO45_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00195A8u)

/** Alias (User Manual Name) for CAN_MO45_IPR.
 * To use register names with standard convension, please use CAN_MO45_IPR.
 */
#define CAN_MOIPR45      (CAN_MO45_IPR)

/** \brief  15BC, Message Object  Control Register */
#define CAN_MO45_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00195BCu)

/** Alias (User Manual Name) for CAN_MO45_STAT.
 * To use register names with standard convension, please use CAN_MO45_STAT.
 */
#define CAN_MOSTAT45     (CAN_MO45_STAT)

/** \brief  15CC, Message Object  Acceptance Mask Register */
#define CAN_MO46_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00195CCu)

/** Alias (User Manual Name) for CAN_MO46_AMR.
 * To use register names with standard convension, please use CAN_MO46_AMR.
 */
#define CAN_MOAMR46      (CAN_MO46_AMR)

/** \brief  15D8, Message Object  Arbitration Register */
#define CAN_MO46_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00195D8u)

/** Alias (User Manual Name) for CAN_MO46_AR.
 * To use register names with standard convension, please use CAN_MO46_AR.
 */
#define CAN_MOAR46       (CAN_MO46_AR)

/** \brief  15DC, Message Object  Control Register */
#define CAN_MO46_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00195DCu)

/** Alias (User Manual Name) for CAN_MO46_CTR.
 * To use register names with standard convension, please use CAN_MO46_CTR.
 */
#define CAN_MOCTR46      (CAN_MO46_CTR)

/** \brief  15D4, Message Object  Data Register High */
#define CAN_MO46_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00195D4u)

/** Alias (User Manual Name) for CAN_MO46_DATAH.
 * To use register names with standard convension, please use CAN_MO46_DATAH.
 */
#define CAN_MODATAH46    (CAN_MO46_DATAH)

/** \brief  15D0, Message Object  Data Register Low */
#define CAN_MO46_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00195D0u)

/** Alias (User Manual Name) for CAN_MO46_DATAL.
 * To use register names with standard convension, please use CAN_MO46_DATAL.
 */
#define CAN_MODATAL46    (CAN_MO46_DATAL)

/** \brief  15C0, Message Object  Function Control Register */
#define CAN_MO46_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00195C0u)

/** Alias (User Manual Name) for CAN_MO46_EDATA0.
 * To use register names with standard convension, please use CAN_MO46_EDATA0.
 */
#define CAN_EMO46DATA0   (CAN_MO46_EDATA0)

/** \brief  15C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO46_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00195C4u)

/** Alias (User Manual Name) for CAN_MO46_EDATA1.
 * To use register names with standard convension, please use CAN_MO46_EDATA1.
 */
#define CAN_EMO46DATA1   (CAN_MO46_EDATA1)

/** \brief  15C8, Message Object  Interrupt Pointer Register */
#define CAN_MO46_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00195C8u)

/** Alias (User Manual Name) for CAN_MO46_EDATA2.
 * To use register names with standard convension, please use CAN_MO46_EDATA2.
 */
#define CAN_EMO46DATA2   (CAN_MO46_EDATA2)

/** \brief  15CC, Message Object  Acceptance Mask Register */
#define CAN_MO46_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00195CCu)

/** Alias (User Manual Name) for CAN_MO46_EDATA3.
 * To use register names with standard convension, please use CAN_MO46_EDATA3.
 */
#define CAN_EMO46DATA3   (CAN_MO46_EDATA3)

/** \brief  15D0, Message Object  Data Register Low */
#define CAN_MO46_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00195D0u)

/** Alias (User Manual Name) for CAN_MO46_EDATA4.
 * To use register names with standard convension, please use CAN_MO46_EDATA4.
 */
#define CAN_EMO46DATA4   (CAN_MO46_EDATA4)

/** \brief  15D4, Message Object  Data Register High */
#define CAN_MO46_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00195D4u)

/** Alias (User Manual Name) for CAN_MO46_EDATA5.
 * To use register names with standard convension, please use CAN_MO46_EDATA5.
 */
#define CAN_EMO46DATA5   (CAN_MO46_EDATA5)

/** \brief  15D8, Message Object  Arbitration Register */
#define CAN_MO46_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00195D8u)

/** Alias (User Manual Name) for CAN_MO46_EDATA6.
 * To use register names with standard convension, please use CAN_MO46_EDATA6.
 */
#define CAN_EMO46DATA6   (CAN_MO46_EDATA6)

/** \brief  15C0, Message Object  Function Control Register */
#define CAN_MO46_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00195C0u)

/** Alias (User Manual Name) for CAN_MO46_FCR.
 * To use register names with standard convension, please use CAN_MO46_FCR.
 */
#define CAN_MOFCR46      (CAN_MO46_FCR)

/** \brief  15C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO46_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00195C4u)

/** Alias (User Manual Name) for CAN_MO46_FGPR.
 * To use register names with standard convension, please use CAN_MO46_FGPR.
 */
#define CAN_MOFGPR46     (CAN_MO46_FGPR)

/** \brief  15C8, Message Object  Interrupt Pointer Register */
#define CAN_MO46_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00195C8u)

/** Alias (User Manual Name) for CAN_MO46_IPR.
 * To use register names with standard convension, please use CAN_MO46_IPR.
 */
#define CAN_MOIPR46      (CAN_MO46_IPR)

/** \brief  15DC, Message Object  Control Register */
#define CAN_MO46_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00195DCu)

/** Alias (User Manual Name) for CAN_MO46_STAT.
 * To use register names with standard convension, please use CAN_MO46_STAT.
 */
#define CAN_MOSTAT46     (CAN_MO46_STAT)

/** \brief  15EC, Message Object  Acceptance Mask Register */
#define CAN_MO47_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00195ECu)

/** Alias (User Manual Name) for CAN_MO47_AMR.
 * To use register names with standard convension, please use CAN_MO47_AMR.
 */
#define CAN_MOAMR47      (CAN_MO47_AMR)

/** \brief  15F8, Message Object  Arbitration Register */
#define CAN_MO47_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00195F8u)

/** Alias (User Manual Name) for CAN_MO47_AR.
 * To use register names with standard convension, please use CAN_MO47_AR.
 */
#define CAN_MOAR47       (CAN_MO47_AR)

/** \brief  15FC, Message Object  Control Register */
#define CAN_MO47_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00195FCu)

/** Alias (User Manual Name) for CAN_MO47_CTR.
 * To use register names with standard convension, please use CAN_MO47_CTR.
 */
#define CAN_MOCTR47      (CAN_MO47_CTR)

/** \brief  15F4, Message Object  Data Register High */
#define CAN_MO47_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00195F4u)

/** Alias (User Manual Name) for CAN_MO47_DATAH.
 * To use register names with standard convension, please use CAN_MO47_DATAH.
 */
#define CAN_MODATAH47    (CAN_MO47_DATAH)

/** \brief  15F0, Message Object  Data Register Low */
#define CAN_MO47_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00195F0u)

/** Alias (User Manual Name) for CAN_MO47_DATAL.
 * To use register names with standard convension, please use CAN_MO47_DATAL.
 */
#define CAN_MODATAL47    (CAN_MO47_DATAL)

/** \brief  15E0, Message Object  Function Control Register */
#define CAN_MO47_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00195E0u)

/** Alias (User Manual Name) for CAN_MO47_EDATA0.
 * To use register names with standard convension, please use CAN_MO47_EDATA0.
 */
#define CAN_EMO47DATA0   (CAN_MO47_EDATA0)

/** \brief  15E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO47_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00195E4u)

/** Alias (User Manual Name) for CAN_MO47_EDATA1.
 * To use register names with standard convension, please use CAN_MO47_EDATA1.
 */
#define CAN_EMO47DATA1   (CAN_MO47_EDATA1)

/** \brief  15E8, Message Object  Interrupt Pointer Register */
#define CAN_MO47_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00195E8u)

/** Alias (User Manual Name) for CAN_MO47_EDATA2.
 * To use register names with standard convension, please use CAN_MO47_EDATA2.
 */
#define CAN_EMO47DATA2   (CAN_MO47_EDATA2)

/** \brief  15EC, Message Object  Acceptance Mask Register */
#define CAN_MO47_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00195ECu)

/** Alias (User Manual Name) for CAN_MO47_EDATA3.
 * To use register names with standard convension, please use CAN_MO47_EDATA3.
 */
#define CAN_EMO47DATA3   (CAN_MO47_EDATA3)

/** \brief  15F0, Message Object  Data Register Low */
#define CAN_MO47_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00195F0u)

/** Alias (User Manual Name) for CAN_MO47_EDATA4.
 * To use register names with standard convension, please use CAN_MO47_EDATA4.
 */
#define CAN_EMO47DATA4   (CAN_MO47_EDATA4)

/** \brief  15F4, Message Object  Data Register High */
#define CAN_MO47_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00195F4u)

/** Alias (User Manual Name) for CAN_MO47_EDATA5.
 * To use register names with standard convension, please use CAN_MO47_EDATA5.
 */
#define CAN_EMO47DATA5   (CAN_MO47_EDATA5)

/** \brief  15F8, Message Object  Arbitration Register */
#define CAN_MO47_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00195F8u)

/** Alias (User Manual Name) for CAN_MO47_EDATA6.
 * To use register names with standard convension, please use CAN_MO47_EDATA6.
 */
#define CAN_EMO47DATA6   (CAN_MO47_EDATA6)

/** \brief  15E0, Message Object  Function Control Register */
#define CAN_MO47_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00195E0u)

/** Alias (User Manual Name) for CAN_MO47_FCR.
 * To use register names with standard convension, please use CAN_MO47_FCR.
 */
#define CAN_MOFCR47      (CAN_MO47_FCR)

/** \brief  15E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO47_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00195E4u)

/** Alias (User Manual Name) for CAN_MO47_FGPR.
 * To use register names with standard convension, please use CAN_MO47_FGPR.
 */
#define CAN_MOFGPR47     (CAN_MO47_FGPR)

/** \brief  15E8, Message Object  Interrupt Pointer Register */
#define CAN_MO47_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00195E8u)

/** Alias (User Manual Name) for CAN_MO47_IPR.
 * To use register names with standard convension, please use CAN_MO47_IPR.
 */
#define CAN_MOIPR47      (CAN_MO47_IPR)

/** \brief  15FC, Message Object  Control Register */
#define CAN_MO47_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00195FCu)

/** Alias (User Manual Name) for CAN_MO47_STAT.
 * To use register names with standard convension, please use CAN_MO47_STAT.
 */
#define CAN_MOSTAT47     (CAN_MO47_STAT)

/** \brief  160C, Message Object  Acceptance Mask Register */
#define CAN_MO48_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001960Cu)

/** Alias (User Manual Name) for CAN_MO48_AMR.
 * To use register names with standard convension, please use CAN_MO48_AMR.
 */
#define CAN_MOAMR48      (CAN_MO48_AMR)

/** \brief  1618, Message Object  Arbitration Register */
#define CAN_MO48_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019618u)

/** Alias (User Manual Name) for CAN_MO48_AR.
 * To use register names with standard convension, please use CAN_MO48_AR.
 */
#define CAN_MOAR48       (CAN_MO48_AR)

/** \brief  161C, Message Object  Control Register */
#define CAN_MO48_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001961Cu)

/** Alias (User Manual Name) for CAN_MO48_CTR.
 * To use register names with standard convension, please use CAN_MO48_CTR.
 */
#define CAN_MOCTR48      (CAN_MO48_CTR)

/** \brief  1614, Message Object  Data Register High */
#define CAN_MO48_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019614u)

/** Alias (User Manual Name) for CAN_MO48_DATAH.
 * To use register names with standard convension, please use CAN_MO48_DATAH.
 */
#define CAN_MODATAH48    (CAN_MO48_DATAH)

/** \brief  1610, Message Object  Data Register Low */
#define CAN_MO48_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019610u)

/** Alias (User Manual Name) for CAN_MO48_DATAL.
 * To use register names with standard convension, please use CAN_MO48_DATAL.
 */
#define CAN_MODATAL48    (CAN_MO48_DATAL)

/** \brief  1600, Message Object  Function Control Register */
#define CAN_MO48_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019600u)

/** Alias (User Manual Name) for CAN_MO48_EDATA0.
 * To use register names with standard convension, please use CAN_MO48_EDATA0.
 */
#define CAN_EMO48DATA0   (CAN_MO48_EDATA0)

/** \brief  1604, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO48_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019604u)

/** Alias (User Manual Name) for CAN_MO48_EDATA1.
 * To use register names with standard convension, please use CAN_MO48_EDATA1.
 */
#define CAN_EMO48DATA1   (CAN_MO48_EDATA1)

/** \brief  1608, Message Object  Interrupt Pointer Register */
#define CAN_MO48_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019608u)

/** Alias (User Manual Name) for CAN_MO48_EDATA2.
 * To use register names with standard convension, please use CAN_MO48_EDATA2.
 */
#define CAN_EMO48DATA2   (CAN_MO48_EDATA2)

/** \brief  160C, Message Object  Acceptance Mask Register */
#define CAN_MO48_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001960Cu)

/** Alias (User Manual Name) for CAN_MO48_EDATA3.
 * To use register names with standard convension, please use CAN_MO48_EDATA3.
 */
#define CAN_EMO48DATA3   (CAN_MO48_EDATA3)

/** \brief  1610, Message Object  Data Register Low */
#define CAN_MO48_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019610u)

/** Alias (User Manual Name) for CAN_MO48_EDATA4.
 * To use register names with standard convension, please use CAN_MO48_EDATA4.
 */
#define CAN_EMO48DATA4   (CAN_MO48_EDATA4)

/** \brief  1614, Message Object  Data Register High */
#define CAN_MO48_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019614u)

/** Alias (User Manual Name) for CAN_MO48_EDATA5.
 * To use register names with standard convension, please use CAN_MO48_EDATA5.
 */
#define CAN_EMO48DATA5   (CAN_MO48_EDATA5)

/** \brief  1618, Message Object  Arbitration Register */
#define CAN_MO48_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019618u)

/** Alias (User Manual Name) for CAN_MO48_EDATA6.
 * To use register names with standard convension, please use CAN_MO48_EDATA6.
 */
#define CAN_EMO48DATA6   (CAN_MO48_EDATA6)

/** \brief  1600, Message Object  Function Control Register */
#define CAN_MO48_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019600u)

/** Alias (User Manual Name) for CAN_MO48_FCR.
 * To use register names with standard convension, please use CAN_MO48_FCR.
 */
#define CAN_MOFCR48      (CAN_MO48_FCR)

/** \brief  1604, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO48_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019604u)

/** Alias (User Manual Name) for CAN_MO48_FGPR.
 * To use register names with standard convension, please use CAN_MO48_FGPR.
 */
#define CAN_MOFGPR48     (CAN_MO48_FGPR)

/** \brief  1608, Message Object  Interrupt Pointer Register */
#define CAN_MO48_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019608u)

/** Alias (User Manual Name) for CAN_MO48_IPR.
 * To use register names with standard convension, please use CAN_MO48_IPR.
 */
#define CAN_MOIPR48      (CAN_MO48_IPR)

/** \brief  161C, Message Object  Control Register */
#define CAN_MO48_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001961Cu)

/** Alias (User Manual Name) for CAN_MO48_STAT.
 * To use register names with standard convension, please use CAN_MO48_STAT.
 */
#define CAN_MOSTAT48     (CAN_MO48_STAT)

/** \brief  162C, Message Object  Acceptance Mask Register */
#define CAN_MO49_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001962Cu)

/** Alias (User Manual Name) for CAN_MO49_AMR.
 * To use register names with standard convension, please use CAN_MO49_AMR.
 */
#define CAN_MOAMR49      (CAN_MO49_AMR)

/** \brief  1638, Message Object  Arbitration Register */
#define CAN_MO49_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019638u)

/** Alias (User Manual Name) for CAN_MO49_AR.
 * To use register names with standard convension, please use CAN_MO49_AR.
 */
#define CAN_MOAR49       (CAN_MO49_AR)

/** \brief  163C, Message Object  Control Register */
#define CAN_MO49_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001963Cu)

/** Alias (User Manual Name) for CAN_MO49_CTR.
 * To use register names with standard convension, please use CAN_MO49_CTR.
 */
#define CAN_MOCTR49      (CAN_MO49_CTR)

/** \brief  1634, Message Object  Data Register High */
#define CAN_MO49_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019634u)

/** Alias (User Manual Name) for CAN_MO49_DATAH.
 * To use register names with standard convension, please use CAN_MO49_DATAH.
 */
#define CAN_MODATAH49    (CAN_MO49_DATAH)

/** \brief  1630, Message Object  Data Register Low */
#define CAN_MO49_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019630u)

/** Alias (User Manual Name) for CAN_MO49_DATAL.
 * To use register names with standard convension, please use CAN_MO49_DATAL.
 */
#define CAN_MODATAL49    (CAN_MO49_DATAL)

/** \brief  1620, Message Object  Function Control Register */
#define CAN_MO49_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019620u)

/** Alias (User Manual Name) for CAN_MO49_EDATA0.
 * To use register names with standard convension, please use CAN_MO49_EDATA0.
 */
#define CAN_EMO49DATA0   (CAN_MO49_EDATA0)

/** \brief  1624, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO49_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019624u)

/** Alias (User Manual Name) for CAN_MO49_EDATA1.
 * To use register names with standard convension, please use CAN_MO49_EDATA1.
 */
#define CAN_EMO49DATA1   (CAN_MO49_EDATA1)

/** \brief  1628, Message Object  Interrupt Pointer Register */
#define CAN_MO49_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019628u)

/** Alias (User Manual Name) for CAN_MO49_EDATA2.
 * To use register names with standard convension, please use CAN_MO49_EDATA2.
 */
#define CAN_EMO49DATA2   (CAN_MO49_EDATA2)

/** \brief  162C, Message Object  Acceptance Mask Register */
#define CAN_MO49_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001962Cu)

/** Alias (User Manual Name) for CAN_MO49_EDATA3.
 * To use register names with standard convension, please use CAN_MO49_EDATA3.
 */
#define CAN_EMO49DATA3   (CAN_MO49_EDATA3)

/** \brief  1630, Message Object  Data Register Low */
#define CAN_MO49_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019630u)

/** Alias (User Manual Name) for CAN_MO49_EDATA4.
 * To use register names with standard convension, please use CAN_MO49_EDATA4.
 */
#define CAN_EMO49DATA4   (CAN_MO49_EDATA4)

/** \brief  1634, Message Object  Data Register High */
#define CAN_MO49_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019634u)

/** Alias (User Manual Name) for CAN_MO49_EDATA5.
 * To use register names with standard convension, please use CAN_MO49_EDATA5.
 */
#define CAN_EMO49DATA5   (CAN_MO49_EDATA5)

/** \brief  1638, Message Object  Arbitration Register */
#define CAN_MO49_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019638u)

/** Alias (User Manual Name) for CAN_MO49_EDATA6.
 * To use register names with standard convension, please use CAN_MO49_EDATA6.
 */
#define CAN_EMO49DATA6   (CAN_MO49_EDATA6)

/** \brief  1620, Message Object  Function Control Register */
#define CAN_MO49_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019620u)

/** Alias (User Manual Name) for CAN_MO49_FCR.
 * To use register names with standard convension, please use CAN_MO49_FCR.
 */
#define CAN_MOFCR49      (CAN_MO49_FCR)

/** \brief  1624, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO49_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019624u)

/** Alias (User Manual Name) for CAN_MO49_FGPR.
 * To use register names with standard convension, please use CAN_MO49_FGPR.
 */
#define CAN_MOFGPR49     (CAN_MO49_FGPR)

/** \brief  1628, Message Object  Interrupt Pointer Register */
#define CAN_MO49_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019628u)

/** Alias (User Manual Name) for CAN_MO49_IPR.
 * To use register names with standard convension, please use CAN_MO49_IPR.
 */
#define CAN_MOIPR49      (CAN_MO49_IPR)

/** \brief  163C, Message Object  Control Register */
#define CAN_MO49_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001963Cu)

/** Alias (User Manual Name) for CAN_MO49_STAT.
 * To use register names with standard convension, please use CAN_MO49_STAT.
 */
#define CAN_MOSTAT49     (CAN_MO49_STAT)

/** \brief  108C, Message Object  Acceptance Mask Register */
#define CAN_MO4_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001908Cu)

/** Alias (User Manual Name) for CAN_MO4_AMR.
 * To use register names with standard convension, please use CAN_MO4_AMR.
 */
#define CAN_MOAMR4       (CAN_MO4_AMR)

/** \brief  1098, Message Object  Arbitration Register */
#define CAN_MO4_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019098u)

/** Alias (User Manual Name) for CAN_MO4_AR.
 * To use register names with standard convension, please use CAN_MO4_AR.
 */
#define CAN_MOAR4        (CAN_MO4_AR)

/** \brief  109C, Message Object  Control Register */
#define CAN_MO4_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001909Cu)

/** Alias (User Manual Name) for CAN_MO4_CTR.
 * To use register names with standard convension, please use CAN_MO4_CTR.
 */
#define CAN_MOCTR4       (CAN_MO4_CTR)

/** \brief  1094, Message Object  Data Register High */
#define CAN_MO4_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019094u)

/** Alias (User Manual Name) for CAN_MO4_DATAH.
 * To use register names with standard convension, please use CAN_MO4_DATAH.
 */
#define CAN_MODATAH4     (CAN_MO4_DATAH)

/** \brief  1090, Message Object  Data Register Low */
#define CAN_MO4_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019090u)

/** Alias (User Manual Name) for CAN_MO4_DATAL.
 * To use register names with standard convension, please use CAN_MO4_DATAL.
 */
#define CAN_MODATAL4     (CAN_MO4_DATAL)

/** \brief  1080, Message Object  Function Control Register */
#define CAN_MO4_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019080u)

/** Alias (User Manual Name) for CAN_MO4_EDATA0.
 * To use register names with standard convension, please use CAN_MO4_EDATA0.
 */
#define CAN_EMO4DATA0    (CAN_MO4_EDATA0)

/** \brief  1084, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO4_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019084u)

/** Alias (User Manual Name) for CAN_MO4_EDATA1.
 * To use register names with standard convension, please use CAN_MO4_EDATA1.
 */
#define CAN_EMO4DATA1    (CAN_MO4_EDATA1)

/** \brief  1088, Message Object  Interrupt Pointer Register */
#define CAN_MO4_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019088u)

/** Alias (User Manual Name) for CAN_MO4_EDATA2.
 * To use register names with standard convension, please use CAN_MO4_EDATA2.
 */
#define CAN_EMO4DATA2    (CAN_MO4_EDATA2)

/** \brief  108C, Message Object  Acceptance Mask Register */
#define CAN_MO4_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001908Cu)

/** Alias (User Manual Name) for CAN_MO4_EDATA3.
 * To use register names with standard convension, please use CAN_MO4_EDATA3.
 */
#define CAN_EMO4DATA3    (CAN_MO4_EDATA3)

/** \brief  1090, Message Object  Data Register Low */
#define CAN_MO4_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019090u)

/** Alias (User Manual Name) for CAN_MO4_EDATA4.
 * To use register names with standard convension, please use CAN_MO4_EDATA4.
 */
#define CAN_EMO4DATA4    (CAN_MO4_EDATA4)

/** \brief  1094, Message Object  Data Register High */
#define CAN_MO4_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019094u)

/** Alias (User Manual Name) for CAN_MO4_EDATA5.
 * To use register names with standard convension, please use CAN_MO4_EDATA5.
 */
#define CAN_EMO4DATA5    (CAN_MO4_EDATA5)

/** \brief  1098, Message Object  Arbitration Register */
#define CAN_MO4_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019098u)

/** Alias (User Manual Name) for CAN_MO4_EDATA6.
 * To use register names with standard convension, please use CAN_MO4_EDATA6.
 */
#define CAN_EMO4DATA6    (CAN_MO4_EDATA6)

/** \brief  1080, Message Object  Function Control Register */
#define CAN_MO4_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019080u)

/** Alias (User Manual Name) for CAN_MO4_FCR.
 * To use register names with standard convension, please use CAN_MO4_FCR.
 */
#define CAN_MOFCR4       (CAN_MO4_FCR)

/** \brief  1084, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO4_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019084u)

/** Alias (User Manual Name) for CAN_MO4_FGPR.
 * To use register names with standard convension, please use CAN_MO4_FGPR.
 */
#define CAN_MOFGPR4      (CAN_MO4_FGPR)

/** \brief  1088, Message Object  Interrupt Pointer Register */
#define CAN_MO4_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019088u)

/** Alias (User Manual Name) for CAN_MO4_IPR.
 * To use register names with standard convension, please use CAN_MO4_IPR.
 */
#define CAN_MOIPR4       (CAN_MO4_IPR)

/** \brief  109C, Message Object  Control Register */
#define CAN_MO4_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001909Cu)

/** Alias (User Manual Name) for CAN_MO4_STAT.
 * To use register names with standard convension, please use CAN_MO4_STAT.
 */
#define CAN_MOSTAT4      (CAN_MO4_STAT)

/** \brief  164C, Message Object  Acceptance Mask Register */
#define CAN_MO50_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001964Cu)

/** Alias (User Manual Name) for CAN_MO50_AMR.
 * To use register names with standard convension, please use CAN_MO50_AMR.
 */
#define CAN_MOAMR50      (CAN_MO50_AMR)

/** \brief  1658, Message Object  Arbitration Register */
#define CAN_MO50_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019658u)

/** Alias (User Manual Name) for CAN_MO50_AR.
 * To use register names with standard convension, please use CAN_MO50_AR.
 */
#define CAN_MOAR50       (CAN_MO50_AR)

/** \brief  165C, Message Object  Control Register */
#define CAN_MO50_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001965Cu)

/** Alias (User Manual Name) for CAN_MO50_CTR.
 * To use register names with standard convension, please use CAN_MO50_CTR.
 */
#define CAN_MOCTR50      (CAN_MO50_CTR)

/** \brief  1654, Message Object  Data Register High */
#define CAN_MO50_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019654u)

/** Alias (User Manual Name) for CAN_MO50_DATAH.
 * To use register names with standard convension, please use CAN_MO50_DATAH.
 */
#define CAN_MODATAH50    (CAN_MO50_DATAH)

/** \brief  1650, Message Object  Data Register Low */
#define CAN_MO50_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019650u)

/** Alias (User Manual Name) for CAN_MO50_DATAL.
 * To use register names with standard convension, please use CAN_MO50_DATAL.
 */
#define CAN_MODATAL50    (CAN_MO50_DATAL)

/** \brief  1640, Message Object  Function Control Register */
#define CAN_MO50_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019640u)

/** Alias (User Manual Name) for CAN_MO50_EDATA0.
 * To use register names with standard convension, please use CAN_MO50_EDATA0.
 */
#define CAN_EMO50DATA0   (CAN_MO50_EDATA0)

/** \brief  1644, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO50_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019644u)

/** Alias (User Manual Name) for CAN_MO50_EDATA1.
 * To use register names with standard convension, please use CAN_MO50_EDATA1.
 */
#define CAN_EMO50DATA1   (CAN_MO50_EDATA1)

/** \brief  1648, Message Object  Interrupt Pointer Register */
#define CAN_MO50_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019648u)

/** Alias (User Manual Name) for CAN_MO50_EDATA2.
 * To use register names with standard convension, please use CAN_MO50_EDATA2.
 */
#define CAN_EMO50DATA2   (CAN_MO50_EDATA2)

/** \brief  164C, Message Object  Acceptance Mask Register */
#define CAN_MO50_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001964Cu)

/** Alias (User Manual Name) for CAN_MO50_EDATA3.
 * To use register names with standard convension, please use CAN_MO50_EDATA3.
 */
#define CAN_EMO50DATA3   (CAN_MO50_EDATA3)

/** \brief  1650, Message Object  Data Register Low */
#define CAN_MO50_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019650u)

/** Alias (User Manual Name) for CAN_MO50_EDATA4.
 * To use register names with standard convension, please use CAN_MO50_EDATA4.
 */
#define CAN_EMO50DATA4   (CAN_MO50_EDATA4)

/** \brief  1654, Message Object  Data Register High */
#define CAN_MO50_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019654u)

/** Alias (User Manual Name) for CAN_MO50_EDATA5.
 * To use register names with standard convension, please use CAN_MO50_EDATA5.
 */
#define CAN_EMO50DATA5   (CAN_MO50_EDATA5)

/** \brief  1658, Message Object  Arbitration Register */
#define CAN_MO50_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019658u)

/** Alias (User Manual Name) for CAN_MO50_EDATA6.
 * To use register names with standard convension, please use CAN_MO50_EDATA6.
 */
#define CAN_EMO50DATA6   (CAN_MO50_EDATA6)

/** \brief  1640, Message Object  Function Control Register */
#define CAN_MO50_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019640u)

/** Alias (User Manual Name) for CAN_MO50_FCR.
 * To use register names with standard convension, please use CAN_MO50_FCR.
 */
#define CAN_MOFCR50      (CAN_MO50_FCR)

/** \brief  1644, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO50_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019644u)

/** Alias (User Manual Name) for CAN_MO50_FGPR.
 * To use register names with standard convension, please use CAN_MO50_FGPR.
 */
#define CAN_MOFGPR50     (CAN_MO50_FGPR)

/** \brief  1648, Message Object  Interrupt Pointer Register */
#define CAN_MO50_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019648u)

/** Alias (User Manual Name) for CAN_MO50_IPR.
 * To use register names with standard convension, please use CAN_MO50_IPR.
 */
#define CAN_MOIPR50      (CAN_MO50_IPR)

/** \brief  165C, Message Object  Control Register */
#define CAN_MO50_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001965Cu)

/** Alias (User Manual Name) for CAN_MO50_STAT.
 * To use register names with standard convension, please use CAN_MO50_STAT.
 */
#define CAN_MOSTAT50     (CAN_MO50_STAT)

/** \brief  166C, Message Object  Acceptance Mask Register */
#define CAN_MO51_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001966Cu)

/** Alias (User Manual Name) for CAN_MO51_AMR.
 * To use register names with standard convension, please use CAN_MO51_AMR.
 */
#define CAN_MOAMR51      (CAN_MO51_AMR)

/** \brief  1678, Message Object  Arbitration Register */
#define CAN_MO51_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019678u)

/** Alias (User Manual Name) for CAN_MO51_AR.
 * To use register names with standard convension, please use CAN_MO51_AR.
 */
#define CAN_MOAR51       (CAN_MO51_AR)

/** \brief  167C, Message Object  Control Register */
#define CAN_MO51_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001967Cu)

/** Alias (User Manual Name) for CAN_MO51_CTR.
 * To use register names with standard convension, please use CAN_MO51_CTR.
 */
#define CAN_MOCTR51      (CAN_MO51_CTR)

/** \brief  1674, Message Object  Data Register High */
#define CAN_MO51_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019674u)

/** Alias (User Manual Name) for CAN_MO51_DATAH.
 * To use register names with standard convension, please use CAN_MO51_DATAH.
 */
#define CAN_MODATAH51    (CAN_MO51_DATAH)

/** \brief  1670, Message Object  Data Register Low */
#define CAN_MO51_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019670u)

/** Alias (User Manual Name) for CAN_MO51_DATAL.
 * To use register names with standard convension, please use CAN_MO51_DATAL.
 */
#define CAN_MODATAL51    (CAN_MO51_DATAL)

/** \brief  1660, Message Object  Function Control Register */
#define CAN_MO51_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019660u)

/** Alias (User Manual Name) for CAN_MO51_EDATA0.
 * To use register names with standard convension, please use CAN_MO51_EDATA0.
 */
#define CAN_EMO51DATA0   (CAN_MO51_EDATA0)

/** \brief  1664, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO51_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019664u)

/** Alias (User Manual Name) for CAN_MO51_EDATA1.
 * To use register names with standard convension, please use CAN_MO51_EDATA1.
 */
#define CAN_EMO51DATA1   (CAN_MO51_EDATA1)

/** \brief  1668, Message Object  Interrupt Pointer Register */
#define CAN_MO51_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019668u)

/** Alias (User Manual Name) for CAN_MO51_EDATA2.
 * To use register names with standard convension, please use CAN_MO51_EDATA2.
 */
#define CAN_EMO51DATA2   (CAN_MO51_EDATA2)

/** \brief  166C, Message Object  Acceptance Mask Register */
#define CAN_MO51_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001966Cu)

/** Alias (User Manual Name) for CAN_MO51_EDATA3.
 * To use register names with standard convension, please use CAN_MO51_EDATA3.
 */
#define CAN_EMO51DATA3   (CAN_MO51_EDATA3)

/** \brief  1670, Message Object  Data Register Low */
#define CAN_MO51_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019670u)

/** Alias (User Manual Name) for CAN_MO51_EDATA4.
 * To use register names with standard convension, please use CAN_MO51_EDATA4.
 */
#define CAN_EMO51DATA4   (CAN_MO51_EDATA4)

/** \brief  1674, Message Object  Data Register High */
#define CAN_MO51_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019674u)

/** Alias (User Manual Name) for CAN_MO51_EDATA5.
 * To use register names with standard convension, please use CAN_MO51_EDATA5.
 */
#define CAN_EMO51DATA5   (CAN_MO51_EDATA5)

/** \brief  1678, Message Object  Arbitration Register */
#define CAN_MO51_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019678u)

/** Alias (User Manual Name) for CAN_MO51_EDATA6.
 * To use register names with standard convension, please use CAN_MO51_EDATA6.
 */
#define CAN_EMO51DATA6   (CAN_MO51_EDATA6)

/** \brief  1660, Message Object  Function Control Register */
#define CAN_MO51_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019660u)

/** Alias (User Manual Name) for CAN_MO51_FCR.
 * To use register names with standard convension, please use CAN_MO51_FCR.
 */
#define CAN_MOFCR51      (CAN_MO51_FCR)

/** \brief  1664, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO51_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019664u)

/** Alias (User Manual Name) for CAN_MO51_FGPR.
 * To use register names with standard convension, please use CAN_MO51_FGPR.
 */
#define CAN_MOFGPR51     (CAN_MO51_FGPR)

/** \brief  1668, Message Object  Interrupt Pointer Register */
#define CAN_MO51_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019668u)

/** Alias (User Manual Name) for CAN_MO51_IPR.
 * To use register names with standard convension, please use CAN_MO51_IPR.
 */
#define CAN_MOIPR51      (CAN_MO51_IPR)

/** \brief  167C, Message Object  Control Register */
#define CAN_MO51_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001967Cu)

/** Alias (User Manual Name) for CAN_MO51_STAT.
 * To use register names with standard convension, please use CAN_MO51_STAT.
 */
#define CAN_MOSTAT51     (CAN_MO51_STAT)

/** \brief  168C, Message Object  Acceptance Mask Register */
#define CAN_MO52_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001968Cu)

/** Alias (User Manual Name) for CAN_MO52_AMR.
 * To use register names with standard convension, please use CAN_MO52_AMR.
 */
#define CAN_MOAMR52      (CAN_MO52_AMR)

/** \brief  1698, Message Object  Arbitration Register */
#define CAN_MO52_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019698u)

/** Alias (User Manual Name) for CAN_MO52_AR.
 * To use register names with standard convension, please use CAN_MO52_AR.
 */
#define CAN_MOAR52       (CAN_MO52_AR)

/** \brief  169C, Message Object  Control Register */
#define CAN_MO52_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001969Cu)

/** Alias (User Manual Name) for CAN_MO52_CTR.
 * To use register names with standard convension, please use CAN_MO52_CTR.
 */
#define CAN_MOCTR52      (CAN_MO52_CTR)

/** \brief  1694, Message Object  Data Register High */
#define CAN_MO52_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019694u)

/** Alias (User Manual Name) for CAN_MO52_DATAH.
 * To use register names with standard convension, please use CAN_MO52_DATAH.
 */
#define CAN_MODATAH52    (CAN_MO52_DATAH)

/** \brief  1690, Message Object  Data Register Low */
#define CAN_MO52_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019690u)

/** Alias (User Manual Name) for CAN_MO52_DATAL.
 * To use register names with standard convension, please use CAN_MO52_DATAL.
 */
#define CAN_MODATAL52    (CAN_MO52_DATAL)

/** \brief  1680, Message Object  Function Control Register */
#define CAN_MO52_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019680u)

/** Alias (User Manual Name) for CAN_MO52_EDATA0.
 * To use register names with standard convension, please use CAN_MO52_EDATA0.
 */
#define CAN_EMO52DATA0   (CAN_MO52_EDATA0)

/** \brief  1684, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO52_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019684u)

/** Alias (User Manual Name) for CAN_MO52_EDATA1.
 * To use register names with standard convension, please use CAN_MO52_EDATA1.
 */
#define CAN_EMO52DATA1   (CAN_MO52_EDATA1)

/** \brief  1688, Message Object  Interrupt Pointer Register */
#define CAN_MO52_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019688u)

/** Alias (User Manual Name) for CAN_MO52_EDATA2.
 * To use register names with standard convension, please use CAN_MO52_EDATA2.
 */
#define CAN_EMO52DATA2   (CAN_MO52_EDATA2)

/** \brief  168C, Message Object  Acceptance Mask Register */
#define CAN_MO52_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001968Cu)

/** Alias (User Manual Name) for CAN_MO52_EDATA3.
 * To use register names with standard convension, please use CAN_MO52_EDATA3.
 */
#define CAN_EMO52DATA3   (CAN_MO52_EDATA3)

/** \brief  1690, Message Object  Data Register Low */
#define CAN_MO52_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019690u)

/** Alias (User Manual Name) for CAN_MO52_EDATA4.
 * To use register names with standard convension, please use CAN_MO52_EDATA4.
 */
#define CAN_EMO52DATA4   (CAN_MO52_EDATA4)

/** \brief  1694, Message Object  Data Register High */
#define CAN_MO52_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019694u)

/** Alias (User Manual Name) for CAN_MO52_EDATA5.
 * To use register names with standard convension, please use CAN_MO52_EDATA5.
 */
#define CAN_EMO52DATA5   (CAN_MO52_EDATA5)

/** \brief  1698, Message Object  Arbitration Register */
#define CAN_MO52_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019698u)

/** Alias (User Manual Name) for CAN_MO52_EDATA6.
 * To use register names with standard convension, please use CAN_MO52_EDATA6.
 */
#define CAN_EMO52DATA6   (CAN_MO52_EDATA6)

/** \brief  1680, Message Object  Function Control Register */
#define CAN_MO52_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019680u)

/** Alias (User Manual Name) for CAN_MO52_FCR.
 * To use register names with standard convension, please use CAN_MO52_FCR.
 */
#define CAN_MOFCR52      (CAN_MO52_FCR)

/** \brief  1684, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO52_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019684u)

/** Alias (User Manual Name) for CAN_MO52_FGPR.
 * To use register names with standard convension, please use CAN_MO52_FGPR.
 */
#define CAN_MOFGPR52     (CAN_MO52_FGPR)

/** \brief  1688, Message Object  Interrupt Pointer Register */
#define CAN_MO52_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019688u)

/** Alias (User Manual Name) for CAN_MO52_IPR.
 * To use register names with standard convension, please use CAN_MO52_IPR.
 */
#define CAN_MOIPR52      (CAN_MO52_IPR)

/** \brief  169C, Message Object  Control Register */
#define CAN_MO52_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001969Cu)

/** Alias (User Manual Name) for CAN_MO52_STAT.
 * To use register names with standard convension, please use CAN_MO52_STAT.
 */
#define CAN_MOSTAT52     (CAN_MO52_STAT)

/** \brief  16AC, Message Object  Acceptance Mask Register */
#define CAN_MO53_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00196ACu)

/** Alias (User Manual Name) for CAN_MO53_AMR.
 * To use register names with standard convension, please use CAN_MO53_AMR.
 */
#define CAN_MOAMR53      (CAN_MO53_AMR)

/** \brief  16B8, Message Object  Arbitration Register */
#define CAN_MO53_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00196B8u)

/** Alias (User Manual Name) for CAN_MO53_AR.
 * To use register names with standard convension, please use CAN_MO53_AR.
 */
#define CAN_MOAR53       (CAN_MO53_AR)

/** \brief  16BC, Message Object  Control Register */
#define CAN_MO53_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00196BCu)

/** Alias (User Manual Name) for CAN_MO53_CTR.
 * To use register names with standard convension, please use CAN_MO53_CTR.
 */
#define CAN_MOCTR53      (CAN_MO53_CTR)

/** \brief  16B4, Message Object  Data Register High */
#define CAN_MO53_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00196B4u)

/** Alias (User Manual Name) for CAN_MO53_DATAH.
 * To use register names with standard convension, please use CAN_MO53_DATAH.
 */
#define CAN_MODATAH53    (CAN_MO53_DATAH)

/** \brief  16B0, Message Object  Data Register Low */
#define CAN_MO53_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00196B0u)

/** Alias (User Manual Name) for CAN_MO53_DATAL.
 * To use register names with standard convension, please use CAN_MO53_DATAL.
 */
#define CAN_MODATAL53    (CAN_MO53_DATAL)

/** \brief  16A0, Message Object  Function Control Register */
#define CAN_MO53_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00196A0u)

/** Alias (User Manual Name) for CAN_MO53_EDATA0.
 * To use register names with standard convension, please use CAN_MO53_EDATA0.
 */
#define CAN_EMO53DATA0   (CAN_MO53_EDATA0)

/** \brief  16A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO53_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00196A4u)

/** Alias (User Manual Name) for CAN_MO53_EDATA1.
 * To use register names with standard convension, please use CAN_MO53_EDATA1.
 */
#define CAN_EMO53DATA1   (CAN_MO53_EDATA1)

/** \brief  16A8, Message Object  Interrupt Pointer Register */
#define CAN_MO53_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00196A8u)

/** Alias (User Manual Name) for CAN_MO53_EDATA2.
 * To use register names with standard convension, please use CAN_MO53_EDATA2.
 */
#define CAN_EMO53DATA2   (CAN_MO53_EDATA2)

/** \brief  16AC, Message Object  Acceptance Mask Register */
#define CAN_MO53_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00196ACu)

/** Alias (User Manual Name) for CAN_MO53_EDATA3.
 * To use register names with standard convension, please use CAN_MO53_EDATA3.
 */
#define CAN_EMO53DATA3   (CAN_MO53_EDATA3)

/** \brief  16B0, Message Object  Data Register Low */
#define CAN_MO53_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00196B0u)

/** Alias (User Manual Name) for CAN_MO53_EDATA4.
 * To use register names with standard convension, please use CAN_MO53_EDATA4.
 */
#define CAN_EMO53DATA4   (CAN_MO53_EDATA4)

/** \brief  16B4, Message Object  Data Register High */
#define CAN_MO53_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00196B4u)

/** Alias (User Manual Name) for CAN_MO53_EDATA5.
 * To use register names with standard convension, please use CAN_MO53_EDATA5.
 */
#define CAN_EMO53DATA5   (CAN_MO53_EDATA5)

/** \brief  16B8, Message Object  Arbitration Register */
#define CAN_MO53_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00196B8u)

/** Alias (User Manual Name) for CAN_MO53_EDATA6.
 * To use register names with standard convension, please use CAN_MO53_EDATA6.
 */
#define CAN_EMO53DATA6   (CAN_MO53_EDATA6)

/** \brief  16A0, Message Object  Function Control Register */
#define CAN_MO53_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00196A0u)

/** Alias (User Manual Name) for CAN_MO53_FCR.
 * To use register names with standard convension, please use CAN_MO53_FCR.
 */
#define CAN_MOFCR53      (CAN_MO53_FCR)

/** \brief  16A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO53_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00196A4u)

/** Alias (User Manual Name) for CAN_MO53_FGPR.
 * To use register names with standard convension, please use CAN_MO53_FGPR.
 */
#define CAN_MOFGPR53     (CAN_MO53_FGPR)

/** \brief  16A8, Message Object  Interrupt Pointer Register */
#define CAN_MO53_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00196A8u)

/** Alias (User Manual Name) for CAN_MO53_IPR.
 * To use register names with standard convension, please use CAN_MO53_IPR.
 */
#define CAN_MOIPR53      (CAN_MO53_IPR)

/** \brief  16BC, Message Object  Control Register */
#define CAN_MO53_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00196BCu)

/** Alias (User Manual Name) for CAN_MO53_STAT.
 * To use register names with standard convension, please use CAN_MO53_STAT.
 */
#define CAN_MOSTAT53     (CAN_MO53_STAT)

/** \brief  16CC, Message Object  Acceptance Mask Register */
#define CAN_MO54_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00196CCu)

/** Alias (User Manual Name) for CAN_MO54_AMR.
 * To use register names with standard convension, please use CAN_MO54_AMR.
 */
#define CAN_MOAMR54      (CAN_MO54_AMR)

/** \brief  16D8, Message Object  Arbitration Register */
#define CAN_MO54_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00196D8u)

/** Alias (User Manual Name) for CAN_MO54_AR.
 * To use register names with standard convension, please use CAN_MO54_AR.
 */
#define CAN_MOAR54       (CAN_MO54_AR)

/** \brief  16DC, Message Object  Control Register */
#define CAN_MO54_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00196DCu)

/** Alias (User Manual Name) for CAN_MO54_CTR.
 * To use register names with standard convension, please use CAN_MO54_CTR.
 */
#define CAN_MOCTR54      (CAN_MO54_CTR)

/** \brief  16D4, Message Object  Data Register High */
#define CAN_MO54_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00196D4u)

/** Alias (User Manual Name) for CAN_MO54_DATAH.
 * To use register names with standard convension, please use CAN_MO54_DATAH.
 */
#define CAN_MODATAH54    (CAN_MO54_DATAH)

/** \brief  16D0, Message Object  Data Register Low */
#define CAN_MO54_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00196D0u)

/** Alias (User Manual Name) for CAN_MO54_DATAL.
 * To use register names with standard convension, please use CAN_MO54_DATAL.
 */
#define CAN_MODATAL54    (CAN_MO54_DATAL)

/** \brief  16C0, Message Object  Function Control Register */
#define CAN_MO54_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00196C0u)

/** Alias (User Manual Name) for CAN_MO54_EDATA0.
 * To use register names with standard convension, please use CAN_MO54_EDATA0.
 */
#define CAN_EMO54DATA0   (CAN_MO54_EDATA0)

/** \brief  16C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO54_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00196C4u)

/** Alias (User Manual Name) for CAN_MO54_EDATA1.
 * To use register names with standard convension, please use CAN_MO54_EDATA1.
 */
#define CAN_EMO54DATA1   (CAN_MO54_EDATA1)

/** \brief  16C8, Message Object  Interrupt Pointer Register */
#define CAN_MO54_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00196C8u)

/** Alias (User Manual Name) for CAN_MO54_EDATA2.
 * To use register names with standard convension, please use CAN_MO54_EDATA2.
 */
#define CAN_EMO54DATA2   (CAN_MO54_EDATA2)

/** \brief  16CC, Message Object  Acceptance Mask Register */
#define CAN_MO54_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00196CCu)

/** Alias (User Manual Name) for CAN_MO54_EDATA3.
 * To use register names with standard convension, please use CAN_MO54_EDATA3.
 */
#define CAN_EMO54DATA3   (CAN_MO54_EDATA3)

/** \brief  16D0, Message Object  Data Register Low */
#define CAN_MO54_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00196D0u)

/** Alias (User Manual Name) for CAN_MO54_EDATA4.
 * To use register names with standard convension, please use CAN_MO54_EDATA4.
 */
#define CAN_EMO54DATA4   (CAN_MO54_EDATA4)

/** \brief  16D4, Message Object  Data Register High */
#define CAN_MO54_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00196D4u)

/** Alias (User Manual Name) for CAN_MO54_EDATA5.
 * To use register names with standard convension, please use CAN_MO54_EDATA5.
 */
#define CAN_EMO54DATA5   (CAN_MO54_EDATA5)

/** \brief  16D8, Message Object  Arbitration Register */
#define CAN_MO54_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00196D8u)

/** Alias (User Manual Name) for CAN_MO54_EDATA6.
 * To use register names with standard convension, please use CAN_MO54_EDATA6.
 */
#define CAN_EMO54DATA6   (CAN_MO54_EDATA6)

/** \brief  16C0, Message Object  Function Control Register */
#define CAN_MO54_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00196C0u)

/** Alias (User Manual Name) for CAN_MO54_FCR.
 * To use register names with standard convension, please use CAN_MO54_FCR.
 */
#define CAN_MOFCR54      (CAN_MO54_FCR)

/** \brief  16C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO54_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00196C4u)

/** Alias (User Manual Name) for CAN_MO54_FGPR.
 * To use register names with standard convension, please use CAN_MO54_FGPR.
 */
#define CAN_MOFGPR54     (CAN_MO54_FGPR)

/** \brief  16C8, Message Object  Interrupt Pointer Register */
#define CAN_MO54_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00196C8u)

/** Alias (User Manual Name) for CAN_MO54_IPR.
 * To use register names with standard convension, please use CAN_MO54_IPR.
 */
#define CAN_MOIPR54      (CAN_MO54_IPR)

/** \brief  16DC, Message Object  Control Register */
#define CAN_MO54_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00196DCu)

/** Alias (User Manual Name) for CAN_MO54_STAT.
 * To use register names with standard convension, please use CAN_MO54_STAT.
 */
#define CAN_MOSTAT54     (CAN_MO54_STAT)

/** \brief  16EC, Message Object  Acceptance Mask Register */
#define CAN_MO55_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00196ECu)

/** Alias (User Manual Name) for CAN_MO55_AMR.
 * To use register names with standard convension, please use CAN_MO55_AMR.
 */
#define CAN_MOAMR55      (CAN_MO55_AMR)

/** \brief  16F8, Message Object  Arbitration Register */
#define CAN_MO55_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00196F8u)

/** Alias (User Manual Name) for CAN_MO55_AR.
 * To use register names with standard convension, please use CAN_MO55_AR.
 */
#define CAN_MOAR55       (CAN_MO55_AR)

/** \brief  16FC, Message Object  Control Register */
#define CAN_MO55_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00196FCu)

/** Alias (User Manual Name) for CAN_MO55_CTR.
 * To use register names with standard convension, please use CAN_MO55_CTR.
 */
#define CAN_MOCTR55      (CAN_MO55_CTR)

/** \brief  16F4, Message Object  Data Register High */
#define CAN_MO55_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00196F4u)

/** Alias (User Manual Name) for CAN_MO55_DATAH.
 * To use register names with standard convension, please use CAN_MO55_DATAH.
 */
#define CAN_MODATAH55    (CAN_MO55_DATAH)

/** \brief  16F0, Message Object  Data Register Low */
#define CAN_MO55_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00196F0u)

/** Alias (User Manual Name) for CAN_MO55_DATAL.
 * To use register names with standard convension, please use CAN_MO55_DATAL.
 */
#define CAN_MODATAL55    (CAN_MO55_DATAL)

/** \brief  16E0, Message Object  Function Control Register */
#define CAN_MO55_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00196E0u)

/** Alias (User Manual Name) for CAN_MO55_EDATA0.
 * To use register names with standard convension, please use CAN_MO55_EDATA0.
 */
#define CAN_EMO55DATA0   (CAN_MO55_EDATA0)

/** \brief  16E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO55_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00196E4u)

/** Alias (User Manual Name) for CAN_MO55_EDATA1.
 * To use register names with standard convension, please use CAN_MO55_EDATA1.
 */
#define CAN_EMO55DATA1   (CAN_MO55_EDATA1)

/** \brief  16E8, Message Object  Interrupt Pointer Register */
#define CAN_MO55_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00196E8u)

/** Alias (User Manual Name) for CAN_MO55_EDATA2.
 * To use register names with standard convension, please use CAN_MO55_EDATA2.
 */
#define CAN_EMO55DATA2   (CAN_MO55_EDATA2)

/** \brief  16EC, Message Object  Acceptance Mask Register */
#define CAN_MO55_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00196ECu)

/** Alias (User Manual Name) for CAN_MO55_EDATA3.
 * To use register names with standard convension, please use CAN_MO55_EDATA3.
 */
#define CAN_EMO55DATA3   (CAN_MO55_EDATA3)

/** \brief  16F0, Message Object  Data Register Low */
#define CAN_MO55_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00196F0u)

/** Alias (User Manual Name) for CAN_MO55_EDATA4.
 * To use register names with standard convension, please use CAN_MO55_EDATA4.
 */
#define CAN_EMO55DATA4   (CAN_MO55_EDATA4)

/** \brief  16F4, Message Object  Data Register High */
#define CAN_MO55_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00196F4u)

/** Alias (User Manual Name) for CAN_MO55_EDATA5.
 * To use register names with standard convension, please use CAN_MO55_EDATA5.
 */
#define CAN_EMO55DATA5   (CAN_MO55_EDATA5)

/** \brief  16F8, Message Object  Arbitration Register */
#define CAN_MO55_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00196F8u)

/** Alias (User Manual Name) for CAN_MO55_EDATA6.
 * To use register names with standard convension, please use CAN_MO55_EDATA6.
 */
#define CAN_EMO55DATA6   (CAN_MO55_EDATA6)

/** \brief  16E0, Message Object  Function Control Register */
#define CAN_MO55_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00196E0u)

/** Alias (User Manual Name) for CAN_MO55_FCR.
 * To use register names with standard convension, please use CAN_MO55_FCR.
 */
#define CAN_MOFCR55      (CAN_MO55_FCR)

/** \brief  16E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO55_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00196E4u)

/** Alias (User Manual Name) for CAN_MO55_FGPR.
 * To use register names with standard convension, please use CAN_MO55_FGPR.
 */
#define CAN_MOFGPR55     (CAN_MO55_FGPR)

/** \brief  16E8, Message Object  Interrupt Pointer Register */
#define CAN_MO55_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00196E8u)

/** Alias (User Manual Name) for CAN_MO55_IPR.
 * To use register names with standard convension, please use CAN_MO55_IPR.
 */
#define CAN_MOIPR55      (CAN_MO55_IPR)

/** \brief  16FC, Message Object  Control Register */
#define CAN_MO55_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00196FCu)

/** Alias (User Manual Name) for CAN_MO55_STAT.
 * To use register names with standard convension, please use CAN_MO55_STAT.
 */
#define CAN_MOSTAT55     (CAN_MO55_STAT)

/** \brief  170C, Message Object  Acceptance Mask Register */
#define CAN_MO56_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001970Cu)

/** Alias (User Manual Name) for CAN_MO56_AMR.
 * To use register names with standard convension, please use CAN_MO56_AMR.
 */
#define CAN_MOAMR56      (CAN_MO56_AMR)

/** \brief  1718, Message Object  Arbitration Register */
#define CAN_MO56_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019718u)

/** Alias (User Manual Name) for CAN_MO56_AR.
 * To use register names with standard convension, please use CAN_MO56_AR.
 */
#define CAN_MOAR56       (CAN_MO56_AR)

/** \brief  171C, Message Object  Control Register */
#define CAN_MO56_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001971Cu)

/** Alias (User Manual Name) for CAN_MO56_CTR.
 * To use register names with standard convension, please use CAN_MO56_CTR.
 */
#define CAN_MOCTR56      (CAN_MO56_CTR)

/** \brief  1714, Message Object  Data Register High */
#define CAN_MO56_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019714u)

/** Alias (User Manual Name) for CAN_MO56_DATAH.
 * To use register names with standard convension, please use CAN_MO56_DATAH.
 */
#define CAN_MODATAH56    (CAN_MO56_DATAH)

/** \brief  1710, Message Object  Data Register Low */
#define CAN_MO56_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019710u)

/** Alias (User Manual Name) for CAN_MO56_DATAL.
 * To use register names with standard convension, please use CAN_MO56_DATAL.
 */
#define CAN_MODATAL56    (CAN_MO56_DATAL)

/** \brief  1700, Message Object  Function Control Register */
#define CAN_MO56_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019700u)

/** Alias (User Manual Name) for CAN_MO56_EDATA0.
 * To use register names with standard convension, please use CAN_MO56_EDATA0.
 */
#define CAN_EMO56DATA0   (CAN_MO56_EDATA0)

/** \brief  1704, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO56_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019704u)

/** Alias (User Manual Name) for CAN_MO56_EDATA1.
 * To use register names with standard convension, please use CAN_MO56_EDATA1.
 */
#define CAN_EMO56DATA1   (CAN_MO56_EDATA1)

/** \brief  1708, Message Object  Interrupt Pointer Register */
#define CAN_MO56_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019708u)

/** Alias (User Manual Name) for CAN_MO56_EDATA2.
 * To use register names with standard convension, please use CAN_MO56_EDATA2.
 */
#define CAN_EMO56DATA2   (CAN_MO56_EDATA2)

/** \brief  170C, Message Object  Acceptance Mask Register */
#define CAN_MO56_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001970Cu)

/** Alias (User Manual Name) for CAN_MO56_EDATA3.
 * To use register names with standard convension, please use CAN_MO56_EDATA3.
 */
#define CAN_EMO56DATA3   (CAN_MO56_EDATA3)

/** \brief  1710, Message Object  Data Register Low */
#define CAN_MO56_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019710u)

/** Alias (User Manual Name) for CAN_MO56_EDATA4.
 * To use register names with standard convension, please use CAN_MO56_EDATA4.
 */
#define CAN_EMO56DATA4   (CAN_MO56_EDATA4)

/** \brief  1714, Message Object  Data Register High */
#define CAN_MO56_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019714u)

/** Alias (User Manual Name) for CAN_MO56_EDATA5.
 * To use register names with standard convension, please use CAN_MO56_EDATA5.
 */
#define CAN_EMO56DATA5   (CAN_MO56_EDATA5)

/** \brief  1718, Message Object  Arbitration Register */
#define CAN_MO56_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019718u)

/** Alias (User Manual Name) for CAN_MO56_EDATA6.
 * To use register names with standard convension, please use CAN_MO56_EDATA6.
 */
#define CAN_EMO56DATA6   (CAN_MO56_EDATA6)

/** \brief  1700, Message Object  Function Control Register */
#define CAN_MO56_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019700u)

/** Alias (User Manual Name) for CAN_MO56_FCR.
 * To use register names with standard convension, please use CAN_MO56_FCR.
 */
#define CAN_MOFCR56      (CAN_MO56_FCR)

/** \brief  1704, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO56_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019704u)

/** Alias (User Manual Name) for CAN_MO56_FGPR.
 * To use register names with standard convension, please use CAN_MO56_FGPR.
 */
#define CAN_MOFGPR56     (CAN_MO56_FGPR)

/** \brief  1708, Message Object  Interrupt Pointer Register */
#define CAN_MO56_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019708u)

/** Alias (User Manual Name) for CAN_MO56_IPR.
 * To use register names with standard convension, please use CAN_MO56_IPR.
 */
#define CAN_MOIPR56      (CAN_MO56_IPR)

/** \brief  171C, Message Object  Control Register */
#define CAN_MO56_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001971Cu)

/** Alias (User Manual Name) for CAN_MO56_STAT.
 * To use register names with standard convension, please use CAN_MO56_STAT.
 */
#define CAN_MOSTAT56     (CAN_MO56_STAT)

/** \brief  172C, Message Object  Acceptance Mask Register */
#define CAN_MO57_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001972Cu)

/** Alias (User Manual Name) for CAN_MO57_AMR.
 * To use register names with standard convension, please use CAN_MO57_AMR.
 */
#define CAN_MOAMR57      (CAN_MO57_AMR)

/** \brief  1738, Message Object  Arbitration Register */
#define CAN_MO57_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019738u)

/** Alias (User Manual Name) for CAN_MO57_AR.
 * To use register names with standard convension, please use CAN_MO57_AR.
 */
#define CAN_MOAR57       (CAN_MO57_AR)

/** \brief  173C, Message Object  Control Register */
#define CAN_MO57_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001973Cu)

/** Alias (User Manual Name) for CAN_MO57_CTR.
 * To use register names with standard convension, please use CAN_MO57_CTR.
 */
#define CAN_MOCTR57      (CAN_MO57_CTR)

/** \brief  1734, Message Object  Data Register High */
#define CAN_MO57_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019734u)

/** Alias (User Manual Name) for CAN_MO57_DATAH.
 * To use register names with standard convension, please use CAN_MO57_DATAH.
 */
#define CAN_MODATAH57    (CAN_MO57_DATAH)

/** \brief  1730, Message Object  Data Register Low */
#define CAN_MO57_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019730u)

/** Alias (User Manual Name) for CAN_MO57_DATAL.
 * To use register names with standard convension, please use CAN_MO57_DATAL.
 */
#define CAN_MODATAL57    (CAN_MO57_DATAL)

/** \brief  1720, Message Object  Function Control Register */
#define CAN_MO57_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019720u)

/** Alias (User Manual Name) for CAN_MO57_EDATA0.
 * To use register names with standard convension, please use CAN_MO57_EDATA0.
 */
#define CAN_EMO57DATA0   (CAN_MO57_EDATA0)

/** \brief  1724, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO57_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019724u)

/** Alias (User Manual Name) for CAN_MO57_EDATA1.
 * To use register names with standard convension, please use CAN_MO57_EDATA1.
 */
#define CAN_EMO57DATA1   (CAN_MO57_EDATA1)

/** \brief  1728, Message Object  Interrupt Pointer Register */
#define CAN_MO57_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019728u)

/** Alias (User Manual Name) for CAN_MO57_EDATA2.
 * To use register names with standard convension, please use CAN_MO57_EDATA2.
 */
#define CAN_EMO57DATA2   (CAN_MO57_EDATA2)

/** \brief  172C, Message Object  Acceptance Mask Register */
#define CAN_MO57_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001972Cu)

/** Alias (User Manual Name) for CAN_MO57_EDATA3.
 * To use register names with standard convension, please use CAN_MO57_EDATA3.
 */
#define CAN_EMO57DATA3   (CAN_MO57_EDATA3)

/** \brief  1730, Message Object  Data Register Low */
#define CAN_MO57_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019730u)

/** Alias (User Manual Name) for CAN_MO57_EDATA4.
 * To use register names with standard convension, please use CAN_MO57_EDATA4.
 */
#define CAN_EMO57DATA4   (CAN_MO57_EDATA4)

/** \brief  1734, Message Object  Data Register High */
#define CAN_MO57_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019734u)

/** Alias (User Manual Name) for CAN_MO57_EDATA5.
 * To use register names with standard convension, please use CAN_MO57_EDATA5.
 */
#define CAN_EMO57DATA5   (CAN_MO57_EDATA5)

/** \brief  1738, Message Object  Arbitration Register */
#define CAN_MO57_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019738u)

/** Alias (User Manual Name) for CAN_MO57_EDATA6.
 * To use register names with standard convension, please use CAN_MO57_EDATA6.
 */
#define CAN_EMO57DATA6   (CAN_MO57_EDATA6)

/** \brief  1720, Message Object  Function Control Register */
#define CAN_MO57_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019720u)

/** Alias (User Manual Name) for CAN_MO57_FCR.
 * To use register names with standard convension, please use CAN_MO57_FCR.
 */
#define CAN_MOFCR57      (CAN_MO57_FCR)

/** \brief  1724, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO57_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019724u)

/** Alias (User Manual Name) for CAN_MO57_FGPR.
 * To use register names with standard convension, please use CAN_MO57_FGPR.
 */
#define CAN_MOFGPR57     (CAN_MO57_FGPR)

/** \brief  1728, Message Object  Interrupt Pointer Register */
#define CAN_MO57_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019728u)

/** Alias (User Manual Name) for CAN_MO57_IPR.
 * To use register names with standard convension, please use CAN_MO57_IPR.
 */
#define CAN_MOIPR57      (CAN_MO57_IPR)

/** \brief  173C, Message Object  Control Register */
#define CAN_MO57_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001973Cu)

/** Alias (User Manual Name) for CAN_MO57_STAT.
 * To use register names with standard convension, please use CAN_MO57_STAT.
 */
#define CAN_MOSTAT57     (CAN_MO57_STAT)

/** \brief  174C, Message Object  Acceptance Mask Register */
#define CAN_MO58_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001974Cu)

/** Alias (User Manual Name) for CAN_MO58_AMR.
 * To use register names with standard convension, please use CAN_MO58_AMR.
 */
#define CAN_MOAMR58      (CAN_MO58_AMR)

/** \brief  1758, Message Object  Arbitration Register */
#define CAN_MO58_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019758u)

/** Alias (User Manual Name) for CAN_MO58_AR.
 * To use register names with standard convension, please use CAN_MO58_AR.
 */
#define CAN_MOAR58       (CAN_MO58_AR)

/** \brief  175C, Message Object  Control Register */
#define CAN_MO58_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001975Cu)

/** Alias (User Manual Name) for CAN_MO58_CTR.
 * To use register names with standard convension, please use CAN_MO58_CTR.
 */
#define CAN_MOCTR58      (CAN_MO58_CTR)

/** \brief  1754, Message Object  Data Register High */
#define CAN_MO58_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019754u)

/** Alias (User Manual Name) for CAN_MO58_DATAH.
 * To use register names with standard convension, please use CAN_MO58_DATAH.
 */
#define CAN_MODATAH58    (CAN_MO58_DATAH)

/** \brief  1750, Message Object  Data Register Low */
#define CAN_MO58_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019750u)

/** Alias (User Manual Name) for CAN_MO58_DATAL.
 * To use register names with standard convension, please use CAN_MO58_DATAL.
 */
#define CAN_MODATAL58    (CAN_MO58_DATAL)

/** \brief  1740, Message Object  Function Control Register */
#define CAN_MO58_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019740u)

/** Alias (User Manual Name) for CAN_MO58_EDATA0.
 * To use register names with standard convension, please use CAN_MO58_EDATA0.
 */
#define CAN_EMO58DATA0   (CAN_MO58_EDATA0)

/** \brief  1744, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO58_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019744u)

/** Alias (User Manual Name) for CAN_MO58_EDATA1.
 * To use register names with standard convension, please use CAN_MO58_EDATA1.
 */
#define CAN_EMO58DATA1   (CAN_MO58_EDATA1)

/** \brief  1748, Message Object  Interrupt Pointer Register */
#define CAN_MO58_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019748u)

/** Alias (User Manual Name) for CAN_MO58_EDATA2.
 * To use register names with standard convension, please use CAN_MO58_EDATA2.
 */
#define CAN_EMO58DATA2   (CAN_MO58_EDATA2)

/** \brief  174C, Message Object  Acceptance Mask Register */
#define CAN_MO58_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001974Cu)

/** Alias (User Manual Name) for CAN_MO58_EDATA3.
 * To use register names with standard convension, please use CAN_MO58_EDATA3.
 */
#define CAN_EMO58DATA3   (CAN_MO58_EDATA3)

/** \brief  1750, Message Object  Data Register Low */
#define CAN_MO58_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019750u)

/** Alias (User Manual Name) for CAN_MO58_EDATA4.
 * To use register names with standard convension, please use CAN_MO58_EDATA4.
 */
#define CAN_EMO58DATA4   (CAN_MO58_EDATA4)

/** \brief  1754, Message Object  Data Register High */
#define CAN_MO58_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019754u)

/** Alias (User Manual Name) for CAN_MO58_EDATA5.
 * To use register names with standard convension, please use CAN_MO58_EDATA5.
 */
#define CAN_EMO58DATA5   (CAN_MO58_EDATA5)

/** \brief  1758, Message Object  Arbitration Register */
#define CAN_MO58_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019758u)

/** Alias (User Manual Name) for CAN_MO58_EDATA6.
 * To use register names with standard convension, please use CAN_MO58_EDATA6.
 */
#define CAN_EMO58DATA6   (CAN_MO58_EDATA6)

/** \brief  1740, Message Object  Function Control Register */
#define CAN_MO58_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019740u)

/** Alias (User Manual Name) for CAN_MO58_FCR.
 * To use register names with standard convension, please use CAN_MO58_FCR.
 */
#define CAN_MOFCR58      (CAN_MO58_FCR)

/** \brief  1744, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO58_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019744u)

/** Alias (User Manual Name) for CAN_MO58_FGPR.
 * To use register names with standard convension, please use CAN_MO58_FGPR.
 */
#define CAN_MOFGPR58     (CAN_MO58_FGPR)

/** \brief  1748, Message Object  Interrupt Pointer Register */
#define CAN_MO58_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019748u)

/** Alias (User Manual Name) for CAN_MO58_IPR.
 * To use register names with standard convension, please use CAN_MO58_IPR.
 */
#define CAN_MOIPR58      (CAN_MO58_IPR)

/** \brief  175C, Message Object  Control Register */
#define CAN_MO58_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001975Cu)

/** Alias (User Manual Name) for CAN_MO58_STAT.
 * To use register names with standard convension, please use CAN_MO58_STAT.
 */
#define CAN_MOSTAT58     (CAN_MO58_STAT)

/** \brief  176C, Message Object  Acceptance Mask Register */
#define CAN_MO59_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001976Cu)

/** Alias (User Manual Name) for CAN_MO59_AMR.
 * To use register names with standard convension, please use CAN_MO59_AMR.
 */
#define CAN_MOAMR59      (CAN_MO59_AMR)

/** \brief  1778, Message Object  Arbitration Register */
#define CAN_MO59_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019778u)

/** Alias (User Manual Name) for CAN_MO59_AR.
 * To use register names with standard convension, please use CAN_MO59_AR.
 */
#define CAN_MOAR59       (CAN_MO59_AR)

/** \brief  177C, Message Object  Control Register */
#define CAN_MO59_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001977Cu)

/** Alias (User Manual Name) for CAN_MO59_CTR.
 * To use register names with standard convension, please use CAN_MO59_CTR.
 */
#define CAN_MOCTR59      (CAN_MO59_CTR)

/** \brief  1774, Message Object  Data Register High */
#define CAN_MO59_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019774u)

/** Alias (User Manual Name) for CAN_MO59_DATAH.
 * To use register names with standard convension, please use CAN_MO59_DATAH.
 */
#define CAN_MODATAH59    (CAN_MO59_DATAH)

/** \brief  1770, Message Object  Data Register Low */
#define CAN_MO59_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019770u)

/** Alias (User Manual Name) for CAN_MO59_DATAL.
 * To use register names with standard convension, please use CAN_MO59_DATAL.
 */
#define CAN_MODATAL59    (CAN_MO59_DATAL)

/** \brief  1760, Message Object  Function Control Register */
#define CAN_MO59_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019760u)

/** Alias (User Manual Name) for CAN_MO59_EDATA0.
 * To use register names with standard convension, please use CAN_MO59_EDATA0.
 */
#define CAN_EMO59DATA0   (CAN_MO59_EDATA0)

/** \brief  1764, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO59_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019764u)

/** Alias (User Manual Name) for CAN_MO59_EDATA1.
 * To use register names with standard convension, please use CAN_MO59_EDATA1.
 */
#define CAN_EMO59DATA1   (CAN_MO59_EDATA1)

/** \brief  1768, Message Object  Interrupt Pointer Register */
#define CAN_MO59_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019768u)

/** Alias (User Manual Name) for CAN_MO59_EDATA2.
 * To use register names with standard convension, please use CAN_MO59_EDATA2.
 */
#define CAN_EMO59DATA2   (CAN_MO59_EDATA2)

/** \brief  176C, Message Object  Acceptance Mask Register */
#define CAN_MO59_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001976Cu)

/** Alias (User Manual Name) for CAN_MO59_EDATA3.
 * To use register names with standard convension, please use CAN_MO59_EDATA3.
 */
#define CAN_EMO59DATA3   (CAN_MO59_EDATA3)

/** \brief  1770, Message Object  Data Register Low */
#define CAN_MO59_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019770u)

/** Alias (User Manual Name) for CAN_MO59_EDATA4.
 * To use register names with standard convension, please use CAN_MO59_EDATA4.
 */
#define CAN_EMO59DATA4   (CAN_MO59_EDATA4)

/** \brief  1774, Message Object  Data Register High */
#define CAN_MO59_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019774u)

/** Alias (User Manual Name) for CAN_MO59_EDATA5.
 * To use register names with standard convension, please use CAN_MO59_EDATA5.
 */
#define CAN_EMO59DATA5   (CAN_MO59_EDATA5)

/** \brief  1778, Message Object  Arbitration Register */
#define CAN_MO59_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019778u)

/** Alias (User Manual Name) for CAN_MO59_EDATA6.
 * To use register names with standard convension, please use CAN_MO59_EDATA6.
 */
#define CAN_EMO59DATA6   (CAN_MO59_EDATA6)

/** \brief  1760, Message Object  Function Control Register */
#define CAN_MO59_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019760u)

/** Alias (User Manual Name) for CAN_MO59_FCR.
 * To use register names with standard convension, please use CAN_MO59_FCR.
 */
#define CAN_MOFCR59      (CAN_MO59_FCR)

/** \brief  1764, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO59_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019764u)

/** Alias (User Manual Name) for CAN_MO59_FGPR.
 * To use register names with standard convension, please use CAN_MO59_FGPR.
 */
#define CAN_MOFGPR59     (CAN_MO59_FGPR)

/** \brief  1768, Message Object  Interrupt Pointer Register */
#define CAN_MO59_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019768u)

/** Alias (User Manual Name) for CAN_MO59_IPR.
 * To use register names with standard convension, please use CAN_MO59_IPR.
 */
#define CAN_MOIPR59      (CAN_MO59_IPR)

/** \brief  177C, Message Object  Control Register */
#define CAN_MO59_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001977Cu)

/** Alias (User Manual Name) for CAN_MO59_STAT.
 * To use register names with standard convension, please use CAN_MO59_STAT.
 */
#define CAN_MOSTAT59     (CAN_MO59_STAT)

/** \brief  10AC, Message Object  Acceptance Mask Register */
#define CAN_MO5_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00190ACu)

/** Alias (User Manual Name) for CAN_MO5_AMR.
 * To use register names with standard convension, please use CAN_MO5_AMR.
 */
#define CAN_MOAMR5       (CAN_MO5_AMR)

/** \brief  10B8, Message Object  Arbitration Register */
#define CAN_MO5_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00190B8u)

/** Alias (User Manual Name) for CAN_MO5_AR.
 * To use register names with standard convension, please use CAN_MO5_AR.
 */
#define CAN_MOAR5        (CAN_MO5_AR)

/** \brief  10BC, Message Object  Control Register */
#define CAN_MO5_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00190BCu)

/** Alias (User Manual Name) for CAN_MO5_CTR.
 * To use register names with standard convension, please use CAN_MO5_CTR.
 */
#define CAN_MOCTR5       (CAN_MO5_CTR)

/** \brief  10B4, Message Object  Data Register High */
#define CAN_MO5_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00190B4u)

/** Alias (User Manual Name) for CAN_MO5_DATAH.
 * To use register names with standard convension, please use CAN_MO5_DATAH.
 */
#define CAN_MODATAH5     (CAN_MO5_DATAH)

/** \brief  10B0, Message Object  Data Register Low */
#define CAN_MO5_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00190B0u)

/** Alias (User Manual Name) for CAN_MO5_DATAL.
 * To use register names with standard convension, please use CAN_MO5_DATAL.
 */
#define CAN_MODATAL5     (CAN_MO5_DATAL)

/** \brief  10A0, Message Object  Function Control Register */
#define CAN_MO5_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00190A0u)

/** Alias (User Manual Name) for CAN_MO5_EDATA0.
 * To use register names with standard convension, please use CAN_MO5_EDATA0.
 */
#define CAN_EMO5DATA0    (CAN_MO5_EDATA0)

/** \brief  10A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO5_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00190A4u)

/** Alias (User Manual Name) for CAN_MO5_EDATA1.
 * To use register names with standard convension, please use CAN_MO5_EDATA1.
 */
#define CAN_EMO5DATA1    (CAN_MO5_EDATA1)

/** \brief  10A8, Message Object  Interrupt Pointer Register */
#define CAN_MO5_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00190A8u)

/** Alias (User Manual Name) for CAN_MO5_EDATA2.
 * To use register names with standard convension, please use CAN_MO5_EDATA2.
 */
#define CAN_EMO5DATA2    (CAN_MO5_EDATA2)

/** \brief  10AC, Message Object  Acceptance Mask Register */
#define CAN_MO5_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00190ACu)

/** Alias (User Manual Name) for CAN_MO5_EDATA3.
 * To use register names with standard convension, please use CAN_MO5_EDATA3.
 */
#define CAN_EMO5DATA3    (CAN_MO5_EDATA3)

/** \brief  10B0, Message Object  Data Register Low */
#define CAN_MO5_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00190B0u)

/** Alias (User Manual Name) for CAN_MO5_EDATA4.
 * To use register names with standard convension, please use CAN_MO5_EDATA4.
 */
#define CAN_EMO5DATA4    (CAN_MO5_EDATA4)

/** \brief  10B4, Message Object  Data Register High */
#define CAN_MO5_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00190B4u)

/** Alias (User Manual Name) for CAN_MO5_EDATA5.
 * To use register names with standard convension, please use CAN_MO5_EDATA5.
 */
#define CAN_EMO5DATA5    (CAN_MO5_EDATA5)

/** \brief  10B8, Message Object  Arbitration Register */
#define CAN_MO5_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00190B8u)

/** Alias (User Manual Name) for CAN_MO5_EDATA6.
 * To use register names with standard convension, please use CAN_MO5_EDATA6.
 */
#define CAN_EMO5DATA6    (CAN_MO5_EDATA6)

/** \brief  10A0, Message Object  Function Control Register */
#define CAN_MO5_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00190A0u)

/** Alias (User Manual Name) for CAN_MO5_FCR.
 * To use register names with standard convension, please use CAN_MO5_FCR.
 */
#define CAN_MOFCR5       (CAN_MO5_FCR)

/** \brief  10A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO5_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00190A4u)

/** Alias (User Manual Name) for CAN_MO5_FGPR.
 * To use register names with standard convension, please use CAN_MO5_FGPR.
 */
#define CAN_MOFGPR5      (CAN_MO5_FGPR)

/** \brief  10A8, Message Object  Interrupt Pointer Register */
#define CAN_MO5_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00190A8u)

/** Alias (User Manual Name) for CAN_MO5_IPR.
 * To use register names with standard convension, please use CAN_MO5_IPR.
 */
#define CAN_MOIPR5       (CAN_MO5_IPR)

/** \brief  10BC, Message Object  Control Register */
#define CAN_MO5_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00190BCu)

/** Alias (User Manual Name) for CAN_MO5_STAT.
 * To use register names with standard convension, please use CAN_MO5_STAT.
 */
#define CAN_MOSTAT5      (CAN_MO5_STAT)

/** \brief  178C, Message Object  Acceptance Mask Register */
#define CAN_MO60_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001978Cu)

/** Alias (User Manual Name) for CAN_MO60_AMR.
 * To use register names with standard convension, please use CAN_MO60_AMR.
 */
#define CAN_MOAMR60      (CAN_MO60_AMR)

/** \brief  1798, Message Object  Arbitration Register */
#define CAN_MO60_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019798u)

/** Alias (User Manual Name) for CAN_MO60_AR.
 * To use register names with standard convension, please use CAN_MO60_AR.
 */
#define CAN_MOAR60       (CAN_MO60_AR)

/** \brief  179C, Message Object  Control Register */
#define CAN_MO60_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001979Cu)

/** Alias (User Manual Name) for CAN_MO60_CTR.
 * To use register names with standard convension, please use CAN_MO60_CTR.
 */
#define CAN_MOCTR60      (CAN_MO60_CTR)

/** \brief  1794, Message Object  Data Register High */
#define CAN_MO60_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019794u)

/** Alias (User Manual Name) for CAN_MO60_DATAH.
 * To use register names with standard convension, please use CAN_MO60_DATAH.
 */
#define CAN_MODATAH60    (CAN_MO60_DATAH)

/** \brief  1790, Message Object  Data Register Low */
#define CAN_MO60_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019790u)

/** Alias (User Manual Name) for CAN_MO60_DATAL.
 * To use register names with standard convension, please use CAN_MO60_DATAL.
 */
#define CAN_MODATAL60    (CAN_MO60_DATAL)

/** \brief  1780, Message Object  Function Control Register */
#define CAN_MO60_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019780u)

/** Alias (User Manual Name) for CAN_MO60_EDATA0.
 * To use register names with standard convension, please use CAN_MO60_EDATA0.
 */
#define CAN_EMO60DATA0   (CAN_MO60_EDATA0)

/** \brief  1784, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO60_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019784u)

/** Alias (User Manual Name) for CAN_MO60_EDATA1.
 * To use register names with standard convension, please use CAN_MO60_EDATA1.
 */
#define CAN_EMO60DATA1   (CAN_MO60_EDATA1)

/** \brief  1788, Message Object  Interrupt Pointer Register */
#define CAN_MO60_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019788u)

/** Alias (User Manual Name) for CAN_MO60_EDATA2.
 * To use register names with standard convension, please use CAN_MO60_EDATA2.
 */
#define CAN_EMO60DATA2   (CAN_MO60_EDATA2)

/** \brief  178C, Message Object  Acceptance Mask Register */
#define CAN_MO60_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001978Cu)

/** Alias (User Manual Name) for CAN_MO60_EDATA3.
 * To use register names with standard convension, please use CAN_MO60_EDATA3.
 */
#define CAN_EMO60DATA3   (CAN_MO60_EDATA3)

/** \brief  1790, Message Object  Data Register Low */
#define CAN_MO60_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019790u)

/** Alias (User Manual Name) for CAN_MO60_EDATA4.
 * To use register names with standard convension, please use CAN_MO60_EDATA4.
 */
#define CAN_EMO60DATA4   (CAN_MO60_EDATA4)

/** \brief  1794, Message Object  Data Register High */
#define CAN_MO60_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019794u)

/** Alias (User Manual Name) for CAN_MO60_EDATA5.
 * To use register names with standard convension, please use CAN_MO60_EDATA5.
 */
#define CAN_EMO60DATA5   (CAN_MO60_EDATA5)

/** \brief  1798, Message Object  Arbitration Register */
#define CAN_MO60_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019798u)

/** Alias (User Manual Name) for CAN_MO60_EDATA6.
 * To use register names with standard convension, please use CAN_MO60_EDATA6.
 */
#define CAN_EMO60DATA6   (CAN_MO60_EDATA6)

/** \brief  1780, Message Object  Function Control Register */
#define CAN_MO60_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019780u)

/** Alias (User Manual Name) for CAN_MO60_FCR.
 * To use register names with standard convension, please use CAN_MO60_FCR.
 */
#define CAN_MOFCR60      (CAN_MO60_FCR)

/** \brief  1784, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO60_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019784u)

/** Alias (User Manual Name) for CAN_MO60_FGPR.
 * To use register names with standard convension, please use CAN_MO60_FGPR.
 */
#define CAN_MOFGPR60     (CAN_MO60_FGPR)

/** \brief  1788, Message Object  Interrupt Pointer Register */
#define CAN_MO60_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019788u)

/** Alias (User Manual Name) for CAN_MO60_IPR.
 * To use register names with standard convension, please use CAN_MO60_IPR.
 */
#define CAN_MOIPR60      (CAN_MO60_IPR)

/** \brief  179C, Message Object  Control Register */
#define CAN_MO60_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001979Cu)

/** Alias (User Manual Name) for CAN_MO60_STAT.
 * To use register names with standard convension, please use CAN_MO60_STAT.
 */
#define CAN_MOSTAT60     (CAN_MO60_STAT)

/** \brief  17AC, Message Object  Acceptance Mask Register */
#define CAN_MO61_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00197ACu)

/** Alias (User Manual Name) for CAN_MO61_AMR.
 * To use register names with standard convension, please use CAN_MO61_AMR.
 */
#define CAN_MOAMR61      (CAN_MO61_AMR)

/** \brief  17B8, Message Object  Arbitration Register */
#define CAN_MO61_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00197B8u)

/** Alias (User Manual Name) for CAN_MO61_AR.
 * To use register names with standard convension, please use CAN_MO61_AR.
 */
#define CAN_MOAR61       (CAN_MO61_AR)

/** \brief  17BC, Message Object  Control Register */
#define CAN_MO61_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00197BCu)

/** Alias (User Manual Name) for CAN_MO61_CTR.
 * To use register names with standard convension, please use CAN_MO61_CTR.
 */
#define CAN_MOCTR61      (CAN_MO61_CTR)

/** \brief  17B4, Message Object  Data Register High */
#define CAN_MO61_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00197B4u)

/** Alias (User Manual Name) for CAN_MO61_DATAH.
 * To use register names with standard convension, please use CAN_MO61_DATAH.
 */
#define CAN_MODATAH61    (CAN_MO61_DATAH)

/** \brief  17B0, Message Object  Data Register Low */
#define CAN_MO61_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00197B0u)

/** Alias (User Manual Name) for CAN_MO61_DATAL.
 * To use register names with standard convension, please use CAN_MO61_DATAL.
 */
#define CAN_MODATAL61    (CAN_MO61_DATAL)

/** \brief  17A0, Message Object  Function Control Register */
#define CAN_MO61_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00197A0u)

/** Alias (User Manual Name) for CAN_MO61_EDATA0.
 * To use register names with standard convension, please use CAN_MO61_EDATA0.
 */
#define CAN_EMO61DATA0   (CAN_MO61_EDATA0)

/** \brief  17A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO61_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00197A4u)

/** Alias (User Manual Name) for CAN_MO61_EDATA1.
 * To use register names with standard convension, please use CAN_MO61_EDATA1.
 */
#define CAN_EMO61DATA1   (CAN_MO61_EDATA1)

/** \brief  17A8, Message Object  Interrupt Pointer Register */
#define CAN_MO61_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00197A8u)

/** Alias (User Manual Name) for CAN_MO61_EDATA2.
 * To use register names with standard convension, please use CAN_MO61_EDATA2.
 */
#define CAN_EMO61DATA2   (CAN_MO61_EDATA2)

/** \brief  17AC, Message Object  Acceptance Mask Register */
#define CAN_MO61_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00197ACu)

/** Alias (User Manual Name) for CAN_MO61_EDATA3.
 * To use register names with standard convension, please use CAN_MO61_EDATA3.
 */
#define CAN_EMO61DATA3   (CAN_MO61_EDATA3)

/** \brief  17B0, Message Object  Data Register Low */
#define CAN_MO61_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00197B0u)

/** Alias (User Manual Name) for CAN_MO61_EDATA4.
 * To use register names with standard convension, please use CAN_MO61_EDATA4.
 */
#define CAN_EMO61DATA4   (CAN_MO61_EDATA4)

/** \brief  17B4, Message Object  Data Register High */
#define CAN_MO61_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00197B4u)

/** Alias (User Manual Name) for CAN_MO61_EDATA5.
 * To use register names with standard convension, please use CAN_MO61_EDATA5.
 */
#define CAN_EMO61DATA5   (CAN_MO61_EDATA5)

/** \brief  17B8, Message Object  Arbitration Register */
#define CAN_MO61_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00197B8u)

/** Alias (User Manual Name) for CAN_MO61_EDATA6.
 * To use register names with standard convension, please use CAN_MO61_EDATA6.
 */
#define CAN_EMO61DATA6   (CAN_MO61_EDATA6)

/** \brief  17A0, Message Object  Function Control Register */
#define CAN_MO61_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00197A0u)

/** Alias (User Manual Name) for CAN_MO61_FCR.
 * To use register names with standard convension, please use CAN_MO61_FCR.
 */
#define CAN_MOFCR61      (CAN_MO61_FCR)

/** \brief  17A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO61_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00197A4u)

/** Alias (User Manual Name) for CAN_MO61_FGPR.
 * To use register names with standard convension, please use CAN_MO61_FGPR.
 */
#define CAN_MOFGPR61     (CAN_MO61_FGPR)

/** \brief  17A8, Message Object  Interrupt Pointer Register */
#define CAN_MO61_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00197A8u)

/** Alias (User Manual Name) for CAN_MO61_IPR.
 * To use register names with standard convension, please use CAN_MO61_IPR.
 */
#define CAN_MOIPR61      (CAN_MO61_IPR)

/** \brief  17BC, Message Object  Control Register */
#define CAN_MO61_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00197BCu)

/** Alias (User Manual Name) for CAN_MO61_STAT.
 * To use register names with standard convension, please use CAN_MO61_STAT.
 */
#define CAN_MOSTAT61     (CAN_MO61_STAT)

/** \brief  17CC, Message Object  Acceptance Mask Register */
#define CAN_MO62_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00197CCu)

/** Alias (User Manual Name) for CAN_MO62_AMR.
 * To use register names with standard convension, please use CAN_MO62_AMR.
 */
#define CAN_MOAMR62      (CAN_MO62_AMR)

/** \brief  17D8, Message Object  Arbitration Register */
#define CAN_MO62_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00197D8u)

/** Alias (User Manual Name) for CAN_MO62_AR.
 * To use register names with standard convension, please use CAN_MO62_AR.
 */
#define CAN_MOAR62       (CAN_MO62_AR)

/** \brief  17DC, Message Object  Control Register */
#define CAN_MO62_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00197DCu)

/** Alias (User Manual Name) for CAN_MO62_CTR.
 * To use register names with standard convension, please use CAN_MO62_CTR.
 */
#define CAN_MOCTR62      (CAN_MO62_CTR)

/** \brief  17D4, Message Object  Data Register High */
#define CAN_MO62_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00197D4u)

/** Alias (User Manual Name) for CAN_MO62_DATAH.
 * To use register names with standard convension, please use CAN_MO62_DATAH.
 */
#define CAN_MODATAH62    (CAN_MO62_DATAH)

/** \brief  17D0, Message Object  Data Register Low */
#define CAN_MO62_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00197D0u)

/** Alias (User Manual Name) for CAN_MO62_DATAL.
 * To use register names with standard convension, please use CAN_MO62_DATAL.
 */
#define CAN_MODATAL62    (CAN_MO62_DATAL)

/** \brief  17C0, Message Object  Function Control Register */
#define CAN_MO62_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00197C0u)

/** Alias (User Manual Name) for CAN_MO62_EDATA0.
 * To use register names with standard convension, please use CAN_MO62_EDATA0.
 */
#define CAN_EMO62DATA0   (CAN_MO62_EDATA0)

/** \brief  17C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO62_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00197C4u)

/** Alias (User Manual Name) for CAN_MO62_EDATA1.
 * To use register names with standard convension, please use CAN_MO62_EDATA1.
 */
#define CAN_EMO62DATA1   (CAN_MO62_EDATA1)

/** \brief  17C8, Message Object  Interrupt Pointer Register */
#define CAN_MO62_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00197C8u)

/** Alias (User Manual Name) for CAN_MO62_EDATA2.
 * To use register names with standard convension, please use CAN_MO62_EDATA2.
 */
#define CAN_EMO62DATA2   (CAN_MO62_EDATA2)

/** \brief  17CC, Message Object  Acceptance Mask Register */
#define CAN_MO62_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00197CCu)

/** Alias (User Manual Name) for CAN_MO62_EDATA3.
 * To use register names with standard convension, please use CAN_MO62_EDATA3.
 */
#define CAN_EMO62DATA3   (CAN_MO62_EDATA3)

/** \brief  17D0, Message Object  Data Register Low */
#define CAN_MO62_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00197D0u)

/** Alias (User Manual Name) for CAN_MO62_EDATA4.
 * To use register names with standard convension, please use CAN_MO62_EDATA4.
 */
#define CAN_EMO62DATA4   (CAN_MO62_EDATA4)

/** \brief  17D4, Message Object  Data Register High */
#define CAN_MO62_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00197D4u)

/** Alias (User Manual Name) for CAN_MO62_EDATA5.
 * To use register names with standard convension, please use CAN_MO62_EDATA5.
 */
#define CAN_EMO62DATA5   (CAN_MO62_EDATA5)

/** \brief  17D8, Message Object  Arbitration Register */
#define CAN_MO62_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00197D8u)

/** Alias (User Manual Name) for CAN_MO62_EDATA6.
 * To use register names with standard convension, please use CAN_MO62_EDATA6.
 */
#define CAN_EMO62DATA6   (CAN_MO62_EDATA6)

/** \brief  17C0, Message Object  Function Control Register */
#define CAN_MO62_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00197C0u)

/** Alias (User Manual Name) for CAN_MO62_FCR.
 * To use register names with standard convension, please use CAN_MO62_FCR.
 */
#define CAN_MOFCR62      (CAN_MO62_FCR)

/** \brief  17C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO62_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00197C4u)

/** Alias (User Manual Name) for CAN_MO62_FGPR.
 * To use register names with standard convension, please use CAN_MO62_FGPR.
 */
#define CAN_MOFGPR62     (CAN_MO62_FGPR)

/** \brief  17C8, Message Object  Interrupt Pointer Register */
#define CAN_MO62_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00197C8u)

/** Alias (User Manual Name) for CAN_MO62_IPR.
 * To use register names with standard convension, please use CAN_MO62_IPR.
 */
#define CAN_MOIPR62      (CAN_MO62_IPR)

/** \brief  17DC, Message Object  Control Register */
#define CAN_MO62_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00197DCu)

/** Alias (User Manual Name) for CAN_MO62_STAT.
 * To use register names with standard convension, please use CAN_MO62_STAT.
 */
#define CAN_MOSTAT62     (CAN_MO62_STAT)

/** \brief  17EC, Message Object  Acceptance Mask Register */
#define CAN_MO63_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00197ECu)

/** Alias (User Manual Name) for CAN_MO63_AMR.
 * To use register names with standard convension, please use CAN_MO63_AMR.
 */
#define CAN_MOAMR63      (CAN_MO63_AMR)

/** \brief  17F8, Message Object  Arbitration Register */
#define CAN_MO63_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00197F8u)

/** Alias (User Manual Name) for CAN_MO63_AR.
 * To use register names with standard convension, please use CAN_MO63_AR.
 */
#define CAN_MOAR63       (CAN_MO63_AR)

/** \brief  17FC, Message Object  Control Register */
#define CAN_MO63_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00197FCu)

/** Alias (User Manual Name) for CAN_MO63_CTR.
 * To use register names with standard convension, please use CAN_MO63_CTR.
 */
#define CAN_MOCTR63      (CAN_MO63_CTR)

/** \brief  17F4, Message Object  Data Register High */
#define CAN_MO63_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00197F4u)

/** Alias (User Manual Name) for CAN_MO63_DATAH.
 * To use register names with standard convension, please use CAN_MO63_DATAH.
 */
#define CAN_MODATAH63    (CAN_MO63_DATAH)

/** \brief  17F0, Message Object  Data Register Low */
#define CAN_MO63_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00197F0u)

/** Alias (User Manual Name) for CAN_MO63_DATAL.
 * To use register names with standard convension, please use CAN_MO63_DATAL.
 */
#define CAN_MODATAL63    (CAN_MO63_DATAL)

/** \brief  17E0, Message Object  Function Control Register */
#define CAN_MO63_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00197E0u)

/** Alias (User Manual Name) for CAN_MO63_EDATA0.
 * To use register names with standard convension, please use CAN_MO63_EDATA0.
 */
#define CAN_EMO63DATA0   (CAN_MO63_EDATA0)

/** \brief  17E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO63_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00197E4u)

/** Alias (User Manual Name) for CAN_MO63_EDATA1.
 * To use register names with standard convension, please use CAN_MO63_EDATA1.
 */
#define CAN_EMO63DATA1   (CAN_MO63_EDATA1)

/** \brief  17E8, Message Object  Interrupt Pointer Register */
#define CAN_MO63_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00197E8u)

/** Alias (User Manual Name) for CAN_MO63_EDATA2.
 * To use register names with standard convension, please use CAN_MO63_EDATA2.
 */
#define CAN_EMO63DATA2   (CAN_MO63_EDATA2)

/** \brief  17EC, Message Object  Acceptance Mask Register */
#define CAN_MO63_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00197ECu)

/** Alias (User Manual Name) for CAN_MO63_EDATA3.
 * To use register names with standard convension, please use CAN_MO63_EDATA3.
 */
#define CAN_EMO63DATA3   (CAN_MO63_EDATA3)

/** \brief  17F0, Message Object  Data Register Low */
#define CAN_MO63_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00197F0u)

/** Alias (User Manual Name) for CAN_MO63_EDATA4.
 * To use register names with standard convension, please use CAN_MO63_EDATA4.
 */
#define CAN_EMO63DATA4   (CAN_MO63_EDATA4)

/** \brief  17F4, Message Object  Data Register High */
#define CAN_MO63_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00197F4u)

/** Alias (User Manual Name) for CAN_MO63_EDATA5.
 * To use register names with standard convension, please use CAN_MO63_EDATA5.
 */
#define CAN_EMO63DATA5   (CAN_MO63_EDATA5)

/** \brief  17F8, Message Object  Arbitration Register */
#define CAN_MO63_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00197F8u)

/** Alias (User Manual Name) for CAN_MO63_EDATA6.
 * To use register names with standard convension, please use CAN_MO63_EDATA6.
 */
#define CAN_EMO63DATA6   (CAN_MO63_EDATA6)

/** \brief  17E0, Message Object  Function Control Register */
#define CAN_MO63_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00197E0u)

/** Alias (User Manual Name) for CAN_MO63_FCR.
 * To use register names with standard convension, please use CAN_MO63_FCR.
 */
#define CAN_MOFCR63      (CAN_MO63_FCR)

/** \brief  17E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO63_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00197E4u)

/** Alias (User Manual Name) for CAN_MO63_FGPR.
 * To use register names with standard convension, please use CAN_MO63_FGPR.
 */
#define CAN_MOFGPR63     (CAN_MO63_FGPR)

/** \brief  17E8, Message Object  Interrupt Pointer Register */
#define CAN_MO63_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00197E8u)

/** Alias (User Manual Name) for CAN_MO63_IPR.
 * To use register names with standard convension, please use CAN_MO63_IPR.
 */
#define CAN_MOIPR63      (CAN_MO63_IPR)

/** \brief  17FC, Message Object  Control Register */
#define CAN_MO63_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00197FCu)

/** Alias (User Manual Name) for CAN_MO63_STAT.
 * To use register names with standard convension, please use CAN_MO63_STAT.
 */
#define CAN_MOSTAT63     (CAN_MO63_STAT)

/** \brief  180C, Message Object  Acceptance Mask Register */
#define CAN_MO64_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001980Cu)

/** Alias (User Manual Name) for CAN_MO64_AMR.
 * To use register names with standard convension, please use CAN_MO64_AMR.
 */
#define CAN_MOAMR64      (CAN_MO64_AMR)

/** \brief  1818, Message Object  Arbitration Register */
#define CAN_MO64_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019818u)

/** Alias (User Manual Name) for CAN_MO64_AR.
 * To use register names with standard convension, please use CAN_MO64_AR.
 */
#define CAN_MOAR64       (CAN_MO64_AR)

/** \brief  181C, Message Object  Control Register */
#define CAN_MO64_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001981Cu)

/** Alias (User Manual Name) for CAN_MO64_CTR.
 * To use register names with standard convension, please use CAN_MO64_CTR.
 */
#define CAN_MOCTR64      (CAN_MO64_CTR)

/** \brief  1814, Message Object  Data Register High */
#define CAN_MO64_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019814u)

/** Alias (User Manual Name) for CAN_MO64_DATAH.
 * To use register names with standard convension, please use CAN_MO64_DATAH.
 */
#define CAN_MODATAH64    (CAN_MO64_DATAH)

/** \brief  1810, Message Object  Data Register Low */
#define CAN_MO64_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019810u)

/** Alias (User Manual Name) for CAN_MO64_DATAL.
 * To use register names with standard convension, please use CAN_MO64_DATAL.
 */
#define CAN_MODATAL64    (CAN_MO64_DATAL)

/** \brief  1800, Message Object  Function Control Register */
#define CAN_MO64_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019800u)

/** Alias (User Manual Name) for CAN_MO64_EDATA0.
 * To use register names with standard convension, please use CAN_MO64_EDATA0.
 */
#define CAN_EMO64DATA0   (CAN_MO64_EDATA0)

/** \brief  1804, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO64_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019804u)

/** Alias (User Manual Name) for CAN_MO64_EDATA1.
 * To use register names with standard convension, please use CAN_MO64_EDATA1.
 */
#define CAN_EMO64DATA1   (CAN_MO64_EDATA1)

/** \brief  1808, Message Object  Interrupt Pointer Register */
#define CAN_MO64_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019808u)

/** Alias (User Manual Name) for CAN_MO64_EDATA2.
 * To use register names with standard convension, please use CAN_MO64_EDATA2.
 */
#define CAN_EMO64DATA2   (CAN_MO64_EDATA2)

/** \brief  180C, Message Object  Acceptance Mask Register */
#define CAN_MO64_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001980Cu)

/** Alias (User Manual Name) for CAN_MO64_EDATA3.
 * To use register names with standard convension, please use CAN_MO64_EDATA3.
 */
#define CAN_EMO64DATA3   (CAN_MO64_EDATA3)

/** \brief  1810, Message Object  Data Register Low */
#define CAN_MO64_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019810u)

/** Alias (User Manual Name) for CAN_MO64_EDATA4.
 * To use register names with standard convension, please use CAN_MO64_EDATA4.
 */
#define CAN_EMO64DATA4   (CAN_MO64_EDATA4)

/** \brief  1814, Message Object  Data Register High */
#define CAN_MO64_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019814u)

/** Alias (User Manual Name) for CAN_MO64_EDATA5.
 * To use register names with standard convension, please use CAN_MO64_EDATA5.
 */
#define CAN_EMO64DATA5   (CAN_MO64_EDATA5)

/** \brief  1818, Message Object  Arbitration Register */
#define CAN_MO64_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019818u)

/** Alias (User Manual Name) for CAN_MO64_EDATA6.
 * To use register names with standard convension, please use CAN_MO64_EDATA6.
 */
#define CAN_EMO64DATA6   (CAN_MO64_EDATA6)

/** \brief  1800, Message Object  Function Control Register */
#define CAN_MO64_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019800u)

/** Alias (User Manual Name) for CAN_MO64_FCR.
 * To use register names with standard convension, please use CAN_MO64_FCR.
 */
#define CAN_MOFCR64      (CAN_MO64_FCR)

/** \brief  1804, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO64_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019804u)

/** Alias (User Manual Name) for CAN_MO64_FGPR.
 * To use register names with standard convension, please use CAN_MO64_FGPR.
 */
#define CAN_MOFGPR64     (CAN_MO64_FGPR)

/** \brief  1808, Message Object  Interrupt Pointer Register */
#define CAN_MO64_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019808u)

/** Alias (User Manual Name) for CAN_MO64_IPR.
 * To use register names with standard convension, please use CAN_MO64_IPR.
 */
#define CAN_MOIPR64      (CAN_MO64_IPR)

/** \brief  181C, Message Object  Control Register */
#define CAN_MO64_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001981Cu)

/** Alias (User Manual Name) for CAN_MO64_STAT.
 * To use register names with standard convension, please use CAN_MO64_STAT.
 */
#define CAN_MOSTAT64     (CAN_MO64_STAT)

/** \brief  182C, Message Object  Acceptance Mask Register */
#define CAN_MO65_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001982Cu)

/** Alias (User Manual Name) for CAN_MO65_AMR.
 * To use register names with standard convension, please use CAN_MO65_AMR.
 */
#define CAN_MOAMR65      (CAN_MO65_AMR)

/** \brief  1838, Message Object  Arbitration Register */
#define CAN_MO65_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019838u)

/** Alias (User Manual Name) for CAN_MO65_AR.
 * To use register names with standard convension, please use CAN_MO65_AR.
 */
#define CAN_MOAR65       (CAN_MO65_AR)

/** \brief  183C, Message Object  Control Register */
#define CAN_MO65_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001983Cu)

/** Alias (User Manual Name) for CAN_MO65_CTR.
 * To use register names with standard convension, please use CAN_MO65_CTR.
 */
#define CAN_MOCTR65      (CAN_MO65_CTR)

/** \brief  1834, Message Object  Data Register High */
#define CAN_MO65_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019834u)

/** Alias (User Manual Name) for CAN_MO65_DATAH.
 * To use register names with standard convension, please use CAN_MO65_DATAH.
 */
#define CAN_MODATAH65    (CAN_MO65_DATAH)

/** \brief  1830, Message Object  Data Register Low */
#define CAN_MO65_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019830u)

/** Alias (User Manual Name) for CAN_MO65_DATAL.
 * To use register names with standard convension, please use CAN_MO65_DATAL.
 */
#define CAN_MODATAL65    (CAN_MO65_DATAL)

/** \brief  1820, Message Object  Function Control Register */
#define CAN_MO65_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019820u)

/** Alias (User Manual Name) for CAN_MO65_EDATA0.
 * To use register names with standard convension, please use CAN_MO65_EDATA0.
 */
#define CAN_EMO65DATA0   (CAN_MO65_EDATA0)

/** \brief  1824, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO65_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019824u)

/** Alias (User Manual Name) for CAN_MO65_EDATA1.
 * To use register names with standard convension, please use CAN_MO65_EDATA1.
 */
#define CAN_EMO65DATA1   (CAN_MO65_EDATA1)

/** \brief  1828, Message Object  Interrupt Pointer Register */
#define CAN_MO65_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019828u)

/** Alias (User Manual Name) for CAN_MO65_EDATA2.
 * To use register names with standard convension, please use CAN_MO65_EDATA2.
 */
#define CAN_EMO65DATA2   (CAN_MO65_EDATA2)

/** \brief  182C, Message Object  Acceptance Mask Register */
#define CAN_MO65_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001982Cu)

/** Alias (User Manual Name) for CAN_MO65_EDATA3.
 * To use register names with standard convension, please use CAN_MO65_EDATA3.
 */
#define CAN_EMO65DATA3   (CAN_MO65_EDATA3)

/** \brief  1830, Message Object  Data Register Low */
#define CAN_MO65_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019830u)

/** Alias (User Manual Name) for CAN_MO65_EDATA4.
 * To use register names with standard convension, please use CAN_MO65_EDATA4.
 */
#define CAN_EMO65DATA4   (CAN_MO65_EDATA4)

/** \brief  1834, Message Object  Data Register High */
#define CAN_MO65_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019834u)

/** Alias (User Manual Name) for CAN_MO65_EDATA5.
 * To use register names with standard convension, please use CAN_MO65_EDATA5.
 */
#define CAN_EMO65DATA5   (CAN_MO65_EDATA5)

/** \brief  1838, Message Object  Arbitration Register */
#define CAN_MO65_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019838u)

/** Alias (User Manual Name) for CAN_MO65_EDATA6.
 * To use register names with standard convension, please use CAN_MO65_EDATA6.
 */
#define CAN_EMO65DATA6   (CAN_MO65_EDATA6)

/** \brief  1820, Message Object  Function Control Register */
#define CAN_MO65_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019820u)

/** Alias (User Manual Name) for CAN_MO65_FCR.
 * To use register names with standard convension, please use CAN_MO65_FCR.
 */
#define CAN_MOFCR65      (CAN_MO65_FCR)

/** \brief  1824, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO65_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019824u)

/** Alias (User Manual Name) for CAN_MO65_FGPR.
 * To use register names with standard convension, please use CAN_MO65_FGPR.
 */
#define CAN_MOFGPR65     (CAN_MO65_FGPR)

/** \brief  1828, Message Object  Interrupt Pointer Register */
#define CAN_MO65_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019828u)

/** Alias (User Manual Name) for CAN_MO65_IPR.
 * To use register names with standard convension, please use CAN_MO65_IPR.
 */
#define CAN_MOIPR65      (CAN_MO65_IPR)

/** \brief  183C, Message Object  Control Register */
#define CAN_MO65_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001983Cu)

/** Alias (User Manual Name) for CAN_MO65_STAT.
 * To use register names with standard convension, please use CAN_MO65_STAT.
 */
#define CAN_MOSTAT65     (CAN_MO65_STAT)

/** \brief  184C, Message Object  Acceptance Mask Register */
#define CAN_MO66_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001984Cu)

/** Alias (User Manual Name) for CAN_MO66_AMR.
 * To use register names with standard convension, please use CAN_MO66_AMR.
 */
#define CAN_MOAMR66      (CAN_MO66_AMR)

/** \brief  1858, Message Object  Arbitration Register */
#define CAN_MO66_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019858u)

/** Alias (User Manual Name) for CAN_MO66_AR.
 * To use register names with standard convension, please use CAN_MO66_AR.
 */
#define CAN_MOAR66       (CAN_MO66_AR)

/** \brief  185C, Message Object  Control Register */
#define CAN_MO66_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001985Cu)

/** Alias (User Manual Name) for CAN_MO66_CTR.
 * To use register names with standard convension, please use CAN_MO66_CTR.
 */
#define CAN_MOCTR66      (CAN_MO66_CTR)

/** \brief  1854, Message Object  Data Register High */
#define CAN_MO66_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019854u)

/** Alias (User Manual Name) for CAN_MO66_DATAH.
 * To use register names with standard convension, please use CAN_MO66_DATAH.
 */
#define CAN_MODATAH66    (CAN_MO66_DATAH)

/** \brief  1850, Message Object  Data Register Low */
#define CAN_MO66_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019850u)

/** Alias (User Manual Name) for CAN_MO66_DATAL.
 * To use register names with standard convension, please use CAN_MO66_DATAL.
 */
#define CAN_MODATAL66    (CAN_MO66_DATAL)

/** \brief  1840, Message Object  Function Control Register */
#define CAN_MO66_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019840u)

/** Alias (User Manual Name) for CAN_MO66_EDATA0.
 * To use register names with standard convension, please use CAN_MO66_EDATA0.
 */
#define CAN_EMO66DATA0   (CAN_MO66_EDATA0)

/** \brief  1844, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO66_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019844u)

/** Alias (User Manual Name) for CAN_MO66_EDATA1.
 * To use register names with standard convension, please use CAN_MO66_EDATA1.
 */
#define CAN_EMO66DATA1   (CAN_MO66_EDATA1)

/** \brief  1848, Message Object  Interrupt Pointer Register */
#define CAN_MO66_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019848u)

/** Alias (User Manual Name) for CAN_MO66_EDATA2.
 * To use register names with standard convension, please use CAN_MO66_EDATA2.
 */
#define CAN_EMO66DATA2   (CAN_MO66_EDATA2)

/** \brief  184C, Message Object  Acceptance Mask Register */
#define CAN_MO66_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001984Cu)

/** Alias (User Manual Name) for CAN_MO66_EDATA3.
 * To use register names with standard convension, please use CAN_MO66_EDATA3.
 */
#define CAN_EMO66DATA3   (CAN_MO66_EDATA3)

/** \brief  1850, Message Object  Data Register Low */
#define CAN_MO66_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019850u)

/** Alias (User Manual Name) for CAN_MO66_EDATA4.
 * To use register names with standard convension, please use CAN_MO66_EDATA4.
 */
#define CAN_EMO66DATA4   (CAN_MO66_EDATA4)

/** \brief  1854, Message Object  Data Register High */
#define CAN_MO66_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019854u)

/** Alias (User Manual Name) for CAN_MO66_EDATA5.
 * To use register names with standard convension, please use CAN_MO66_EDATA5.
 */
#define CAN_EMO66DATA5   (CAN_MO66_EDATA5)

/** \brief  1858, Message Object  Arbitration Register */
#define CAN_MO66_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019858u)

/** Alias (User Manual Name) for CAN_MO66_EDATA6.
 * To use register names with standard convension, please use CAN_MO66_EDATA6.
 */
#define CAN_EMO66DATA6   (CAN_MO66_EDATA6)

/** \brief  1840, Message Object  Function Control Register */
#define CAN_MO66_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019840u)

/** Alias (User Manual Name) for CAN_MO66_FCR.
 * To use register names with standard convension, please use CAN_MO66_FCR.
 */
#define CAN_MOFCR66      (CAN_MO66_FCR)

/** \brief  1844, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO66_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019844u)

/** Alias (User Manual Name) for CAN_MO66_FGPR.
 * To use register names with standard convension, please use CAN_MO66_FGPR.
 */
#define CAN_MOFGPR66     (CAN_MO66_FGPR)

/** \brief  1848, Message Object  Interrupt Pointer Register */
#define CAN_MO66_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019848u)

/** Alias (User Manual Name) for CAN_MO66_IPR.
 * To use register names with standard convension, please use CAN_MO66_IPR.
 */
#define CAN_MOIPR66      (CAN_MO66_IPR)

/** \brief  185C, Message Object  Control Register */
#define CAN_MO66_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001985Cu)

/** Alias (User Manual Name) for CAN_MO66_STAT.
 * To use register names with standard convension, please use CAN_MO66_STAT.
 */
#define CAN_MOSTAT66     (CAN_MO66_STAT)

/** \brief  186C, Message Object  Acceptance Mask Register */
#define CAN_MO67_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001986Cu)

/** Alias (User Manual Name) for CAN_MO67_AMR.
 * To use register names with standard convension, please use CAN_MO67_AMR.
 */
#define CAN_MOAMR67      (CAN_MO67_AMR)

/** \brief  1878, Message Object  Arbitration Register */
#define CAN_MO67_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019878u)

/** Alias (User Manual Name) for CAN_MO67_AR.
 * To use register names with standard convension, please use CAN_MO67_AR.
 */
#define CAN_MOAR67       (CAN_MO67_AR)

/** \brief  187C, Message Object  Control Register */
#define CAN_MO67_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001987Cu)

/** Alias (User Manual Name) for CAN_MO67_CTR.
 * To use register names with standard convension, please use CAN_MO67_CTR.
 */
#define CAN_MOCTR67      (CAN_MO67_CTR)

/** \brief  1874, Message Object  Data Register High */
#define CAN_MO67_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019874u)

/** Alias (User Manual Name) for CAN_MO67_DATAH.
 * To use register names with standard convension, please use CAN_MO67_DATAH.
 */
#define CAN_MODATAH67    (CAN_MO67_DATAH)

/** \brief  1870, Message Object  Data Register Low */
#define CAN_MO67_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019870u)

/** Alias (User Manual Name) for CAN_MO67_DATAL.
 * To use register names with standard convension, please use CAN_MO67_DATAL.
 */
#define CAN_MODATAL67    (CAN_MO67_DATAL)

/** \brief  1860, Message Object  Function Control Register */
#define CAN_MO67_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019860u)

/** Alias (User Manual Name) for CAN_MO67_EDATA0.
 * To use register names with standard convension, please use CAN_MO67_EDATA0.
 */
#define CAN_EMO67DATA0   (CAN_MO67_EDATA0)

/** \brief  1864, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO67_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019864u)

/** Alias (User Manual Name) for CAN_MO67_EDATA1.
 * To use register names with standard convension, please use CAN_MO67_EDATA1.
 */
#define CAN_EMO67DATA1   (CAN_MO67_EDATA1)

/** \brief  1868, Message Object  Interrupt Pointer Register */
#define CAN_MO67_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019868u)

/** Alias (User Manual Name) for CAN_MO67_EDATA2.
 * To use register names with standard convension, please use CAN_MO67_EDATA2.
 */
#define CAN_EMO67DATA2   (CAN_MO67_EDATA2)

/** \brief  186C, Message Object  Acceptance Mask Register */
#define CAN_MO67_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001986Cu)

/** Alias (User Manual Name) for CAN_MO67_EDATA3.
 * To use register names with standard convension, please use CAN_MO67_EDATA3.
 */
#define CAN_EMO67DATA3   (CAN_MO67_EDATA3)

/** \brief  1870, Message Object  Data Register Low */
#define CAN_MO67_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019870u)

/** Alias (User Manual Name) for CAN_MO67_EDATA4.
 * To use register names with standard convension, please use CAN_MO67_EDATA4.
 */
#define CAN_EMO67DATA4   (CAN_MO67_EDATA4)

/** \brief  1874, Message Object  Data Register High */
#define CAN_MO67_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019874u)

/** Alias (User Manual Name) for CAN_MO67_EDATA5.
 * To use register names with standard convension, please use CAN_MO67_EDATA5.
 */
#define CAN_EMO67DATA5   (CAN_MO67_EDATA5)

/** \brief  1878, Message Object  Arbitration Register */
#define CAN_MO67_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019878u)

/** Alias (User Manual Name) for CAN_MO67_EDATA6.
 * To use register names with standard convension, please use CAN_MO67_EDATA6.
 */
#define CAN_EMO67DATA6   (CAN_MO67_EDATA6)

/** \brief  1860, Message Object  Function Control Register */
#define CAN_MO67_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019860u)

/** Alias (User Manual Name) for CAN_MO67_FCR.
 * To use register names with standard convension, please use CAN_MO67_FCR.
 */
#define CAN_MOFCR67      (CAN_MO67_FCR)

/** \brief  1864, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO67_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019864u)

/** Alias (User Manual Name) for CAN_MO67_FGPR.
 * To use register names with standard convension, please use CAN_MO67_FGPR.
 */
#define CAN_MOFGPR67     (CAN_MO67_FGPR)

/** \brief  1868, Message Object  Interrupt Pointer Register */
#define CAN_MO67_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019868u)

/** Alias (User Manual Name) for CAN_MO67_IPR.
 * To use register names with standard convension, please use CAN_MO67_IPR.
 */
#define CAN_MOIPR67      (CAN_MO67_IPR)

/** \brief  187C, Message Object  Control Register */
#define CAN_MO67_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001987Cu)

/** Alias (User Manual Name) for CAN_MO67_STAT.
 * To use register names with standard convension, please use CAN_MO67_STAT.
 */
#define CAN_MOSTAT67     (CAN_MO67_STAT)

/** \brief  188C, Message Object  Acceptance Mask Register */
#define CAN_MO68_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001988Cu)

/** Alias (User Manual Name) for CAN_MO68_AMR.
 * To use register names with standard convension, please use CAN_MO68_AMR.
 */
#define CAN_MOAMR68      (CAN_MO68_AMR)

/** \brief  1898, Message Object  Arbitration Register */
#define CAN_MO68_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019898u)

/** Alias (User Manual Name) for CAN_MO68_AR.
 * To use register names with standard convension, please use CAN_MO68_AR.
 */
#define CAN_MOAR68       (CAN_MO68_AR)

/** \brief  189C, Message Object  Control Register */
#define CAN_MO68_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001989Cu)

/** Alias (User Manual Name) for CAN_MO68_CTR.
 * To use register names with standard convension, please use CAN_MO68_CTR.
 */
#define CAN_MOCTR68      (CAN_MO68_CTR)

/** \brief  1894, Message Object  Data Register High */
#define CAN_MO68_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019894u)

/** Alias (User Manual Name) for CAN_MO68_DATAH.
 * To use register names with standard convension, please use CAN_MO68_DATAH.
 */
#define CAN_MODATAH68    (CAN_MO68_DATAH)

/** \brief  1890, Message Object  Data Register Low */
#define CAN_MO68_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019890u)

/** Alias (User Manual Name) for CAN_MO68_DATAL.
 * To use register names with standard convension, please use CAN_MO68_DATAL.
 */
#define CAN_MODATAL68    (CAN_MO68_DATAL)

/** \brief  1880, Message Object  Function Control Register */
#define CAN_MO68_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019880u)

/** Alias (User Manual Name) for CAN_MO68_EDATA0.
 * To use register names with standard convension, please use CAN_MO68_EDATA0.
 */
#define CAN_EMO68DATA0   (CAN_MO68_EDATA0)

/** \brief  1884, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO68_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019884u)

/** Alias (User Manual Name) for CAN_MO68_EDATA1.
 * To use register names with standard convension, please use CAN_MO68_EDATA1.
 */
#define CAN_EMO68DATA1   (CAN_MO68_EDATA1)

/** \brief  1888, Message Object  Interrupt Pointer Register */
#define CAN_MO68_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019888u)

/** Alias (User Manual Name) for CAN_MO68_EDATA2.
 * To use register names with standard convension, please use CAN_MO68_EDATA2.
 */
#define CAN_EMO68DATA2   (CAN_MO68_EDATA2)

/** \brief  188C, Message Object  Acceptance Mask Register */
#define CAN_MO68_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001988Cu)

/** Alias (User Manual Name) for CAN_MO68_EDATA3.
 * To use register names with standard convension, please use CAN_MO68_EDATA3.
 */
#define CAN_EMO68DATA3   (CAN_MO68_EDATA3)

/** \brief  1890, Message Object  Data Register Low */
#define CAN_MO68_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019890u)

/** Alias (User Manual Name) for CAN_MO68_EDATA4.
 * To use register names with standard convension, please use CAN_MO68_EDATA4.
 */
#define CAN_EMO68DATA4   (CAN_MO68_EDATA4)

/** \brief  1894, Message Object  Data Register High */
#define CAN_MO68_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019894u)

/** Alias (User Manual Name) for CAN_MO68_EDATA5.
 * To use register names with standard convension, please use CAN_MO68_EDATA5.
 */
#define CAN_EMO68DATA5   (CAN_MO68_EDATA5)

/** \brief  1898, Message Object  Arbitration Register */
#define CAN_MO68_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019898u)

/** Alias (User Manual Name) for CAN_MO68_EDATA6.
 * To use register names with standard convension, please use CAN_MO68_EDATA6.
 */
#define CAN_EMO68DATA6   (CAN_MO68_EDATA6)

/** \brief  1880, Message Object  Function Control Register */
#define CAN_MO68_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019880u)

/** Alias (User Manual Name) for CAN_MO68_FCR.
 * To use register names with standard convension, please use CAN_MO68_FCR.
 */
#define CAN_MOFCR68      (CAN_MO68_FCR)

/** \brief  1884, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO68_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019884u)

/** Alias (User Manual Name) for CAN_MO68_FGPR.
 * To use register names with standard convension, please use CAN_MO68_FGPR.
 */
#define CAN_MOFGPR68     (CAN_MO68_FGPR)

/** \brief  1888, Message Object  Interrupt Pointer Register */
#define CAN_MO68_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019888u)

/** Alias (User Manual Name) for CAN_MO68_IPR.
 * To use register names with standard convension, please use CAN_MO68_IPR.
 */
#define CAN_MOIPR68      (CAN_MO68_IPR)

/** \brief  189C, Message Object  Control Register */
#define CAN_MO68_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001989Cu)

/** Alias (User Manual Name) for CAN_MO68_STAT.
 * To use register names with standard convension, please use CAN_MO68_STAT.
 */
#define CAN_MOSTAT68     (CAN_MO68_STAT)

/** \brief  18AC, Message Object  Acceptance Mask Register */
#define CAN_MO69_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00198ACu)

/** Alias (User Manual Name) for CAN_MO69_AMR.
 * To use register names with standard convension, please use CAN_MO69_AMR.
 */
#define CAN_MOAMR69      (CAN_MO69_AMR)

/** \brief  18B8, Message Object  Arbitration Register */
#define CAN_MO69_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00198B8u)

/** Alias (User Manual Name) for CAN_MO69_AR.
 * To use register names with standard convension, please use CAN_MO69_AR.
 */
#define CAN_MOAR69       (CAN_MO69_AR)

/** \brief  18BC, Message Object  Control Register */
#define CAN_MO69_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00198BCu)

/** Alias (User Manual Name) for CAN_MO69_CTR.
 * To use register names with standard convension, please use CAN_MO69_CTR.
 */
#define CAN_MOCTR69      (CAN_MO69_CTR)

/** \brief  18B4, Message Object  Data Register High */
#define CAN_MO69_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00198B4u)

/** Alias (User Manual Name) for CAN_MO69_DATAH.
 * To use register names with standard convension, please use CAN_MO69_DATAH.
 */
#define CAN_MODATAH69    (CAN_MO69_DATAH)

/** \brief  18B0, Message Object  Data Register Low */
#define CAN_MO69_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00198B0u)

/** Alias (User Manual Name) for CAN_MO69_DATAL.
 * To use register names with standard convension, please use CAN_MO69_DATAL.
 */
#define CAN_MODATAL69    (CAN_MO69_DATAL)

/** \brief  18A0, Message Object  Function Control Register */
#define CAN_MO69_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00198A0u)

/** Alias (User Manual Name) for CAN_MO69_EDATA0.
 * To use register names with standard convension, please use CAN_MO69_EDATA0.
 */
#define CAN_EMO69DATA0   (CAN_MO69_EDATA0)

/** \brief  18A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO69_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00198A4u)

/** Alias (User Manual Name) for CAN_MO69_EDATA1.
 * To use register names with standard convension, please use CAN_MO69_EDATA1.
 */
#define CAN_EMO69DATA1   (CAN_MO69_EDATA1)

/** \brief  18A8, Message Object  Interrupt Pointer Register */
#define CAN_MO69_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00198A8u)

/** Alias (User Manual Name) for CAN_MO69_EDATA2.
 * To use register names with standard convension, please use CAN_MO69_EDATA2.
 */
#define CAN_EMO69DATA2   (CAN_MO69_EDATA2)

/** \brief  18AC, Message Object  Acceptance Mask Register */
#define CAN_MO69_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00198ACu)

/** Alias (User Manual Name) for CAN_MO69_EDATA3.
 * To use register names with standard convension, please use CAN_MO69_EDATA3.
 */
#define CAN_EMO69DATA3   (CAN_MO69_EDATA3)

/** \brief  18B0, Message Object  Data Register Low */
#define CAN_MO69_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00198B0u)

/** Alias (User Manual Name) for CAN_MO69_EDATA4.
 * To use register names with standard convension, please use CAN_MO69_EDATA4.
 */
#define CAN_EMO69DATA4   (CAN_MO69_EDATA4)

/** \brief  18B4, Message Object  Data Register High */
#define CAN_MO69_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00198B4u)

/** Alias (User Manual Name) for CAN_MO69_EDATA5.
 * To use register names with standard convension, please use CAN_MO69_EDATA5.
 */
#define CAN_EMO69DATA5   (CAN_MO69_EDATA5)

/** \brief  18B8, Message Object  Arbitration Register */
#define CAN_MO69_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00198B8u)

/** Alias (User Manual Name) for CAN_MO69_EDATA6.
 * To use register names with standard convension, please use CAN_MO69_EDATA6.
 */
#define CAN_EMO69DATA6   (CAN_MO69_EDATA6)

/** \brief  18A0, Message Object  Function Control Register */
#define CAN_MO69_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00198A0u)

/** Alias (User Manual Name) for CAN_MO69_FCR.
 * To use register names with standard convension, please use CAN_MO69_FCR.
 */
#define CAN_MOFCR69      (CAN_MO69_FCR)

/** \brief  18A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO69_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00198A4u)

/** Alias (User Manual Name) for CAN_MO69_FGPR.
 * To use register names with standard convension, please use CAN_MO69_FGPR.
 */
#define CAN_MOFGPR69     (CAN_MO69_FGPR)

/** \brief  18A8, Message Object  Interrupt Pointer Register */
#define CAN_MO69_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00198A8u)

/** Alias (User Manual Name) for CAN_MO69_IPR.
 * To use register names with standard convension, please use CAN_MO69_IPR.
 */
#define CAN_MOIPR69      (CAN_MO69_IPR)

/** \brief  18BC, Message Object  Control Register */
#define CAN_MO69_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00198BCu)

/** Alias (User Manual Name) for CAN_MO69_STAT.
 * To use register names with standard convension, please use CAN_MO69_STAT.
 */
#define CAN_MOSTAT69     (CAN_MO69_STAT)

/** \brief  10CC, Message Object  Acceptance Mask Register */
#define CAN_MO6_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00190CCu)

/** Alias (User Manual Name) for CAN_MO6_AMR.
 * To use register names with standard convension, please use CAN_MO6_AMR.
 */
#define CAN_MOAMR6       (CAN_MO6_AMR)

/** \brief  10D8, Message Object  Arbitration Register */
#define CAN_MO6_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00190D8u)

/** Alias (User Manual Name) for CAN_MO6_AR.
 * To use register names with standard convension, please use CAN_MO6_AR.
 */
#define CAN_MOAR6        (CAN_MO6_AR)

/** \brief  10DC, Message Object  Control Register */
#define CAN_MO6_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00190DCu)

/** Alias (User Manual Name) for CAN_MO6_CTR.
 * To use register names with standard convension, please use CAN_MO6_CTR.
 */
#define CAN_MOCTR6       (CAN_MO6_CTR)

/** \brief  10D4, Message Object  Data Register High */
#define CAN_MO6_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00190D4u)

/** Alias (User Manual Name) for CAN_MO6_DATAH.
 * To use register names with standard convension, please use CAN_MO6_DATAH.
 */
#define CAN_MODATAH6     (CAN_MO6_DATAH)

/** \brief  10D0, Message Object  Data Register Low */
#define CAN_MO6_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00190D0u)

/** Alias (User Manual Name) for CAN_MO6_DATAL.
 * To use register names with standard convension, please use CAN_MO6_DATAL.
 */
#define CAN_MODATAL6     (CAN_MO6_DATAL)

/** \brief  10C0, Message Object  Function Control Register */
#define CAN_MO6_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00190C0u)

/** Alias (User Manual Name) for CAN_MO6_EDATA0.
 * To use register names with standard convension, please use CAN_MO6_EDATA0.
 */
#define CAN_EMO6DATA0    (CAN_MO6_EDATA0)

/** \brief  10C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO6_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00190C4u)

/** Alias (User Manual Name) for CAN_MO6_EDATA1.
 * To use register names with standard convension, please use CAN_MO6_EDATA1.
 */
#define CAN_EMO6DATA1    (CAN_MO6_EDATA1)

/** \brief  10C8, Message Object  Interrupt Pointer Register */
#define CAN_MO6_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00190C8u)

/** Alias (User Manual Name) for CAN_MO6_EDATA2.
 * To use register names with standard convension, please use CAN_MO6_EDATA2.
 */
#define CAN_EMO6DATA2    (CAN_MO6_EDATA2)

/** \brief  10CC, Message Object  Acceptance Mask Register */
#define CAN_MO6_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00190CCu)

/** Alias (User Manual Name) for CAN_MO6_EDATA3.
 * To use register names with standard convension, please use CAN_MO6_EDATA3.
 */
#define CAN_EMO6DATA3    (CAN_MO6_EDATA3)

/** \brief  10D0, Message Object  Data Register Low */
#define CAN_MO6_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00190D0u)

/** Alias (User Manual Name) for CAN_MO6_EDATA4.
 * To use register names with standard convension, please use CAN_MO6_EDATA4.
 */
#define CAN_EMO6DATA4    (CAN_MO6_EDATA4)

/** \brief  10D4, Message Object  Data Register High */
#define CAN_MO6_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00190D4u)

/** Alias (User Manual Name) for CAN_MO6_EDATA5.
 * To use register names with standard convension, please use CAN_MO6_EDATA5.
 */
#define CAN_EMO6DATA5    (CAN_MO6_EDATA5)

/** \brief  10D8, Message Object  Arbitration Register */
#define CAN_MO6_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00190D8u)

/** Alias (User Manual Name) for CAN_MO6_EDATA6.
 * To use register names with standard convension, please use CAN_MO6_EDATA6.
 */
#define CAN_EMO6DATA6    (CAN_MO6_EDATA6)

/** \brief  10C0, Message Object  Function Control Register */
#define CAN_MO6_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00190C0u)

/** Alias (User Manual Name) for CAN_MO6_FCR.
 * To use register names with standard convension, please use CAN_MO6_FCR.
 */
#define CAN_MOFCR6       (CAN_MO6_FCR)

/** \brief  10C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO6_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00190C4u)

/** Alias (User Manual Name) for CAN_MO6_FGPR.
 * To use register names with standard convension, please use CAN_MO6_FGPR.
 */
#define CAN_MOFGPR6      (CAN_MO6_FGPR)

/** \brief  10C8, Message Object  Interrupt Pointer Register */
#define CAN_MO6_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00190C8u)

/** Alias (User Manual Name) for CAN_MO6_IPR.
 * To use register names with standard convension, please use CAN_MO6_IPR.
 */
#define CAN_MOIPR6       (CAN_MO6_IPR)

/** \brief  10DC, Message Object  Control Register */
#define CAN_MO6_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00190DCu)

/** Alias (User Manual Name) for CAN_MO6_STAT.
 * To use register names with standard convension, please use CAN_MO6_STAT.
 */
#define CAN_MOSTAT6      (CAN_MO6_STAT)

/** \brief  18CC, Message Object  Acceptance Mask Register */
#define CAN_MO70_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00198CCu)

/** Alias (User Manual Name) for CAN_MO70_AMR.
 * To use register names with standard convension, please use CAN_MO70_AMR.
 */
#define CAN_MOAMR70      (CAN_MO70_AMR)

/** \brief  18D8, Message Object  Arbitration Register */
#define CAN_MO70_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00198D8u)

/** Alias (User Manual Name) for CAN_MO70_AR.
 * To use register names with standard convension, please use CAN_MO70_AR.
 */
#define CAN_MOAR70       (CAN_MO70_AR)

/** \brief  18DC, Message Object  Control Register */
#define CAN_MO70_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00198DCu)

/** Alias (User Manual Name) for CAN_MO70_CTR.
 * To use register names with standard convension, please use CAN_MO70_CTR.
 */
#define CAN_MOCTR70      (CAN_MO70_CTR)

/** \brief  18D4, Message Object  Data Register High */
#define CAN_MO70_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00198D4u)

/** Alias (User Manual Name) for CAN_MO70_DATAH.
 * To use register names with standard convension, please use CAN_MO70_DATAH.
 */
#define CAN_MODATAH70    (CAN_MO70_DATAH)

/** \brief  18D0, Message Object  Data Register Low */
#define CAN_MO70_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00198D0u)

/** Alias (User Manual Name) for CAN_MO70_DATAL.
 * To use register names with standard convension, please use CAN_MO70_DATAL.
 */
#define CAN_MODATAL70    (CAN_MO70_DATAL)

/** \brief  18C0, Message Object  Function Control Register */
#define CAN_MO70_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00198C0u)

/** Alias (User Manual Name) for CAN_MO70_EDATA0.
 * To use register names with standard convension, please use CAN_MO70_EDATA0.
 */
#define CAN_EMO70DATA0   (CAN_MO70_EDATA0)

/** \brief  18C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO70_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00198C4u)

/** Alias (User Manual Name) for CAN_MO70_EDATA1.
 * To use register names with standard convension, please use CAN_MO70_EDATA1.
 */
#define CAN_EMO70DATA1   (CAN_MO70_EDATA1)

/** \brief  18C8, Message Object  Interrupt Pointer Register */
#define CAN_MO70_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00198C8u)

/** Alias (User Manual Name) for CAN_MO70_EDATA2.
 * To use register names with standard convension, please use CAN_MO70_EDATA2.
 */
#define CAN_EMO70DATA2   (CAN_MO70_EDATA2)

/** \brief  18CC, Message Object  Acceptance Mask Register */
#define CAN_MO70_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00198CCu)

/** Alias (User Manual Name) for CAN_MO70_EDATA3.
 * To use register names with standard convension, please use CAN_MO70_EDATA3.
 */
#define CAN_EMO70DATA3   (CAN_MO70_EDATA3)

/** \brief  18D0, Message Object  Data Register Low */
#define CAN_MO70_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00198D0u)

/** Alias (User Manual Name) for CAN_MO70_EDATA4.
 * To use register names with standard convension, please use CAN_MO70_EDATA4.
 */
#define CAN_EMO70DATA4   (CAN_MO70_EDATA4)

/** \brief  18D4, Message Object  Data Register High */
#define CAN_MO70_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00198D4u)

/** Alias (User Manual Name) for CAN_MO70_EDATA5.
 * To use register names with standard convension, please use CAN_MO70_EDATA5.
 */
#define CAN_EMO70DATA5   (CAN_MO70_EDATA5)

/** \brief  18D8, Message Object  Arbitration Register */
#define CAN_MO70_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00198D8u)

/** Alias (User Manual Name) for CAN_MO70_EDATA6.
 * To use register names with standard convension, please use CAN_MO70_EDATA6.
 */
#define CAN_EMO70DATA6   (CAN_MO70_EDATA6)

/** \brief  18C0, Message Object  Function Control Register */
#define CAN_MO70_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00198C0u)

/** Alias (User Manual Name) for CAN_MO70_FCR.
 * To use register names with standard convension, please use CAN_MO70_FCR.
 */
#define CAN_MOFCR70      (CAN_MO70_FCR)

/** \brief  18C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO70_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00198C4u)

/** Alias (User Manual Name) for CAN_MO70_FGPR.
 * To use register names with standard convension, please use CAN_MO70_FGPR.
 */
#define CAN_MOFGPR70     (CAN_MO70_FGPR)

/** \brief  18C8, Message Object  Interrupt Pointer Register */
#define CAN_MO70_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00198C8u)

/** Alias (User Manual Name) for CAN_MO70_IPR.
 * To use register names with standard convension, please use CAN_MO70_IPR.
 */
#define CAN_MOIPR70      (CAN_MO70_IPR)

/** \brief  18DC, Message Object  Control Register */
#define CAN_MO70_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00198DCu)

/** Alias (User Manual Name) for CAN_MO70_STAT.
 * To use register names with standard convension, please use CAN_MO70_STAT.
 */
#define CAN_MOSTAT70     (CAN_MO70_STAT)

/** \brief  18EC, Message Object  Acceptance Mask Register */
#define CAN_MO71_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00198ECu)

/** Alias (User Manual Name) for CAN_MO71_AMR.
 * To use register names with standard convension, please use CAN_MO71_AMR.
 */
#define CAN_MOAMR71      (CAN_MO71_AMR)

/** \brief  18F8, Message Object  Arbitration Register */
#define CAN_MO71_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00198F8u)

/** Alias (User Manual Name) for CAN_MO71_AR.
 * To use register names with standard convension, please use CAN_MO71_AR.
 */
#define CAN_MOAR71       (CAN_MO71_AR)

/** \brief  18FC, Message Object  Control Register */
#define CAN_MO71_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00198FCu)

/** Alias (User Manual Name) for CAN_MO71_CTR.
 * To use register names with standard convension, please use CAN_MO71_CTR.
 */
#define CAN_MOCTR71      (CAN_MO71_CTR)

/** \brief  18F4, Message Object  Data Register High */
#define CAN_MO71_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00198F4u)

/** Alias (User Manual Name) for CAN_MO71_DATAH.
 * To use register names with standard convension, please use CAN_MO71_DATAH.
 */
#define CAN_MODATAH71    (CAN_MO71_DATAH)

/** \brief  18F0, Message Object  Data Register Low */
#define CAN_MO71_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00198F0u)

/** Alias (User Manual Name) for CAN_MO71_DATAL.
 * To use register names with standard convension, please use CAN_MO71_DATAL.
 */
#define CAN_MODATAL71    (CAN_MO71_DATAL)

/** \brief  18E0, Message Object  Function Control Register */
#define CAN_MO71_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00198E0u)

/** Alias (User Manual Name) for CAN_MO71_EDATA0.
 * To use register names with standard convension, please use CAN_MO71_EDATA0.
 */
#define CAN_EMO71DATA0   (CAN_MO71_EDATA0)

/** \brief  18E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO71_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00198E4u)

/** Alias (User Manual Name) for CAN_MO71_EDATA1.
 * To use register names with standard convension, please use CAN_MO71_EDATA1.
 */
#define CAN_EMO71DATA1   (CAN_MO71_EDATA1)

/** \brief  18E8, Message Object  Interrupt Pointer Register */
#define CAN_MO71_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00198E8u)

/** Alias (User Manual Name) for CAN_MO71_EDATA2.
 * To use register names with standard convension, please use CAN_MO71_EDATA2.
 */
#define CAN_EMO71DATA2   (CAN_MO71_EDATA2)

/** \brief  18EC, Message Object  Acceptance Mask Register */
#define CAN_MO71_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00198ECu)

/** Alias (User Manual Name) for CAN_MO71_EDATA3.
 * To use register names with standard convension, please use CAN_MO71_EDATA3.
 */
#define CAN_EMO71DATA3   (CAN_MO71_EDATA3)

/** \brief  18F0, Message Object  Data Register Low */
#define CAN_MO71_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00198F0u)

/** Alias (User Manual Name) for CAN_MO71_EDATA4.
 * To use register names with standard convension, please use CAN_MO71_EDATA4.
 */
#define CAN_EMO71DATA4   (CAN_MO71_EDATA4)

/** \brief  18F4, Message Object  Data Register High */
#define CAN_MO71_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00198F4u)

/** Alias (User Manual Name) for CAN_MO71_EDATA5.
 * To use register names with standard convension, please use CAN_MO71_EDATA5.
 */
#define CAN_EMO71DATA5   (CAN_MO71_EDATA5)

/** \brief  18F8, Message Object  Arbitration Register */
#define CAN_MO71_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00198F8u)

/** Alias (User Manual Name) for CAN_MO71_EDATA6.
 * To use register names with standard convension, please use CAN_MO71_EDATA6.
 */
#define CAN_EMO71DATA6   (CAN_MO71_EDATA6)

/** \brief  18E0, Message Object  Function Control Register */
#define CAN_MO71_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00198E0u)

/** Alias (User Manual Name) for CAN_MO71_FCR.
 * To use register names with standard convension, please use CAN_MO71_FCR.
 */
#define CAN_MOFCR71      (CAN_MO71_FCR)

/** \brief  18E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO71_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00198E4u)

/** Alias (User Manual Name) for CAN_MO71_FGPR.
 * To use register names with standard convension, please use CAN_MO71_FGPR.
 */
#define CAN_MOFGPR71     (CAN_MO71_FGPR)

/** \brief  18E8, Message Object  Interrupt Pointer Register */
#define CAN_MO71_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00198E8u)

/** Alias (User Manual Name) for CAN_MO71_IPR.
 * To use register names with standard convension, please use CAN_MO71_IPR.
 */
#define CAN_MOIPR71      (CAN_MO71_IPR)

/** \brief  18FC, Message Object  Control Register */
#define CAN_MO71_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00198FCu)

/** Alias (User Manual Name) for CAN_MO71_STAT.
 * To use register names with standard convension, please use CAN_MO71_STAT.
 */
#define CAN_MOSTAT71     (CAN_MO71_STAT)

/** \brief  190C, Message Object  Acceptance Mask Register */
#define CAN_MO72_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001990Cu)

/** Alias (User Manual Name) for CAN_MO72_AMR.
 * To use register names with standard convension, please use CAN_MO72_AMR.
 */
#define CAN_MOAMR72      (CAN_MO72_AMR)

/** \brief  1918, Message Object  Arbitration Register */
#define CAN_MO72_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019918u)

/** Alias (User Manual Name) for CAN_MO72_AR.
 * To use register names with standard convension, please use CAN_MO72_AR.
 */
#define CAN_MOAR72       (CAN_MO72_AR)

/** \brief  191C, Message Object  Control Register */
#define CAN_MO72_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001991Cu)

/** Alias (User Manual Name) for CAN_MO72_CTR.
 * To use register names with standard convension, please use CAN_MO72_CTR.
 */
#define CAN_MOCTR72      (CAN_MO72_CTR)

/** \brief  1914, Message Object  Data Register High */
#define CAN_MO72_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019914u)

/** Alias (User Manual Name) for CAN_MO72_DATAH.
 * To use register names with standard convension, please use CAN_MO72_DATAH.
 */
#define CAN_MODATAH72    (CAN_MO72_DATAH)

/** \brief  1910, Message Object  Data Register Low */
#define CAN_MO72_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019910u)

/** Alias (User Manual Name) for CAN_MO72_DATAL.
 * To use register names with standard convension, please use CAN_MO72_DATAL.
 */
#define CAN_MODATAL72    (CAN_MO72_DATAL)

/** \brief  1900, Message Object  Function Control Register */
#define CAN_MO72_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019900u)

/** Alias (User Manual Name) for CAN_MO72_EDATA0.
 * To use register names with standard convension, please use CAN_MO72_EDATA0.
 */
#define CAN_EMO72DATA0   (CAN_MO72_EDATA0)

/** \brief  1904, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO72_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019904u)

/** Alias (User Manual Name) for CAN_MO72_EDATA1.
 * To use register names with standard convension, please use CAN_MO72_EDATA1.
 */
#define CAN_EMO72DATA1   (CAN_MO72_EDATA1)

/** \brief  1908, Message Object  Interrupt Pointer Register */
#define CAN_MO72_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019908u)

/** Alias (User Manual Name) for CAN_MO72_EDATA2.
 * To use register names with standard convension, please use CAN_MO72_EDATA2.
 */
#define CAN_EMO72DATA2   (CAN_MO72_EDATA2)

/** \brief  190C, Message Object  Acceptance Mask Register */
#define CAN_MO72_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001990Cu)

/** Alias (User Manual Name) for CAN_MO72_EDATA3.
 * To use register names with standard convension, please use CAN_MO72_EDATA3.
 */
#define CAN_EMO72DATA3   (CAN_MO72_EDATA3)

/** \brief  1910, Message Object  Data Register Low */
#define CAN_MO72_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019910u)

/** Alias (User Manual Name) for CAN_MO72_EDATA4.
 * To use register names with standard convension, please use CAN_MO72_EDATA4.
 */
#define CAN_EMO72DATA4   (CAN_MO72_EDATA4)

/** \brief  1914, Message Object  Data Register High */
#define CAN_MO72_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019914u)

/** Alias (User Manual Name) for CAN_MO72_EDATA5.
 * To use register names with standard convension, please use CAN_MO72_EDATA5.
 */
#define CAN_EMO72DATA5   (CAN_MO72_EDATA5)

/** \brief  1918, Message Object  Arbitration Register */
#define CAN_MO72_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019918u)

/** Alias (User Manual Name) for CAN_MO72_EDATA6.
 * To use register names with standard convension, please use CAN_MO72_EDATA6.
 */
#define CAN_EMO72DATA6   (CAN_MO72_EDATA6)

/** \brief  1900, Message Object  Function Control Register */
#define CAN_MO72_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019900u)

/** Alias (User Manual Name) for CAN_MO72_FCR.
 * To use register names with standard convension, please use CAN_MO72_FCR.
 */
#define CAN_MOFCR72      (CAN_MO72_FCR)

/** \brief  1904, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO72_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019904u)

/** Alias (User Manual Name) for CAN_MO72_FGPR.
 * To use register names with standard convension, please use CAN_MO72_FGPR.
 */
#define CAN_MOFGPR72     (CAN_MO72_FGPR)

/** \brief  1908, Message Object  Interrupt Pointer Register */
#define CAN_MO72_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019908u)

/** Alias (User Manual Name) for CAN_MO72_IPR.
 * To use register names with standard convension, please use CAN_MO72_IPR.
 */
#define CAN_MOIPR72      (CAN_MO72_IPR)

/** \brief  191C, Message Object  Control Register */
#define CAN_MO72_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001991Cu)

/** Alias (User Manual Name) for CAN_MO72_STAT.
 * To use register names with standard convension, please use CAN_MO72_STAT.
 */
#define CAN_MOSTAT72     (CAN_MO72_STAT)

/** \brief  192C, Message Object  Acceptance Mask Register */
#define CAN_MO73_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001992Cu)

/** Alias (User Manual Name) for CAN_MO73_AMR.
 * To use register names with standard convension, please use CAN_MO73_AMR.
 */
#define CAN_MOAMR73      (CAN_MO73_AMR)

/** \brief  1938, Message Object  Arbitration Register */
#define CAN_MO73_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019938u)

/** Alias (User Manual Name) for CAN_MO73_AR.
 * To use register names with standard convension, please use CAN_MO73_AR.
 */
#define CAN_MOAR73       (CAN_MO73_AR)

/** \brief  193C, Message Object  Control Register */
#define CAN_MO73_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001993Cu)

/** Alias (User Manual Name) for CAN_MO73_CTR.
 * To use register names with standard convension, please use CAN_MO73_CTR.
 */
#define CAN_MOCTR73      (CAN_MO73_CTR)

/** \brief  1934, Message Object  Data Register High */
#define CAN_MO73_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019934u)

/** Alias (User Manual Name) for CAN_MO73_DATAH.
 * To use register names with standard convension, please use CAN_MO73_DATAH.
 */
#define CAN_MODATAH73    (CAN_MO73_DATAH)

/** \brief  1930, Message Object  Data Register Low */
#define CAN_MO73_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019930u)

/** Alias (User Manual Name) for CAN_MO73_DATAL.
 * To use register names with standard convension, please use CAN_MO73_DATAL.
 */
#define CAN_MODATAL73    (CAN_MO73_DATAL)

/** \brief  1920, Message Object  Function Control Register */
#define CAN_MO73_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019920u)

/** Alias (User Manual Name) for CAN_MO73_EDATA0.
 * To use register names with standard convension, please use CAN_MO73_EDATA0.
 */
#define CAN_EMO73DATA0   (CAN_MO73_EDATA0)

/** \brief  1924, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO73_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019924u)

/** Alias (User Manual Name) for CAN_MO73_EDATA1.
 * To use register names with standard convension, please use CAN_MO73_EDATA1.
 */
#define CAN_EMO73DATA1   (CAN_MO73_EDATA1)

/** \brief  1928, Message Object  Interrupt Pointer Register */
#define CAN_MO73_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019928u)

/** Alias (User Manual Name) for CAN_MO73_EDATA2.
 * To use register names with standard convension, please use CAN_MO73_EDATA2.
 */
#define CAN_EMO73DATA2   (CAN_MO73_EDATA2)

/** \brief  192C, Message Object  Acceptance Mask Register */
#define CAN_MO73_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001992Cu)

/** Alias (User Manual Name) for CAN_MO73_EDATA3.
 * To use register names with standard convension, please use CAN_MO73_EDATA3.
 */
#define CAN_EMO73DATA3   (CAN_MO73_EDATA3)

/** \brief  1930, Message Object  Data Register Low */
#define CAN_MO73_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019930u)

/** Alias (User Manual Name) for CAN_MO73_EDATA4.
 * To use register names with standard convension, please use CAN_MO73_EDATA4.
 */
#define CAN_EMO73DATA4   (CAN_MO73_EDATA4)

/** \brief  1934, Message Object  Data Register High */
#define CAN_MO73_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019934u)

/** Alias (User Manual Name) for CAN_MO73_EDATA5.
 * To use register names with standard convension, please use CAN_MO73_EDATA5.
 */
#define CAN_EMO73DATA5   (CAN_MO73_EDATA5)

/** \brief  1938, Message Object  Arbitration Register */
#define CAN_MO73_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019938u)

/** Alias (User Manual Name) for CAN_MO73_EDATA6.
 * To use register names with standard convension, please use CAN_MO73_EDATA6.
 */
#define CAN_EMO73DATA6   (CAN_MO73_EDATA6)

/** \brief  1920, Message Object  Function Control Register */
#define CAN_MO73_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019920u)

/** Alias (User Manual Name) for CAN_MO73_FCR.
 * To use register names with standard convension, please use CAN_MO73_FCR.
 */
#define CAN_MOFCR73      (CAN_MO73_FCR)

/** \brief  1924, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO73_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019924u)

/** Alias (User Manual Name) for CAN_MO73_FGPR.
 * To use register names with standard convension, please use CAN_MO73_FGPR.
 */
#define CAN_MOFGPR73     (CAN_MO73_FGPR)

/** \brief  1928, Message Object  Interrupt Pointer Register */
#define CAN_MO73_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019928u)

/** Alias (User Manual Name) for CAN_MO73_IPR.
 * To use register names with standard convension, please use CAN_MO73_IPR.
 */
#define CAN_MOIPR73      (CAN_MO73_IPR)

/** \brief  193C, Message Object  Control Register */
#define CAN_MO73_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001993Cu)

/** Alias (User Manual Name) for CAN_MO73_STAT.
 * To use register names with standard convension, please use CAN_MO73_STAT.
 */
#define CAN_MOSTAT73     (CAN_MO73_STAT)

/** \brief  194C, Message Object  Acceptance Mask Register */
#define CAN_MO74_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001994Cu)

/** Alias (User Manual Name) for CAN_MO74_AMR.
 * To use register names with standard convension, please use CAN_MO74_AMR.
 */
#define CAN_MOAMR74      (CAN_MO74_AMR)

/** \brief  1958, Message Object  Arbitration Register */
#define CAN_MO74_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019958u)

/** Alias (User Manual Name) for CAN_MO74_AR.
 * To use register names with standard convension, please use CAN_MO74_AR.
 */
#define CAN_MOAR74       (CAN_MO74_AR)

/** \brief  195C, Message Object  Control Register */
#define CAN_MO74_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001995Cu)

/** Alias (User Manual Name) for CAN_MO74_CTR.
 * To use register names with standard convension, please use CAN_MO74_CTR.
 */
#define CAN_MOCTR74      (CAN_MO74_CTR)

/** \brief  1954, Message Object  Data Register High */
#define CAN_MO74_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019954u)

/** Alias (User Manual Name) for CAN_MO74_DATAH.
 * To use register names with standard convension, please use CAN_MO74_DATAH.
 */
#define CAN_MODATAH74    (CAN_MO74_DATAH)

/** \brief  1950, Message Object  Data Register Low */
#define CAN_MO74_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019950u)

/** Alias (User Manual Name) for CAN_MO74_DATAL.
 * To use register names with standard convension, please use CAN_MO74_DATAL.
 */
#define CAN_MODATAL74    (CAN_MO74_DATAL)

/** \brief  1940, Message Object  Function Control Register */
#define CAN_MO74_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019940u)

/** Alias (User Manual Name) for CAN_MO74_EDATA0.
 * To use register names with standard convension, please use CAN_MO74_EDATA0.
 */
#define CAN_EMO74DATA0   (CAN_MO74_EDATA0)

/** \brief  1944, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO74_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019944u)

/** Alias (User Manual Name) for CAN_MO74_EDATA1.
 * To use register names with standard convension, please use CAN_MO74_EDATA1.
 */
#define CAN_EMO74DATA1   (CAN_MO74_EDATA1)

/** \brief  1948, Message Object  Interrupt Pointer Register */
#define CAN_MO74_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019948u)

/** Alias (User Manual Name) for CAN_MO74_EDATA2.
 * To use register names with standard convension, please use CAN_MO74_EDATA2.
 */
#define CAN_EMO74DATA2   (CAN_MO74_EDATA2)

/** \brief  194C, Message Object  Acceptance Mask Register */
#define CAN_MO74_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001994Cu)

/** Alias (User Manual Name) for CAN_MO74_EDATA3.
 * To use register names with standard convension, please use CAN_MO74_EDATA3.
 */
#define CAN_EMO74DATA3   (CAN_MO74_EDATA3)

/** \brief  1950, Message Object  Data Register Low */
#define CAN_MO74_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019950u)

/** Alias (User Manual Name) for CAN_MO74_EDATA4.
 * To use register names with standard convension, please use CAN_MO74_EDATA4.
 */
#define CAN_EMO74DATA4   (CAN_MO74_EDATA4)

/** \brief  1954, Message Object  Data Register High */
#define CAN_MO74_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019954u)

/** Alias (User Manual Name) for CAN_MO74_EDATA5.
 * To use register names with standard convension, please use CAN_MO74_EDATA5.
 */
#define CAN_EMO74DATA5   (CAN_MO74_EDATA5)

/** \brief  1958, Message Object  Arbitration Register */
#define CAN_MO74_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019958u)

/** Alias (User Manual Name) for CAN_MO74_EDATA6.
 * To use register names with standard convension, please use CAN_MO74_EDATA6.
 */
#define CAN_EMO74DATA6   (CAN_MO74_EDATA6)

/** \brief  1940, Message Object  Function Control Register */
#define CAN_MO74_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019940u)

/** Alias (User Manual Name) for CAN_MO74_FCR.
 * To use register names with standard convension, please use CAN_MO74_FCR.
 */
#define CAN_MOFCR74      (CAN_MO74_FCR)

/** \brief  1944, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO74_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019944u)

/** Alias (User Manual Name) for CAN_MO74_FGPR.
 * To use register names with standard convension, please use CAN_MO74_FGPR.
 */
#define CAN_MOFGPR74     (CAN_MO74_FGPR)

/** \brief  1948, Message Object  Interrupt Pointer Register */
#define CAN_MO74_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019948u)

/** Alias (User Manual Name) for CAN_MO74_IPR.
 * To use register names with standard convension, please use CAN_MO74_IPR.
 */
#define CAN_MOIPR74      (CAN_MO74_IPR)

/** \brief  195C, Message Object  Control Register */
#define CAN_MO74_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001995Cu)

/** Alias (User Manual Name) for CAN_MO74_STAT.
 * To use register names with standard convension, please use CAN_MO74_STAT.
 */
#define CAN_MOSTAT74     (CAN_MO74_STAT)

/** \brief  196C, Message Object  Acceptance Mask Register */
#define CAN_MO75_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001996Cu)

/** Alias (User Manual Name) for CAN_MO75_AMR.
 * To use register names with standard convension, please use CAN_MO75_AMR.
 */
#define CAN_MOAMR75      (CAN_MO75_AMR)

/** \brief  1978, Message Object  Arbitration Register */
#define CAN_MO75_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019978u)

/** Alias (User Manual Name) for CAN_MO75_AR.
 * To use register names with standard convension, please use CAN_MO75_AR.
 */
#define CAN_MOAR75       (CAN_MO75_AR)

/** \brief  197C, Message Object  Control Register */
#define CAN_MO75_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001997Cu)

/** Alias (User Manual Name) for CAN_MO75_CTR.
 * To use register names with standard convension, please use CAN_MO75_CTR.
 */
#define CAN_MOCTR75      (CAN_MO75_CTR)

/** \brief  1974, Message Object  Data Register High */
#define CAN_MO75_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019974u)

/** Alias (User Manual Name) for CAN_MO75_DATAH.
 * To use register names with standard convension, please use CAN_MO75_DATAH.
 */
#define CAN_MODATAH75    (CAN_MO75_DATAH)

/** \brief  1970, Message Object  Data Register Low */
#define CAN_MO75_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019970u)

/** Alias (User Manual Name) for CAN_MO75_DATAL.
 * To use register names with standard convension, please use CAN_MO75_DATAL.
 */
#define CAN_MODATAL75    (CAN_MO75_DATAL)

/** \brief  1960, Message Object  Function Control Register */
#define CAN_MO75_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019960u)

/** Alias (User Manual Name) for CAN_MO75_EDATA0.
 * To use register names with standard convension, please use CAN_MO75_EDATA0.
 */
#define CAN_EMO75DATA0   (CAN_MO75_EDATA0)

/** \brief  1964, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO75_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019964u)

/** Alias (User Manual Name) for CAN_MO75_EDATA1.
 * To use register names with standard convension, please use CAN_MO75_EDATA1.
 */
#define CAN_EMO75DATA1   (CAN_MO75_EDATA1)

/** \brief  1968, Message Object  Interrupt Pointer Register */
#define CAN_MO75_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019968u)

/** Alias (User Manual Name) for CAN_MO75_EDATA2.
 * To use register names with standard convension, please use CAN_MO75_EDATA2.
 */
#define CAN_EMO75DATA2   (CAN_MO75_EDATA2)

/** \brief  196C, Message Object  Acceptance Mask Register */
#define CAN_MO75_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001996Cu)

/** Alias (User Manual Name) for CAN_MO75_EDATA3.
 * To use register names with standard convension, please use CAN_MO75_EDATA3.
 */
#define CAN_EMO75DATA3   (CAN_MO75_EDATA3)

/** \brief  1970, Message Object  Data Register Low */
#define CAN_MO75_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019970u)

/** Alias (User Manual Name) for CAN_MO75_EDATA4.
 * To use register names with standard convension, please use CAN_MO75_EDATA4.
 */
#define CAN_EMO75DATA4   (CAN_MO75_EDATA4)

/** \brief  1974, Message Object  Data Register High */
#define CAN_MO75_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019974u)

/** Alias (User Manual Name) for CAN_MO75_EDATA5.
 * To use register names with standard convension, please use CAN_MO75_EDATA5.
 */
#define CAN_EMO75DATA5   (CAN_MO75_EDATA5)

/** \brief  1978, Message Object  Arbitration Register */
#define CAN_MO75_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019978u)

/** Alias (User Manual Name) for CAN_MO75_EDATA6.
 * To use register names with standard convension, please use CAN_MO75_EDATA6.
 */
#define CAN_EMO75DATA6   (CAN_MO75_EDATA6)

/** \brief  1960, Message Object  Function Control Register */
#define CAN_MO75_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019960u)

/** Alias (User Manual Name) for CAN_MO75_FCR.
 * To use register names with standard convension, please use CAN_MO75_FCR.
 */
#define CAN_MOFCR75      (CAN_MO75_FCR)

/** \brief  1964, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO75_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019964u)

/** Alias (User Manual Name) for CAN_MO75_FGPR.
 * To use register names with standard convension, please use CAN_MO75_FGPR.
 */
#define CAN_MOFGPR75     (CAN_MO75_FGPR)

/** \brief  1968, Message Object  Interrupt Pointer Register */
#define CAN_MO75_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019968u)

/** Alias (User Manual Name) for CAN_MO75_IPR.
 * To use register names with standard convension, please use CAN_MO75_IPR.
 */
#define CAN_MOIPR75      (CAN_MO75_IPR)

/** \brief  197C, Message Object  Control Register */
#define CAN_MO75_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001997Cu)

/** Alias (User Manual Name) for CAN_MO75_STAT.
 * To use register names with standard convension, please use CAN_MO75_STAT.
 */
#define CAN_MOSTAT75     (CAN_MO75_STAT)

/** \brief  198C, Message Object  Acceptance Mask Register */
#define CAN_MO76_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001998Cu)

/** Alias (User Manual Name) for CAN_MO76_AMR.
 * To use register names with standard convension, please use CAN_MO76_AMR.
 */
#define CAN_MOAMR76      (CAN_MO76_AMR)

/** \brief  1998, Message Object  Arbitration Register */
#define CAN_MO76_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019998u)

/** Alias (User Manual Name) for CAN_MO76_AR.
 * To use register names with standard convension, please use CAN_MO76_AR.
 */
#define CAN_MOAR76       (CAN_MO76_AR)

/** \brief  199C, Message Object  Control Register */
#define CAN_MO76_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001999Cu)

/** Alias (User Manual Name) for CAN_MO76_CTR.
 * To use register names with standard convension, please use CAN_MO76_CTR.
 */
#define CAN_MOCTR76      (CAN_MO76_CTR)

/** \brief  1994, Message Object  Data Register High */
#define CAN_MO76_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019994u)

/** Alias (User Manual Name) for CAN_MO76_DATAH.
 * To use register names with standard convension, please use CAN_MO76_DATAH.
 */
#define CAN_MODATAH76    (CAN_MO76_DATAH)

/** \brief  1990, Message Object  Data Register Low */
#define CAN_MO76_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019990u)

/** Alias (User Manual Name) for CAN_MO76_DATAL.
 * To use register names with standard convension, please use CAN_MO76_DATAL.
 */
#define CAN_MODATAL76    (CAN_MO76_DATAL)

/** \brief  1980, Message Object  Function Control Register */
#define CAN_MO76_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019980u)

/** Alias (User Manual Name) for CAN_MO76_EDATA0.
 * To use register names with standard convension, please use CAN_MO76_EDATA0.
 */
#define CAN_EMO76DATA0   (CAN_MO76_EDATA0)

/** \brief  1984, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO76_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019984u)

/** Alias (User Manual Name) for CAN_MO76_EDATA1.
 * To use register names with standard convension, please use CAN_MO76_EDATA1.
 */
#define CAN_EMO76DATA1   (CAN_MO76_EDATA1)

/** \brief  1988, Message Object  Interrupt Pointer Register */
#define CAN_MO76_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019988u)

/** Alias (User Manual Name) for CAN_MO76_EDATA2.
 * To use register names with standard convension, please use CAN_MO76_EDATA2.
 */
#define CAN_EMO76DATA2   (CAN_MO76_EDATA2)

/** \brief  198C, Message Object  Acceptance Mask Register */
#define CAN_MO76_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001998Cu)

/** Alias (User Manual Name) for CAN_MO76_EDATA3.
 * To use register names with standard convension, please use CAN_MO76_EDATA3.
 */
#define CAN_EMO76DATA3   (CAN_MO76_EDATA3)

/** \brief  1990, Message Object  Data Register Low */
#define CAN_MO76_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019990u)

/** Alias (User Manual Name) for CAN_MO76_EDATA4.
 * To use register names with standard convension, please use CAN_MO76_EDATA4.
 */
#define CAN_EMO76DATA4   (CAN_MO76_EDATA4)

/** \brief  1994, Message Object  Data Register High */
#define CAN_MO76_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019994u)

/** Alias (User Manual Name) for CAN_MO76_EDATA5.
 * To use register names with standard convension, please use CAN_MO76_EDATA5.
 */
#define CAN_EMO76DATA5   (CAN_MO76_EDATA5)

/** \brief  1998, Message Object  Arbitration Register */
#define CAN_MO76_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019998u)

/** Alias (User Manual Name) for CAN_MO76_EDATA6.
 * To use register names with standard convension, please use CAN_MO76_EDATA6.
 */
#define CAN_EMO76DATA6   (CAN_MO76_EDATA6)

/** \brief  1980, Message Object  Function Control Register */
#define CAN_MO76_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019980u)

/** Alias (User Manual Name) for CAN_MO76_FCR.
 * To use register names with standard convension, please use CAN_MO76_FCR.
 */
#define CAN_MOFCR76      (CAN_MO76_FCR)

/** \brief  1984, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO76_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019984u)

/** Alias (User Manual Name) for CAN_MO76_FGPR.
 * To use register names with standard convension, please use CAN_MO76_FGPR.
 */
#define CAN_MOFGPR76     (CAN_MO76_FGPR)

/** \brief  1988, Message Object  Interrupt Pointer Register */
#define CAN_MO76_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019988u)

/** Alias (User Manual Name) for CAN_MO76_IPR.
 * To use register names with standard convension, please use CAN_MO76_IPR.
 */
#define CAN_MOIPR76      (CAN_MO76_IPR)

/** \brief  199C, Message Object  Control Register */
#define CAN_MO76_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001999Cu)

/** Alias (User Manual Name) for CAN_MO76_STAT.
 * To use register names with standard convension, please use CAN_MO76_STAT.
 */
#define CAN_MOSTAT76     (CAN_MO76_STAT)

/** \brief  19AC, Message Object  Acceptance Mask Register */
#define CAN_MO77_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00199ACu)

/** Alias (User Manual Name) for CAN_MO77_AMR.
 * To use register names with standard convension, please use CAN_MO77_AMR.
 */
#define CAN_MOAMR77      (CAN_MO77_AMR)

/** \brief  19B8, Message Object  Arbitration Register */
#define CAN_MO77_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00199B8u)

/** Alias (User Manual Name) for CAN_MO77_AR.
 * To use register names with standard convension, please use CAN_MO77_AR.
 */
#define CAN_MOAR77       (CAN_MO77_AR)

/** \brief  19BC, Message Object  Control Register */
#define CAN_MO77_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00199BCu)

/** Alias (User Manual Name) for CAN_MO77_CTR.
 * To use register names with standard convension, please use CAN_MO77_CTR.
 */
#define CAN_MOCTR77      (CAN_MO77_CTR)

/** \brief  19B4, Message Object  Data Register High */
#define CAN_MO77_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00199B4u)

/** Alias (User Manual Name) for CAN_MO77_DATAH.
 * To use register names with standard convension, please use CAN_MO77_DATAH.
 */
#define CAN_MODATAH77    (CAN_MO77_DATAH)

/** \brief  19B0, Message Object  Data Register Low */
#define CAN_MO77_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00199B0u)

/** Alias (User Manual Name) for CAN_MO77_DATAL.
 * To use register names with standard convension, please use CAN_MO77_DATAL.
 */
#define CAN_MODATAL77    (CAN_MO77_DATAL)

/** \brief  19A0, Message Object  Function Control Register */
#define CAN_MO77_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00199A0u)

/** Alias (User Manual Name) for CAN_MO77_EDATA0.
 * To use register names with standard convension, please use CAN_MO77_EDATA0.
 */
#define CAN_EMO77DATA0   (CAN_MO77_EDATA0)

/** \brief  19A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO77_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00199A4u)

/** Alias (User Manual Name) for CAN_MO77_EDATA1.
 * To use register names with standard convension, please use CAN_MO77_EDATA1.
 */
#define CAN_EMO77DATA1   (CAN_MO77_EDATA1)

/** \brief  19A8, Message Object  Interrupt Pointer Register */
#define CAN_MO77_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00199A8u)

/** Alias (User Manual Name) for CAN_MO77_EDATA2.
 * To use register names with standard convension, please use CAN_MO77_EDATA2.
 */
#define CAN_EMO77DATA2   (CAN_MO77_EDATA2)

/** \brief  19AC, Message Object  Acceptance Mask Register */
#define CAN_MO77_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00199ACu)

/** Alias (User Manual Name) for CAN_MO77_EDATA3.
 * To use register names with standard convension, please use CAN_MO77_EDATA3.
 */
#define CAN_EMO77DATA3   (CAN_MO77_EDATA3)

/** \brief  19B0, Message Object  Data Register Low */
#define CAN_MO77_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00199B0u)

/** Alias (User Manual Name) for CAN_MO77_EDATA4.
 * To use register names with standard convension, please use CAN_MO77_EDATA4.
 */
#define CAN_EMO77DATA4   (CAN_MO77_EDATA4)

/** \brief  19B4, Message Object  Data Register High */
#define CAN_MO77_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00199B4u)

/** Alias (User Manual Name) for CAN_MO77_EDATA5.
 * To use register names with standard convension, please use CAN_MO77_EDATA5.
 */
#define CAN_EMO77DATA5   (CAN_MO77_EDATA5)

/** \brief  19B8, Message Object  Arbitration Register */
#define CAN_MO77_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00199B8u)

/** Alias (User Manual Name) for CAN_MO77_EDATA6.
 * To use register names with standard convension, please use CAN_MO77_EDATA6.
 */
#define CAN_EMO77DATA6   (CAN_MO77_EDATA6)

/** \brief  19A0, Message Object  Function Control Register */
#define CAN_MO77_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00199A0u)

/** Alias (User Manual Name) for CAN_MO77_FCR.
 * To use register names with standard convension, please use CAN_MO77_FCR.
 */
#define CAN_MOFCR77      (CAN_MO77_FCR)

/** \brief  19A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO77_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00199A4u)

/** Alias (User Manual Name) for CAN_MO77_FGPR.
 * To use register names with standard convension, please use CAN_MO77_FGPR.
 */
#define CAN_MOFGPR77     (CAN_MO77_FGPR)

/** \brief  19A8, Message Object  Interrupt Pointer Register */
#define CAN_MO77_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00199A8u)

/** Alias (User Manual Name) for CAN_MO77_IPR.
 * To use register names with standard convension, please use CAN_MO77_IPR.
 */
#define CAN_MOIPR77      (CAN_MO77_IPR)

/** \brief  19BC, Message Object  Control Register */
#define CAN_MO77_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00199BCu)

/** Alias (User Manual Name) for CAN_MO77_STAT.
 * To use register names with standard convension, please use CAN_MO77_STAT.
 */
#define CAN_MOSTAT77     (CAN_MO77_STAT)

/** \brief  19CC, Message Object  Acceptance Mask Register */
#define CAN_MO78_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00199CCu)

/** Alias (User Manual Name) for CAN_MO78_AMR.
 * To use register names with standard convension, please use CAN_MO78_AMR.
 */
#define CAN_MOAMR78      (CAN_MO78_AMR)

/** \brief  19D8, Message Object  Arbitration Register */
#define CAN_MO78_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00199D8u)

/** Alias (User Manual Name) for CAN_MO78_AR.
 * To use register names with standard convension, please use CAN_MO78_AR.
 */
#define CAN_MOAR78       (CAN_MO78_AR)

/** \brief  19DC, Message Object  Control Register */
#define CAN_MO78_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00199DCu)

/** Alias (User Manual Name) for CAN_MO78_CTR.
 * To use register names with standard convension, please use CAN_MO78_CTR.
 */
#define CAN_MOCTR78      (CAN_MO78_CTR)

/** \brief  19D4, Message Object  Data Register High */
#define CAN_MO78_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00199D4u)

/** Alias (User Manual Name) for CAN_MO78_DATAH.
 * To use register names with standard convension, please use CAN_MO78_DATAH.
 */
#define CAN_MODATAH78    (CAN_MO78_DATAH)

/** \brief  19D0, Message Object  Data Register Low */
#define CAN_MO78_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00199D0u)

/** Alias (User Manual Name) for CAN_MO78_DATAL.
 * To use register names with standard convension, please use CAN_MO78_DATAL.
 */
#define CAN_MODATAL78    (CAN_MO78_DATAL)

/** \brief  19C0, Message Object  Function Control Register */
#define CAN_MO78_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00199C0u)

/** Alias (User Manual Name) for CAN_MO78_EDATA0.
 * To use register names with standard convension, please use CAN_MO78_EDATA0.
 */
#define CAN_EMO78DATA0   (CAN_MO78_EDATA0)

/** \brief  19C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO78_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00199C4u)

/** Alias (User Manual Name) for CAN_MO78_EDATA1.
 * To use register names with standard convension, please use CAN_MO78_EDATA1.
 */
#define CAN_EMO78DATA1   (CAN_MO78_EDATA1)

/** \brief  19C8, Message Object  Interrupt Pointer Register */
#define CAN_MO78_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00199C8u)

/** Alias (User Manual Name) for CAN_MO78_EDATA2.
 * To use register names with standard convension, please use CAN_MO78_EDATA2.
 */
#define CAN_EMO78DATA2   (CAN_MO78_EDATA2)

/** \brief  19CC, Message Object  Acceptance Mask Register */
#define CAN_MO78_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00199CCu)

/** Alias (User Manual Name) for CAN_MO78_EDATA3.
 * To use register names with standard convension, please use CAN_MO78_EDATA3.
 */
#define CAN_EMO78DATA3   (CAN_MO78_EDATA3)

/** \brief  19D0, Message Object  Data Register Low */
#define CAN_MO78_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00199D0u)

/** Alias (User Manual Name) for CAN_MO78_EDATA4.
 * To use register names with standard convension, please use CAN_MO78_EDATA4.
 */
#define CAN_EMO78DATA4   (CAN_MO78_EDATA4)

/** \brief  19D4, Message Object  Data Register High */
#define CAN_MO78_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00199D4u)

/** Alias (User Manual Name) for CAN_MO78_EDATA5.
 * To use register names with standard convension, please use CAN_MO78_EDATA5.
 */
#define CAN_EMO78DATA5   (CAN_MO78_EDATA5)

/** \brief  19D8, Message Object  Arbitration Register */
#define CAN_MO78_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00199D8u)

/** Alias (User Manual Name) for CAN_MO78_EDATA6.
 * To use register names with standard convension, please use CAN_MO78_EDATA6.
 */
#define CAN_EMO78DATA6   (CAN_MO78_EDATA6)

/** \brief  19C0, Message Object  Function Control Register */
#define CAN_MO78_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00199C0u)

/** Alias (User Manual Name) for CAN_MO78_FCR.
 * To use register names with standard convension, please use CAN_MO78_FCR.
 */
#define CAN_MOFCR78      (CAN_MO78_FCR)

/** \brief  19C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO78_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00199C4u)

/** Alias (User Manual Name) for CAN_MO78_FGPR.
 * To use register names with standard convension, please use CAN_MO78_FGPR.
 */
#define CAN_MOFGPR78     (CAN_MO78_FGPR)

/** \brief  19C8, Message Object  Interrupt Pointer Register */
#define CAN_MO78_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00199C8u)

/** Alias (User Manual Name) for CAN_MO78_IPR.
 * To use register names with standard convension, please use CAN_MO78_IPR.
 */
#define CAN_MOIPR78      (CAN_MO78_IPR)

/** \brief  19DC, Message Object  Control Register */
#define CAN_MO78_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00199DCu)

/** Alias (User Manual Name) for CAN_MO78_STAT.
 * To use register names with standard convension, please use CAN_MO78_STAT.
 */
#define CAN_MOSTAT78     (CAN_MO78_STAT)

/** \brief  19EC, Message Object  Acceptance Mask Register */
#define CAN_MO79_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00199ECu)

/** Alias (User Manual Name) for CAN_MO79_AMR.
 * To use register names with standard convension, please use CAN_MO79_AMR.
 */
#define CAN_MOAMR79      (CAN_MO79_AMR)

/** \brief  19F8, Message Object  Arbitration Register */
#define CAN_MO79_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00199F8u)

/** Alias (User Manual Name) for CAN_MO79_AR.
 * To use register names with standard convension, please use CAN_MO79_AR.
 */
#define CAN_MOAR79       (CAN_MO79_AR)

/** \brief  19FC, Message Object  Control Register */
#define CAN_MO79_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00199FCu)

/** Alias (User Manual Name) for CAN_MO79_CTR.
 * To use register names with standard convension, please use CAN_MO79_CTR.
 */
#define CAN_MOCTR79      (CAN_MO79_CTR)

/** \brief  19F4, Message Object  Data Register High */
#define CAN_MO79_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00199F4u)

/** Alias (User Manual Name) for CAN_MO79_DATAH.
 * To use register names with standard convension, please use CAN_MO79_DATAH.
 */
#define CAN_MODATAH79    (CAN_MO79_DATAH)

/** \brief  19F0, Message Object  Data Register Low */
#define CAN_MO79_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00199F0u)

/** Alias (User Manual Name) for CAN_MO79_DATAL.
 * To use register names with standard convension, please use CAN_MO79_DATAL.
 */
#define CAN_MODATAL79    (CAN_MO79_DATAL)

/** \brief  19E0, Message Object  Function Control Register */
#define CAN_MO79_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00199E0u)

/** Alias (User Manual Name) for CAN_MO79_EDATA0.
 * To use register names with standard convension, please use CAN_MO79_EDATA0.
 */
#define CAN_EMO79DATA0   (CAN_MO79_EDATA0)

/** \brief  19E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO79_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00199E4u)

/** Alias (User Manual Name) for CAN_MO79_EDATA1.
 * To use register names with standard convension, please use CAN_MO79_EDATA1.
 */
#define CAN_EMO79DATA1   (CAN_MO79_EDATA1)

/** \brief  19E8, Message Object  Interrupt Pointer Register */
#define CAN_MO79_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00199E8u)

/** Alias (User Manual Name) for CAN_MO79_EDATA2.
 * To use register names with standard convension, please use CAN_MO79_EDATA2.
 */
#define CAN_EMO79DATA2   (CAN_MO79_EDATA2)

/** \brief  19EC, Message Object  Acceptance Mask Register */
#define CAN_MO79_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00199ECu)

/** Alias (User Manual Name) for CAN_MO79_EDATA3.
 * To use register names with standard convension, please use CAN_MO79_EDATA3.
 */
#define CAN_EMO79DATA3   (CAN_MO79_EDATA3)

/** \brief  19F0, Message Object  Data Register Low */
#define CAN_MO79_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00199F0u)

/** Alias (User Manual Name) for CAN_MO79_EDATA4.
 * To use register names with standard convension, please use CAN_MO79_EDATA4.
 */
#define CAN_EMO79DATA4   (CAN_MO79_EDATA4)

/** \brief  19F4, Message Object  Data Register High */
#define CAN_MO79_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00199F4u)

/** Alias (User Manual Name) for CAN_MO79_EDATA5.
 * To use register names with standard convension, please use CAN_MO79_EDATA5.
 */
#define CAN_EMO79DATA5   (CAN_MO79_EDATA5)

/** \brief  19F8, Message Object  Arbitration Register */
#define CAN_MO79_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00199F8u)

/** Alias (User Manual Name) for CAN_MO79_EDATA6.
 * To use register names with standard convension, please use CAN_MO79_EDATA6.
 */
#define CAN_EMO79DATA6   (CAN_MO79_EDATA6)

/** \brief  19E0, Message Object  Function Control Register */
#define CAN_MO79_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00199E0u)

/** Alias (User Manual Name) for CAN_MO79_FCR.
 * To use register names with standard convension, please use CAN_MO79_FCR.
 */
#define CAN_MOFCR79      (CAN_MO79_FCR)

/** \brief  19E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO79_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00199E4u)

/** Alias (User Manual Name) for CAN_MO79_FGPR.
 * To use register names with standard convension, please use CAN_MO79_FGPR.
 */
#define CAN_MOFGPR79     (CAN_MO79_FGPR)

/** \brief  19E8, Message Object  Interrupt Pointer Register */
#define CAN_MO79_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00199E8u)

/** Alias (User Manual Name) for CAN_MO79_IPR.
 * To use register names with standard convension, please use CAN_MO79_IPR.
 */
#define CAN_MOIPR79      (CAN_MO79_IPR)

/** \brief  19FC, Message Object  Control Register */
#define CAN_MO79_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00199FCu)

/** Alias (User Manual Name) for CAN_MO79_STAT.
 * To use register names with standard convension, please use CAN_MO79_STAT.
 */
#define CAN_MOSTAT79     (CAN_MO79_STAT)

/** \brief  10EC, Message Object  Acceptance Mask Register */
#define CAN_MO7_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF00190ECu)

/** Alias (User Manual Name) for CAN_MO7_AMR.
 * To use register names with standard convension, please use CAN_MO7_AMR.
 */
#define CAN_MOAMR7       (CAN_MO7_AMR)

/** \brief  10F8, Message Object  Arbitration Register */
#define CAN_MO7_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF00190F8u)

/** Alias (User Manual Name) for CAN_MO7_AR.
 * To use register names with standard convension, please use CAN_MO7_AR.
 */
#define CAN_MOAR7        (CAN_MO7_AR)

/** \brief  10FC, Message Object  Control Register */
#define CAN_MO7_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF00190FCu)

/** Alias (User Manual Name) for CAN_MO7_CTR.
 * To use register names with standard convension, please use CAN_MO7_CTR.
 */
#define CAN_MOCTR7       (CAN_MO7_CTR)

/** \brief  10F4, Message Object  Data Register High */
#define CAN_MO7_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF00190F4u)

/** Alias (User Manual Name) for CAN_MO7_DATAH.
 * To use register names with standard convension, please use CAN_MO7_DATAH.
 */
#define CAN_MODATAH7     (CAN_MO7_DATAH)

/** \brief  10F0, Message Object  Data Register Low */
#define CAN_MO7_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF00190F0u)

/** Alias (User Manual Name) for CAN_MO7_DATAL.
 * To use register names with standard convension, please use CAN_MO7_DATAL.
 */
#define CAN_MODATAL7     (CAN_MO7_DATAL)

/** \brief  10E0, Message Object  Function Control Register */
#define CAN_MO7_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF00190E0u)

/** Alias (User Manual Name) for CAN_MO7_EDATA0.
 * To use register names with standard convension, please use CAN_MO7_EDATA0.
 */
#define CAN_EMO7DATA0    (CAN_MO7_EDATA0)

/** \brief  10E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO7_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF00190E4u)

/** Alias (User Manual Name) for CAN_MO7_EDATA1.
 * To use register names with standard convension, please use CAN_MO7_EDATA1.
 */
#define CAN_EMO7DATA1    (CAN_MO7_EDATA1)

/** \brief  10E8, Message Object  Interrupt Pointer Register */
#define CAN_MO7_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF00190E8u)

/** Alias (User Manual Name) for CAN_MO7_EDATA2.
 * To use register names with standard convension, please use CAN_MO7_EDATA2.
 */
#define CAN_EMO7DATA2    (CAN_MO7_EDATA2)

/** \brief  10EC, Message Object  Acceptance Mask Register */
#define CAN_MO7_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF00190ECu)

/** Alias (User Manual Name) for CAN_MO7_EDATA3.
 * To use register names with standard convension, please use CAN_MO7_EDATA3.
 */
#define CAN_EMO7DATA3    (CAN_MO7_EDATA3)

/** \brief  10F0, Message Object  Data Register Low */
#define CAN_MO7_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF00190F0u)

/** Alias (User Manual Name) for CAN_MO7_EDATA4.
 * To use register names with standard convension, please use CAN_MO7_EDATA4.
 */
#define CAN_EMO7DATA4    (CAN_MO7_EDATA4)

/** \brief  10F4, Message Object  Data Register High */
#define CAN_MO7_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF00190F4u)

/** Alias (User Manual Name) for CAN_MO7_EDATA5.
 * To use register names with standard convension, please use CAN_MO7_EDATA5.
 */
#define CAN_EMO7DATA5    (CAN_MO7_EDATA5)

/** \brief  10F8, Message Object  Arbitration Register */
#define CAN_MO7_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF00190F8u)

/** Alias (User Manual Name) for CAN_MO7_EDATA6.
 * To use register names with standard convension, please use CAN_MO7_EDATA6.
 */
#define CAN_EMO7DATA6    (CAN_MO7_EDATA6)

/** \brief  10E0, Message Object  Function Control Register */
#define CAN_MO7_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF00190E0u)

/** Alias (User Manual Name) for CAN_MO7_FCR.
 * To use register names with standard convension, please use CAN_MO7_FCR.
 */
#define CAN_MOFCR7       (CAN_MO7_FCR)

/** \brief  10E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO7_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF00190E4u)

/** Alias (User Manual Name) for CAN_MO7_FGPR.
 * To use register names with standard convension, please use CAN_MO7_FGPR.
 */
#define CAN_MOFGPR7      (CAN_MO7_FGPR)

/** \brief  10E8, Message Object  Interrupt Pointer Register */
#define CAN_MO7_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF00190E8u)

/** Alias (User Manual Name) for CAN_MO7_IPR.
 * To use register names with standard convension, please use CAN_MO7_IPR.
 */
#define CAN_MOIPR7       (CAN_MO7_IPR)

/** \brief  10FC, Message Object  Control Register */
#define CAN_MO7_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF00190FCu)

/** Alias (User Manual Name) for CAN_MO7_STAT.
 * To use register names with standard convension, please use CAN_MO7_STAT.
 */
#define CAN_MOSTAT7      (CAN_MO7_STAT)

/** \brief  1A0C, Message Object  Acceptance Mask Register */
#define CAN_MO80_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019A0Cu)

/** Alias (User Manual Name) for CAN_MO80_AMR.
 * To use register names with standard convension, please use CAN_MO80_AMR.
 */
#define CAN_MOAMR80      (CAN_MO80_AMR)

/** \brief  1A18, Message Object  Arbitration Register */
#define CAN_MO80_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019A18u)

/** Alias (User Manual Name) for CAN_MO80_AR.
 * To use register names with standard convension, please use CAN_MO80_AR.
 */
#define CAN_MOAR80       (CAN_MO80_AR)

/** \brief  1A1C, Message Object  Control Register */
#define CAN_MO80_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019A1Cu)

/** Alias (User Manual Name) for CAN_MO80_CTR.
 * To use register names with standard convension, please use CAN_MO80_CTR.
 */
#define CAN_MOCTR80      (CAN_MO80_CTR)

/** \brief  1A14, Message Object  Data Register High */
#define CAN_MO80_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019A14u)

/** Alias (User Manual Name) for CAN_MO80_DATAH.
 * To use register names with standard convension, please use CAN_MO80_DATAH.
 */
#define CAN_MODATAH80    (CAN_MO80_DATAH)

/** \brief  1A10, Message Object  Data Register Low */
#define CAN_MO80_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019A10u)

/** Alias (User Manual Name) for CAN_MO80_DATAL.
 * To use register names with standard convension, please use CAN_MO80_DATAL.
 */
#define CAN_MODATAL80    (CAN_MO80_DATAL)

/** \brief  1A00, Message Object  Function Control Register */
#define CAN_MO80_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019A00u)

/** Alias (User Manual Name) for CAN_MO80_EDATA0.
 * To use register names with standard convension, please use CAN_MO80_EDATA0.
 */
#define CAN_EMO80DATA0   (CAN_MO80_EDATA0)

/** \brief  1A04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO80_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019A04u)

/** Alias (User Manual Name) for CAN_MO80_EDATA1.
 * To use register names with standard convension, please use CAN_MO80_EDATA1.
 */
#define CAN_EMO80DATA1   (CAN_MO80_EDATA1)

/** \brief  1A08, Message Object  Interrupt Pointer Register */
#define CAN_MO80_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019A08u)

/** Alias (User Manual Name) for CAN_MO80_EDATA2.
 * To use register names with standard convension, please use CAN_MO80_EDATA2.
 */
#define CAN_EMO80DATA2   (CAN_MO80_EDATA2)

/** \brief  1A0C, Message Object  Acceptance Mask Register */
#define CAN_MO80_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019A0Cu)

/** Alias (User Manual Name) for CAN_MO80_EDATA3.
 * To use register names with standard convension, please use CAN_MO80_EDATA3.
 */
#define CAN_EMO80DATA3   (CAN_MO80_EDATA3)

/** \brief  1A10, Message Object  Data Register Low */
#define CAN_MO80_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019A10u)

/** Alias (User Manual Name) for CAN_MO80_EDATA4.
 * To use register names with standard convension, please use CAN_MO80_EDATA4.
 */
#define CAN_EMO80DATA4   (CAN_MO80_EDATA4)

/** \brief  1A14, Message Object  Data Register High */
#define CAN_MO80_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019A14u)

/** Alias (User Manual Name) for CAN_MO80_EDATA5.
 * To use register names with standard convension, please use CAN_MO80_EDATA5.
 */
#define CAN_EMO80DATA5   (CAN_MO80_EDATA5)

/** \brief  1A18, Message Object  Arbitration Register */
#define CAN_MO80_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019A18u)

/** Alias (User Manual Name) for CAN_MO80_EDATA6.
 * To use register names with standard convension, please use CAN_MO80_EDATA6.
 */
#define CAN_EMO80DATA6   (CAN_MO80_EDATA6)

/** \brief  1A00, Message Object  Function Control Register */
#define CAN_MO80_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019A00u)

/** Alias (User Manual Name) for CAN_MO80_FCR.
 * To use register names with standard convension, please use CAN_MO80_FCR.
 */
#define CAN_MOFCR80      (CAN_MO80_FCR)

/** \brief  1A04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO80_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019A04u)

/** Alias (User Manual Name) for CAN_MO80_FGPR.
 * To use register names with standard convension, please use CAN_MO80_FGPR.
 */
#define CAN_MOFGPR80     (CAN_MO80_FGPR)

/** \brief  1A08, Message Object  Interrupt Pointer Register */
#define CAN_MO80_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019A08u)

/** Alias (User Manual Name) for CAN_MO80_IPR.
 * To use register names with standard convension, please use CAN_MO80_IPR.
 */
#define CAN_MOIPR80      (CAN_MO80_IPR)

/** \brief  1A1C, Message Object  Control Register */
#define CAN_MO80_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019A1Cu)

/** Alias (User Manual Name) for CAN_MO80_STAT.
 * To use register names with standard convension, please use CAN_MO80_STAT.
 */
#define CAN_MOSTAT80     (CAN_MO80_STAT)

/** \brief  1A2C, Message Object  Acceptance Mask Register */
#define CAN_MO81_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019A2Cu)

/** Alias (User Manual Name) for CAN_MO81_AMR.
 * To use register names with standard convension, please use CAN_MO81_AMR.
 */
#define CAN_MOAMR81      (CAN_MO81_AMR)

/** \brief  1A38, Message Object  Arbitration Register */
#define CAN_MO81_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019A38u)

/** Alias (User Manual Name) for CAN_MO81_AR.
 * To use register names with standard convension, please use CAN_MO81_AR.
 */
#define CAN_MOAR81       (CAN_MO81_AR)

/** \brief  1A3C, Message Object  Control Register */
#define CAN_MO81_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019A3Cu)

/** Alias (User Manual Name) for CAN_MO81_CTR.
 * To use register names with standard convension, please use CAN_MO81_CTR.
 */
#define CAN_MOCTR81      (CAN_MO81_CTR)

/** \brief  1A34, Message Object  Data Register High */
#define CAN_MO81_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019A34u)

/** Alias (User Manual Name) for CAN_MO81_DATAH.
 * To use register names with standard convension, please use CAN_MO81_DATAH.
 */
#define CAN_MODATAH81    (CAN_MO81_DATAH)

/** \brief  1A30, Message Object  Data Register Low */
#define CAN_MO81_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019A30u)

/** Alias (User Manual Name) for CAN_MO81_DATAL.
 * To use register names with standard convension, please use CAN_MO81_DATAL.
 */
#define CAN_MODATAL81    (CAN_MO81_DATAL)

/** \brief  1A20, Message Object  Function Control Register */
#define CAN_MO81_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019A20u)

/** Alias (User Manual Name) for CAN_MO81_EDATA0.
 * To use register names with standard convension, please use CAN_MO81_EDATA0.
 */
#define CAN_EMO81DATA0   (CAN_MO81_EDATA0)

/** \brief  1A24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO81_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019A24u)

/** Alias (User Manual Name) for CAN_MO81_EDATA1.
 * To use register names with standard convension, please use CAN_MO81_EDATA1.
 */
#define CAN_EMO81DATA1   (CAN_MO81_EDATA1)

/** \brief  1A28, Message Object  Interrupt Pointer Register */
#define CAN_MO81_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019A28u)

/** Alias (User Manual Name) for CAN_MO81_EDATA2.
 * To use register names with standard convension, please use CAN_MO81_EDATA2.
 */
#define CAN_EMO81DATA2   (CAN_MO81_EDATA2)

/** \brief  1A2C, Message Object  Acceptance Mask Register */
#define CAN_MO81_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019A2Cu)

/** Alias (User Manual Name) for CAN_MO81_EDATA3.
 * To use register names with standard convension, please use CAN_MO81_EDATA3.
 */
#define CAN_EMO81DATA3   (CAN_MO81_EDATA3)

/** \brief  1A30, Message Object  Data Register Low */
#define CAN_MO81_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019A30u)

/** Alias (User Manual Name) for CAN_MO81_EDATA4.
 * To use register names with standard convension, please use CAN_MO81_EDATA4.
 */
#define CAN_EMO81DATA4   (CAN_MO81_EDATA4)

/** \brief  1A34, Message Object  Data Register High */
#define CAN_MO81_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019A34u)

/** Alias (User Manual Name) for CAN_MO81_EDATA5.
 * To use register names with standard convension, please use CAN_MO81_EDATA5.
 */
#define CAN_EMO81DATA5   (CAN_MO81_EDATA5)

/** \brief  1A38, Message Object  Arbitration Register */
#define CAN_MO81_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019A38u)

/** Alias (User Manual Name) for CAN_MO81_EDATA6.
 * To use register names with standard convension, please use CAN_MO81_EDATA6.
 */
#define CAN_EMO81DATA6   (CAN_MO81_EDATA6)

/** \brief  1A20, Message Object  Function Control Register */
#define CAN_MO81_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019A20u)

/** Alias (User Manual Name) for CAN_MO81_FCR.
 * To use register names with standard convension, please use CAN_MO81_FCR.
 */
#define CAN_MOFCR81      (CAN_MO81_FCR)

/** \brief  1A24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO81_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019A24u)

/** Alias (User Manual Name) for CAN_MO81_FGPR.
 * To use register names with standard convension, please use CAN_MO81_FGPR.
 */
#define CAN_MOFGPR81     (CAN_MO81_FGPR)

/** \brief  1A28, Message Object  Interrupt Pointer Register */
#define CAN_MO81_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019A28u)

/** Alias (User Manual Name) for CAN_MO81_IPR.
 * To use register names with standard convension, please use CAN_MO81_IPR.
 */
#define CAN_MOIPR81      (CAN_MO81_IPR)

/** \brief  1A3C, Message Object  Control Register */
#define CAN_MO81_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019A3Cu)

/** Alias (User Manual Name) for CAN_MO81_STAT.
 * To use register names with standard convension, please use CAN_MO81_STAT.
 */
#define CAN_MOSTAT81     (CAN_MO81_STAT)

/** \brief  1A4C, Message Object  Acceptance Mask Register */
#define CAN_MO82_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019A4Cu)

/** Alias (User Manual Name) for CAN_MO82_AMR.
 * To use register names with standard convension, please use CAN_MO82_AMR.
 */
#define CAN_MOAMR82      (CAN_MO82_AMR)

/** \brief  1A58, Message Object  Arbitration Register */
#define CAN_MO82_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019A58u)

/** Alias (User Manual Name) for CAN_MO82_AR.
 * To use register names with standard convension, please use CAN_MO82_AR.
 */
#define CAN_MOAR82       (CAN_MO82_AR)

/** \brief  1A5C, Message Object  Control Register */
#define CAN_MO82_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019A5Cu)

/** Alias (User Manual Name) for CAN_MO82_CTR.
 * To use register names with standard convension, please use CAN_MO82_CTR.
 */
#define CAN_MOCTR82      (CAN_MO82_CTR)

/** \brief  1A54, Message Object  Data Register High */
#define CAN_MO82_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019A54u)

/** Alias (User Manual Name) for CAN_MO82_DATAH.
 * To use register names with standard convension, please use CAN_MO82_DATAH.
 */
#define CAN_MODATAH82    (CAN_MO82_DATAH)

/** \brief  1A50, Message Object  Data Register Low */
#define CAN_MO82_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019A50u)

/** Alias (User Manual Name) for CAN_MO82_DATAL.
 * To use register names with standard convension, please use CAN_MO82_DATAL.
 */
#define CAN_MODATAL82    (CAN_MO82_DATAL)

/** \brief  1A40, Message Object  Function Control Register */
#define CAN_MO82_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019A40u)

/** Alias (User Manual Name) for CAN_MO82_EDATA0.
 * To use register names with standard convension, please use CAN_MO82_EDATA0.
 */
#define CAN_EMO82DATA0   (CAN_MO82_EDATA0)

/** \brief  1A44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO82_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019A44u)

/** Alias (User Manual Name) for CAN_MO82_EDATA1.
 * To use register names with standard convension, please use CAN_MO82_EDATA1.
 */
#define CAN_EMO82DATA1   (CAN_MO82_EDATA1)

/** \brief  1A48, Message Object  Interrupt Pointer Register */
#define CAN_MO82_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019A48u)

/** Alias (User Manual Name) for CAN_MO82_EDATA2.
 * To use register names with standard convension, please use CAN_MO82_EDATA2.
 */
#define CAN_EMO82DATA2   (CAN_MO82_EDATA2)

/** \brief  1A4C, Message Object  Acceptance Mask Register */
#define CAN_MO82_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019A4Cu)

/** Alias (User Manual Name) for CAN_MO82_EDATA3.
 * To use register names with standard convension, please use CAN_MO82_EDATA3.
 */
#define CAN_EMO82DATA3   (CAN_MO82_EDATA3)

/** \brief  1A50, Message Object  Data Register Low */
#define CAN_MO82_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019A50u)

/** Alias (User Manual Name) for CAN_MO82_EDATA4.
 * To use register names with standard convension, please use CAN_MO82_EDATA4.
 */
#define CAN_EMO82DATA4   (CAN_MO82_EDATA4)

/** \brief  1A54, Message Object  Data Register High */
#define CAN_MO82_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019A54u)

/** Alias (User Manual Name) for CAN_MO82_EDATA5.
 * To use register names with standard convension, please use CAN_MO82_EDATA5.
 */
#define CAN_EMO82DATA5   (CAN_MO82_EDATA5)

/** \brief  1A58, Message Object  Arbitration Register */
#define CAN_MO82_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019A58u)

/** Alias (User Manual Name) for CAN_MO82_EDATA6.
 * To use register names with standard convension, please use CAN_MO82_EDATA6.
 */
#define CAN_EMO82DATA6   (CAN_MO82_EDATA6)

/** \brief  1A40, Message Object  Function Control Register */
#define CAN_MO82_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019A40u)

/** Alias (User Manual Name) for CAN_MO82_FCR.
 * To use register names with standard convension, please use CAN_MO82_FCR.
 */
#define CAN_MOFCR82      (CAN_MO82_FCR)

/** \brief  1A44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO82_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019A44u)

/** Alias (User Manual Name) for CAN_MO82_FGPR.
 * To use register names with standard convension, please use CAN_MO82_FGPR.
 */
#define CAN_MOFGPR82     (CAN_MO82_FGPR)

/** \brief  1A48, Message Object  Interrupt Pointer Register */
#define CAN_MO82_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019A48u)

/** Alias (User Manual Name) for CAN_MO82_IPR.
 * To use register names with standard convension, please use CAN_MO82_IPR.
 */
#define CAN_MOIPR82      (CAN_MO82_IPR)

/** \brief  1A5C, Message Object  Control Register */
#define CAN_MO82_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019A5Cu)

/** Alias (User Manual Name) for CAN_MO82_STAT.
 * To use register names with standard convension, please use CAN_MO82_STAT.
 */
#define CAN_MOSTAT82     (CAN_MO82_STAT)

/** \brief  1A6C, Message Object  Acceptance Mask Register */
#define CAN_MO83_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019A6Cu)

/** Alias (User Manual Name) for CAN_MO83_AMR.
 * To use register names with standard convension, please use CAN_MO83_AMR.
 */
#define CAN_MOAMR83      (CAN_MO83_AMR)

/** \brief  1A78, Message Object  Arbitration Register */
#define CAN_MO83_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019A78u)

/** Alias (User Manual Name) for CAN_MO83_AR.
 * To use register names with standard convension, please use CAN_MO83_AR.
 */
#define CAN_MOAR83       (CAN_MO83_AR)

/** \brief  1A7C, Message Object  Control Register */
#define CAN_MO83_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019A7Cu)

/** Alias (User Manual Name) for CAN_MO83_CTR.
 * To use register names with standard convension, please use CAN_MO83_CTR.
 */
#define CAN_MOCTR83      (CAN_MO83_CTR)

/** \brief  1A74, Message Object  Data Register High */
#define CAN_MO83_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019A74u)

/** Alias (User Manual Name) for CAN_MO83_DATAH.
 * To use register names with standard convension, please use CAN_MO83_DATAH.
 */
#define CAN_MODATAH83    (CAN_MO83_DATAH)

/** \brief  1A70, Message Object  Data Register Low */
#define CAN_MO83_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019A70u)

/** Alias (User Manual Name) for CAN_MO83_DATAL.
 * To use register names with standard convension, please use CAN_MO83_DATAL.
 */
#define CAN_MODATAL83    (CAN_MO83_DATAL)

/** \brief  1A60, Message Object  Function Control Register */
#define CAN_MO83_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019A60u)

/** Alias (User Manual Name) for CAN_MO83_EDATA0.
 * To use register names with standard convension, please use CAN_MO83_EDATA0.
 */
#define CAN_EMO83DATA0   (CAN_MO83_EDATA0)

/** \brief  1A64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO83_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019A64u)

/** Alias (User Manual Name) for CAN_MO83_EDATA1.
 * To use register names with standard convension, please use CAN_MO83_EDATA1.
 */
#define CAN_EMO83DATA1   (CAN_MO83_EDATA1)

/** \brief  1A68, Message Object  Interrupt Pointer Register */
#define CAN_MO83_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019A68u)

/** Alias (User Manual Name) for CAN_MO83_EDATA2.
 * To use register names with standard convension, please use CAN_MO83_EDATA2.
 */
#define CAN_EMO83DATA2   (CAN_MO83_EDATA2)

/** \brief  1A6C, Message Object  Acceptance Mask Register */
#define CAN_MO83_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019A6Cu)

/** Alias (User Manual Name) for CAN_MO83_EDATA3.
 * To use register names with standard convension, please use CAN_MO83_EDATA3.
 */
#define CAN_EMO83DATA3   (CAN_MO83_EDATA3)

/** \brief  1A70, Message Object  Data Register Low */
#define CAN_MO83_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019A70u)

/** Alias (User Manual Name) for CAN_MO83_EDATA4.
 * To use register names with standard convension, please use CAN_MO83_EDATA4.
 */
#define CAN_EMO83DATA4   (CAN_MO83_EDATA4)

/** \brief  1A74, Message Object  Data Register High */
#define CAN_MO83_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019A74u)

/** Alias (User Manual Name) for CAN_MO83_EDATA5.
 * To use register names with standard convension, please use CAN_MO83_EDATA5.
 */
#define CAN_EMO83DATA5   (CAN_MO83_EDATA5)

/** \brief  1A78, Message Object  Arbitration Register */
#define CAN_MO83_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019A78u)

/** Alias (User Manual Name) for CAN_MO83_EDATA6.
 * To use register names with standard convension, please use CAN_MO83_EDATA6.
 */
#define CAN_EMO83DATA6   (CAN_MO83_EDATA6)

/** \brief  1A60, Message Object  Function Control Register */
#define CAN_MO83_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019A60u)

/** Alias (User Manual Name) for CAN_MO83_FCR.
 * To use register names with standard convension, please use CAN_MO83_FCR.
 */
#define CAN_MOFCR83      (CAN_MO83_FCR)

/** \brief  1A64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO83_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019A64u)

/** Alias (User Manual Name) for CAN_MO83_FGPR.
 * To use register names with standard convension, please use CAN_MO83_FGPR.
 */
#define CAN_MOFGPR83     (CAN_MO83_FGPR)

/** \brief  1A68, Message Object  Interrupt Pointer Register */
#define CAN_MO83_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019A68u)

/** Alias (User Manual Name) for CAN_MO83_IPR.
 * To use register names with standard convension, please use CAN_MO83_IPR.
 */
#define CAN_MOIPR83      (CAN_MO83_IPR)

/** \brief  1A7C, Message Object  Control Register */
#define CAN_MO83_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019A7Cu)

/** Alias (User Manual Name) for CAN_MO83_STAT.
 * To use register names with standard convension, please use CAN_MO83_STAT.
 */
#define CAN_MOSTAT83     (CAN_MO83_STAT)

/** \brief  1A8C, Message Object  Acceptance Mask Register */
#define CAN_MO84_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019A8Cu)

/** Alias (User Manual Name) for CAN_MO84_AMR.
 * To use register names with standard convension, please use CAN_MO84_AMR.
 */
#define CAN_MOAMR84      (CAN_MO84_AMR)

/** \brief  1A98, Message Object  Arbitration Register */
#define CAN_MO84_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019A98u)

/** Alias (User Manual Name) for CAN_MO84_AR.
 * To use register names with standard convension, please use CAN_MO84_AR.
 */
#define CAN_MOAR84       (CAN_MO84_AR)

/** \brief  1A9C, Message Object  Control Register */
#define CAN_MO84_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019A9Cu)

/** Alias (User Manual Name) for CAN_MO84_CTR.
 * To use register names with standard convension, please use CAN_MO84_CTR.
 */
#define CAN_MOCTR84      (CAN_MO84_CTR)

/** \brief  1A94, Message Object  Data Register High */
#define CAN_MO84_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019A94u)

/** Alias (User Manual Name) for CAN_MO84_DATAH.
 * To use register names with standard convension, please use CAN_MO84_DATAH.
 */
#define CAN_MODATAH84    (CAN_MO84_DATAH)

/** \brief  1A90, Message Object  Data Register Low */
#define CAN_MO84_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019A90u)

/** Alias (User Manual Name) for CAN_MO84_DATAL.
 * To use register names with standard convension, please use CAN_MO84_DATAL.
 */
#define CAN_MODATAL84    (CAN_MO84_DATAL)

/** \brief  1A80, Message Object  Function Control Register */
#define CAN_MO84_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019A80u)

/** Alias (User Manual Name) for CAN_MO84_EDATA0.
 * To use register names with standard convension, please use CAN_MO84_EDATA0.
 */
#define CAN_EMO84DATA0   (CAN_MO84_EDATA0)

/** \brief  1A84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO84_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019A84u)

/** Alias (User Manual Name) for CAN_MO84_EDATA1.
 * To use register names with standard convension, please use CAN_MO84_EDATA1.
 */
#define CAN_EMO84DATA1   (CAN_MO84_EDATA1)

/** \brief  1A88, Message Object  Interrupt Pointer Register */
#define CAN_MO84_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019A88u)

/** Alias (User Manual Name) for CAN_MO84_EDATA2.
 * To use register names with standard convension, please use CAN_MO84_EDATA2.
 */
#define CAN_EMO84DATA2   (CAN_MO84_EDATA2)

/** \brief  1A8C, Message Object  Acceptance Mask Register */
#define CAN_MO84_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019A8Cu)

/** Alias (User Manual Name) for CAN_MO84_EDATA3.
 * To use register names with standard convension, please use CAN_MO84_EDATA3.
 */
#define CAN_EMO84DATA3   (CAN_MO84_EDATA3)

/** \brief  1A90, Message Object  Data Register Low */
#define CAN_MO84_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019A90u)

/** Alias (User Manual Name) for CAN_MO84_EDATA4.
 * To use register names with standard convension, please use CAN_MO84_EDATA4.
 */
#define CAN_EMO84DATA4   (CAN_MO84_EDATA4)

/** \brief  1A94, Message Object  Data Register High */
#define CAN_MO84_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019A94u)

/** Alias (User Manual Name) for CAN_MO84_EDATA5.
 * To use register names with standard convension, please use CAN_MO84_EDATA5.
 */
#define CAN_EMO84DATA5   (CAN_MO84_EDATA5)

/** \brief  1A98, Message Object  Arbitration Register */
#define CAN_MO84_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019A98u)

/** Alias (User Manual Name) for CAN_MO84_EDATA6.
 * To use register names with standard convension, please use CAN_MO84_EDATA6.
 */
#define CAN_EMO84DATA6   (CAN_MO84_EDATA6)

/** \brief  1A80, Message Object  Function Control Register */
#define CAN_MO84_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019A80u)

/** Alias (User Manual Name) for CAN_MO84_FCR.
 * To use register names with standard convension, please use CAN_MO84_FCR.
 */
#define CAN_MOFCR84      (CAN_MO84_FCR)

/** \brief  1A84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO84_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019A84u)

/** Alias (User Manual Name) for CAN_MO84_FGPR.
 * To use register names with standard convension, please use CAN_MO84_FGPR.
 */
#define CAN_MOFGPR84     (CAN_MO84_FGPR)

/** \brief  1A88, Message Object  Interrupt Pointer Register */
#define CAN_MO84_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019A88u)

/** Alias (User Manual Name) for CAN_MO84_IPR.
 * To use register names with standard convension, please use CAN_MO84_IPR.
 */
#define CAN_MOIPR84      (CAN_MO84_IPR)

/** \brief  1A9C, Message Object  Control Register */
#define CAN_MO84_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019A9Cu)

/** Alias (User Manual Name) for CAN_MO84_STAT.
 * To use register names with standard convension, please use CAN_MO84_STAT.
 */
#define CAN_MOSTAT84     (CAN_MO84_STAT)

/** \brief  1AAC, Message Object  Acceptance Mask Register */
#define CAN_MO85_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019AACu)

/** Alias (User Manual Name) for CAN_MO85_AMR.
 * To use register names with standard convension, please use CAN_MO85_AMR.
 */
#define CAN_MOAMR85      (CAN_MO85_AMR)

/** \brief  1AB8, Message Object  Arbitration Register */
#define CAN_MO85_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019AB8u)

/** Alias (User Manual Name) for CAN_MO85_AR.
 * To use register names with standard convension, please use CAN_MO85_AR.
 */
#define CAN_MOAR85       (CAN_MO85_AR)

/** \brief  1ABC, Message Object  Control Register */
#define CAN_MO85_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019ABCu)

/** Alias (User Manual Name) for CAN_MO85_CTR.
 * To use register names with standard convension, please use CAN_MO85_CTR.
 */
#define CAN_MOCTR85      (CAN_MO85_CTR)

/** \brief  1AB4, Message Object  Data Register High */
#define CAN_MO85_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019AB4u)

/** Alias (User Manual Name) for CAN_MO85_DATAH.
 * To use register names with standard convension, please use CAN_MO85_DATAH.
 */
#define CAN_MODATAH85    (CAN_MO85_DATAH)

/** \brief  1AB0, Message Object  Data Register Low */
#define CAN_MO85_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019AB0u)

/** Alias (User Manual Name) for CAN_MO85_DATAL.
 * To use register names with standard convension, please use CAN_MO85_DATAL.
 */
#define CAN_MODATAL85    (CAN_MO85_DATAL)

/** \brief  1AA0, Message Object  Function Control Register */
#define CAN_MO85_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019AA0u)

/** Alias (User Manual Name) for CAN_MO85_EDATA0.
 * To use register names with standard convension, please use CAN_MO85_EDATA0.
 */
#define CAN_EMO85DATA0   (CAN_MO85_EDATA0)

/** \brief  1AA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO85_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019AA4u)

/** Alias (User Manual Name) for CAN_MO85_EDATA1.
 * To use register names with standard convension, please use CAN_MO85_EDATA1.
 */
#define CAN_EMO85DATA1   (CAN_MO85_EDATA1)

/** \brief  1AA8, Message Object  Interrupt Pointer Register */
#define CAN_MO85_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019AA8u)

/** Alias (User Manual Name) for CAN_MO85_EDATA2.
 * To use register names with standard convension, please use CAN_MO85_EDATA2.
 */
#define CAN_EMO85DATA2   (CAN_MO85_EDATA2)

/** \brief  1AAC, Message Object  Acceptance Mask Register */
#define CAN_MO85_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019AACu)

/** Alias (User Manual Name) for CAN_MO85_EDATA3.
 * To use register names with standard convension, please use CAN_MO85_EDATA3.
 */
#define CAN_EMO85DATA3   (CAN_MO85_EDATA3)

/** \brief  1AB0, Message Object  Data Register Low */
#define CAN_MO85_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019AB0u)

/** Alias (User Manual Name) for CAN_MO85_EDATA4.
 * To use register names with standard convension, please use CAN_MO85_EDATA4.
 */
#define CAN_EMO85DATA4   (CAN_MO85_EDATA4)

/** \brief  1AB4, Message Object  Data Register High */
#define CAN_MO85_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019AB4u)

/** Alias (User Manual Name) for CAN_MO85_EDATA5.
 * To use register names with standard convension, please use CAN_MO85_EDATA5.
 */
#define CAN_EMO85DATA5   (CAN_MO85_EDATA5)

/** \brief  1AB8, Message Object  Arbitration Register */
#define CAN_MO85_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019AB8u)

/** Alias (User Manual Name) for CAN_MO85_EDATA6.
 * To use register names with standard convension, please use CAN_MO85_EDATA6.
 */
#define CAN_EMO85DATA6   (CAN_MO85_EDATA6)

/** \brief  1AA0, Message Object  Function Control Register */
#define CAN_MO85_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019AA0u)

/** Alias (User Manual Name) for CAN_MO85_FCR.
 * To use register names with standard convension, please use CAN_MO85_FCR.
 */
#define CAN_MOFCR85      (CAN_MO85_FCR)

/** \brief  1AA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO85_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019AA4u)

/** Alias (User Manual Name) for CAN_MO85_FGPR.
 * To use register names with standard convension, please use CAN_MO85_FGPR.
 */
#define CAN_MOFGPR85     (CAN_MO85_FGPR)

/** \brief  1AA8, Message Object  Interrupt Pointer Register */
#define CAN_MO85_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019AA8u)

/** Alias (User Manual Name) for CAN_MO85_IPR.
 * To use register names with standard convension, please use CAN_MO85_IPR.
 */
#define CAN_MOIPR85      (CAN_MO85_IPR)

/** \brief  1ABC, Message Object  Control Register */
#define CAN_MO85_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019ABCu)

/** Alias (User Manual Name) for CAN_MO85_STAT.
 * To use register names with standard convension, please use CAN_MO85_STAT.
 */
#define CAN_MOSTAT85     (CAN_MO85_STAT)

/** \brief  1ACC, Message Object  Acceptance Mask Register */
#define CAN_MO86_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019ACCu)

/** Alias (User Manual Name) for CAN_MO86_AMR.
 * To use register names with standard convension, please use CAN_MO86_AMR.
 */
#define CAN_MOAMR86      (CAN_MO86_AMR)

/** \brief  1AD8, Message Object  Arbitration Register */
#define CAN_MO86_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019AD8u)

/** Alias (User Manual Name) for CAN_MO86_AR.
 * To use register names with standard convension, please use CAN_MO86_AR.
 */
#define CAN_MOAR86       (CAN_MO86_AR)

/** \brief  1ADC, Message Object  Control Register */
#define CAN_MO86_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019ADCu)

/** Alias (User Manual Name) for CAN_MO86_CTR.
 * To use register names with standard convension, please use CAN_MO86_CTR.
 */
#define CAN_MOCTR86      (CAN_MO86_CTR)

/** \brief  1AD4, Message Object  Data Register High */
#define CAN_MO86_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019AD4u)

/** Alias (User Manual Name) for CAN_MO86_DATAH.
 * To use register names with standard convension, please use CAN_MO86_DATAH.
 */
#define CAN_MODATAH86    (CAN_MO86_DATAH)

/** \brief  1AD0, Message Object  Data Register Low */
#define CAN_MO86_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019AD0u)

/** Alias (User Manual Name) for CAN_MO86_DATAL.
 * To use register names with standard convension, please use CAN_MO86_DATAL.
 */
#define CAN_MODATAL86    (CAN_MO86_DATAL)

/** \brief  1AC0, Message Object  Function Control Register */
#define CAN_MO86_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019AC0u)

/** Alias (User Manual Name) for CAN_MO86_EDATA0.
 * To use register names with standard convension, please use CAN_MO86_EDATA0.
 */
#define CAN_EMO86DATA0   (CAN_MO86_EDATA0)

/** \brief  1AC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO86_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019AC4u)

/** Alias (User Manual Name) for CAN_MO86_EDATA1.
 * To use register names with standard convension, please use CAN_MO86_EDATA1.
 */
#define CAN_EMO86DATA1   (CAN_MO86_EDATA1)

/** \brief  1AC8, Message Object  Interrupt Pointer Register */
#define CAN_MO86_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019AC8u)

/** Alias (User Manual Name) for CAN_MO86_EDATA2.
 * To use register names with standard convension, please use CAN_MO86_EDATA2.
 */
#define CAN_EMO86DATA2   (CAN_MO86_EDATA2)

/** \brief  1ACC, Message Object  Acceptance Mask Register */
#define CAN_MO86_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019ACCu)

/** Alias (User Manual Name) for CAN_MO86_EDATA3.
 * To use register names with standard convension, please use CAN_MO86_EDATA3.
 */
#define CAN_EMO86DATA3   (CAN_MO86_EDATA3)

/** \brief  1AD0, Message Object  Data Register Low */
#define CAN_MO86_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019AD0u)

/** Alias (User Manual Name) for CAN_MO86_EDATA4.
 * To use register names with standard convension, please use CAN_MO86_EDATA4.
 */
#define CAN_EMO86DATA4   (CAN_MO86_EDATA4)

/** \brief  1AD4, Message Object  Data Register High */
#define CAN_MO86_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019AD4u)

/** Alias (User Manual Name) for CAN_MO86_EDATA5.
 * To use register names with standard convension, please use CAN_MO86_EDATA5.
 */
#define CAN_EMO86DATA5   (CAN_MO86_EDATA5)

/** \brief  1AD8, Message Object  Arbitration Register */
#define CAN_MO86_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019AD8u)

/** Alias (User Manual Name) for CAN_MO86_EDATA6.
 * To use register names with standard convension, please use CAN_MO86_EDATA6.
 */
#define CAN_EMO86DATA6   (CAN_MO86_EDATA6)

/** \brief  1AC0, Message Object  Function Control Register */
#define CAN_MO86_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019AC0u)

/** Alias (User Manual Name) for CAN_MO86_FCR.
 * To use register names with standard convension, please use CAN_MO86_FCR.
 */
#define CAN_MOFCR86      (CAN_MO86_FCR)

/** \brief  1AC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO86_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019AC4u)

/** Alias (User Manual Name) for CAN_MO86_FGPR.
 * To use register names with standard convension, please use CAN_MO86_FGPR.
 */
#define CAN_MOFGPR86     (CAN_MO86_FGPR)

/** \brief  1AC8, Message Object  Interrupt Pointer Register */
#define CAN_MO86_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019AC8u)

/** Alias (User Manual Name) for CAN_MO86_IPR.
 * To use register names with standard convension, please use CAN_MO86_IPR.
 */
#define CAN_MOIPR86      (CAN_MO86_IPR)

/** \brief  1ADC, Message Object  Control Register */
#define CAN_MO86_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019ADCu)

/** Alias (User Manual Name) for CAN_MO86_STAT.
 * To use register names with standard convension, please use CAN_MO86_STAT.
 */
#define CAN_MOSTAT86     (CAN_MO86_STAT)

/** \brief  1AEC, Message Object  Acceptance Mask Register */
#define CAN_MO87_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019AECu)

/** Alias (User Manual Name) for CAN_MO87_AMR.
 * To use register names with standard convension, please use CAN_MO87_AMR.
 */
#define CAN_MOAMR87      (CAN_MO87_AMR)

/** \brief  1AF8, Message Object  Arbitration Register */
#define CAN_MO87_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019AF8u)

/** Alias (User Manual Name) for CAN_MO87_AR.
 * To use register names with standard convension, please use CAN_MO87_AR.
 */
#define CAN_MOAR87       (CAN_MO87_AR)

/** \brief  1AFC, Message Object  Control Register */
#define CAN_MO87_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019AFCu)

/** Alias (User Manual Name) for CAN_MO87_CTR.
 * To use register names with standard convension, please use CAN_MO87_CTR.
 */
#define CAN_MOCTR87      (CAN_MO87_CTR)

/** \brief  1AF4, Message Object  Data Register High */
#define CAN_MO87_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019AF4u)

/** Alias (User Manual Name) for CAN_MO87_DATAH.
 * To use register names with standard convension, please use CAN_MO87_DATAH.
 */
#define CAN_MODATAH87    (CAN_MO87_DATAH)

/** \brief  1AF0, Message Object  Data Register Low */
#define CAN_MO87_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019AF0u)

/** Alias (User Manual Name) for CAN_MO87_DATAL.
 * To use register names with standard convension, please use CAN_MO87_DATAL.
 */
#define CAN_MODATAL87    (CAN_MO87_DATAL)

/** \brief  1AE0, Message Object  Function Control Register */
#define CAN_MO87_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019AE0u)

/** Alias (User Manual Name) for CAN_MO87_EDATA0.
 * To use register names with standard convension, please use CAN_MO87_EDATA0.
 */
#define CAN_EMO87DATA0   (CAN_MO87_EDATA0)

/** \brief  1AE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO87_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019AE4u)

/** Alias (User Manual Name) for CAN_MO87_EDATA1.
 * To use register names with standard convension, please use CAN_MO87_EDATA1.
 */
#define CAN_EMO87DATA1   (CAN_MO87_EDATA1)

/** \brief  1AE8, Message Object  Interrupt Pointer Register */
#define CAN_MO87_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019AE8u)

/** Alias (User Manual Name) for CAN_MO87_EDATA2.
 * To use register names with standard convension, please use CAN_MO87_EDATA2.
 */
#define CAN_EMO87DATA2   (CAN_MO87_EDATA2)

/** \brief  1AEC, Message Object  Acceptance Mask Register */
#define CAN_MO87_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019AECu)

/** Alias (User Manual Name) for CAN_MO87_EDATA3.
 * To use register names with standard convension, please use CAN_MO87_EDATA3.
 */
#define CAN_EMO87DATA3   (CAN_MO87_EDATA3)

/** \brief  1AF0, Message Object  Data Register Low */
#define CAN_MO87_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019AF0u)

/** Alias (User Manual Name) for CAN_MO87_EDATA4.
 * To use register names with standard convension, please use CAN_MO87_EDATA4.
 */
#define CAN_EMO87DATA4   (CAN_MO87_EDATA4)

/** \brief  1AF4, Message Object  Data Register High */
#define CAN_MO87_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019AF4u)

/** Alias (User Manual Name) for CAN_MO87_EDATA5.
 * To use register names with standard convension, please use CAN_MO87_EDATA5.
 */
#define CAN_EMO87DATA5   (CAN_MO87_EDATA5)

/** \brief  1AF8, Message Object  Arbitration Register */
#define CAN_MO87_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019AF8u)

/** Alias (User Manual Name) for CAN_MO87_EDATA6.
 * To use register names with standard convension, please use CAN_MO87_EDATA6.
 */
#define CAN_EMO87DATA6   (CAN_MO87_EDATA6)

/** \brief  1AE0, Message Object  Function Control Register */
#define CAN_MO87_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019AE0u)

/** Alias (User Manual Name) for CAN_MO87_FCR.
 * To use register names with standard convension, please use CAN_MO87_FCR.
 */
#define CAN_MOFCR87      (CAN_MO87_FCR)

/** \brief  1AE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO87_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019AE4u)

/** Alias (User Manual Name) for CAN_MO87_FGPR.
 * To use register names with standard convension, please use CAN_MO87_FGPR.
 */
#define CAN_MOFGPR87     (CAN_MO87_FGPR)

/** \brief  1AE8, Message Object  Interrupt Pointer Register */
#define CAN_MO87_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019AE8u)

/** Alias (User Manual Name) for CAN_MO87_IPR.
 * To use register names with standard convension, please use CAN_MO87_IPR.
 */
#define CAN_MOIPR87      (CAN_MO87_IPR)

/** \brief  1AFC, Message Object  Control Register */
#define CAN_MO87_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019AFCu)

/** Alias (User Manual Name) for CAN_MO87_STAT.
 * To use register names with standard convension, please use CAN_MO87_STAT.
 */
#define CAN_MOSTAT87     (CAN_MO87_STAT)

/** \brief  1B0C, Message Object  Acceptance Mask Register */
#define CAN_MO88_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019B0Cu)

/** Alias (User Manual Name) for CAN_MO88_AMR.
 * To use register names with standard convension, please use CAN_MO88_AMR.
 */
#define CAN_MOAMR88      (CAN_MO88_AMR)

/** \brief  1B18, Message Object  Arbitration Register */
#define CAN_MO88_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019B18u)

/** Alias (User Manual Name) for CAN_MO88_AR.
 * To use register names with standard convension, please use CAN_MO88_AR.
 */
#define CAN_MOAR88       (CAN_MO88_AR)

/** \brief  1B1C, Message Object  Control Register */
#define CAN_MO88_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019B1Cu)

/** Alias (User Manual Name) for CAN_MO88_CTR.
 * To use register names with standard convension, please use CAN_MO88_CTR.
 */
#define CAN_MOCTR88      (CAN_MO88_CTR)

/** \brief  1B14, Message Object  Data Register High */
#define CAN_MO88_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019B14u)

/** Alias (User Manual Name) for CAN_MO88_DATAH.
 * To use register names with standard convension, please use CAN_MO88_DATAH.
 */
#define CAN_MODATAH88    (CAN_MO88_DATAH)

/** \brief  1B10, Message Object  Data Register Low */
#define CAN_MO88_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019B10u)

/** Alias (User Manual Name) for CAN_MO88_DATAL.
 * To use register names with standard convension, please use CAN_MO88_DATAL.
 */
#define CAN_MODATAL88    (CAN_MO88_DATAL)

/** \brief  1B00, Message Object  Function Control Register */
#define CAN_MO88_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019B00u)

/** Alias (User Manual Name) for CAN_MO88_EDATA0.
 * To use register names with standard convension, please use CAN_MO88_EDATA0.
 */
#define CAN_EMO88DATA0   (CAN_MO88_EDATA0)

/** \brief  1B04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO88_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019B04u)

/** Alias (User Manual Name) for CAN_MO88_EDATA1.
 * To use register names with standard convension, please use CAN_MO88_EDATA1.
 */
#define CAN_EMO88DATA1   (CAN_MO88_EDATA1)

/** \brief  1B08, Message Object  Interrupt Pointer Register */
#define CAN_MO88_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019B08u)

/** Alias (User Manual Name) for CAN_MO88_EDATA2.
 * To use register names with standard convension, please use CAN_MO88_EDATA2.
 */
#define CAN_EMO88DATA2   (CAN_MO88_EDATA2)

/** \brief  1B0C, Message Object  Acceptance Mask Register */
#define CAN_MO88_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019B0Cu)

/** Alias (User Manual Name) for CAN_MO88_EDATA3.
 * To use register names with standard convension, please use CAN_MO88_EDATA3.
 */
#define CAN_EMO88DATA3   (CAN_MO88_EDATA3)

/** \brief  1B10, Message Object  Data Register Low */
#define CAN_MO88_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019B10u)

/** Alias (User Manual Name) for CAN_MO88_EDATA4.
 * To use register names with standard convension, please use CAN_MO88_EDATA4.
 */
#define CAN_EMO88DATA4   (CAN_MO88_EDATA4)

/** \brief  1B14, Message Object  Data Register High */
#define CAN_MO88_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019B14u)

/** Alias (User Manual Name) for CAN_MO88_EDATA5.
 * To use register names with standard convension, please use CAN_MO88_EDATA5.
 */
#define CAN_EMO88DATA5   (CAN_MO88_EDATA5)

/** \brief  1B18, Message Object  Arbitration Register */
#define CAN_MO88_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019B18u)

/** Alias (User Manual Name) for CAN_MO88_EDATA6.
 * To use register names with standard convension, please use CAN_MO88_EDATA6.
 */
#define CAN_EMO88DATA6   (CAN_MO88_EDATA6)

/** \brief  1B00, Message Object  Function Control Register */
#define CAN_MO88_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019B00u)

/** Alias (User Manual Name) for CAN_MO88_FCR.
 * To use register names with standard convension, please use CAN_MO88_FCR.
 */
#define CAN_MOFCR88      (CAN_MO88_FCR)

/** \brief  1B04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO88_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019B04u)

/** Alias (User Manual Name) for CAN_MO88_FGPR.
 * To use register names with standard convension, please use CAN_MO88_FGPR.
 */
#define CAN_MOFGPR88     (CAN_MO88_FGPR)

/** \brief  1B08, Message Object  Interrupt Pointer Register */
#define CAN_MO88_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019B08u)

/** Alias (User Manual Name) for CAN_MO88_IPR.
 * To use register names with standard convension, please use CAN_MO88_IPR.
 */
#define CAN_MOIPR88      (CAN_MO88_IPR)

/** \brief  1B1C, Message Object  Control Register */
#define CAN_MO88_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019B1Cu)

/** Alias (User Manual Name) for CAN_MO88_STAT.
 * To use register names with standard convension, please use CAN_MO88_STAT.
 */
#define CAN_MOSTAT88     (CAN_MO88_STAT)

/** \brief  1B2C, Message Object  Acceptance Mask Register */
#define CAN_MO89_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019B2Cu)

/** Alias (User Manual Name) for CAN_MO89_AMR.
 * To use register names with standard convension, please use CAN_MO89_AMR.
 */
#define CAN_MOAMR89      (CAN_MO89_AMR)

/** \brief  1B38, Message Object  Arbitration Register */
#define CAN_MO89_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019B38u)

/** Alias (User Manual Name) for CAN_MO89_AR.
 * To use register names with standard convension, please use CAN_MO89_AR.
 */
#define CAN_MOAR89       (CAN_MO89_AR)

/** \brief  1B3C, Message Object  Control Register */
#define CAN_MO89_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019B3Cu)

/** Alias (User Manual Name) for CAN_MO89_CTR.
 * To use register names with standard convension, please use CAN_MO89_CTR.
 */
#define CAN_MOCTR89      (CAN_MO89_CTR)

/** \brief  1B34, Message Object  Data Register High */
#define CAN_MO89_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019B34u)

/** Alias (User Manual Name) for CAN_MO89_DATAH.
 * To use register names with standard convension, please use CAN_MO89_DATAH.
 */
#define CAN_MODATAH89    (CAN_MO89_DATAH)

/** \brief  1B30, Message Object  Data Register Low */
#define CAN_MO89_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019B30u)

/** Alias (User Manual Name) for CAN_MO89_DATAL.
 * To use register names with standard convension, please use CAN_MO89_DATAL.
 */
#define CAN_MODATAL89    (CAN_MO89_DATAL)

/** \brief  1B20, Message Object  Function Control Register */
#define CAN_MO89_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019B20u)

/** Alias (User Manual Name) for CAN_MO89_EDATA0.
 * To use register names with standard convension, please use CAN_MO89_EDATA0.
 */
#define CAN_EMO89DATA0   (CAN_MO89_EDATA0)

/** \brief  1B24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO89_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019B24u)

/** Alias (User Manual Name) for CAN_MO89_EDATA1.
 * To use register names with standard convension, please use CAN_MO89_EDATA1.
 */
#define CAN_EMO89DATA1   (CAN_MO89_EDATA1)

/** \brief  1B28, Message Object  Interrupt Pointer Register */
#define CAN_MO89_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019B28u)

/** Alias (User Manual Name) for CAN_MO89_EDATA2.
 * To use register names with standard convension, please use CAN_MO89_EDATA2.
 */
#define CAN_EMO89DATA2   (CAN_MO89_EDATA2)

/** \brief  1B2C, Message Object  Acceptance Mask Register */
#define CAN_MO89_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019B2Cu)

/** Alias (User Manual Name) for CAN_MO89_EDATA3.
 * To use register names with standard convension, please use CAN_MO89_EDATA3.
 */
#define CAN_EMO89DATA3   (CAN_MO89_EDATA3)

/** \brief  1B30, Message Object  Data Register Low */
#define CAN_MO89_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019B30u)

/** Alias (User Manual Name) for CAN_MO89_EDATA4.
 * To use register names with standard convension, please use CAN_MO89_EDATA4.
 */
#define CAN_EMO89DATA4   (CAN_MO89_EDATA4)

/** \brief  1B34, Message Object  Data Register High */
#define CAN_MO89_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019B34u)

/** Alias (User Manual Name) for CAN_MO89_EDATA5.
 * To use register names with standard convension, please use CAN_MO89_EDATA5.
 */
#define CAN_EMO89DATA5   (CAN_MO89_EDATA5)

/** \brief  1B38, Message Object  Arbitration Register */
#define CAN_MO89_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019B38u)

/** Alias (User Manual Name) for CAN_MO89_EDATA6.
 * To use register names with standard convension, please use CAN_MO89_EDATA6.
 */
#define CAN_EMO89DATA6   (CAN_MO89_EDATA6)

/** \brief  1B20, Message Object  Function Control Register */
#define CAN_MO89_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019B20u)

/** Alias (User Manual Name) for CAN_MO89_FCR.
 * To use register names with standard convension, please use CAN_MO89_FCR.
 */
#define CAN_MOFCR89      (CAN_MO89_FCR)

/** \brief  1B24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO89_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019B24u)

/** Alias (User Manual Name) for CAN_MO89_FGPR.
 * To use register names with standard convension, please use CAN_MO89_FGPR.
 */
#define CAN_MOFGPR89     (CAN_MO89_FGPR)

/** \brief  1B28, Message Object  Interrupt Pointer Register */
#define CAN_MO89_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019B28u)

/** Alias (User Manual Name) for CAN_MO89_IPR.
 * To use register names with standard convension, please use CAN_MO89_IPR.
 */
#define CAN_MOIPR89      (CAN_MO89_IPR)

/** \brief  1B3C, Message Object  Control Register */
#define CAN_MO89_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019B3Cu)

/** Alias (User Manual Name) for CAN_MO89_STAT.
 * To use register names with standard convension, please use CAN_MO89_STAT.
 */
#define CAN_MOSTAT89     (CAN_MO89_STAT)

/** \brief  110C, Message Object  Acceptance Mask Register */
#define CAN_MO8_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001910Cu)

/** Alias (User Manual Name) for CAN_MO8_AMR.
 * To use register names with standard convension, please use CAN_MO8_AMR.
 */
#define CAN_MOAMR8       (CAN_MO8_AMR)

/** \brief  1118, Message Object  Arbitration Register */
#define CAN_MO8_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019118u)

/** Alias (User Manual Name) for CAN_MO8_AR.
 * To use register names with standard convension, please use CAN_MO8_AR.
 */
#define CAN_MOAR8        (CAN_MO8_AR)

/** \brief  111C, Message Object  Control Register */
#define CAN_MO8_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001911Cu)

/** Alias (User Manual Name) for CAN_MO8_CTR.
 * To use register names with standard convension, please use CAN_MO8_CTR.
 */
#define CAN_MOCTR8       (CAN_MO8_CTR)

/** \brief  1114, Message Object  Data Register High */
#define CAN_MO8_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019114u)

/** Alias (User Manual Name) for CAN_MO8_DATAH.
 * To use register names with standard convension, please use CAN_MO8_DATAH.
 */
#define CAN_MODATAH8     (CAN_MO8_DATAH)

/** \brief  1110, Message Object  Data Register Low */
#define CAN_MO8_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019110u)

/** Alias (User Manual Name) for CAN_MO8_DATAL.
 * To use register names with standard convension, please use CAN_MO8_DATAL.
 */
#define CAN_MODATAL8     (CAN_MO8_DATAL)

/** \brief  1100, Message Object  Function Control Register */
#define CAN_MO8_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019100u)

/** Alias (User Manual Name) for CAN_MO8_EDATA0.
 * To use register names with standard convension, please use CAN_MO8_EDATA0.
 */
#define CAN_EMO8DATA0    (CAN_MO8_EDATA0)

/** \brief  1104, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO8_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019104u)

/** Alias (User Manual Name) for CAN_MO8_EDATA1.
 * To use register names with standard convension, please use CAN_MO8_EDATA1.
 */
#define CAN_EMO8DATA1    (CAN_MO8_EDATA1)

/** \brief  1108, Message Object  Interrupt Pointer Register */
#define CAN_MO8_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019108u)

/** Alias (User Manual Name) for CAN_MO8_EDATA2.
 * To use register names with standard convension, please use CAN_MO8_EDATA2.
 */
#define CAN_EMO8DATA2    (CAN_MO8_EDATA2)

/** \brief  110C, Message Object  Acceptance Mask Register */
#define CAN_MO8_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001910Cu)

/** Alias (User Manual Name) for CAN_MO8_EDATA3.
 * To use register names with standard convension, please use CAN_MO8_EDATA3.
 */
#define CAN_EMO8DATA3    (CAN_MO8_EDATA3)

/** \brief  1110, Message Object  Data Register Low */
#define CAN_MO8_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019110u)

/** Alias (User Manual Name) for CAN_MO8_EDATA4.
 * To use register names with standard convension, please use CAN_MO8_EDATA4.
 */
#define CAN_EMO8DATA4    (CAN_MO8_EDATA4)

/** \brief  1114, Message Object  Data Register High */
#define CAN_MO8_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019114u)

/** Alias (User Manual Name) for CAN_MO8_EDATA5.
 * To use register names with standard convension, please use CAN_MO8_EDATA5.
 */
#define CAN_EMO8DATA5    (CAN_MO8_EDATA5)

/** \brief  1118, Message Object  Arbitration Register */
#define CAN_MO8_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019118u)

/** Alias (User Manual Name) for CAN_MO8_EDATA6.
 * To use register names with standard convension, please use CAN_MO8_EDATA6.
 */
#define CAN_EMO8DATA6    (CAN_MO8_EDATA6)

/** \brief  1100, Message Object  Function Control Register */
#define CAN_MO8_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019100u)

/** Alias (User Manual Name) for CAN_MO8_FCR.
 * To use register names with standard convension, please use CAN_MO8_FCR.
 */
#define CAN_MOFCR8       (CAN_MO8_FCR)

/** \brief  1104, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO8_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019104u)

/** Alias (User Manual Name) for CAN_MO8_FGPR.
 * To use register names with standard convension, please use CAN_MO8_FGPR.
 */
#define CAN_MOFGPR8      (CAN_MO8_FGPR)

/** \brief  1108, Message Object  Interrupt Pointer Register */
#define CAN_MO8_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019108u)

/** Alias (User Manual Name) for CAN_MO8_IPR.
 * To use register names with standard convension, please use CAN_MO8_IPR.
 */
#define CAN_MOIPR8       (CAN_MO8_IPR)

/** \brief  111C, Message Object  Control Register */
#define CAN_MO8_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001911Cu)

/** Alias (User Manual Name) for CAN_MO8_STAT.
 * To use register names with standard convension, please use CAN_MO8_STAT.
 */
#define CAN_MOSTAT8      (CAN_MO8_STAT)

/** \brief  1B4C, Message Object  Acceptance Mask Register */
#define CAN_MO90_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019B4Cu)

/** Alias (User Manual Name) for CAN_MO90_AMR.
 * To use register names with standard convension, please use CAN_MO90_AMR.
 */
#define CAN_MOAMR90      (CAN_MO90_AMR)

/** \brief  1B58, Message Object  Arbitration Register */
#define CAN_MO90_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019B58u)

/** Alias (User Manual Name) for CAN_MO90_AR.
 * To use register names with standard convension, please use CAN_MO90_AR.
 */
#define CAN_MOAR90       (CAN_MO90_AR)

/** \brief  1B5C, Message Object  Control Register */
#define CAN_MO90_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019B5Cu)

/** Alias (User Manual Name) for CAN_MO90_CTR.
 * To use register names with standard convension, please use CAN_MO90_CTR.
 */
#define CAN_MOCTR90      (CAN_MO90_CTR)

/** \brief  1B54, Message Object  Data Register High */
#define CAN_MO90_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019B54u)

/** Alias (User Manual Name) for CAN_MO90_DATAH.
 * To use register names with standard convension, please use CAN_MO90_DATAH.
 */
#define CAN_MODATAH90    (CAN_MO90_DATAH)

/** \brief  1B50, Message Object  Data Register Low */
#define CAN_MO90_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019B50u)

/** Alias (User Manual Name) for CAN_MO90_DATAL.
 * To use register names with standard convension, please use CAN_MO90_DATAL.
 */
#define CAN_MODATAL90    (CAN_MO90_DATAL)

/** \brief  1B40, Message Object  Function Control Register */
#define CAN_MO90_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019B40u)

/** Alias (User Manual Name) for CAN_MO90_EDATA0.
 * To use register names with standard convension, please use CAN_MO90_EDATA0.
 */
#define CAN_EMO90DATA0   (CAN_MO90_EDATA0)

/** \brief  1B44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO90_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019B44u)

/** Alias (User Manual Name) for CAN_MO90_EDATA1.
 * To use register names with standard convension, please use CAN_MO90_EDATA1.
 */
#define CAN_EMO90DATA1   (CAN_MO90_EDATA1)

/** \brief  1B48, Message Object  Interrupt Pointer Register */
#define CAN_MO90_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019B48u)

/** Alias (User Manual Name) for CAN_MO90_EDATA2.
 * To use register names with standard convension, please use CAN_MO90_EDATA2.
 */
#define CAN_EMO90DATA2   (CAN_MO90_EDATA2)

/** \brief  1B4C, Message Object  Acceptance Mask Register */
#define CAN_MO90_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019B4Cu)

/** Alias (User Manual Name) for CAN_MO90_EDATA3.
 * To use register names with standard convension, please use CAN_MO90_EDATA3.
 */
#define CAN_EMO90DATA3   (CAN_MO90_EDATA3)

/** \brief  1B50, Message Object  Data Register Low */
#define CAN_MO90_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019B50u)

/** Alias (User Manual Name) for CAN_MO90_EDATA4.
 * To use register names with standard convension, please use CAN_MO90_EDATA4.
 */
#define CAN_EMO90DATA4   (CAN_MO90_EDATA4)

/** \brief  1B54, Message Object  Data Register High */
#define CAN_MO90_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019B54u)

/** Alias (User Manual Name) for CAN_MO90_EDATA5.
 * To use register names with standard convension, please use CAN_MO90_EDATA5.
 */
#define CAN_EMO90DATA5   (CAN_MO90_EDATA5)

/** \brief  1B58, Message Object  Arbitration Register */
#define CAN_MO90_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019B58u)

/** Alias (User Manual Name) for CAN_MO90_EDATA6.
 * To use register names with standard convension, please use CAN_MO90_EDATA6.
 */
#define CAN_EMO90DATA6   (CAN_MO90_EDATA6)

/** \brief  1B40, Message Object  Function Control Register */
#define CAN_MO90_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019B40u)

/** Alias (User Manual Name) for CAN_MO90_FCR.
 * To use register names with standard convension, please use CAN_MO90_FCR.
 */
#define CAN_MOFCR90      (CAN_MO90_FCR)

/** \brief  1B44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO90_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019B44u)

/** Alias (User Manual Name) for CAN_MO90_FGPR.
 * To use register names with standard convension, please use CAN_MO90_FGPR.
 */
#define CAN_MOFGPR90     (CAN_MO90_FGPR)

/** \brief  1B48, Message Object  Interrupt Pointer Register */
#define CAN_MO90_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019B48u)

/** Alias (User Manual Name) for CAN_MO90_IPR.
 * To use register names with standard convension, please use CAN_MO90_IPR.
 */
#define CAN_MOIPR90      (CAN_MO90_IPR)

/** \brief  1B5C, Message Object  Control Register */
#define CAN_MO90_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019B5Cu)

/** Alias (User Manual Name) for CAN_MO90_STAT.
 * To use register names with standard convension, please use CAN_MO90_STAT.
 */
#define CAN_MOSTAT90     (CAN_MO90_STAT)

/** \brief  1B6C, Message Object  Acceptance Mask Register */
#define CAN_MO91_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019B6Cu)

/** Alias (User Manual Name) for CAN_MO91_AMR.
 * To use register names with standard convension, please use CAN_MO91_AMR.
 */
#define CAN_MOAMR91      (CAN_MO91_AMR)

/** \brief  1B78, Message Object  Arbitration Register */
#define CAN_MO91_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019B78u)

/** Alias (User Manual Name) for CAN_MO91_AR.
 * To use register names with standard convension, please use CAN_MO91_AR.
 */
#define CAN_MOAR91       (CAN_MO91_AR)

/** \brief  1B7C, Message Object  Control Register */
#define CAN_MO91_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019B7Cu)

/** Alias (User Manual Name) for CAN_MO91_CTR.
 * To use register names with standard convension, please use CAN_MO91_CTR.
 */
#define CAN_MOCTR91      (CAN_MO91_CTR)

/** \brief  1B74, Message Object  Data Register High */
#define CAN_MO91_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019B74u)

/** Alias (User Manual Name) for CAN_MO91_DATAH.
 * To use register names with standard convension, please use CAN_MO91_DATAH.
 */
#define CAN_MODATAH91    (CAN_MO91_DATAH)

/** \brief  1B70, Message Object  Data Register Low */
#define CAN_MO91_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019B70u)

/** Alias (User Manual Name) for CAN_MO91_DATAL.
 * To use register names with standard convension, please use CAN_MO91_DATAL.
 */
#define CAN_MODATAL91    (CAN_MO91_DATAL)

/** \brief  1B60, Message Object  Function Control Register */
#define CAN_MO91_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019B60u)

/** Alias (User Manual Name) for CAN_MO91_EDATA0.
 * To use register names with standard convension, please use CAN_MO91_EDATA0.
 */
#define CAN_EMO91DATA0   (CAN_MO91_EDATA0)

/** \brief  1B64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO91_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019B64u)

/** Alias (User Manual Name) for CAN_MO91_EDATA1.
 * To use register names with standard convension, please use CAN_MO91_EDATA1.
 */
#define CAN_EMO91DATA1   (CAN_MO91_EDATA1)

/** \brief  1B68, Message Object  Interrupt Pointer Register */
#define CAN_MO91_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019B68u)

/** Alias (User Manual Name) for CAN_MO91_EDATA2.
 * To use register names with standard convension, please use CAN_MO91_EDATA2.
 */
#define CAN_EMO91DATA2   (CAN_MO91_EDATA2)

/** \brief  1B6C, Message Object  Acceptance Mask Register */
#define CAN_MO91_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019B6Cu)

/** Alias (User Manual Name) for CAN_MO91_EDATA3.
 * To use register names with standard convension, please use CAN_MO91_EDATA3.
 */
#define CAN_EMO91DATA3   (CAN_MO91_EDATA3)

/** \brief  1B70, Message Object  Data Register Low */
#define CAN_MO91_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019B70u)

/** Alias (User Manual Name) for CAN_MO91_EDATA4.
 * To use register names with standard convension, please use CAN_MO91_EDATA4.
 */
#define CAN_EMO91DATA4   (CAN_MO91_EDATA4)

/** \brief  1B74, Message Object  Data Register High */
#define CAN_MO91_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019B74u)

/** Alias (User Manual Name) for CAN_MO91_EDATA5.
 * To use register names with standard convension, please use CAN_MO91_EDATA5.
 */
#define CAN_EMO91DATA5   (CAN_MO91_EDATA5)

/** \brief  1B78, Message Object  Arbitration Register */
#define CAN_MO91_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019B78u)

/** Alias (User Manual Name) for CAN_MO91_EDATA6.
 * To use register names with standard convension, please use CAN_MO91_EDATA6.
 */
#define CAN_EMO91DATA6   (CAN_MO91_EDATA6)

/** \brief  1B60, Message Object  Function Control Register */
#define CAN_MO91_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019B60u)

/** Alias (User Manual Name) for CAN_MO91_FCR.
 * To use register names with standard convension, please use CAN_MO91_FCR.
 */
#define CAN_MOFCR91      (CAN_MO91_FCR)

/** \brief  1B64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO91_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019B64u)

/** Alias (User Manual Name) for CAN_MO91_FGPR.
 * To use register names with standard convension, please use CAN_MO91_FGPR.
 */
#define CAN_MOFGPR91     (CAN_MO91_FGPR)

/** \brief  1B68, Message Object  Interrupt Pointer Register */
#define CAN_MO91_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019B68u)

/** Alias (User Manual Name) for CAN_MO91_IPR.
 * To use register names with standard convension, please use CAN_MO91_IPR.
 */
#define CAN_MOIPR91      (CAN_MO91_IPR)

/** \brief  1B7C, Message Object  Control Register */
#define CAN_MO91_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019B7Cu)

/** Alias (User Manual Name) for CAN_MO91_STAT.
 * To use register names with standard convension, please use CAN_MO91_STAT.
 */
#define CAN_MOSTAT91     (CAN_MO91_STAT)

/** \brief  1B8C, Message Object  Acceptance Mask Register */
#define CAN_MO92_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019B8Cu)

/** Alias (User Manual Name) for CAN_MO92_AMR.
 * To use register names with standard convension, please use CAN_MO92_AMR.
 */
#define CAN_MOAMR92      (CAN_MO92_AMR)

/** \brief  1B98, Message Object  Arbitration Register */
#define CAN_MO92_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019B98u)

/** Alias (User Manual Name) for CAN_MO92_AR.
 * To use register names with standard convension, please use CAN_MO92_AR.
 */
#define CAN_MOAR92       (CAN_MO92_AR)

/** \brief  1B9C, Message Object  Control Register */
#define CAN_MO92_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019B9Cu)

/** Alias (User Manual Name) for CAN_MO92_CTR.
 * To use register names with standard convension, please use CAN_MO92_CTR.
 */
#define CAN_MOCTR92      (CAN_MO92_CTR)

/** \brief  1B94, Message Object  Data Register High */
#define CAN_MO92_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019B94u)

/** Alias (User Manual Name) for CAN_MO92_DATAH.
 * To use register names with standard convension, please use CAN_MO92_DATAH.
 */
#define CAN_MODATAH92    (CAN_MO92_DATAH)

/** \brief  1B90, Message Object  Data Register Low */
#define CAN_MO92_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019B90u)

/** Alias (User Manual Name) for CAN_MO92_DATAL.
 * To use register names with standard convension, please use CAN_MO92_DATAL.
 */
#define CAN_MODATAL92    (CAN_MO92_DATAL)

/** \brief  1B80, Message Object  Function Control Register */
#define CAN_MO92_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019B80u)

/** Alias (User Manual Name) for CAN_MO92_EDATA0.
 * To use register names with standard convension, please use CAN_MO92_EDATA0.
 */
#define CAN_EMO92DATA0   (CAN_MO92_EDATA0)

/** \brief  1B84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO92_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019B84u)

/** Alias (User Manual Name) for CAN_MO92_EDATA1.
 * To use register names with standard convension, please use CAN_MO92_EDATA1.
 */
#define CAN_EMO92DATA1   (CAN_MO92_EDATA1)

/** \brief  1B88, Message Object  Interrupt Pointer Register */
#define CAN_MO92_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019B88u)

/** Alias (User Manual Name) for CAN_MO92_EDATA2.
 * To use register names with standard convension, please use CAN_MO92_EDATA2.
 */
#define CAN_EMO92DATA2   (CAN_MO92_EDATA2)

/** \brief  1B8C, Message Object  Acceptance Mask Register */
#define CAN_MO92_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019B8Cu)

/** Alias (User Manual Name) for CAN_MO92_EDATA3.
 * To use register names with standard convension, please use CAN_MO92_EDATA3.
 */
#define CAN_EMO92DATA3   (CAN_MO92_EDATA3)

/** \brief  1B90, Message Object  Data Register Low */
#define CAN_MO92_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019B90u)

/** Alias (User Manual Name) for CAN_MO92_EDATA4.
 * To use register names with standard convension, please use CAN_MO92_EDATA4.
 */
#define CAN_EMO92DATA4   (CAN_MO92_EDATA4)

/** \brief  1B94, Message Object  Data Register High */
#define CAN_MO92_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019B94u)

/** Alias (User Manual Name) for CAN_MO92_EDATA5.
 * To use register names with standard convension, please use CAN_MO92_EDATA5.
 */
#define CAN_EMO92DATA5   (CAN_MO92_EDATA5)

/** \brief  1B98, Message Object  Arbitration Register */
#define CAN_MO92_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019B98u)

/** Alias (User Manual Name) for CAN_MO92_EDATA6.
 * To use register names with standard convension, please use CAN_MO92_EDATA6.
 */
#define CAN_EMO92DATA6   (CAN_MO92_EDATA6)

/** \brief  1B80, Message Object  Function Control Register */
#define CAN_MO92_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019B80u)

/** Alias (User Manual Name) for CAN_MO92_FCR.
 * To use register names with standard convension, please use CAN_MO92_FCR.
 */
#define CAN_MOFCR92      (CAN_MO92_FCR)

/** \brief  1B84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO92_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019B84u)

/** Alias (User Manual Name) for CAN_MO92_FGPR.
 * To use register names with standard convension, please use CAN_MO92_FGPR.
 */
#define CAN_MOFGPR92     (CAN_MO92_FGPR)

/** \brief  1B88, Message Object  Interrupt Pointer Register */
#define CAN_MO92_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019B88u)

/** Alias (User Manual Name) for CAN_MO92_IPR.
 * To use register names with standard convension, please use CAN_MO92_IPR.
 */
#define CAN_MOIPR92      (CAN_MO92_IPR)

/** \brief  1B9C, Message Object  Control Register */
#define CAN_MO92_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019B9Cu)

/** Alias (User Manual Name) for CAN_MO92_STAT.
 * To use register names with standard convension, please use CAN_MO92_STAT.
 */
#define CAN_MOSTAT92     (CAN_MO92_STAT)

/** \brief  1BAC, Message Object  Acceptance Mask Register */
#define CAN_MO93_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019BACu)

/** Alias (User Manual Name) for CAN_MO93_AMR.
 * To use register names with standard convension, please use CAN_MO93_AMR.
 */
#define CAN_MOAMR93      (CAN_MO93_AMR)

/** \brief  1BB8, Message Object  Arbitration Register */
#define CAN_MO93_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019BB8u)

/** Alias (User Manual Name) for CAN_MO93_AR.
 * To use register names with standard convension, please use CAN_MO93_AR.
 */
#define CAN_MOAR93       (CAN_MO93_AR)

/** \brief  1BBC, Message Object  Control Register */
#define CAN_MO93_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019BBCu)

/** Alias (User Manual Name) for CAN_MO93_CTR.
 * To use register names with standard convension, please use CAN_MO93_CTR.
 */
#define CAN_MOCTR93      (CAN_MO93_CTR)

/** \brief  1BB4, Message Object  Data Register High */
#define CAN_MO93_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019BB4u)

/** Alias (User Manual Name) for CAN_MO93_DATAH.
 * To use register names with standard convension, please use CAN_MO93_DATAH.
 */
#define CAN_MODATAH93    (CAN_MO93_DATAH)

/** \brief  1BB0, Message Object  Data Register Low */
#define CAN_MO93_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019BB0u)

/** Alias (User Manual Name) for CAN_MO93_DATAL.
 * To use register names with standard convension, please use CAN_MO93_DATAL.
 */
#define CAN_MODATAL93    (CAN_MO93_DATAL)

/** \brief  1BA0, Message Object  Function Control Register */
#define CAN_MO93_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019BA0u)

/** Alias (User Manual Name) for CAN_MO93_EDATA0.
 * To use register names with standard convension, please use CAN_MO93_EDATA0.
 */
#define CAN_EMO93DATA0   (CAN_MO93_EDATA0)

/** \brief  1BA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO93_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019BA4u)

/** Alias (User Manual Name) for CAN_MO93_EDATA1.
 * To use register names with standard convension, please use CAN_MO93_EDATA1.
 */
#define CAN_EMO93DATA1   (CAN_MO93_EDATA1)

/** \brief  1BA8, Message Object  Interrupt Pointer Register */
#define CAN_MO93_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019BA8u)

/** Alias (User Manual Name) for CAN_MO93_EDATA2.
 * To use register names with standard convension, please use CAN_MO93_EDATA2.
 */
#define CAN_EMO93DATA2   (CAN_MO93_EDATA2)

/** \brief  1BAC, Message Object  Acceptance Mask Register */
#define CAN_MO93_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019BACu)

/** Alias (User Manual Name) for CAN_MO93_EDATA3.
 * To use register names with standard convension, please use CAN_MO93_EDATA3.
 */
#define CAN_EMO93DATA3   (CAN_MO93_EDATA3)

/** \brief  1BB0, Message Object  Data Register Low */
#define CAN_MO93_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019BB0u)

/** Alias (User Manual Name) for CAN_MO93_EDATA4.
 * To use register names with standard convension, please use CAN_MO93_EDATA4.
 */
#define CAN_EMO93DATA4   (CAN_MO93_EDATA4)

/** \brief  1BB4, Message Object  Data Register High */
#define CAN_MO93_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019BB4u)

/** Alias (User Manual Name) for CAN_MO93_EDATA5.
 * To use register names with standard convension, please use CAN_MO93_EDATA5.
 */
#define CAN_EMO93DATA5   (CAN_MO93_EDATA5)

/** \brief  1BB8, Message Object  Arbitration Register */
#define CAN_MO93_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019BB8u)

/** Alias (User Manual Name) for CAN_MO93_EDATA6.
 * To use register names with standard convension, please use CAN_MO93_EDATA6.
 */
#define CAN_EMO93DATA6   (CAN_MO93_EDATA6)

/** \brief  1BA0, Message Object  Function Control Register */
#define CAN_MO93_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019BA0u)

/** Alias (User Manual Name) for CAN_MO93_FCR.
 * To use register names with standard convension, please use CAN_MO93_FCR.
 */
#define CAN_MOFCR93      (CAN_MO93_FCR)

/** \brief  1BA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO93_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019BA4u)

/** Alias (User Manual Name) for CAN_MO93_FGPR.
 * To use register names with standard convension, please use CAN_MO93_FGPR.
 */
#define CAN_MOFGPR93     (CAN_MO93_FGPR)

/** \brief  1BA8, Message Object  Interrupt Pointer Register */
#define CAN_MO93_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019BA8u)

/** Alias (User Manual Name) for CAN_MO93_IPR.
 * To use register names with standard convension, please use CAN_MO93_IPR.
 */
#define CAN_MOIPR93      (CAN_MO93_IPR)

/** \brief  1BBC, Message Object  Control Register */
#define CAN_MO93_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019BBCu)

/** Alias (User Manual Name) for CAN_MO93_STAT.
 * To use register names with standard convension, please use CAN_MO93_STAT.
 */
#define CAN_MOSTAT93     (CAN_MO93_STAT)

/** \brief  1BCC, Message Object  Acceptance Mask Register */
#define CAN_MO94_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019BCCu)

/** Alias (User Manual Name) for CAN_MO94_AMR.
 * To use register names with standard convension, please use CAN_MO94_AMR.
 */
#define CAN_MOAMR94      (CAN_MO94_AMR)

/** \brief  1BD8, Message Object  Arbitration Register */
#define CAN_MO94_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019BD8u)

/** Alias (User Manual Name) for CAN_MO94_AR.
 * To use register names with standard convension, please use CAN_MO94_AR.
 */
#define CAN_MOAR94       (CAN_MO94_AR)

/** \brief  1BDC, Message Object  Control Register */
#define CAN_MO94_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019BDCu)

/** Alias (User Manual Name) for CAN_MO94_CTR.
 * To use register names with standard convension, please use CAN_MO94_CTR.
 */
#define CAN_MOCTR94      (CAN_MO94_CTR)

/** \brief  1BD4, Message Object  Data Register High */
#define CAN_MO94_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019BD4u)

/** Alias (User Manual Name) for CAN_MO94_DATAH.
 * To use register names with standard convension, please use CAN_MO94_DATAH.
 */
#define CAN_MODATAH94    (CAN_MO94_DATAH)

/** \brief  1BD0, Message Object  Data Register Low */
#define CAN_MO94_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019BD0u)

/** Alias (User Manual Name) for CAN_MO94_DATAL.
 * To use register names with standard convension, please use CAN_MO94_DATAL.
 */
#define CAN_MODATAL94    (CAN_MO94_DATAL)

/** \brief  1BC0, Message Object  Function Control Register */
#define CAN_MO94_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019BC0u)

/** Alias (User Manual Name) for CAN_MO94_EDATA0.
 * To use register names with standard convension, please use CAN_MO94_EDATA0.
 */
#define CAN_EMO94DATA0   (CAN_MO94_EDATA0)

/** \brief  1BC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO94_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019BC4u)

/** Alias (User Manual Name) for CAN_MO94_EDATA1.
 * To use register names with standard convension, please use CAN_MO94_EDATA1.
 */
#define CAN_EMO94DATA1   (CAN_MO94_EDATA1)

/** \brief  1BC8, Message Object  Interrupt Pointer Register */
#define CAN_MO94_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019BC8u)

/** Alias (User Manual Name) for CAN_MO94_EDATA2.
 * To use register names with standard convension, please use CAN_MO94_EDATA2.
 */
#define CAN_EMO94DATA2   (CAN_MO94_EDATA2)

/** \brief  1BCC, Message Object  Acceptance Mask Register */
#define CAN_MO94_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019BCCu)

/** Alias (User Manual Name) for CAN_MO94_EDATA3.
 * To use register names with standard convension, please use CAN_MO94_EDATA3.
 */
#define CAN_EMO94DATA3   (CAN_MO94_EDATA3)

/** \brief  1BD0, Message Object  Data Register Low */
#define CAN_MO94_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019BD0u)

/** Alias (User Manual Name) for CAN_MO94_EDATA4.
 * To use register names with standard convension, please use CAN_MO94_EDATA4.
 */
#define CAN_EMO94DATA4   (CAN_MO94_EDATA4)

/** \brief  1BD4, Message Object  Data Register High */
#define CAN_MO94_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019BD4u)

/** Alias (User Manual Name) for CAN_MO94_EDATA5.
 * To use register names with standard convension, please use CAN_MO94_EDATA5.
 */
#define CAN_EMO94DATA5   (CAN_MO94_EDATA5)

/** \brief  1BD8, Message Object  Arbitration Register */
#define CAN_MO94_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019BD8u)

/** Alias (User Manual Name) for CAN_MO94_EDATA6.
 * To use register names with standard convension, please use CAN_MO94_EDATA6.
 */
#define CAN_EMO94DATA6   (CAN_MO94_EDATA6)

/** \brief  1BC0, Message Object  Function Control Register */
#define CAN_MO94_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019BC0u)

/** Alias (User Manual Name) for CAN_MO94_FCR.
 * To use register names with standard convension, please use CAN_MO94_FCR.
 */
#define CAN_MOFCR94      (CAN_MO94_FCR)

/** \brief  1BC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO94_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019BC4u)

/** Alias (User Manual Name) for CAN_MO94_FGPR.
 * To use register names with standard convension, please use CAN_MO94_FGPR.
 */
#define CAN_MOFGPR94     (CAN_MO94_FGPR)

/** \brief  1BC8, Message Object  Interrupt Pointer Register */
#define CAN_MO94_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019BC8u)

/** Alias (User Manual Name) for CAN_MO94_IPR.
 * To use register names with standard convension, please use CAN_MO94_IPR.
 */
#define CAN_MOIPR94      (CAN_MO94_IPR)

/** \brief  1BDC, Message Object  Control Register */
#define CAN_MO94_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019BDCu)

/** Alias (User Manual Name) for CAN_MO94_STAT.
 * To use register names with standard convension, please use CAN_MO94_STAT.
 */
#define CAN_MOSTAT94     (CAN_MO94_STAT)

/** \brief  1BEC, Message Object  Acceptance Mask Register */
#define CAN_MO95_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019BECu)

/** Alias (User Manual Name) for CAN_MO95_AMR.
 * To use register names with standard convension, please use CAN_MO95_AMR.
 */
#define CAN_MOAMR95      (CAN_MO95_AMR)

/** \brief  1BF8, Message Object  Arbitration Register */
#define CAN_MO95_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019BF8u)

/** Alias (User Manual Name) for CAN_MO95_AR.
 * To use register names with standard convension, please use CAN_MO95_AR.
 */
#define CAN_MOAR95       (CAN_MO95_AR)

/** \brief  1BFC, Message Object  Control Register */
#define CAN_MO95_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019BFCu)

/** Alias (User Manual Name) for CAN_MO95_CTR.
 * To use register names with standard convension, please use CAN_MO95_CTR.
 */
#define CAN_MOCTR95      (CAN_MO95_CTR)

/** \brief  1BF4, Message Object  Data Register High */
#define CAN_MO95_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019BF4u)

/** Alias (User Manual Name) for CAN_MO95_DATAH.
 * To use register names with standard convension, please use CAN_MO95_DATAH.
 */
#define CAN_MODATAH95    (CAN_MO95_DATAH)

/** \brief  1BF0, Message Object  Data Register Low */
#define CAN_MO95_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019BF0u)

/** Alias (User Manual Name) for CAN_MO95_DATAL.
 * To use register names with standard convension, please use CAN_MO95_DATAL.
 */
#define CAN_MODATAL95    (CAN_MO95_DATAL)

/** \brief  1BE0, Message Object  Function Control Register */
#define CAN_MO95_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019BE0u)

/** Alias (User Manual Name) for CAN_MO95_EDATA0.
 * To use register names with standard convension, please use CAN_MO95_EDATA0.
 */
#define CAN_EMO95DATA0   (CAN_MO95_EDATA0)

/** \brief  1BE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO95_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019BE4u)

/** Alias (User Manual Name) for CAN_MO95_EDATA1.
 * To use register names with standard convension, please use CAN_MO95_EDATA1.
 */
#define CAN_EMO95DATA1   (CAN_MO95_EDATA1)

/** \brief  1BE8, Message Object  Interrupt Pointer Register */
#define CAN_MO95_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019BE8u)

/** Alias (User Manual Name) for CAN_MO95_EDATA2.
 * To use register names with standard convension, please use CAN_MO95_EDATA2.
 */
#define CAN_EMO95DATA2   (CAN_MO95_EDATA2)

/** \brief  1BEC, Message Object  Acceptance Mask Register */
#define CAN_MO95_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019BECu)

/** Alias (User Manual Name) for CAN_MO95_EDATA3.
 * To use register names with standard convension, please use CAN_MO95_EDATA3.
 */
#define CAN_EMO95DATA3   (CAN_MO95_EDATA3)

/** \brief  1BF0, Message Object  Data Register Low */
#define CAN_MO95_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019BF0u)

/** Alias (User Manual Name) for CAN_MO95_EDATA4.
 * To use register names with standard convension, please use CAN_MO95_EDATA4.
 */
#define CAN_EMO95DATA4   (CAN_MO95_EDATA4)

/** \brief  1BF4, Message Object  Data Register High */
#define CAN_MO95_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019BF4u)

/** Alias (User Manual Name) for CAN_MO95_EDATA5.
 * To use register names with standard convension, please use CAN_MO95_EDATA5.
 */
#define CAN_EMO95DATA5   (CAN_MO95_EDATA5)

/** \brief  1BF8, Message Object  Arbitration Register */
#define CAN_MO95_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019BF8u)

/** Alias (User Manual Name) for CAN_MO95_EDATA6.
 * To use register names with standard convension, please use CAN_MO95_EDATA6.
 */
#define CAN_EMO95DATA6   (CAN_MO95_EDATA6)

/** \brief  1BE0, Message Object  Function Control Register */
#define CAN_MO95_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019BE0u)

/** Alias (User Manual Name) for CAN_MO95_FCR.
 * To use register names with standard convension, please use CAN_MO95_FCR.
 */
#define CAN_MOFCR95      (CAN_MO95_FCR)

/** \brief  1BE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO95_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019BE4u)

/** Alias (User Manual Name) for CAN_MO95_FGPR.
 * To use register names with standard convension, please use CAN_MO95_FGPR.
 */
#define CAN_MOFGPR95     (CAN_MO95_FGPR)

/** \brief  1BE8, Message Object  Interrupt Pointer Register */
#define CAN_MO95_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019BE8u)

/** Alias (User Manual Name) for CAN_MO95_IPR.
 * To use register names with standard convension, please use CAN_MO95_IPR.
 */
#define CAN_MOIPR95      (CAN_MO95_IPR)

/** \brief  1BFC, Message Object  Control Register */
#define CAN_MO95_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019BFCu)

/** Alias (User Manual Name) for CAN_MO95_STAT.
 * To use register names with standard convension, please use CAN_MO95_STAT.
 */
#define CAN_MOSTAT95     (CAN_MO95_STAT)

/** \brief  1C0C, Message Object  Acceptance Mask Register */
#define CAN_MO96_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019C0Cu)

/** Alias (User Manual Name) for CAN_MO96_AMR.
 * To use register names with standard convension, please use CAN_MO96_AMR.
 */
#define CAN_MOAMR96      (CAN_MO96_AMR)

/** \brief  1C18, Message Object  Arbitration Register */
#define CAN_MO96_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019C18u)

/** Alias (User Manual Name) for CAN_MO96_AR.
 * To use register names with standard convension, please use CAN_MO96_AR.
 */
#define CAN_MOAR96       (CAN_MO96_AR)

/** \brief  1C1C, Message Object  Control Register */
#define CAN_MO96_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019C1Cu)

/** Alias (User Manual Name) for CAN_MO96_CTR.
 * To use register names with standard convension, please use CAN_MO96_CTR.
 */
#define CAN_MOCTR96      (CAN_MO96_CTR)

/** \brief  1C14, Message Object  Data Register High */
#define CAN_MO96_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019C14u)

/** Alias (User Manual Name) for CAN_MO96_DATAH.
 * To use register names with standard convension, please use CAN_MO96_DATAH.
 */
#define CAN_MODATAH96    (CAN_MO96_DATAH)

/** \brief  1C10, Message Object  Data Register Low */
#define CAN_MO96_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019C10u)

/** Alias (User Manual Name) for CAN_MO96_DATAL.
 * To use register names with standard convension, please use CAN_MO96_DATAL.
 */
#define CAN_MODATAL96    (CAN_MO96_DATAL)

/** \brief  1C00, Message Object  Function Control Register */
#define CAN_MO96_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019C00u)

/** Alias (User Manual Name) for CAN_MO96_EDATA0.
 * To use register names with standard convension, please use CAN_MO96_EDATA0.
 */
#define CAN_EMO96DATA0   (CAN_MO96_EDATA0)

/** \brief  1C04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO96_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019C04u)

/** Alias (User Manual Name) for CAN_MO96_EDATA1.
 * To use register names with standard convension, please use CAN_MO96_EDATA1.
 */
#define CAN_EMO96DATA1   (CAN_MO96_EDATA1)

/** \brief  1C08, Message Object  Interrupt Pointer Register */
#define CAN_MO96_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019C08u)

/** Alias (User Manual Name) for CAN_MO96_EDATA2.
 * To use register names with standard convension, please use CAN_MO96_EDATA2.
 */
#define CAN_EMO96DATA2   (CAN_MO96_EDATA2)

/** \brief  1C0C, Message Object  Acceptance Mask Register */
#define CAN_MO96_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019C0Cu)

/** Alias (User Manual Name) for CAN_MO96_EDATA3.
 * To use register names with standard convension, please use CAN_MO96_EDATA3.
 */
#define CAN_EMO96DATA3   (CAN_MO96_EDATA3)

/** \brief  1C10, Message Object  Data Register Low */
#define CAN_MO96_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019C10u)

/** Alias (User Manual Name) for CAN_MO96_EDATA4.
 * To use register names with standard convension, please use CAN_MO96_EDATA4.
 */
#define CAN_EMO96DATA4   (CAN_MO96_EDATA4)

/** \brief  1C14, Message Object  Data Register High */
#define CAN_MO96_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019C14u)

/** Alias (User Manual Name) for CAN_MO96_EDATA5.
 * To use register names with standard convension, please use CAN_MO96_EDATA5.
 */
#define CAN_EMO96DATA5   (CAN_MO96_EDATA5)

/** \brief  1C18, Message Object  Arbitration Register */
#define CAN_MO96_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019C18u)

/** Alias (User Manual Name) for CAN_MO96_EDATA6.
 * To use register names with standard convension, please use CAN_MO96_EDATA6.
 */
#define CAN_EMO96DATA6   (CAN_MO96_EDATA6)

/** \brief  1C00, Message Object  Function Control Register */
#define CAN_MO96_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019C00u)

/** Alias (User Manual Name) for CAN_MO96_FCR.
 * To use register names with standard convension, please use CAN_MO96_FCR.
 */
#define CAN_MOFCR96      (CAN_MO96_FCR)

/** \brief  1C04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO96_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019C04u)

/** Alias (User Manual Name) for CAN_MO96_FGPR.
 * To use register names with standard convension, please use CAN_MO96_FGPR.
 */
#define CAN_MOFGPR96     (CAN_MO96_FGPR)

/** \brief  1C08, Message Object  Interrupt Pointer Register */
#define CAN_MO96_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019C08u)

/** Alias (User Manual Name) for CAN_MO96_IPR.
 * To use register names with standard convension, please use CAN_MO96_IPR.
 */
#define CAN_MOIPR96      (CAN_MO96_IPR)

/** \brief  1C1C, Message Object  Control Register */
#define CAN_MO96_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019C1Cu)

/** Alias (User Manual Name) for CAN_MO96_STAT.
 * To use register names with standard convension, please use CAN_MO96_STAT.
 */
#define CAN_MOSTAT96     (CAN_MO96_STAT)

/** \brief  1C2C, Message Object  Acceptance Mask Register */
#define CAN_MO97_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019C2Cu)

/** Alias (User Manual Name) for CAN_MO97_AMR.
 * To use register names with standard convension, please use CAN_MO97_AMR.
 */
#define CAN_MOAMR97      (CAN_MO97_AMR)

/** \brief  1C38, Message Object  Arbitration Register */
#define CAN_MO97_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019C38u)

/** Alias (User Manual Name) for CAN_MO97_AR.
 * To use register names with standard convension, please use CAN_MO97_AR.
 */
#define CAN_MOAR97       (CAN_MO97_AR)

/** \brief  1C3C, Message Object  Control Register */
#define CAN_MO97_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019C3Cu)

/** Alias (User Manual Name) for CAN_MO97_CTR.
 * To use register names with standard convension, please use CAN_MO97_CTR.
 */
#define CAN_MOCTR97      (CAN_MO97_CTR)

/** \brief  1C34, Message Object  Data Register High */
#define CAN_MO97_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019C34u)

/** Alias (User Manual Name) for CAN_MO97_DATAH.
 * To use register names with standard convension, please use CAN_MO97_DATAH.
 */
#define CAN_MODATAH97    (CAN_MO97_DATAH)

/** \brief  1C30, Message Object  Data Register Low */
#define CAN_MO97_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019C30u)

/** Alias (User Manual Name) for CAN_MO97_DATAL.
 * To use register names with standard convension, please use CAN_MO97_DATAL.
 */
#define CAN_MODATAL97    (CAN_MO97_DATAL)

/** \brief  1C20, Message Object  Function Control Register */
#define CAN_MO97_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019C20u)

/** Alias (User Manual Name) for CAN_MO97_EDATA0.
 * To use register names with standard convension, please use CAN_MO97_EDATA0.
 */
#define CAN_EMO97DATA0   (CAN_MO97_EDATA0)

/** \brief  1C24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO97_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019C24u)

/** Alias (User Manual Name) for CAN_MO97_EDATA1.
 * To use register names with standard convension, please use CAN_MO97_EDATA1.
 */
#define CAN_EMO97DATA1   (CAN_MO97_EDATA1)

/** \brief  1C28, Message Object  Interrupt Pointer Register */
#define CAN_MO97_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019C28u)

/** Alias (User Manual Name) for CAN_MO97_EDATA2.
 * To use register names with standard convension, please use CAN_MO97_EDATA2.
 */
#define CAN_EMO97DATA2   (CAN_MO97_EDATA2)

/** \brief  1C2C, Message Object  Acceptance Mask Register */
#define CAN_MO97_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019C2Cu)

/** Alias (User Manual Name) for CAN_MO97_EDATA3.
 * To use register names with standard convension, please use CAN_MO97_EDATA3.
 */
#define CAN_EMO97DATA3   (CAN_MO97_EDATA3)

/** \brief  1C30, Message Object  Data Register Low */
#define CAN_MO97_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019C30u)

/** Alias (User Manual Name) for CAN_MO97_EDATA4.
 * To use register names with standard convension, please use CAN_MO97_EDATA4.
 */
#define CAN_EMO97DATA4   (CAN_MO97_EDATA4)

/** \brief  1C34, Message Object  Data Register High */
#define CAN_MO97_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019C34u)

/** Alias (User Manual Name) for CAN_MO97_EDATA5.
 * To use register names with standard convension, please use CAN_MO97_EDATA5.
 */
#define CAN_EMO97DATA5   (CAN_MO97_EDATA5)

/** \brief  1C38, Message Object  Arbitration Register */
#define CAN_MO97_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019C38u)

/** Alias (User Manual Name) for CAN_MO97_EDATA6.
 * To use register names with standard convension, please use CAN_MO97_EDATA6.
 */
#define CAN_EMO97DATA6   (CAN_MO97_EDATA6)

/** \brief  1C20, Message Object  Function Control Register */
#define CAN_MO97_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019C20u)

/** Alias (User Manual Name) for CAN_MO97_FCR.
 * To use register names with standard convension, please use CAN_MO97_FCR.
 */
#define CAN_MOFCR97      (CAN_MO97_FCR)

/** \brief  1C24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO97_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019C24u)

/** Alias (User Manual Name) for CAN_MO97_FGPR.
 * To use register names with standard convension, please use CAN_MO97_FGPR.
 */
#define CAN_MOFGPR97     (CAN_MO97_FGPR)

/** \brief  1C28, Message Object  Interrupt Pointer Register */
#define CAN_MO97_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019C28u)

/** Alias (User Manual Name) for CAN_MO97_IPR.
 * To use register names with standard convension, please use CAN_MO97_IPR.
 */
#define CAN_MOIPR97      (CAN_MO97_IPR)

/** \brief  1C3C, Message Object  Control Register */
#define CAN_MO97_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019C3Cu)

/** Alias (User Manual Name) for CAN_MO97_STAT.
 * To use register names with standard convension, please use CAN_MO97_STAT.
 */
#define CAN_MOSTAT97     (CAN_MO97_STAT)

/** \brief  1C4C, Message Object  Acceptance Mask Register */
#define CAN_MO98_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019C4Cu)

/** Alias (User Manual Name) for CAN_MO98_AMR.
 * To use register names with standard convension, please use CAN_MO98_AMR.
 */
#define CAN_MOAMR98      (CAN_MO98_AMR)

/** \brief  1C58, Message Object  Arbitration Register */
#define CAN_MO98_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019C58u)

/** Alias (User Manual Name) for CAN_MO98_AR.
 * To use register names with standard convension, please use CAN_MO98_AR.
 */
#define CAN_MOAR98       (CAN_MO98_AR)

/** \brief  1C5C, Message Object  Control Register */
#define CAN_MO98_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019C5Cu)

/** Alias (User Manual Name) for CAN_MO98_CTR.
 * To use register names with standard convension, please use CAN_MO98_CTR.
 */
#define CAN_MOCTR98      (CAN_MO98_CTR)

/** \brief  1C54, Message Object  Data Register High */
#define CAN_MO98_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019C54u)

/** Alias (User Manual Name) for CAN_MO98_DATAH.
 * To use register names with standard convension, please use CAN_MO98_DATAH.
 */
#define CAN_MODATAH98    (CAN_MO98_DATAH)

/** \brief  1C50, Message Object  Data Register Low */
#define CAN_MO98_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019C50u)

/** Alias (User Manual Name) for CAN_MO98_DATAL.
 * To use register names with standard convension, please use CAN_MO98_DATAL.
 */
#define CAN_MODATAL98    (CAN_MO98_DATAL)

/** \brief  1C40, Message Object  Function Control Register */
#define CAN_MO98_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019C40u)

/** Alias (User Manual Name) for CAN_MO98_EDATA0.
 * To use register names with standard convension, please use CAN_MO98_EDATA0.
 */
#define CAN_EMO98DATA0   (CAN_MO98_EDATA0)

/** \brief  1C44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO98_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019C44u)

/** Alias (User Manual Name) for CAN_MO98_EDATA1.
 * To use register names with standard convension, please use CAN_MO98_EDATA1.
 */
#define CAN_EMO98DATA1   (CAN_MO98_EDATA1)

/** \brief  1C48, Message Object  Interrupt Pointer Register */
#define CAN_MO98_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019C48u)

/** Alias (User Manual Name) for CAN_MO98_EDATA2.
 * To use register names with standard convension, please use CAN_MO98_EDATA2.
 */
#define CAN_EMO98DATA2   (CAN_MO98_EDATA2)

/** \brief  1C4C, Message Object  Acceptance Mask Register */
#define CAN_MO98_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019C4Cu)

/** Alias (User Manual Name) for CAN_MO98_EDATA3.
 * To use register names with standard convension, please use CAN_MO98_EDATA3.
 */
#define CAN_EMO98DATA3   (CAN_MO98_EDATA3)

/** \brief  1C50, Message Object  Data Register Low */
#define CAN_MO98_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019C50u)

/** Alias (User Manual Name) for CAN_MO98_EDATA4.
 * To use register names with standard convension, please use CAN_MO98_EDATA4.
 */
#define CAN_EMO98DATA4   (CAN_MO98_EDATA4)

/** \brief  1C54, Message Object  Data Register High */
#define CAN_MO98_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019C54u)

/** Alias (User Manual Name) for CAN_MO98_EDATA5.
 * To use register names with standard convension, please use CAN_MO98_EDATA5.
 */
#define CAN_EMO98DATA5   (CAN_MO98_EDATA5)

/** \brief  1C58, Message Object  Arbitration Register */
#define CAN_MO98_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019C58u)

/** Alias (User Manual Name) for CAN_MO98_EDATA6.
 * To use register names with standard convension, please use CAN_MO98_EDATA6.
 */
#define CAN_EMO98DATA6   (CAN_MO98_EDATA6)

/** \brief  1C40, Message Object  Function Control Register */
#define CAN_MO98_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019C40u)

/** Alias (User Manual Name) for CAN_MO98_FCR.
 * To use register names with standard convension, please use CAN_MO98_FCR.
 */
#define CAN_MOFCR98      (CAN_MO98_FCR)

/** \brief  1C44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO98_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019C44u)

/** Alias (User Manual Name) for CAN_MO98_FGPR.
 * To use register names with standard convension, please use CAN_MO98_FGPR.
 */
#define CAN_MOFGPR98     (CAN_MO98_FGPR)

/** \brief  1C48, Message Object  Interrupt Pointer Register */
#define CAN_MO98_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019C48u)

/** Alias (User Manual Name) for CAN_MO98_IPR.
 * To use register names with standard convension, please use CAN_MO98_IPR.
 */
#define CAN_MOIPR98      (CAN_MO98_IPR)

/** \brief  1C5C, Message Object  Control Register */
#define CAN_MO98_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019C5Cu)

/** Alias (User Manual Name) for CAN_MO98_STAT.
 * To use register names with standard convension, please use CAN_MO98_STAT.
 */
#define CAN_MOSTAT98     (CAN_MO98_STAT)

/** \brief  1C6C, Message Object  Acceptance Mask Register */
#define CAN_MO99_AMR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF0019C6Cu)

/** Alias (User Manual Name) for CAN_MO99_AMR.
 * To use register names with standard convension, please use CAN_MO99_AMR.
 */
#define CAN_MOAMR99      (CAN_MO99_AMR)

/** \brief  1C78, Message Object  Arbitration Register */
#define CAN_MO99_AR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019C78u)

/** Alias (User Manual Name) for CAN_MO99_AR.
 * To use register names with standard convension, please use CAN_MO99_AR.
 */
#define CAN_MOAR99       (CAN_MO99_AR)

/** \brief  1C7C, Message Object  Control Register */
#define CAN_MO99_CTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF0019C7Cu)

/** Alias (User Manual Name) for CAN_MO99_CTR.
 * To use register names with standard convension, please use CAN_MO99_CTR.
 */
#define CAN_MOCTR99      (CAN_MO99_CTR)

/** \brief  1C74, Message Object  Data Register High */
#define CAN_MO99_DATAH   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019C74u)

/** Alias (User Manual Name) for CAN_MO99_DATAH.
 * To use register names with standard convension, please use CAN_MO99_DATAH.
 */
#define CAN_MODATAH99    (CAN_MO99_DATAH)

/** \brief  1C70, Message Object  Data Register Low */
#define CAN_MO99_DATAL   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019C70u)

/** Alias (User Manual Name) for CAN_MO99_DATAL.
 * To use register names with standard convension, please use CAN_MO99_DATAL.
 */
#define CAN_MODATAL99    (CAN_MO99_DATAL)

/** \brief  1C60, Message Object  Function Control Register */
#define CAN_MO99_EDATA0  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019C60u)

/** Alias (User Manual Name) for CAN_MO99_EDATA0.
 * To use register names with standard convension, please use CAN_MO99_EDATA0.
 */
#define CAN_EMO99DATA0   (CAN_MO99_EDATA0)

/** \brief  1C64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO99_EDATA1  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019C64u)

/** Alias (User Manual Name) for CAN_MO99_EDATA1.
 * To use register names with standard convension, please use CAN_MO99_EDATA1.
 */
#define CAN_EMO99DATA1   (CAN_MO99_EDATA1)

/** \brief  1C68, Message Object  Interrupt Pointer Register */
#define CAN_MO99_EDATA2  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019C68u)

/** Alias (User Manual Name) for CAN_MO99_EDATA2.
 * To use register names with standard convension, please use CAN_MO99_EDATA2.
 */
#define CAN_EMO99DATA2   (CAN_MO99_EDATA2)

/** \brief  1C6C, Message Object  Acceptance Mask Register */
#define CAN_MO99_EDATA3  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF0019C6Cu)

/** Alias (User Manual Name) for CAN_MO99_EDATA3.
 * To use register names with standard convension, please use CAN_MO99_EDATA3.
 */
#define CAN_EMO99DATA3   (CAN_MO99_EDATA3)

/** \brief  1C70, Message Object  Data Register Low */
#define CAN_MO99_EDATA4  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019C70u)

/** Alias (User Manual Name) for CAN_MO99_EDATA4.
 * To use register names with standard convension, please use CAN_MO99_EDATA4.
 */
#define CAN_EMO99DATA4   (CAN_MO99_EDATA4)

/** \brief  1C74, Message Object  Data Register High */
#define CAN_MO99_EDATA5  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019C74u)

/** Alias (User Manual Name) for CAN_MO99_EDATA5.
 * To use register names with standard convension, please use CAN_MO99_EDATA5.
 */
#define CAN_EMO99DATA5   (CAN_MO99_EDATA5)

/** \brief  1C78, Message Object  Arbitration Register */
#define CAN_MO99_EDATA6  /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019C78u)

/** Alias (User Manual Name) for CAN_MO99_EDATA6.
 * To use register names with standard convension, please use CAN_MO99_EDATA6.
 */
#define CAN_EMO99DATA6   (CAN_MO99_EDATA6)

/** \brief  1C60, Message Object  Function Control Register */
#define CAN_MO99_FCR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019C60u)

/** Alias (User Manual Name) for CAN_MO99_FCR.
 * To use register names with standard convension, please use CAN_MO99_FCR.
 */
#define CAN_MOFCR99      (CAN_MO99_FCR)

/** \brief  1C64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO99_FGPR    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019C64u)

/** Alias (User Manual Name) for CAN_MO99_FGPR.
 * To use register names with standard convension, please use CAN_MO99_FGPR.
 */
#define CAN_MOFGPR99     (CAN_MO99_FGPR)

/** \brief  1C68, Message Object  Interrupt Pointer Register */
#define CAN_MO99_IPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019C68u)

/** Alias (User Manual Name) for CAN_MO99_IPR.
 * To use register names with standard convension, please use CAN_MO99_IPR.
 */
#define CAN_MOIPR99      (CAN_MO99_IPR)

/** \brief  1C7C, Message Object  Control Register */
#define CAN_MO99_STAT    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF0019C7Cu)

/** Alias (User Manual Name) for CAN_MO99_STAT.
 * To use register names with standard convension, please use CAN_MO99_STAT.
 */
#define CAN_MOSTAT99     (CAN_MO99_STAT)

/** \brief  112C, Message Object  Acceptance Mask Register */
#define CAN_MO9_AMR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR *)0xF001912Cu)

/** Alias (User Manual Name) for CAN_MO9_AMR.
 * To use register names with standard convension, please use CAN_MO9_AMR.
 */
#define CAN_MOAMR9       (CAN_MO9_AMR)

/** \brief  1138, Message Object  Arbitration Register */
#define CAN_MO9_AR       /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR *)0xF0019138u)

/** Alias (User Manual Name) for CAN_MO9_AR.
 * To use register names with standard convension, please use CAN_MO9_AR.
 */
#define CAN_MOAR9        (CAN_MO9_AR)

/** \brief  113C, Message Object  Control Register */
#define CAN_MO9_CTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR *)0xF001913Cu)

/** Alias (User Manual Name) for CAN_MO9_CTR.
 * To use register names with standard convension, please use CAN_MO9_CTR.
 */
#define CAN_MOCTR9       (CAN_MO9_CTR)

/** \brief  1134, Message Object  Data Register High */
#define CAN_MO9_DATAH    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH *)0xF0019134u)

/** Alias (User Manual Name) for CAN_MO9_DATAH.
 * To use register names with standard convension, please use CAN_MO9_DATAH.
 */
#define CAN_MODATAH9     (CAN_MO9_DATAH)

/** \brief  1130, Message Object  Data Register Low */
#define CAN_MO9_DATAL    /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL *)0xF0019130u)

/** Alias (User Manual Name) for CAN_MO9_DATAL.
 * To use register names with standard convension, please use CAN_MO9_DATAL.
 */
#define CAN_MODATAL9     (CAN_MO9_DATAL)

/** \brief  1120, Message Object  Function Control Register */
#define CAN_MO9_EDATA0   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA0 *)0xF0019120u)

/** Alias (User Manual Name) for CAN_MO9_EDATA0.
 * To use register names with standard convension, please use CAN_MO9_EDATA0.
 */
#define CAN_EMO9DATA0    (CAN_MO9_EDATA0)

/** \brief  1124, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO9_EDATA1   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA1 *)0xF0019124u)

/** Alias (User Manual Name) for CAN_MO9_EDATA1.
 * To use register names with standard convension, please use CAN_MO9_EDATA1.
 */
#define CAN_EMO9DATA1    (CAN_MO9_EDATA1)

/** \brief  1128, Message Object  Interrupt Pointer Register */
#define CAN_MO9_EDATA2   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA2 *)0xF0019128u)

/** Alias (User Manual Name) for CAN_MO9_EDATA2.
 * To use register names with standard convension, please use CAN_MO9_EDATA2.
 */
#define CAN_EMO9DATA2    (CAN_MO9_EDATA2)

/** \brief  112C, Message Object  Acceptance Mask Register */
#define CAN_MO9_EDATA3   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA3 *)0xF001912Cu)

/** Alias (User Manual Name) for CAN_MO9_EDATA3.
 * To use register names with standard convension, please use CAN_MO9_EDATA3.
 */
#define CAN_EMO9DATA3    (CAN_MO9_EDATA3)

/** \brief  1130, Message Object  Data Register Low */
#define CAN_MO9_EDATA4   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA4 *)0xF0019130u)

/** Alias (User Manual Name) for CAN_MO9_EDATA4.
 * To use register names with standard convension, please use CAN_MO9_EDATA4.
 */
#define CAN_EMO9DATA4    (CAN_MO9_EDATA4)

/** \brief  1134, Message Object  Data Register High */
#define CAN_MO9_EDATA5   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA5 *)0xF0019134u)

/** Alias (User Manual Name) for CAN_MO9_EDATA5.
 * To use register names with standard convension, please use CAN_MO9_EDATA5.
 */
#define CAN_EMO9DATA5    (CAN_MO9_EDATA5)

/** \brief  1138, Message Object  Arbitration Register */
#define CAN_MO9_EDATA6   /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_EDATA6 *)0xF0019138u)

/** Alias (User Manual Name) for CAN_MO9_EDATA6.
 * To use register names with standard convension, please use CAN_MO9_EDATA6.
 */
#define CAN_EMO9DATA6    (CAN_MO9_EDATA6)

/** \brief  1120, Message Object  Function Control Register */
#define CAN_MO9_FCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR *)0xF0019120u)

/** Alias (User Manual Name) for CAN_MO9_FCR.
 * To use register names with standard convension, please use CAN_MO9_FCR.
 */
#define CAN_MOFCR9       (CAN_MO9_FCR)

/** \brief  1124, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO9_FGPR     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR *)0xF0019124u)

/** Alias (User Manual Name) for CAN_MO9_FGPR.
 * To use register names with standard convension, please use CAN_MO9_FGPR.
 */
#define CAN_MOFGPR9      (CAN_MO9_FGPR)

/** \brief  1128, Message Object  Interrupt Pointer Register */
#define CAN_MO9_IPR      /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR *)0xF0019128u)

/** Alias (User Manual Name) for CAN_MO9_IPR.
 * To use register names with standard convension, please use CAN_MO9_IPR.
 */
#define CAN_MOIPR9       (CAN_MO9_IPR)

/** \brief  113C, Message Object  Control Register */
#define CAN_MO9_STAT     /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT *)0xF001913Cu)

/** Alias (User Manual Name) for CAN_MO9_STAT.
 * To use register names with standard convension, please use CAN_MO9_STAT.
 */
#define CAN_MOSTAT9      (CAN_MO9_STAT)

/** \brief  180, Message Index Register */
#define CAN_MSID0        /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID *)0xF0018180u)

/** \brief  184, Message Index Register */
#define CAN_MSID1        /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID *)0xF0018184u)

/** \brief  188, Message Index Register */
#define CAN_MSID2        /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID *)0xF0018188u)

/** \brief  18C, Message Index Register */
#define CAN_MSID3        /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID *)0xF001818Cu)

/** \brief  190, Message Index Register */
#define CAN_MSID4        /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID *)0xF0018190u)

/** \brief  194, Message Index Register */
#define CAN_MSID5        /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID *)0xF0018194u)

/** \brief  198, Message Index Register */
#define CAN_MSID6        /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID *)0xF0018198u)

/** \brief  19C, Message Index Register */
#define CAN_MSID7        /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID *)0xF001819Cu)

/** \brief  1C0, Message Index Mask Register */
#define CAN_MSIMASK      /*lint --e(923)*/ (*(volatile Ifx_CAN_MSIMASK *)0xF00181C0u)

/** \brief  140, Message Pending Register */
#define CAN_MSPND0       /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND *)0xF0018140u)

/** \brief  144, Message Pending Register */
#define CAN_MSPND1       /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND *)0xF0018144u)

/** \brief  148, Message Pending Register */
#define CAN_MSPND2       /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND *)0xF0018148u)

/** \brief  14C, Message Pending Register */
#define CAN_MSPND3       /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND *)0xF001814Cu)

/** \brief  150, Message Pending Register */
#define CAN_MSPND4       /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND *)0xF0018150u)

/** \brief  154, Message Pending Register */
#define CAN_MSPND5       /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND *)0xF0018154u)

/** \brief  158, Message Pending Register */
#define CAN_MSPND6       /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND *)0xF0018158u)

/** \brief  15C, Message Pending Register */
#define CAN_MSPND7       /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND *)0xF001815Cu)

/** \brief  210, Node Bit Timing Register */
#define CAN_N0_BTEVR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTEVR *)0xF0018210u)

/** Alias (User Manual Name) for CAN_N0_BTEVR.
 * To use register names with standard convension, please use CAN_N0_BTEVR.
 */
#define CAN_NBTEVR0      (CAN_N0_BTEVR)

/** \brief  210, Node Bit Timing Register */
#define CAN_N0_BTR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR *)0xF0018210u)

/** Alias (User Manual Name) for CAN_N0_BTR.
 * To use register names with standard convension, please use CAN_N0_BTR.
 */
#define CAN_NBTR0        (CAN_N0_BTR)

/** \brief  200, Node Control Register */
#define CAN_N0_CR        /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR *)0xF0018200u)

/** Alias (User Manual Name) for CAN_N0_CR.
 * To use register names with standard convension, please use CAN_N0_CR.
 */
#define CAN_NCR0         (CAN_N0_CR)

/** \brief  214, Node Error Counter Register */
#define CAN_N0_ECNT      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT *)0xF0018214u)

/** Alias (User Manual Name) for CAN_N0_ECNT.
 * To use register names with standard convension, please use CAN_N0_ECNT.
 */
#define CAN_NECNT0       (CAN_N0_ECNT)

/** \brief  238, Fast Node Bit Timing Register */
#define CAN_N0_FBTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FBTR *)0xF0018238u)

/** Alias (User Manual Name) for CAN_N0_FBTR.
 * To use register names with standard convension, please use CAN_N0_FBTR.
 */
#define CAN_FNBTR0       (CAN_N0_FBTR)

/** \brief  218, Node Frame Counter Register */
#define CAN_N0_FCR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR *)0xF0018218u)

/** Alias (User Manual Name) for CAN_N0_FCR.
 * To use register names with standard convension, please use CAN_N0_FCR.
 */
#define CAN_NFCR0        (CAN_N0_FCR)

/** \brief  208, Node Interrupt Pointer Register */
#define CAN_N0_IPR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR *)0xF0018208u)

/** Alias (User Manual Name) for CAN_N0_IPR.
 * To use register names with standard convension, please use CAN_N0_IPR.
 */
#define CAN_NIPR0        (CAN_N0_IPR)

/** \brief  20C, Node Port Control Register */
#define CAN_N0_PCR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR *)0xF001820Cu)

/** Alias (User Manual Name) for CAN_N0_PCR.
 * To use register names with standard convension, please use CAN_N0_PCR.
 */
#define CAN_NPCR0        (CAN_N0_PCR)

/** \brief  204, Node Status Register */
#define CAN_N0_SR        /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR *)0xF0018204u)

/** Alias (User Manual Name) for CAN_N0_SR.
 * To use register names with standard convension, please use CAN_N0_SR.
 */
#define CAN_NSR0         (CAN_N0_SR)

/** \brief  224, Node Timer A Transmit Trigger Register */
#define CAN_N0_TATTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR *)0xF0018224u)

/** Alias (User Manual Name) for CAN_N0_TATTR.
 * To use register names with standard convension, please use CAN_N0_TATTR.
 */
#define CAN_NTATTR0      (CAN_N0_TATTR)

/** \brief  228, Node Timer B Transmit Trigger Register */
#define CAN_N0_TBTTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR *)0xF0018228u)

/** Alias (User Manual Name) for CAN_N0_TBTTR.
 * To use register names with standard convension, please use CAN_N0_TBTTR.
 */
#define CAN_NTBTTR0      (CAN_N0_TBTTR)

/** \brief  21C, Node Timer Clock Control Register */
#define CAN_N0_TCCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR *)0xF001821Cu)

/** Alias (User Manual Name) for CAN_N0_TCCR.
 * To use register names with standard convension, please use CAN_N0_TCCR.
 */
#define CAN_NTCCR0       (CAN_N0_TCCR)

/** \brief  22C, Node Timer C Transmit Trigger Register */
#define CAN_N0_TCTTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR *)0xF001822Cu)

/** Alias (User Manual Name) for CAN_N0_TCTTR.
 * To use register names with standard convension, please use CAN_N0_TCTTR.
 */
#define CAN_NTCTTR0      (CAN_N0_TCTTR)

/** \brief  23C, Node Transmitter Delay Compensation Register */
#define CAN_N0_TDCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TDCR *)0xF001823Cu)

/** Alias (User Manual Name) for CAN_N0_TDCR.
 * To use register names with standard convension, please use CAN_N0_TDCR.
 */
#define CAN_NTDCR0       (CAN_N0_TDCR)

/** \brief  220, Node Timer Receive Timeout Register */
#define CAN_N0_TRTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR *)0xF0018220u)

/** Alias (User Manual Name) for CAN_N0_TRTR.
 * To use register names with standard convension, please use CAN_N0_TRTR.
 */
#define CAN_NTRTR0       (CAN_N0_TRTR)

/** \brief  310, Node Bit Timing Register */
#define CAN_N1_BTEVR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTEVR *)0xF0018310u)

/** Alias (User Manual Name) for CAN_N1_BTEVR.
 * To use register names with standard convension, please use CAN_N1_BTEVR.
 */
#define CAN_NBTEVR1      (CAN_N1_BTEVR)

/** \brief  310, Node Bit Timing Register */
#define CAN_N1_BTR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR *)0xF0018310u)

/** Alias (User Manual Name) for CAN_N1_BTR.
 * To use register names with standard convension, please use CAN_N1_BTR.
 */
#define CAN_NBTR1        (CAN_N1_BTR)

/** \brief  300, Node Control Register */
#define CAN_N1_CR        /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR *)0xF0018300u)

/** Alias (User Manual Name) for CAN_N1_CR.
 * To use register names with standard convension, please use CAN_N1_CR.
 */
#define CAN_NCR1         (CAN_N1_CR)

/** \brief  314, Node Error Counter Register */
#define CAN_N1_ECNT      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT *)0xF0018314u)

/** Alias (User Manual Name) for CAN_N1_ECNT.
 * To use register names with standard convension, please use CAN_N1_ECNT.
 */
#define CAN_NECNT1       (CAN_N1_ECNT)

/** \brief  338, Fast Node Bit Timing Register */
#define CAN_N1_FBTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FBTR *)0xF0018338u)

/** Alias (User Manual Name) for CAN_N1_FBTR.
 * To use register names with standard convension, please use CAN_N1_FBTR.
 */
#define CAN_FNBTR1       (CAN_N1_FBTR)

/** \brief  318, Node Frame Counter Register */
#define CAN_N1_FCR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR *)0xF0018318u)

/** Alias (User Manual Name) for CAN_N1_FCR.
 * To use register names with standard convension, please use CAN_N1_FCR.
 */
#define CAN_NFCR1        (CAN_N1_FCR)

/** \brief  308, Node Interrupt Pointer Register */
#define CAN_N1_IPR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR *)0xF0018308u)

/** Alias (User Manual Name) for CAN_N1_IPR.
 * To use register names with standard convension, please use CAN_N1_IPR.
 */
#define CAN_NIPR1        (CAN_N1_IPR)

/** \brief  30C, Node Port Control Register */
#define CAN_N1_PCR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR *)0xF001830Cu)

/** Alias (User Manual Name) for CAN_N1_PCR.
 * To use register names with standard convension, please use CAN_N1_PCR.
 */
#define CAN_NPCR1        (CAN_N1_PCR)

/** \brief  304, Node Status Register */
#define CAN_N1_SR        /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR *)0xF0018304u)

/** Alias (User Manual Name) for CAN_N1_SR.
 * To use register names with standard convension, please use CAN_N1_SR.
 */
#define CAN_NSR1         (CAN_N1_SR)

/** \brief  324, Node Timer A Transmit Trigger Register */
#define CAN_N1_TATTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR *)0xF0018324u)

/** Alias (User Manual Name) for CAN_N1_TATTR.
 * To use register names with standard convension, please use CAN_N1_TATTR.
 */
#define CAN_NTATTR1      (CAN_N1_TATTR)

/** \brief  328, Node Timer B Transmit Trigger Register */
#define CAN_N1_TBTTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR *)0xF0018328u)

/** Alias (User Manual Name) for CAN_N1_TBTTR.
 * To use register names with standard convension, please use CAN_N1_TBTTR.
 */
#define CAN_NTBTTR1      (CAN_N1_TBTTR)

/** \brief  31C, Node Timer Clock Control Register */
#define CAN_N1_TCCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR *)0xF001831Cu)

/** Alias (User Manual Name) for CAN_N1_TCCR.
 * To use register names with standard convension, please use CAN_N1_TCCR.
 */
#define CAN_NTCCR1       (CAN_N1_TCCR)

/** \brief  32C, Node Timer C Transmit Trigger Register */
#define CAN_N1_TCTTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR *)0xF001832Cu)

/** Alias (User Manual Name) for CAN_N1_TCTTR.
 * To use register names with standard convension, please use CAN_N1_TCTTR.
 */
#define CAN_NTCTTR1      (CAN_N1_TCTTR)

/** \brief  33C, Node Transmitter Delay Compensation Register */
#define CAN_N1_TDCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TDCR *)0xF001833Cu)

/** Alias (User Manual Name) for CAN_N1_TDCR.
 * To use register names with standard convension, please use CAN_N1_TDCR.
 */
#define CAN_NTDCR1       (CAN_N1_TDCR)

/** \brief  320, Node Timer Receive Timeout Register */
#define CAN_N1_TRTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR *)0xF0018320u)

/** Alias (User Manual Name) for CAN_N1_TRTR.
 * To use register names with standard convension, please use CAN_N1_TRTR.
 */
#define CAN_NTRTR1       (CAN_N1_TRTR)

/** \brief  410, Node Bit Timing Register */
#define CAN_N2_BTEVR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTEVR *)0xF0018410u)

/** Alias (User Manual Name) for CAN_N2_BTEVR.
 * To use register names with standard convension, please use CAN_N2_BTEVR.
 */
#define CAN_NBTEVR2      (CAN_N2_BTEVR)

/** \brief  410, Node Bit Timing Register */
#define CAN_N2_BTR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR *)0xF0018410u)

/** Alias (User Manual Name) for CAN_N2_BTR.
 * To use register names with standard convension, please use CAN_N2_BTR.
 */
#define CAN_NBTR2        (CAN_N2_BTR)

/** \brief  400, Node Control Register */
#define CAN_N2_CR        /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR *)0xF0018400u)

/** Alias (User Manual Name) for CAN_N2_CR.
 * To use register names with standard convension, please use CAN_N2_CR.
 */
#define CAN_NCR2         (CAN_N2_CR)

/** \brief  414, Node Error Counter Register */
#define CAN_N2_ECNT      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT *)0xF0018414u)

/** Alias (User Manual Name) for CAN_N2_ECNT.
 * To use register names with standard convension, please use CAN_N2_ECNT.
 */
#define CAN_NECNT2       (CAN_N2_ECNT)

/** \brief  438, Fast Node Bit Timing Register */
#define CAN_N2_FBTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FBTR *)0xF0018438u)

/** Alias (User Manual Name) for CAN_N2_FBTR.
 * To use register names with standard convension, please use CAN_N2_FBTR.
 */
#define CAN_FNBTR2       (CAN_N2_FBTR)

/** \brief  418, Node Frame Counter Register */
#define CAN_N2_FCR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR *)0xF0018418u)

/** Alias (User Manual Name) for CAN_N2_FCR.
 * To use register names with standard convension, please use CAN_N2_FCR.
 */
#define CAN_NFCR2        (CAN_N2_FCR)

/** \brief  408, Node Interrupt Pointer Register */
#define CAN_N2_IPR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR *)0xF0018408u)

/** Alias (User Manual Name) for CAN_N2_IPR.
 * To use register names with standard convension, please use CAN_N2_IPR.
 */
#define CAN_NIPR2        (CAN_N2_IPR)

/** \brief  40C, Node Port Control Register */
#define CAN_N2_PCR       /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR *)0xF001840Cu)

/** Alias (User Manual Name) for CAN_N2_PCR.
 * To use register names with standard convension, please use CAN_N2_PCR.
 */
#define CAN_NPCR2        (CAN_N2_PCR)

/** \brief  404, Node Status Register */
#define CAN_N2_SR        /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR *)0xF0018404u)

/** Alias (User Manual Name) for CAN_N2_SR.
 * To use register names with standard convension, please use CAN_N2_SR.
 */
#define CAN_NSR2         (CAN_N2_SR)

/** \brief  424, Node Timer A Transmit Trigger Register */
#define CAN_N2_TATTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR *)0xF0018424u)

/** Alias (User Manual Name) for CAN_N2_TATTR.
 * To use register names with standard convension, please use CAN_N2_TATTR.
 */
#define CAN_NTATTR2      (CAN_N2_TATTR)

/** \brief  428, Node Timer B Transmit Trigger Register */
#define CAN_N2_TBTTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR *)0xF0018428u)

/** Alias (User Manual Name) for CAN_N2_TBTTR.
 * To use register names with standard convension, please use CAN_N2_TBTTR.
 */
#define CAN_NTBTTR2      (CAN_N2_TBTTR)

/** \brief  41C, Node Timer Clock Control Register */
#define CAN_N2_TCCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR *)0xF001841Cu)

/** Alias (User Manual Name) for CAN_N2_TCCR.
 * To use register names with standard convension, please use CAN_N2_TCCR.
 */
#define CAN_NTCCR2       (CAN_N2_TCCR)

/** \brief  42C, Node Timer C Transmit Trigger Register */
#define CAN_N2_TCTTR     /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR *)0xF001842Cu)

/** Alias (User Manual Name) for CAN_N2_TCTTR.
 * To use register names with standard convension, please use CAN_N2_TCTTR.
 */
#define CAN_NTCTTR2      (CAN_N2_TCTTR)

/** \brief  43C, Node Transmitter Delay Compensation Register */
#define CAN_N2_TDCR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TDCR *)0xF001843Cu)

/** Alias (User Manual Name) for CAN_N2_TDCR.
 * To use register names with standard convension, please use CAN_N2_TDCR.
 */
#define CAN_NTDCR2       (CAN_N2_TDCR)

/** \brief  420, Node Timer Receive Timeout Register */
#define CAN_N2_TRTR      /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR *)0xF0018420u)

/** Alias (User Manual Name) for CAN_N2_TRTR.
 * To use register names with standard convension, please use CAN_N2_TRTR.
 */
#define CAN_NTRTR2       (CAN_N2_TRTR)

/** \brief  E8, OCDS Control and Status */
#define CAN_OCS          /*lint --e(923)*/ (*(volatile Ifx_CAN_OCS *)0xF00180E8u)

/** \brief  1C4, Panel Control Register */
#define CAN_PANCTR       /*lint --e(923)*/ (*(volatile Ifx_CAN_PANCTR *)0xF00181C4u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXCAN_REG_H */

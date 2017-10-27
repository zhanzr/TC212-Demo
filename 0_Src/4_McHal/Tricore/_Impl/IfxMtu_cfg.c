/**
 * \file IfxMtu_cfg.c
 * \brief Mtu on-chip implementation data
 *
 * \version iLLD_1_0_1_0_0
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
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

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxMtu_cfg.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

const IfxMtu_SramItem IfxMtu_sramTable[IFXMTU_NUM_MBIST_TABLE_ITEMS] = {
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 4, 16, 6, 0, 1, 5632}, /**< \brief IfxMtu_MbistSel_cpu0Dspr */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 32, 8, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_cpu0Pspr */
    {2 * 1, 20, 5, 0, 1, 128 }, /**< \brief IfxMtu_MbistSel_cpu0Ptag */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 64, 8, 0, 1, 4096}, /**< \brief IfxMtu_MbistSel_mod4 */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 32, 7, 0, 1, 4096}, /**< \brief IfxMtu_MbistSel_mcan */
};

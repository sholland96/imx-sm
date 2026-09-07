/*
** ###################################################################
**
** Copyright 2026 NXP
**
** Redistribution and use in source and binary forms, with or without modification,
** are permitted provided that the following conditions are met:
**
** o Redistributions of source code must retain the above copyright notice, this list
**   of conditions and the following disclaimer.
**
** o Redistributions in binary form must reproduce the above copyright notice, this
**   list of conditions and the following disclaimer in the documentation and/or
**   other materials provided with the distribution.
**
** o Neither the name of the copyright holder nor the names of its
**   contributors may be used to endorse or promote products derived from this
**   software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
** DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
** ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
** LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
** ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/*!
 * @addtogroup CONFIG_VCU_IMX95
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing configuration info for the SCMI RPC.
 */
/*==========================================================================*/

#ifndef CONFIG_SCMI_H
#define CONFIG_SCMI_H

/* Includes */

#include "config_user.h"

/* Defines */


/*--------------------------------------------------------------------------*/
/* SCMI AGENT0 Config (SCMI_AGENT0)                                         */
/*--------------------------------------------------------------------------*/

/*! Config for SCMI agent 0 */
#define SM_SCMI_AGNT0_CONFIG \
    { \
        .name = "SCMI_AGENT0", \
        .scmiInst = 0U, \
        .domId = 3U, \
        .secure = 0U, \
        .pinPerms[DEV_SM_PIN_GPIO_IO00] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO01] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO02] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO03] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO05] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO08] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO09] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO11] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO12] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO13] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO14] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO15] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO16] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO17] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO18] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO20] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO21] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO22] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO23] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO25] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_GPIO_IO27] = SM_SCMI_PERM_EXCLUSIVE, \
        /* Daisy/input-select permissions for boot pins whose alt function \
         * needs an input daisy register (SMCT has no GUI field for this -- \
         * hand-added, will need to be reapplied if this file regenerates): \
         * 15=IO27/CAN2_RX, 18=IO23/CAN5_RX, 84=IO15/LPUART3_RX, \
         * 85=IO14/LPUART3_TX, 95=IO09/LPUART7_RX, 96=IO08/LPUART7_TX */ \
        .daisyPerms[15] = SM_SCMI_PERM_EXCLUSIVE, \
        .daisyPerms[18] = SM_SCMI_PERM_EXCLUSIVE, \
        .daisyPerms[84] = SM_SCMI_PERM_EXCLUSIVE, \
        .daisyPerms[85] = SM_SCMI_PERM_EXCLUSIVE, \
        .daisyPerms[95] = SM_SCMI_PERM_EXCLUSIVE, \
        .daisyPerms[96] = SM_SCMI_PERM_EXCLUSIVE, \
        /* Let M7 boot LM1 (A55) itself, on demand, via SCMI_LmmBoot() --
         * A55 no longer auto-boots at SM startup (see SM_LM1_CONFIG in
         * config_lmm.h). Booting a foreign LM requires EXCLUSIVE per
         * rpc_scmi_lmm.c's LmmBoot() permission check. Hand-added -- SMCT
         * has no field for lmmPerms; will need to be reapplied if this
         * file regenerates. */ \
        .lmmPerms[1] = SM_SCMI_PERM_EXCLUSIVE, \
    }

/*! Config for SCMI channel 0 */
#define SM_SCMI_CHN0_CONFIG \
    { \
        .agentId = 0U, \
        .type = SM_SCMI_CHN_A2P, \
        .xportType = SM_XPORT_SMT, \
        .xportChannel = 0U, \
    }

/*! Config for SCMI channel 1 */
#define SM_SCMI_CHN1_CONFIG \
    { \
        .agentId = 0U, \
        .type = SM_SCMI_CHN_P2A_NOTIFY, \
        .xportType = SM_XPORT_SMT, \
        .xportChannel = 1U, \
    }


/*--------------------------------------------------------------------------*/
/* SCMI Instance 0 Config (M7)                                              */
/*--------------------------------------------------------------------------*/

/*! Config for SCMI instance 0 */
#define SM_SCMI0_CONFIG \
    { \
        .lmId = 2U, \
        .numAgents = 1U, \
        .firstAgent = 0U, \
    }


/*--------------------------------------------------------------------------*/
/* SCMI Agent Config                                                        */
/*--------------------------------------------------------------------------*/

/*! Config for number of SCMI agents */
#define SM_SCMI_NUM_AGNT  1U

/*! Config data array for SCMI agents */
#define SM_SCMI_AGNT_CONFIG_DATA \
    SM_SCMI_AGNT0_CONFIG


/*--------------------------------------------------------------------------*/
/* SCMI Channel Config                                                      */
/*--------------------------------------------------------------------------*/

/*! Config for number of SCMI channels */
#define SM_SCMI_NUM_CHN  2U

/*! Config data array for SCMI channels */
#define SM_SCMI_CHN_CONFIG_DATA \
    SM_SCMI_CHN0_CONFIG, \
    SM_SCMI_CHN1_CONFIG


/*--------------------------------------------------------------------------*/
/* SCMI Config                                                              */
/*--------------------------------------------------------------------------*/

/*! Config for number of SCMI instances */
#define SM_NUM_SCMI  1U

/*! Config data array for SCMI instances */
#define SM_SCMI_CONFIG_DATA \
    SM_SCMI0_CONFIG

/*! Max words to buffer for notification messages */
#define SM_SCMI_MAX_NOTIFY  24U

#endif /* CONFIG_SCMI_H */

/** @} */



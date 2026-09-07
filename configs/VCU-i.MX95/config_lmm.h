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
 * Header file containing configuration info for the logical machine manager.
 */
/*==========================================================================*/

#ifndef CONFIG_LMM_H
#define CONFIG_LMM_H

/* Includes */

#include "config_user.h"

/* Defines */


/*--------------------------------------------------------------------------*/
/* LM0 Config (SM)                                                          */
/*--------------------------------------------------------------------------*/

/*! Config for LM0 (SM) */
#define SM_LM0_CONFIG \
    { \
        .name = "SM", \
        .rpcType = SM_RPC_NONE, \
        .boot[0] = 1U, \
        .safeType = LMM_SAFE_TYPE_FEENV, \
    }


/*--------------------------------------------------------------------------*/
/* LM1 Config (LM1)                                                         */
/*--------------------------------------------------------------------------*/

/*! Config for LM1 (LM1) */
/* VCU DESIGN CHANGE (permanent, not a diagnostic revert-later): .boot[0]
 * removed (was 3U) so A55 does NOT auto-boot at SM startup. A55 is only
 * needed on demand -- M7 (the always-on VCU application core, DOM3, SCMI
 * agent 0) now boots it itself via SCMI_LmmBoot() when its own application
 * logic actually needs A55, using the lmmPerms[1]=EXCLUSIVE grant added in
 * config_scmi.h. This also incidentally kept SM from hitting A55's
 * separate, already-documented SRC_XSPR power-sequencer stall (see
 * project-a55-srcmix-stall-unresolved memory) automatically at every boot
 * -- that stall is still unresolved and will still occur whenever A55 is
 * actually requested, on-demand or not. Not present in upstream imx-sm. */
#define SM_LM1_CONFIG \
    { \
        .name = "LM1", \
        .rpcType = SM_RPC_NONE, \
        .start = 1U, \
        .stop = 1U, \
    }


/*--------------------------------------------------------------------------*/
/* LM2 Config (M7)                                                          */
/*--------------------------------------------------------------------------*/

/*! Config for LM2 (M7) */
#define SM_LM2_CONFIG \
    { \
        .name = "M7", \
        .rpcType = SM_RPC_SCMI, \
        .rpcInst = 0U, \
        .boot[0] = 2U, \
        .start = 4U, \
        .stop = 10U, \
    }


/*--------------------------------------------------------------------------*/
/* LM Config                                                                */
/*--------------------------------------------------------------------------*/

/*! Config for number of LM */
#define SM_NUM_LM  3U

/*! Config data array for LM */
#define SM_LM_CONFIG_DATA \
    SM_LM0_CONFIG, \
    SM_LM1_CONFIG, \
    SM_LM2_CONFIG

/*! Number of  mSel */
#define SM_LM_NUM_MSEL  1U

/*! Number of  S-EENV */
#define SM_LM_NUM_SEENV  0U

/*! Config name */
#define SM_LM_CFG_NAME  "VCU_iMX95"

/*! Default LM for monitor */
#define SM_LM_DEFAULT  0U


/*--------------------------------------------------------------------------*/
/* LM Start/Stop Lists                                                      */
/*--------------------------------------------------------------------------*/

/*! Config for number of start */
#define SM_LM_NUM_START  5U

/*! LM start list */
#define SM_LM_START_DATA \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55P}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PERF, .rsrc = DEV_SM_PERF_A55, \
     .numArg = 1, .arg[0] = 0U, }, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_A55C0}, \
    {.lmId = 2U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M7}, \
    {.lmId = 2U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P},

/*! Config for number of stop */
#define SM_LM_NUM_STOP  10U

/*! LM stop list */
#define SM_LM_STOP_DATA \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_A55P}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C5}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C4}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C3}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C2}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C1}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C0}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55P}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_VOLT, .rsrc = DEV_SM_VOLT_ARM}, \
    {.lmId = 2U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P},


/*--------------------------------------------------------------------------*/
/* LM Fault Lists                                                           */
/*--------------------------------------------------------------------------*/

/*! LM fault reactions */
#define SM_LM_FAULT_DATA \
    [DEV_SM_FAULT_SW3] = {.reaction = LMM_REACT_GRP_RESET, .lm = 0U}, \
    [DEV_SM_FAULT_SW4] = {.reaction = LMM_REACT_SYS_RESET, .lm = 0U}, \
    [DEV_SM_FAULT_DRAM] = {.reaction = LMM_REACT_SYS_RESET, .lm = 0U}, \
    [DEV_SM_FAULT_MAIN_NOC] = {.reaction = LMM_REACT_SYS_RESET, .lm = 0U}, \
    [DEV_SM_FAULT_MEGA_NOC] = {.reaction = LMM_REACT_SYS_RESET, .lm = 0U}, \
    [DEV_SM_FAULT_CENTRAL_NOC] = {.reaction = LMM_REACT_SYS_RESET, .lm = 0U},

#endif /* CONFIG_LMM_H */

/** @} */



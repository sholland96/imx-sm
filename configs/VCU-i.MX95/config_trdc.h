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
 * Header file containing configuration info for the TRDC SM abstraction.
 */
/*==========================================================================*/

#ifndef CONFIG_TRDC_H
#define CONFIG_TRDC_H

/* Includes */

#include "config_user.h"

/* Defines */


/*--------------------------------------------------------------------------*/
/* TRDC A Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC A */
#define SM_TRDC_A_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0xB00000A0U /* TRDC_A_MDA_W0_0_DFMT1:  MDAC_TROUT_BASIC_A/ELE */ , \
        SM_CFG_W1(0x00000820U), 0xB00000A2U /* TRDC_A_MDA_W0_1_DFMT1:  MDAC_MU_ELE0/SM */ , \
        SM_CFG_W1(0x00000a00U), 0x90008002U /* TRDC_A_MDA_W0_16_DFMT0:  MDAC_M33P/SM */ , \
        SM_CFG_W1(0x00000a04U), 0x90008002U /* TRDC_A_MDA_W1_16_DFMT0:  MDAC_M33P/SM */ , \
        SM_CFG_W1(0x00000a08U), 0x90008002U /* TRDC_A_MDA_W2_16_DFMT0:  MDAC_M33P/SM */ , \
        SM_CFG_W1(0x00000ca0U), 0xB00000A1U /* TRDC_A_MDA_W0_37_DFMT1:  MDAC_MTR_FBX_MSTR/MTR */ , \
        SM_CFG_W1(0x00000cc0U), 0xB00000A1U /* TRDC_A_MDA_W0_38_DFMT1:  MDAC_MTR_MSTR/MTR */ , \
        SM_CFG_W1(0x00010024U), 0x6666U /* TRDC_A_MBC0_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00010028U), 0x7777U /* TRDC_A_MBC0_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001002cU), 0x6600U /* TRDC_A_MBC0_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x00010030U), 0x4444U /* TRDC_A_MBC0_MEMN_GLBAC4:  ro */ , \
        SM_CFG_Z1(0x00010050U) /* TRDC_A_MBC0_DOM0_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00010054U) /* TRDC_A_MBC0_DOM0_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00010064U), 0x00000003U /* TRDC_A_MBC0_DOM0_MEM0_BLK_CFG_W9:  MBC_ANATOP=sec_rw */ , \
        SM_CFG_W1(0x00010068U), 0x00000003U /* TRDC_A_MBC0_DOM0_MEM0_BLK_CFG_W10:  MBC_TROUT_BASIC_A=sec_rw */ , \
        SM_CFG_W1(0x00010180U), 0x000000C0U /* TRDC_A_MBC0_DOM0_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_Z1(0x00010250U) /* TRDC_A_MBC0_DOM1_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00010254U) /* TRDC_A_MBC0_DOM1_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00010264U), 0x00000900U /* TRDC_A_MBC0_DOM1_MEM0_BLK_CFG_W9:  MBC_MTR_DCA_A=rw */ , \
        SM_CFG_W1(0x00010380U), 0x000000C0U /* TRDC_A_MBC0_DOM1_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_W1(0x00010450U), 0x30003330U /* TRDC_A_MBC0_DOM2_MEM0_BLK_CFG_W4:  MBC_BLK_CTRL_NS_AONMIX=sec_rw MBC_MU1_A=sec_rw MBC_MU1_B=sec_rw MBC_TRDC_A=sec_rw */ , \
        SM_CFG_W1(0x00010454U), 0x03333033U /* TRDC_A_MBC0_DOM2_MEM0_BLK_CFG_W5:  MBC_TRDC_A=sec_rw MBC_SYSCTR_CTL=sec_rw MBC_SYSCTR_RD=sec_rw MBC_TSTMR1=sec_rw MBC_WDOG1=sec_rw MBC_WDOG2=sec_rw */ , \
        SM_CFG_W1(0x0001045cU), 0x33330000U /* TRDC_A_MBC0_DOM2_MEM0_BLK_CFG_W7:  MBC_IOMUXC=sec_rw MBC_IOMUX_GPR=sec_rw MBC_M33_PCF=sec_rw MBC_M33_PSF=sec_rw */ , \
        SM_CFG_W1(0x00010460U), 0x33333333U /* TRDC_A_MBC0_DOM2_MEM0_BLK_CFG_W8:  MBC_M33_CACHE_CTRL=sec_rw MBC_BLK_CTRL_BBSMMIX=sec_rw MBC_M33_TCM_ECC=sec_rw MBC_ROMCP_M33=sec_rw MBC_BBNSM=sec_rw MBC_CCM=sec_rw MBC_SRC=sec_rw MBC_GPC=sec_rw */ , \
        SM_CFG_W1(0x00010464U), 0x30000003U /* TRDC_A_MBC0_DOM2_MEM0_BLK_CFG_W9:  MBC_ANATOP=sec_rw MBC_BLK_CTRL_S_AONMIX=sec_rw */ , \
        SM_CFG_W1(0x00010468U), 0x33330030U /* TRDC_A_MBC0_DOM2_MEM0_BLK_CFG_W10:  MBC_AXBS_AON=sec_rw MBC_CMU_A1=sec_rw MBC_EIM_A=sec_rw MBC_ERM_A=sec_rw MBC_FCCU=sec_rw */ , \
        SM_CFG_W1(0x0001046cU), 0x33333333U /* TRDC_A_MBC0_DOM2_MEM0_BLK_CFG_W11:  MBC_INTM=sec_rw MBC_C_STCU=sec_rw MBC_L_STCU_A=sec_rw MBC_MU2_A=sec_rw MBC_MU2_B=sec_rw MBC_MU3_A=sec_rw MBC_MU3_B=sec_rw MBC_MU4_A=sec_rw */ , \
        SM_CFG_W1(0x00010470U), 0x33333333U /* TRDC_A_MBC0_DOM2_MEM0_BLK_CFG_W12:  MBC_MU4_B=sec_rw MBC_MU5_A=sec_rw MBC_MU5_B=sec_rw MBC_MU6_A=sec_rw MBC_MU6_B=sec_rw MBC_CMU_A2=sec_rw MBC_CRC_A=sec_rw MBC_CMU_ANA=sec_rw */ , \
        SM_CFG_W1(0x00010474U), 0x00003000U /* TRDC_A_MBC0_DOM2_MEM0_BLK_CFG_W13:  MBC_FCCU_FHID=sec_rw */ , \
        SM_CFG_W1(0x00010580U), 0x000003C0U /* TRDC_A_MBC0_DOM2_MEM1_BLK_CFG_W0:  MBC_FSB=ro MBC_MU_ELE0=sec_rw */ , \
        SM_CFG_W1(0x000105a8U), 0x00000003U /* TRDC_A_MBC0_DOM2_MEM2_BLK_CFG_W0:  MBC_GPIO1=sec_rw */ , \
        SM_CFG_W1(0x00010650U), 0x90009990U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W4:  MBC_BLK_CTRL_NS_AONMIX=rw MBC_MU1_A=rw MBC_MU1_B=rw MBC_TRDC_A=rw */ , \
        SM_CFG_W1(0x00010654U), 0x09999099U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W5:  MBC_TRDC_A=rw MBC_SYSCTR_CTL=rw MBC_SYSCTR_RD=rw MBC_TSTMR1=rw MBC_WDOG1=rw MBC_WDOG2=rw */ , \
        SM_CFG_W1(0x00010658U), 0x00900000U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W6:  MBC_LPI2C2=rw */ , \
        SM_CFG_W1(0x0001065cU), 0x99990000U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W7:  MBC_IOMUXC=rw MBC_IOMUX_GPR=rw MBC_M33_PCF=rw MBC_M33_PSF=rw */ , \
        SM_CFG_W1(0x00010660U), 0x99999999U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W8:  MBC_M33_CACHE_CTRL=rw MBC_BLK_CTRL_BBSMMIX=rw MBC_M33_TCM_ECC=rw MBC_ROMCP_M33=rw MBC_BBNSM=rw MBC_CCM=rw MBC_SRC=rw MBC_GPC=rw */ , \
        SM_CFG_W1(0x00010664U), 0x99999909U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W9:  MBC_ANATOP=rw MBC_MTR_DCA_A=rw MBC_TCU_A=rw MBC_TCU_ANA=rw MBC_TCU_CCM=rw MBC_TCU_BB=rw MBC_BLK_CTRL_S_AONMIX=rw */ , \
        SM_CFG_W1(0x00010668U), 0x99990099U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W10:  MBC_TROUT_BASIC_A=rw MBC_AXBS_AON=rw MBC_CMU_A1=rw MBC_EIM_A=rw MBC_ERM_A=rw MBC_FCCU=rw */ , \
        SM_CFG_W1(0x0001066cU), 0x99999999U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W11:  MBC_INTM=rw MBC_C_STCU=rw MBC_L_STCU_A=rw MBC_MU2_A=rw MBC_MU2_B=rw MBC_MU3_A=rw MBC_MU3_B=rw MBC_MU4_A=rw */ , \
        SM_CFG_W1(0x00010670U), 0x99999999U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W12:  MBC_MU4_B=rw MBC_MU5_A=rw MBC_MU5_B=rw MBC_MU6_A=rw MBC_MU6_B=rw MBC_CMU_A2=rw MBC_CRC_A=rw MBC_CMU_ANA=rw */ , \
        SM_CFG_W1(0x00010674U), 0x00009000U /* TRDC_A_MBC0_DOM3_MEM0_BLK_CFG_W13:  MBC_FCCU_FHID=rw */ , \
        SM_CFG_W1(0x00010780U), 0x00000990U /* TRDC_A_MBC0_DOM3_MEM1_BLK_CFG_W0:  MBC_FSB=rw MBC_MU_ELE0=rw */ , \
        SM_CFG_W1(0x000107a8U), 0x00000009U /* TRDC_A_MBC0_DOM3_MEM2_BLK_CFG_W0:  MBC_GPIO1=rw */ , \
        SM_CFG_Z1(0x00010850U) /* TRDC_A_MBC0_DOM4_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00010854U) /* TRDC_A_MBC0_DOM4_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00010980U), 0x000000C0U /* TRDC_A_MBC0_DOM4_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_Z1(0x00010a50U) /* TRDC_A_MBC0_DOM5_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00010a54U) /* TRDC_A_MBC0_DOM5_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00010b80U), 0x000000C0U /* TRDC_A_MBC0_DOM5_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_Z1(0x00010c50U) /* TRDC_A_MBC0_DOM6_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00010c54U) /* TRDC_A_MBC0_DOM6_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00010d80U), 0x000000C0U /* TRDC_A_MBC0_DOM6_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_Z1(0x00010e50U) /* TRDC_A_MBC0_DOM7_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00010e54U) /* TRDC_A_MBC0_DOM7_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00010f80U), 0x000000C0U /* TRDC_A_MBC0_DOM7_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_Z1(0x00011050U) /* TRDC_A_MBC0_DOM8_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00011054U) /* TRDC_A_MBC0_DOM8_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00011064U), 0x09999000U /* TRDC_A_MBC0_DOM8_MEM0_BLK_CFG_W9:  MBC_TCU_A=rw MBC_TCU_ANA=rw MBC_TCU_CCM=rw MBC_TCU_BB=rw */ , \
        SM_CFG_W1(0x00011180U), 0x000000C0U /* TRDC_A_MBC0_DOM8_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_W1(0x00011250U), 0x90009990U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W4:  MBC_BLK_CTRL_NS_AONMIX=rw MBC_MU1_A=rw MBC_MU1_B=rw MBC_TRDC_A=rw */ , \
        SM_CFG_W1(0x00011254U), 0x09999099U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W5:  MBC_TRDC_A=rw MBC_SYSCTR_CTL=rw MBC_SYSCTR_RD=rw MBC_TSTMR1=rw MBC_WDOG1=rw MBC_WDOG2=rw */ , \
        SM_CFG_W1(0x00011258U), 0x00900000U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W6:  MBC_LPI2C2=rw */ , \
        SM_CFG_W1(0x0001125cU), 0x99990000U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W7:  MBC_IOMUXC=rw MBC_IOMUX_GPR=rw MBC_M33_PCF=rw MBC_M33_PSF=rw */ , \
        SM_CFG_W1(0x00011260U), 0x99999999U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W8:  MBC_M33_CACHE_CTRL=rw MBC_BLK_CTRL_BBSMMIX=rw MBC_M33_TCM_ECC=rw MBC_ROMCP_M33=rw MBC_BBNSM=rw MBC_CCM=rw MBC_SRC=rw MBC_GPC=rw */ , \
        SM_CFG_W1(0x00011264U), 0x99999909U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W9:  MBC_ANATOP=rw MBC_MTR_DCA_A=rw MBC_TCU_A=rw MBC_TCU_ANA=rw MBC_TCU_CCM=rw MBC_TCU_BB=rw MBC_BLK_CTRL_S_AONMIX=rw */ , \
        SM_CFG_W1(0x00011268U), 0x99990099U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W10:  MBC_TROUT_BASIC_A=rw MBC_AXBS_AON=rw MBC_CMU_A1=rw MBC_EIM_A=rw MBC_ERM_A=rw MBC_FCCU=rw */ , \
        SM_CFG_W1(0x0001126cU), 0x99999999U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W11:  MBC_INTM=rw MBC_C_STCU=rw MBC_L_STCU_A=rw MBC_MU2_A=rw MBC_MU2_B=rw MBC_MU3_A=rw MBC_MU3_B=rw MBC_MU4_A=rw */ , \
        SM_CFG_W1(0x00011270U), 0x99999999U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W12:  MBC_MU4_B=rw MBC_MU5_A=rw MBC_MU5_B=rw MBC_MU6_A=rw MBC_MU6_B=rw MBC_CMU_A2=rw MBC_CRC_A=rw MBC_CMU_ANA=rw */ , \
        SM_CFG_W1(0x00011274U), 0x00009000U /* TRDC_A_MBC0_DOM9_MEM0_BLK_CFG_W13:  MBC_FCCU_FHID=rw */ , \
        SM_CFG_W1(0x00011380U), 0x00000990U /* TRDC_A_MBC0_DOM9_MEM1_BLK_CFG_W0:  MBC_FSB=rw MBC_MU_ELE0=rw */ , \
        SM_CFG_W1(0x000113a8U), 0x00000009U /* TRDC_A_MBC0_DOM9_MEM2_BLK_CFG_W0:  MBC_GPIO1=rw */ , \
        SM_CFG_Z1(0x00011450U) /* TRDC_A_MBC0_DOM10_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00011454U) /* TRDC_A_MBC0_DOM10_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00011580U), 0x000000C0U /* TRDC_A_MBC0_DOM10_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        /* VCU DIAGNOSTIC: these two Z1 (zero-write) ops to
         * TRDC_A_MBC0_DOM11_MEM0_BLK_CFG_W4/W5 are the exact, deterministic
         * crash point identified via printf bisection -- structurally
         * identical writes to the neighboring DOM10/DOM12/DOM13 slots all
         * succeed, so this appears specific to domain 11 itself (possibly
         * silicon-reserved/protected), not a generic config issue. Removed
         * to test. If this fixes the crash, will need reapplying after any
         * SMCT regeneration, same as daisyPerms/config_bctrl.h. Not present
         * in upstream/original SMCT export.
         * SM_CFG_Z1(0x00011650U) TRDC_A_MBC0_DOM11_MEM0_BLK_CFG_W4
         * SM_CFG_Z1(0x00011654U) TRDC_A_MBC0_DOM11_MEM0_BLK_CFG_W5
         */ \
        SM_CFG_W1(0x00011780U), 0x000000C0U /* TRDC_A_MBC0_DOM11_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_Z1(0x00011850U) /* TRDC_A_MBC0_DOM12_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00011854U) /* TRDC_A_MBC0_DOM12_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00011980U), 0x000000C0U /* TRDC_A_MBC0_DOM12_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_Z1(0x00011a50U) /* TRDC_A_MBC0_DOM13_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00011a54U) /* TRDC_A_MBC0_DOM13_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00011b80U), 0x000000C0U /* TRDC_A_MBC0_DOM13_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        SM_CFG_Z1(0x00011c50U) /* TRDC_A_MBC0_DOM14_MEM0_BLK_CFG_W4:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_Z1(0x00011c54U) /* TRDC_A_MBC0_DOM14_MEM0_BLK_CFG_W5:  MBC_TRDC_A=0 (default) */ , \
        SM_CFG_W1(0x00011d80U), 0x000000C0U /* TRDC_A_MBC0_DOM14_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        /* VCU DIAGNOSTIC: same class of crash as DOM11 above -- removed to
         * test. SM_CFG_Z1(0x00011e50U) TRDC_A_MBC0_DOM15_MEM0_BLK_CFG_W4
         * SM_CFG_Z1(0x00011e54U) TRDC_A_MBC0_DOM15_MEM0_BLK_CFG_W5 */ \
        SM_CFG_W1(0x00011f80U), 0x000000C0U /* TRDC_A_MBC0_DOM15_MEM1_BLK_CFG_W0:  MBC_FSB=ro */ , \
        /* VCU DIAGNOSTIC: new deterministic crash point after fixing
         * DOM11/DOM15 above -- removed to test.
         * SM_CFG_W1(0x00012024U), 0x6666U TRDC_A_MBC1_MEMN_GLBAC1: rw */ \
        /* VCU DIAGNOSTIC: same crash pattern as GLBAC1 above -- removed to
         * test. SM_CFG_W1(0x00012028U), 0x7777U TRDC_A_MBC1_MEMN_GLBAC2: full
         * SM_CFG_W1(0x0001202cU), 0x7700U TRDC_A_MBC1_MEMN_GLBAC3: sec_rwx */ \
        /* VCU DIAGNOSTIC: this entire block reconfigures per-domain access
         * to M33's own TCM (MBC_M33_TCM_CODE/SYS) -- the exact memory SM is
         * currently executing its code and stack from. The values
         * themselves look correct (DOM2/SM=sec_rwx, DOM3/M7=rw, DOM9=rw,
         * everything else correctly zeroed) but rewriting access-control
         * registers for memory the CPU is actively fetching instructions
         * from appears to be an unsafe operation on this hardware/timing,
         * not a wrong-config issue. Removed wholesale to test/unblock boot;
         * the real fix is likely re-ordering when imx-sm applies this
         * specific block relative to TCM execution, not a content change.
         * Full removed content (unused-domain zero-writes only:
         * DOM1/4/5/6/7/8/10/11/12 MEM0+MEM1) omitted here for length -- see
         * git history/backup if exact values are needed again.
         *
         * UPDATE (earlier this session): tested keeping DOM2/DOM3/DOM9's
         * real grants together as a batch -- crashed at the very first
         * write in that batch, which was DOM2's own (SM's own domain,
         * writing access for the memory SM is currently executing from --
         * a genuine self-write hazard, see feedback-trdc-self-write-hazard
         * memory). The parser died there, so DOM3's and DOM9's writes were
         * NEVER ACTUALLY REACHED in that test -- "ANY write to this table
         * is unsafe" was an overreach; only DOM2's self-referential write
         * was ever confirmed to crash. DOM1/4/5/6/7/8/10/11/12 (unused-
         * domain zero-writes) and DOM2's real grant remain removed here.
         * DOM3's real grant is restored below: 2026-09-06, after M7
         * (100+ power cycles solid the day before, see
         * project-frdm-m7-scmi-resolved memory) started locking up
         * immediately following this exact removal, and DOM3 specifically
         * was never re-tested in isolation until now. */ \
        SM_CFG_W1(0x00012640U), 0x99999999U /* TRDC_A_MBC1_DOM3_MEM0_BLK_CFG_W0:  MBC_M33_TCM_CODE=rw */ , \
        SM_CFG_W1(0x00012644U), 0x99999999U /* TRDC_A_MBC1_DOM3_MEM0_BLK_CFG_W1:  MBC_M33_TCM_CODE=rw */ , \
        SM_CFG_W1(0x00012648U), 0x99999999U /* TRDC_A_MBC1_DOM3_MEM0_BLK_CFG_W2:  MBC_M33_TCM_CODE=rw */ , \
        SM_CFG_W1(0x0001264cU), 0x99999999U /* TRDC_A_MBC1_DOM3_MEM0_BLK_CFG_W3:  MBC_M33_TCM_CODE=rw */ , \
        SM_CFG_W1(0x00012780U), 0x99999999U /* TRDC_A_MBC1_DOM3_MEM1_BLK_CFG_W0:  MBC_M33_TCM_SYS=rw */ , \
        SM_CFG_W1(0x00012784U), 0x99999999U /* TRDC_A_MBC1_DOM3_MEM1_BLK_CFG_W1:  MBC_M33_TCM_SYS=rw */ , \
        SM_CFG_W1(0x00012788U), 0x99999999U /* TRDC_A_MBC1_DOM3_MEM1_BLK_CFG_W2:  MBC_M33_TCM_SYS=rw */ , \
        SM_CFG_W1(0x0001278cU), 0x99999999U /* TRDC_A_MBC1_DOM3_MEM1_BLK_CFG_W3:  MBC_M33_TCM_SYS=rw */ , \
        /* VCU DIAGNOSTIC: same class of issue as the MBC1 TCM block above --
         * this MRC0 block governs MRC_M33_ROM access. GLBAC1 and DOM2's
         * grant remain removed; DOM3's grant restored below for the same
         * reason as the MBC1 block above.
         * SM_CFG_W1(0x00014024U), 0x6666U TRDC_A_MRC0_GLBAC1: rw
         * (DOM2/DOM9 RGD0-3 W0/W1 entries remain removed, same block) */ \
        SM_CFG_W1(0x00014340U), 0x00000001U /* TRDC_A_MRC0_DOM3_RGD0_W0:  MRC_M33_ROM=rw */ , \
        SM_CFG_W1(0x00014344U), 0x0003C011U /* TRDC_A_MRC0_DOM3_RGD0_W1:  MRC_M33_ROM=rw */ , \
        SM_CFG_Z1(0x0001434cU) /* TRDC_A_MRC0_DOM3_RGD1_W1:  MRC_M33_ROM=clearing */ , \
        SM_CFG_Z1(0x00014354U) /* TRDC_A_MRC0_DOM3_RGD2_W1:  MRC_M33_ROM=clearing */ , \
        SM_CFG_Z1(0x0001435cU) /* TRDC_A_MRC0_DOM3_RGD3_W1:  MRC_M33_ROM=clearing */ , \
        /* VCU DIAGNOSTIC: same class of issue -- GLBAC0 entries (MBC/MRC
         * global default-access words) crash the same way. Removed for
         * the same reason as the blocks above.
         * SM_CFG_Z1(0x00010020U) TRDC_A_MBC0_MEMN_GLBAC0: 0 (default)
         * SM_CFG_Z1(0x00012020U) TRDC_A_MBC1_MEMN_GLBAC0: 0 (default)
         * SM_CFG_W1(0x00014020U), 0x7700U TRDC_A_MRC0_GLBAC0: sec_rwx */ \
        /* VCU DIAGNOSTIC: final "commit" op for TRDC_A -- crashes at the
         * very last step, right after every preceding op succeeded.
         * Likely atomically latches all staged per-domain settings; if it
         * briefly restricts the CPU's own TCM access while applying, that
         * would explain the crash here specifically. Removed for the same
         * reason as the blocks above: leaves TRDC_A at hardware defaults
         * (already proven safe enough to boot tonight) rather than
         * committing whatever partial/inconsistent state remains after
         * the earlier removals. SM_CFG_C1(0x00000000U), 0x0000C001U */ \
        SM_CFG_END \
    }


/*--------------------------------------------------------------------------*/
/* TRDC C Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC C */
#define SM_TRDC_C_CONFIG \
    { \
        SM_CFG_W1(0x00010024U), 0x6666U /* TRDC_C_MBC0_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00010028U), 0x7777U /* TRDC_C_MBC0_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001002cU), 0x6600U /* TRDC_C_MBC0_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x00010040U), 0x00003000U /* TRDC_C_MBC0_DOM0_MEM0_BLK_CFG_W0:  MBC_TROUT_BASIC_C=sec_rw MBC_TRDC_C=0 (default) */ , \
        SM_CFG_W1(0x00010240U), 0x00000900U /* TRDC_C_MBC0_DOM1_MEM0_BLK_CFG_W0:  MBC_MTR_DCA_C=rw MBC_TRDC_C=0 (default) */ , \
        SM_CFG_W1(0x00010440U), 0x00330000U /* TRDC_C_MBC0_DOM2_MEM0_BLK_CFG_W0:  MBC_TRDC_C=sec_rw */ , \
        SM_CFG_W1(0x00010640U), 0x00999909U /* TRDC_C_MBC0_DOM3_MEM0_BLK_CFG_W0:  MBC_TCU_C=rw MBC_MTR_DCA_C=rw MBC_TROUT_BASIC_C=rw MBC_TRDC_C=rw */ , \
        SM_CFG_Z1(0x00010840U) /* TRDC_C_MBC0_DOM4_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_Z1(0x00010a40U) /* TRDC_C_MBC0_DOM5_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_Z1(0x00010c40U) /* TRDC_C_MBC0_DOM6_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_Z1(0x00010e40U) /* TRDC_C_MBC0_DOM7_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_W1(0x00011040U), 0x00000009U /* TRDC_C_MBC0_DOM8_MEM0_BLK_CFG_W0:  MBC_TCU_C=rw MBC_TRDC_C=0 (default) */ , \
        SM_CFG_W1(0x00011240U), 0x00999909U /* TRDC_C_MBC0_DOM9_MEM0_BLK_CFG_W0:  MBC_TCU_C=rw MBC_MTR_DCA_C=rw MBC_TROUT_BASIC_C=rw MBC_TRDC_C=rw */ , \
        SM_CFG_Z1(0x00011440U) /* TRDC_C_MBC0_DOM10_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_Z1(0x00011640U) /* TRDC_C_MBC0_DOM11_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_Z1(0x00011840U) /* TRDC_C_MBC0_DOM12_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_Z1(0x00011a40U) /* TRDC_C_MBC0_DOM13_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_Z1(0x00011c40U) /* TRDC_C_MBC0_DOM14_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_Z1(0x00011e40U) /* TRDC_C_MBC0_DOM15_MEM0_BLK_CFG_W0:  MBC_TRDC_C=0 (default) */ , \
        SM_CFG_W1(0x00012024U), 0x6666U /* TRDC_C_MBC1_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00012028U), 0x7777U /* TRDC_C_MBC1_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001202cU), 0x6600U /* TRDC_C_MBC1_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x00012440U), 0x00000003U /* TRDC_C_MBC1_DOM2_MEM0_BLK_CFG_W0:  MBC_GPV_CAMERA=sec_rw */ , \
        SM_CFG_W1(0x00012640U), 0x00000009U /* TRDC_C_MBC1_DOM3_MEM0_BLK_CFG_W0:  MBC_GPV_CAMERA=rw */ , \
        SM_CFG_W1(0x00013240U), 0x00000009U /* TRDC_C_MBC1_DOM9_MEM0_BLK_CFG_W0:  MBC_GPV_CAMERA=rw */ , \
        SM_CFG_Z1(0x00010020U) /* TRDC_C_MBC0_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_Z1(0x00012020U) /* TRDC_C_MBC1_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }


/*--------------------------------------------------------------------------*/
/* TRDC D Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC D */
#define SM_TRDC_D_CONFIG \
    { \
        SM_CFG_W1(0x00010024U), 0x6666U /* TRDC_D_MBC0_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00010028U), 0x7777U /* TRDC_D_MBC0_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001002cU), 0x6600U /* TRDC_D_MBC0_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x00010040U), 0x00003000U /* TRDC_D_MBC0_DOM0_MEM0_BLK_CFG_W0:  MBC_TROUT_BASIC_D=sec_rw MBC_TRDC_D=0 (default) */ , \
        SM_CFG_W1(0x00010180U), 0x00003000U /* TRDC_D_MBC0_DOM0_MEM1_BLK_CFG_W0:  MBC_TROUT_BASIC_D_1=sec_rw MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_W1(0x00010240U), 0x00000900U /* TRDC_D_MBC0_DOM1_MEM0_BLK_CFG_W0:  MBC_MTR_DCA_D=rw MBC_TRDC_D=0 (default) */ , \
        SM_CFG_W1(0x00010380U), 0x00000900U /* TRDC_D_MBC0_DOM1_MEM1_BLK_CFG_W0:  MBC_MTR_DCA_D_1=rw MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_W1(0x00010440U), 0x00330000U /* TRDC_D_MBC0_DOM2_MEM0_BLK_CFG_W0:  MBC_TRDC_D=sec_rw */ , \
        SM_CFG_W1(0x0001045cU), 0x30000000U /* TRDC_D_MBC0_DOM2_MEM0_BLK_CFG_W7:  MBC_GPV_DISPLAY=sec_rw */ , \
        SM_CFG_W1(0x00010580U), 0x00330000U /* TRDC_D_MBC0_DOM2_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=sec_rw */ , \
        SM_CFG_W1(0x0001059cU), 0x30000000U /* TRDC_D_MBC0_DOM2_MEM1_BLK_CFG_W7:  MBC_GPV_DISPLAY_1=sec_rw */ , \
        SM_CFG_W1(0x00010640U), 0x00999909U /* TRDC_D_MBC0_DOM3_MEM0_BLK_CFG_W0:  MBC_TCU_D=rw MBC_MTR_DCA_D=rw MBC_TROUT_BASIC_D=rw MBC_TRDC_D=rw */ , \
        SM_CFG_W1(0x0001065cU), 0x90000000U /* TRDC_D_MBC0_DOM3_MEM0_BLK_CFG_W7:  MBC_GPV_DISPLAY=rw */ , \
        SM_CFG_W1(0x00010780U), 0x00999909U /* TRDC_D_MBC0_DOM3_MEM1_BLK_CFG_W0:  MBC_TCU_D_1=rw MBC_MTR_DCA_D_1=rw MBC_TROUT_BASIC_D_1=rw MBC_TRDC_D_1=rw */ , \
        SM_CFG_W1(0x0001079cU), 0x90000000U /* TRDC_D_MBC0_DOM3_MEM1_BLK_CFG_W7:  MBC_GPV_DISPLAY_1=rw */ , \
        SM_CFG_Z1(0x00010840U) /* TRDC_D_MBC0_DOM4_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00010980U) /* TRDC_D_MBC0_DOM4_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_Z1(0x00010a40U) /* TRDC_D_MBC0_DOM5_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00010b80U) /* TRDC_D_MBC0_DOM5_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_Z1(0x00010c40U) /* TRDC_D_MBC0_DOM6_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00010d80U) /* TRDC_D_MBC0_DOM6_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_Z1(0x00010e40U) /* TRDC_D_MBC0_DOM7_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00010f80U) /* TRDC_D_MBC0_DOM7_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_W1(0x00011040U), 0x00000009U /* TRDC_D_MBC0_DOM8_MEM0_BLK_CFG_W0:  MBC_TCU_D=rw MBC_TRDC_D=0 (default) */ , \
        SM_CFG_W1(0x00011180U), 0x00000009U /* TRDC_D_MBC0_DOM8_MEM1_BLK_CFG_W0:  MBC_TCU_D_1=rw MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_W1(0x00011240U), 0x00999909U /* TRDC_D_MBC0_DOM9_MEM0_BLK_CFG_W0:  MBC_TCU_D=rw MBC_MTR_DCA_D=rw MBC_TROUT_BASIC_D=rw MBC_TRDC_D=rw */ , \
        SM_CFG_W1(0x0001125cU), 0x90000000U /* TRDC_D_MBC0_DOM9_MEM0_BLK_CFG_W7:  MBC_GPV_DISPLAY=rw */ , \
        SM_CFG_W1(0x00011380U), 0x00999909U /* TRDC_D_MBC0_DOM9_MEM1_BLK_CFG_W0:  MBC_TCU_D_1=rw MBC_MTR_DCA_D_1=rw MBC_TROUT_BASIC_D_1=rw MBC_TRDC_D_1=rw */ , \
        SM_CFG_W1(0x0001139cU), 0x90000000U /* TRDC_D_MBC0_DOM9_MEM1_BLK_CFG_W7:  MBC_GPV_DISPLAY_1=rw */ , \
        SM_CFG_Z1(0x00011440U) /* TRDC_D_MBC0_DOM10_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00011580U) /* TRDC_D_MBC0_DOM10_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_Z1(0x00011640U) /* TRDC_D_MBC0_DOM11_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00011780U) /* TRDC_D_MBC0_DOM11_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_Z1(0x00011840U) /* TRDC_D_MBC0_DOM12_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00011980U) /* TRDC_D_MBC0_DOM12_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_Z1(0x00011a40U) /* TRDC_D_MBC0_DOM13_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00011b80U) /* TRDC_D_MBC0_DOM13_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_Z1(0x00011c40U) /* TRDC_D_MBC0_DOM14_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00011d80U) /* TRDC_D_MBC0_DOM14_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_Z1(0x00011e40U) /* TRDC_D_MBC0_DOM15_MEM0_BLK_CFG_W0:  MBC_TRDC_D=0 (default) */ , \
        SM_CFG_Z1(0x00011f80U) /* TRDC_D_MBC0_DOM15_MEM1_BLK_CFG_W0:  MBC_TRDC_D_1=0 (default) */ , \
        SM_CFG_Z1(0x00010020U) /* TRDC_D_MBC0_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }


/*--------------------------------------------------------------------------*/
/* TRDC E Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC E */
#define SM_TRDC_E_CONFIG \
    { \
        SM_CFG_W1(0x00010024U), 0x6666U /* TRDC_E_MBC0_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00010028U), 0x7777U /* TRDC_E_MBC0_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001002cU), 0x6600U /* TRDC_E_MBC0_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x000101a8U), 0x00003000U /* TRDC_E_MBC0_DOM0_MEM2_BLK_CFG_W0:  MBC_TROUT_BASIC_E=sec_rw MBC_TRDC_E=0 (default) */ , \
        SM_CFG_W1(0x000103a8U), 0x00000900U /* TRDC_E_MBC0_DOM1_MEM2_BLK_CFG_W0:  MBC_MTR_DCA_E=rw MBC_TRDC_E=0 (default) */ , \
        SM_CFG_W1(0x000105a8U), 0x00330000U /* TRDC_E_MBC0_DOM2_MEM2_BLK_CFG_W0:  MBC_TRDC_E=sec_rw */ , \
        SM_CFG_W1(0x00010644U), 0x99000000U /* TRDC_E_MBC0_DOM3_MEM0_BLK_CFG_W1:  MBC_NETC_EMDIO0=rw */ , \
        SM_CFG_W1(0x00010648U), 0x00000090U /* TRDC_E_MBC0_DOM3_MEM0_BLK_CFG_W2:  MBC_NETC_EMDIO0_1=rw */ , \
        SM_CFG_W1(0x0001064cU), 0x99000000U /* TRDC_E_MBC0_DOM3_MEM0_BLK_CFG_W3:  MBC_NETC_IERB=rw */ , \
        SM_CFG_W1(0x00010780U), 0x99999999U /* TRDC_E_MBC0_DOM3_MEM1_BLK_CFG_W0:  MBC_NETC_ECAM=rw */ , \
        SM_CFG_W1(0x000107a8U), 0x00999999U /* TRDC_E_MBC0_DOM3_MEM2_BLK_CFG_W0:  MBC_TCU_E=rw MBC_BLK_CTRL_NETCMIX=rw MBC_MTR_DCA_E=rw MBC_TROUT_BASIC_E=rw MBC_TRDC_E=rw */ , \
        SM_CFG_W1(0x000107acU), 0x00009900U /* TRDC_E_MBC0_DOM3_MEM2_BLK_CFG_W1:  MBC_NETC_IERB_1=rw MBC_NETC_PRB=rw */ , \
        SM_CFG_Z1(0x000109a8U) /* TRDC_E_MBC0_DOM4_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_Z1(0x00010ba8U) /* TRDC_E_MBC0_DOM5_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_Z1(0x00010da8U) /* TRDC_E_MBC0_DOM6_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_Z1(0x00010fa8U) /* TRDC_E_MBC0_DOM7_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_W1(0x000111a8U), 0x00000009U /* TRDC_E_MBC0_DOM8_MEM2_BLK_CFG_W0:  MBC_TCU_E=rw MBC_TRDC_E=0 (default) */ , \
        SM_CFG_W1(0x00011244U), 0x99000000U /* TRDC_E_MBC0_DOM9_MEM0_BLK_CFG_W1:  MBC_NETC_EMDIO0=rw */ , \
        SM_CFG_W1(0x00011248U), 0x00000090U /* TRDC_E_MBC0_DOM9_MEM0_BLK_CFG_W2:  MBC_NETC_EMDIO0_1=rw */ , \
        SM_CFG_W1(0x0001124cU), 0x99000000U /* TRDC_E_MBC0_DOM9_MEM0_BLK_CFG_W3:  MBC_NETC_IERB=rw */ , \
        SM_CFG_W1(0x00011380U), 0x99999999U /* TRDC_E_MBC0_DOM9_MEM1_BLK_CFG_W0:  MBC_NETC_ECAM=rw */ , \
        SM_CFG_W1(0x000113a8U), 0x00999999U /* TRDC_E_MBC0_DOM9_MEM2_BLK_CFG_W0:  MBC_TCU_E=rw MBC_BLK_CTRL_NETCMIX=rw MBC_MTR_DCA_E=rw MBC_TROUT_BASIC_E=rw MBC_TRDC_E=rw */ , \
        SM_CFG_W1(0x000113acU), 0x00009900U /* TRDC_E_MBC0_DOM9_MEM2_BLK_CFG_W1:  MBC_NETC_IERB_1=rw MBC_NETC_PRB=rw */ , \
        SM_CFG_Z1(0x000115a8U) /* TRDC_E_MBC0_DOM10_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_Z1(0x000117a8U) /* TRDC_E_MBC0_DOM11_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_Z1(0x000119a8U) /* TRDC_E_MBC0_DOM12_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_Z1(0x00011ba8U) /* TRDC_E_MBC0_DOM13_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_Z1(0x00011da8U) /* TRDC_E_MBC0_DOM14_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_Z1(0x00011fa8U) /* TRDC_E_MBC0_DOM15_MEM2_BLK_CFG_W0:  MBC_TRDC_E=0 (default) */ , \
        SM_CFG_Z1(0x00010020U) /* TRDC_E_MBC0_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }


/*--------------------------------------------------------------------------*/
/* TRDC G Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC G */
#define SM_TRDC_G_CONFIG \
    { \
        SM_CFG_W1(0x00010024U), 0x6666U /* TRDC_G_MBC0_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00010028U), 0x7777U /* TRDC_G_MBC0_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001002cU), 0x6600U /* TRDC_G_MBC0_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x00010040U), 0x00003000U /* TRDC_G_MBC0_DOM0_MEM0_BLK_CFG_W0:  MBC_TROUT_BASIC_G=sec_rw MBC_TRDC_G=0 (default) */ , \
        SM_CFG_W1(0x00010240U), 0x00000900U /* TRDC_G_MBC0_DOM1_MEM0_BLK_CFG_W0:  MBC_MTR_DCA_G=rw MBC_TRDC_G=0 (default) */ , \
        SM_CFG_W1(0x00010440U), 0x00330030U /* TRDC_G_MBC0_DOM2_MEM0_BLK_CFG_W0:  MBC_BLK_CTRL_GPUMIX=sec_rw MBC_TRDC_G=sec_rw */ , \
        SM_CFG_W1(0x00010640U), 0x00999999U /* TRDC_G_MBC0_DOM3_MEM0_BLK_CFG_W0:  MBC_TCU_G=rw MBC_BLK_CTRL_GPUMIX=rw MBC_MTR_DCA_G=rw MBC_TROUT_BASIC_G=rw MBC_TRDC_G=rw */ , \
        SM_CFG_Z1(0x00010840U) /* TRDC_G_MBC0_DOM4_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_Z1(0x00010a40U) /* TRDC_G_MBC0_DOM5_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_Z1(0x00010c40U) /* TRDC_G_MBC0_DOM6_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_Z1(0x00010e40U) /* TRDC_G_MBC0_DOM7_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_W1(0x00011040U), 0x00000009U /* TRDC_G_MBC0_DOM8_MEM0_BLK_CFG_W0:  MBC_TCU_G=rw MBC_TRDC_G=0 (default) */ , \
        SM_CFG_W1(0x00011240U), 0x00999999U /* TRDC_G_MBC0_DOM9_MEM0_BLK_CFG_W0:  MBC_TCU_G=rw MBC_BLK_CTRL_GPUMIX=rw MBC_MTR_DCA_G=rw MBC_TROUT_BASIC_G=rw MBC_TRDC_G=rw */ , \
        SM_CFG_Z1(0x00011440U) /* TRDC_G_MBC0_DOM10_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_Z1(0x00011640U) /* TRDC_G_MBC0_DOM11_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_Z1(0x00011840U) /* TRDC_G_MBC0_DOM12_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_Z1(0x00011a40U) /* TRDC_G_MBC0_DOM13_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_Z1(0x00011c40U) /* TRDC_G_MBC0_DOM14_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_Z1(0x00011e40U) /* TRDC_G_MBC0_DOM15_MEM0_BLK_CFG_W0:  MBC_TRDC_G=0 (default) */ , \
        SM_CFG_Z1(0x00010020U) /* TRDC_G_MBC0_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }


/*--------------------------------------------------------------------------*/
/* TRDC H Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC H */
#define SM_TRDC_H_CONFIG \
    { \
        SM_CFG_W1(0x00010024U), 0x6666U /* TRDC_H_MBC0_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00010028U), 0x7777U /* TRDC_H_MBC0_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001002cU), 0x6600U /* TRDC_H_MBC0_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x000101a8U), 0x00003000U /* TRDC_H_MBC0_DOM0_MEM2_BLK_CFG_W0:  MBC_TROUT_BASIC_H=sec_rw MBC_TRDC_H=0 (default) */ , \
        SM_CFG_W1(0x000103a8U), 0x00000900U /* TRDC_H_MBC0_DOM1_MEM2_BLK_CFG_W0:  MBC_MTR_DCA_H=rw MBC_TRDC_H=0 (default) */ , \
        SM_CFG_W1(0x000105a8U), 0x03330000U /* TRDC_H_MBC0_DOM2_MEM2_BLK_CFG_W0:  MBC_TRDC_H=sec_rw MBC_GPV_HSIO=sec_rw */ , \
        SM_CFG_W1(0x000107a8U), 0x09999909U /* TRDC_H_MBC0_DOM3_MEM2_BLK_CFG_W0:  MBC_TCU_H=rw MBC_MTR_DCA_H=rw MBC_TROUT_BASIC_H=rw MBC_TRDC_H=rw MBC_GPV_HSIO=rw */ , \
        SM_CFG_Z1(0x000109a8U) /* TRDC_H_MBC0_DOM4_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_Z1(0x00010ba8U) /* TRDC_H_MBC0_DOM5_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_Z1(0x00010da8U) /* TRDC_H_MBC0_DOM6_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_Z1(0x00010fa8U) /* TRDC_H_MBC0_DOM7_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_W1(0x000111a8U), 0x00000009U /* TRDC_H_MBC0_DOM8_MEM2_BLK_CFG_W0:  MBC_TCU_H=rw MBC_TRDC_H=0 (default) */ , \
        SM_CFG_W1(0x000113a8U), 0x09999909U /* TRDC_H_MBC0_DOM9_MEM2_BLK_CFG_W0:  MBC_TCU_H=rw MBC_MTR_DCA_H=rw MBC_TROUT_BASIC_H=rw MBC_TRDC_H=rw MBC_GPV_HSIO=rw */ , \
        SM_CFG_Z1(0x000115a8U) /* TRDC_H_MBC0_DOM10_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_Z1(0x000117a8U) /* TRDC_H_MBC0_DOM11_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_Z1(0x000119a8U) /* TRDC_H_MBC0_DOM12_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_Z1(0x00011ba8U) /* TRDC_H_MBC0_DOM13_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_Z1(0x00011da8U) /* TRDC_H_MBC0_DOM14_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_Z1(0x00011fa8U) /* TRDC_H_MBC0_DOM15_MEM2_BLK_CFG_W0:  MBC_TRDC_H=0 (default) */ , \
        SM_CFG_Z1(0x00010020U) /* TRDC_H_MBC0_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }


/*--------------------------------------------------------------------------*/
/* TRDC M Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC M */
#define SM_TRDC_M_CONFIG \
    { \
        SM_CFG_W1(0x00000840U), 0xB00000A8U /* TRDC_M_MDA_W0_2_DFMT1:  MDAC_TESTPORT/Test */ , \
        SM_CFG_W1(0x000008a0U), 0xB00000A9U /* TRDC_M_MDA_W0_5_DFMT1:  MDAC_ETR/Debug */ , \
        SM_CFG_W1(0x000008c0U), 0xB00000A9U /* TRDC_M_MDA_W0_6_DFMT1:  MDAC_MDAP/Debug */ , \
        SM_CFG_W1(0x00000900U), 0x90000003U /* TRDC_M_MDA_W0_8_DFMT0:  MDAC_M7P_1/SCMI_AGENT0 */ , \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }


/*--------------------------------------------------------------------------*/
/* TRDC N Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC N */
#define SM_TRDC_N_CONFIG \
    { \
        SM_CFG_W1(0x00010024U), 0x6666U /* TRDC_N_MBC0_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00010028U), 0x7777U /* TRDC_N_MBC0_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001002cU), 0x6600U /* TRDC_N_MBC0_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x00010040U), 0x00300000U /* TRDC_N_MBC0_DOM0_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) MBC_TROUT_BASIC_N=sec_rw */ , \
        SM_CFG_W1(0x00010180U), 0x00300000U /* TRDC_N_MBC0_DOM0_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) MBC_TROUT_BASIC_N_1=sec_rw */ , \
        SM_CFG_W1(0x000101a8U), 0x00003000U /* TRDC_N_MBC0_DOM0_MEM2_BLK_CFG_W0:  MBC_TROUT_BASIC_A55=sec_rw */ , \
        SM_CFG_W1(0x000101d0U), 0x00003000U /* TRDC_N_MBC0_DOM0_MEM3_BLK_CFG_W0:  MBC_TROUT_BASIC_A55_1=sec_rw */ , \
        SM_CFG_W1(0x00010240U), 0x00009000U /* TRDC_N_MBC0_DOM1_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) MBC_MTR_DCA_N=rw */ , \
        SM_CFG_W1(0x00010380U), 0x00009000U /* TRDC_N_MBC0_DOM1_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) MBC_MTR_DCA_N_1=rw */ , \
        SM_CFG_W1(0x000103a8U), 0x00000900U /* TRDC_N_MBC0_DOM1_MEM2_BLK_CFG_W0:  MBC_MTR_DCA_A55=rw */ , \
        SM_CFG_W1(0x000103d0U), 0x00000900U /* TRDC_N_MBC0_DOM1_MEM3_BLK_CFG_W0:  MBC_MTR_DCA_A55_1=rw */ , \
        SM_CFG_W1(0x00010440U), 0x33000333U /* TRDC_N_MBC0_DOM2_MEM0_BLK_CFG_W0:  MBC_BLK_CTRL_NOCMIX=sec_rw MBC_TRDC_N=sec_rw MBC_GPV_CENTRAL=sec_rw MBC_CMU_N1=sec_rw */ , \
        SM_CFG_W1(0x00010444U), 0x00033303U /* TRDC_N_MBC0_DOM2_MEM0_BLK_CFG_W1:  MBC_CMU_N2=sec_rw MBC_SRAM_CTL_1=sec_rw MBC_L_STCU_N=sec_rw MBC_SRAM_CTL_N=sec_rw */ , \
        SM_CFG_W1(0x00010450U), 0x30000000U /* TRDC_N_MBC0_DOM2_MEM0_BLK_CFG_W4:  MBC_EIM_N=sec_rw */ , \
        SM_CFG_W1(0x00010580U), 0x33000333U /* TRDC_N_MBC0_DOM2_MEM1_BLK_CFG_W0:  MBC_BLK_CTRL_NOCMIX_1=sec_rw MBC_TRDC_N_1=sec_rw MBC_GPV_CENTRAL_1=sec_rw MBC_CMU_N1_1=sec_rw */ , \
        SM_CFG_W1(0x00010584U), 0x00033303U /* TRDC_N_MBC0_DOM2_MEM1_BLK_CFG_W1:  MBC_CMU_N2_1=sec_rw MBC_SRAM_CTL_1_1=sec_rw MBC_L_STCU_N_1=sec_rw MBC_SRAM_CTL_N_1=sec_rw */ , \
        SM_CFG_W1(0x00010590U), 0x30000000U /* TRDC_N_MBC0_DOM2_MEM1_BLK_CFG_W4:  MBC_EIM_N_1=sec_rw */ , \
        SM_CFG_W1(0x000105a8U), 0x00030000U /* TRDC_N_MBC0_DOM2_MEM2_BLK_CFG_W0:  MBC_TEMP_A55=sec_rw */ , \
        SM_CFG_W1(0x000105d0U), 0x00030000U /* TRDC_N_MBC0_DOM2_MEM3_BLK_CFG_W0:  MBC_TEMP_A55_1=sec_rw */ , \
        SM_CFG_W1(0x00010640U), 0x99999999U /* TRDC_N_MBC0_DOM3_MEM0_BLK_CFG_W0:  MBC_BLK_CTRL_NOCMIX=rw MBC_TRDC_N=rw MBC_MTR_DCA_N=rw MBC_TCU_N=rw MBC_TROUT_BASIC_N=rw MBC_GPV_CENTRAL=rw MBC_CMU_N1=rw */ , \
        SM_CFG_W1(0x00010644U), 0x00099909U /* TRDC_N_MBC0_DOM3_MEM0_BLK_CFG_W1:  MBC_CMU_N2=rw MBC_SRAM_CTL_1=rw MBC_L_STCU_N=rw MBC_SRAM_CTL_N=rw */ , \
        SM_CFG_W1(0x00010650U), 0x90000000U /* TRDC_N_MBC0_DOM3_MEM0_BLK_CFG_W4:  MBC_EIM_N=rw */ , \
        SM_CFG_W1(0x00010780U), 0x99999999U /* TRDC_N_MBC0_DOM3_MEM1_BLK_CFG_W0:  MBC_BLK_CTRL_NOCMIX_1=rw MBC_TRDC_N_1=rw MBC_MTR_DCA_N_1=rw MBC_TCU_N_1=rw MBC_TROUT_BASIC_N_1=rw MBC_GPV_CENTRAL_1=rw MBC_CMU_N1_1=rw */ , \
        SM_CFG_W1(0x00010784U), 0x00099909U /* TRDC_N_MBC0_DOM3_MEM1_BLK_CFG_W1:  MBC_CMU_N2_1=rw MBC_SRAM_CTL_1_1=rw MBC_L_STCU_N_1=rw MBC_SRAM_CTL_N_1=rw */ , \
        SM_CFG_W1(0x00010790U), 0x90000000U /* TRDC_N_MBC0_DOM3_MEM1_BLK_CFG_W4:  MBC_EIM_N_1=rw */ , \
        SM_CFG_W1(0x000107a8U), 0x00099909U /* TRDC_N_MBC0_DOM3_MEM2_BLK_CFG_W0:  MBC_TCU_A55=rw MBC_MTR_DCA_A55=rw MBC_TROUT_BASIC_A55=rw MBC_TEMP_A55=rw */ , \
        SM_CFG_W1(0x000107d0U), 0x00099909U /* TRDC_N_MBC0_DOM3_MEM3_BLK_CFG_W0:  MBC_TCU_A55_1=rw MBC_MTR_DCA_A55_1=rw MBC_TROUT_BASIC_A55_1=rw MBC_TEMP_A55_1=rw */ , \
        SM_CFG_Z1(0x00010840U) /* TRDC_N_MBC0_DOM4_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00010980U) /* TRDC_N_MBC0_DOM4_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_Z1(0x00010a40U) /* TRDC_N_MBC0_DOM5_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00010b80U) /* TRDC_N_MBC0_DOM5_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_Z1(0x00010c40U) /* TRDC_N_MBC0_DOM6_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00010d80U) /* TRDC_N_MBC0_DOM6_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_Z1(0x00010e40U) /* TRDC_N_MBC0_DOM7_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00010f80U) /* TRDC_N_MBC0_DOM7_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_W1(0x00011040U), 0x00090000U /* TRDC_N_MBC0_DOM8_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) MBC_TCU_N=rw */ , \
        SM_CFG_W1(0x00011180U), 0x00090000U /* TRDC_N_MBC0_DOM8_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) MBC_TCU_N_1=rw */ , \
        SM_CFG_W1(0x000111a8U), 0x00000009U /* TRDC_N_MBC0_DOM8_MEM2_BLK_CFG_W0:  MBC_TCU_A55=rw */ , \
        SM_CFG_W1(0x000111d0U), 0x00000009U /* TRDC_N_MBC0_DOM8_MEM3_BLK_CFG_W0:  MBC_TCU_A55_1=rw */ , \
        SM_CFG_W1(0x00011240U), 0x99999999U /* TRDC_N_MBC0_DOM9_MEM0_BLK_CFG_W0:  MBC_BLK_CTRL_NOCMIX=rw MBC_TRDC_N=rw MBC_MTR_DCA_N=rw MBC_TCU_N=rw MBC_TROUT_BASIC_N=rw MBC_GPV_CENTRAL=rw MBC_CMU_N1=rw */ , \
        SM_CFG_W1(0x00011244U), 0x00099909U /* TRDC_N_MBC0_DOM9_MEM0_BLK_CFG_W1:  MBC_CMU_N2=rw MBC_SRAM_CTL_1=rw MBC_L_STCU_N=rw MBC_SRAM_CTL_N=rw */ , \
        SM_CFG_W1(0x00011250U), 0x90000000U /* TRDC_N_MBC0_DOM9_MEM0_BLK_CFG_W4:  MBC_EIM_N=rw */ , \
        SM_CFG_W1(0x00011380U), 0x99999999U /* TRDC_N_MBC0_DOM9_MEM1_BLK_CFG_W0:  MBC_BLK_CTRL_NOCMIX_1=rw MBC_TRDC_N_1=rw MBC_MTR_DCA_N_1=rw MBC_TCU_N_1=rw MBC_TROUT_BASIC_N_1=rw MBC_GPV_CENTRAL_1=rw MBC_CMU_N1_1=rw */ , \
        SM_CFG_W1(0x00011384U), 0x00099909U /* TRDC_N_MBC0_DOM9_MEM1_BLK_CFG_W1:  MBC_CMU_N2_1=rw MBC_SRAM_CTL_1_1=rw MBC_L_STCU_N_1=rw MBC_SRAM_CTL_N_1=rw */ , \
        SM_CFG_W1(0x00011390U), 0x90000000U /* TRDC_N_MBC0_DOM9_MEM1_BLK_CFG_W4:  MBC_EIM_N_1=rw */ , \
        SM_CFG_W1(0x000113a8U), 0x00099909U /* TRDC_N_MBC0_DOM9_MEM2_BLK_CFG_W0:  MBC_TCU_A55=rw MBC_MTR_DCA_A55=rw MBC_TROUT_BASIC_A55=rw MBC_TEMP_A55=rw */ , \
        SM_CFG_W1(0x000113d0U), 0x00099909U /* TRDC_N_MBC0_DOM9_MEM3_BLK_CFG_W0:  MBC_TCU_A55_1=rw MBC_MTR_DCA_A55_1=rw MBC_TROUT_BASIC_A55_1=rw MBC_TEMP_A55_1=rw */ , \
        SM_CFG_Z1(0x00011440U) /* TRDC_N_MBC0_DOM10_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00011580U) /* TRDC_N_MBC0_DOM10_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_Z1(0x00011640U) /* TRDC_N_MBC0_DOM11_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00011780U) /* TRDC_N_MBC0_DOM11_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_Z1(0x00011840U) /* TRDC_N_MBC0_DOM12_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00011980U) /* TRDC_N_MBC0_DOM12_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_Z1(0x00011a40U) /* TRDC_N_MBC0_DOM13_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00011b80U) /* TRDC_N_MBC0_DOM13_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_Z1(0x00011c40U) /* TRDC_N_MBC0_DOM14_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00011d80U) /* TRDC_N_MBC0_DOM14_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_Z1(0x00011e40U) /* TRDC_N_MBC0_DOM15_MEM0_BLK_CFG_W0:  MBC_TRDC_N=0 (default) */ , \
        SM_CFG_Z1(0x00011f80U) /* TRDC_N_MBC0_DOM15_MEM1_BLK_CFG_W0:  MBC_TRDC_N_1=0 (default) */ , \
        SM_CFG_W1(0x00014024U), 0x6666U /* TRDC_N_MBC2_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00014028U), 0x7777U /* TRDC_N_MBC2_MEMN_GLBAC2:  full */ , \
        SM_CFG_Z1(0x00014440U) /* TRDC_N_MBC2_DOM2_MEM0_BLK_CFG_W0:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014444U) /* TRDC_N_MBC2_DOM2_MEM0_BLK_CFG_W1:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014448U) /* TRDC_N_MBC2_DOM2_MEM0_BLK_CFG_W2:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014580U) /* TRDC_N_MBC2_DOM2_MEM1_BLK_CFG_W0:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014584U) /* TRDC_N_MBC2_DOM2_MEM1_BLK_CFG_W1:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014588U) /* TRDC_N_MBC2_DOM2_MEM1_BLK_CFG_W2:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014640U) /* TRDC_N_MBC2_DOM3_MEM0_BLK_CFG_W0:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014644U) /* TRDC_N_MBC2_DOM3_MEM0_BLK_CFG_W1:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014648U) /* TRDC_N_MBC2_DOM3_MEM0_BLK_CFG_W2:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014780U) /* TRDC_N_MBC2_DOM3_MEM1_BLK_CFG_W0:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014784U) /* TRDC_N_MBC2_DOM3_MEM1_BLK_CFG_W1:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014788U) /* TRDC_N_MBC2_DOM3_MEM1_BLK_CFG_W2:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014840U) /* TRDC_N_MBC2_DOM4_MEM0_BLK_CFG_W0:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014844U) /* TRDC_N_MBC2_DOM4_MEM0_BLK_CFG_W1:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014848U) /* TRDC_N_MBC2_DOM4_MEM0_BLK_CFG_W2:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014980U) /* TRDC_N_MBC2_DOM4_MEM1_BLK_CFG_W0:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014984U) /* TRDC_N_MBC2_DOM4_MEM1_BLK_CFG_W1:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014988U) /* TRDC_N_MBC2_DOM4_MEM1_BLK_CFG_W2:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014a40U) /* TRDC_N_MBC2_DOM5_MEM0_BLK_CFG_W0:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014a44U) /* TRDC_N_MBC2_DOM5_MEM0_BLK_CFG_W1:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014a48U) /* TRDC_N_MBC2_DOM5_MEM0_BLK_CFG_W2:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014b80U) /* TRDC_N_MBC2_DOM5_MEM1_BLK_CFG_W0:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014b84U) /* TRDC_N_MBC2_DOM5_MEM1_BLK_CFG_W1:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014b88U) /* TRDC_N_MBC2_DOM5_MEM1_BLK_CFG_W2:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014c40U) /* TRDC_N_MBC2_DOM6_MEM0_BLK_CFG_W0:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014c44U) /* TRDC_N_MBC2_DOM6_MEM0_BLK_CFG_W1:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014c48U) /* TRDC_N_MBC2_DOM6_MEM0_BLK_CFG_W2:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014d80U) /* TRDC_N_MBC2_DOM6_MEM1_BLK_CFG_W0:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014d84U) /* TRDC_N_MBC2_DOM6_MEM1_BLK_CFG_W1:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014d88U) /* TRDC_N_MBC2_DOM6_MEM1_BLK_CFG_W2:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014e40U) /* TRDC_N_MBC2_DOM7_MEM0_BLK_CFG_W0:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014e44U) /* TRDC_N_MBC2_DOM7_MEM0_BLK_CFG_W1:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014e48U) /* TRDC_N_MBC2_DOM7_MEM0_BLK_CFG_W2:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00014f80U) /* TRDC_N_MBC2_DOM7_MEM1_BLK_CFG_W0:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014f84U) /* TRDC_N_MBC2_DOM7_MEM1_BLK_CFG_W1:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00014f88U) /* TRDC_N_MBC2_DOM7_MEM1_BLK_CFG_W2:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00015440U) /* TRDC_N_MBC2_DOM10_MEM0_BLK_CFG_W0:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00015444U) /* TRDC_N_MBC2_DOM10_MEM0_BLK_CFG_W1:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00015448U) /* TRDC_N_MBC2_DOM10_MEM0_BLK_CFG_W2:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00015580U) /* TRDC_N_MBC2_DOM10_MEM1_BLK_CFG_W0:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00015584U) /* TRDC_N_MBC2_DOM10_MEM1_BLK_CFG_W1:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00015588U) /* TRDC_N_MBC2_DOM10_MEM1_BLK_CFG_W2:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00015640U) /* TRDC_N_MBC2_DOM11_MEM0_BLK_CFG_W0:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00015644U) /* TRDC_N_MBC2_DOM11_MEM0_BLK_CFG_W1:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00015648U) /* TRDC_N_MBC2_DOM11_MEM0_BLK_CFG_W2:  MBC_OCRAM=0 (default) */ , \
        SM_CFG_Z1(0x00015780U) /* TRDC_N_MBC2_DOM11_MEM1_BLK_CFG_W0:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00015784U) /* TRDC_N_MBC2_DOM11_MEM1_BLK_CFG_W1:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_Z1(0x00015788U) /* TRDC_N_MBC2_DOM11_MEM1_BLK_CFG_W2:  MBC_OCRAM_1=0 (default) */ , \
        SM_CFG_W1(0x00016024U), 0x6666U /* TRDC_N_MBC3_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00016028U), 0x7777U /* TRDC_N_MBC3_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001602cU), 0x6600U /* TRDC_N_MBC3_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x000161a8U), 0x00003000U /* TRDC_N_MBC3_DOM0_MEM2_BLK_CFG_W0:  MBC_TROUT_BASIC_NPUMIX=sec_rw */ , \
        SM_CFG_W1(0x000161d0U), 0x00003000U /* TRDC_N_MBC3_DOM0_MEM3_BLK_CFG_W0:  MBC_TROUT_BASIC_NPUMIX_1=sec_rw */ , \
        SM_CFG_W1(0x00016240U), 0x00000900U /* TRDC_N_MBC3_DOM1_MEM0_BLK_CFG_W0:  MBC_MTR_DCA_DDR=rw */ , \
        SM_CFG_W1(0x00016380U), 0x00000900U /* TRDC_N_MBC3_DOM1_MEM1_BLK_CFG_W0:  MBC_MTR_DCA_DDR_1=rw */ , \
        SM_CFG_W1(0x000163a8U), 0x00000900U /* TRDC_N_MBC3_DOM1_MEM2_BLK_CFG_W0:  MBC_MTR_DCA_NPUMIX=rw */ , \
        SM_CFG_W1(0x000163d0U), 0x00000900U /* TRDC_N_MBC3_DOM1_MEM3_BLK_CFG_W0:  MBC_MTR_DCA_NPUMIX_1=rw */ , \
        SM_CFG_W1(0x00016440U), 0x33300030U /* TRDC_N_MBC3_DOM2_MEM0_BLK_CFG_W0:  MBC_BLK_CTRL_DDRMIX=sec_rw MBC_L_STCU_DDR=sec_rw MBC_CMU_DDR1=sec_rw MBC_CMU_DDR2=sec_rw */ , \
        SM_CFG_W1(0x00016444U), 0x00000033U /* TRDC_N_MBC3_DOM2_MEM0_BLK_CFG_W1:  MBC_DDR_CTRL=sec_rw MBC_DDR_PM=sec_rw */ , \
        SM_CFG_W1(0x00016580U), 0x33300030U /* TRDC_N_MBC3_DOM2_MEM1_BLK_CFG_W0:  MBC_BLK_CTRL_DDRMIX_1=sec_rw MBC_L_STCU_DDR_1=sec_rw MBC_CMU_DDR1_1=sec_rw MBC_CMU_DDR2_1=sec_rw */ , \
        SM_CFG_W1(0x00016584U), 0x00000033U /* TRDC_N_MBC3_DOM2_MEM1_BLK_CFG_W1:  MBC_DDR_CTRL_1=sec_rw MBC_DDR_PM_1=sec_rw */ , \
        SM_CFG_W1(0x000165a8U), 0x33300000U /* TRDC_N_MBC3_DOM2_MEM2_BLK_CFG_W0:  MBC_L_STCU_NPUMIX=sec_rw MBC_EIM_NPU=sec_rw MBC_ERM_NPU=sec_rw */ , \
        SM_CFG_W1(0x000165d0U), 0x33300000U /* TRDC_N_MBC3_DOM2_MEM3_BLK_CFG_W0:  MBC_L_STCU_NPUMIX_1=sec_rw MBC_EIM_NPU_1=sec_rw MBC_ERM_NPU_1=sec_rw */ , \
        SM_CFG_W1(0x00016640U), 0x99900999U /* TRDC_N_MBC3_DOM3_MEM0_BLK_CFG_W0:  MBC_TCU_DDR=rw MBC_BLK_CTRL_DDRMIX=rw MBC_MTR_DCA_DDR=rw MBC_L_STCU_DDR=rw MBC_CMU_DDR1=rw MBC_CMU_DDR2=rw */ , \
        SM_CFG_W1(0x00016644U), 0x00000099U /* TRDC_N_MBC3_DOM3_MEM0_BLK_CFG_W1:  MBC_DDR_CTRL=rw MBC_DDR_PM=rw */ , \
        SM_CFG_W1(0x00016780U), 0x99900999U /* TRDC_N_MBC3_DOM3_MEM1_BLK_CFG_W0:  MBC_TCU_DDR_1=rw MBC_BLK_CTRL_DDRMIX_1=rw MBC_MTR_DCA_DDR_1=rw MBC_L_STCU_DDR_1=rw MBC_CMU_DDR1_1=rw MBC_CMU_DDR2_1=rw */ , \
        SM_CFG_W1(0x00016784U), 0x00000099U /* TRDC_N_MBC3_DOM3_MEM1_BLK_CFG_W1:  MBC_DDR_CTRL_1=rw MBC_DDR_PM_1=rw */ , \
        SM_CFG_W1(0x000167a8U), 0x99909909U /* TRDC_N_MBC3_DOM3_MEM2_BLK_CFG_W0:  MBC_TCU_NPUMIX=rw MBC_MTR_DCA_NPUMIX=rw MBC_TROUT_BASIC_NPUMIX=rw MBC_L_STCU_NPUMIX=rw MBC_EIM_NPU=rw MBC_ERM_NPU=rw */ , \
        SM_CFG_W1(0x000167d0U), 0x99909909U /* TRDC_N_MBC3_DOM3_MEM3_BLK_CFG_W0:  MBC_TCU_NPUMIX_1=rw MBC_MTR_DCA_NPUMIX_1=rw MBC_TROUT_BASIC_NPUMIX_1=rw MBC_L_STCU_NPUMIX_1=rw MBC_EIM_NPU_1=rw MBC_ERM_NPU_1=rw */ , \
        SM_CFG_W1(0x00017040U), 0x00000009U /* TRDC_N_MBC3_DOM8_MEM0_BLK_CFG_W0:  MBC_TCU_DDR=rw */ , \
        SM_CFG_W1(0x00017180U), 0x00000009U /* TRDC_N_MBC3_DOM8_MEM1_BLK_CFG_W0:  MBC_TCU_DDR_1=rw */ , \
        SM_CFG_W1(0x000171a8U), 0x00000009U /* TRDC_N_MBC3_DOM8_MEM2_BLK_CFG_W0:  MBC_TCU_NPUMIX=rw */ , \
        SM_CFG_W1(0x000171d0U), 0x00000009U /* TRDC_N_MBC3_DOM8_MEM3_BLK_CFG_W0:  MBC_TCU_NPUMIX_1=rw */ , \
        SM_CFG_W1(0x00017240U), 0x99900999U /* TRDC_N_MBC3_DOM9_MEM0_BLK_CFG_W0:  MBC_TCU_DDR=rw MBC_BLK_CTRL_DDRMIX=rw MBC_MTR_DCA_DDR=rw MBC_L_STCU_DDR=rw MBC_CMU_DDR1=rw MBC_CMU_DDR2=rw */ , \
        SM_CFG_W1(0x00017244U), 0x00000099U /* TRDC_N_MBC3_DOM9_MEM0_BLK_CFG_W1:  MBC_DDR_CTRL=rw MBC_DDR_PM=rw */ , \
        SM_CFG_W1(0x00017380U), 0x99900999U /* TRDC_N_MBC3_DOM9_MEM1_BLK_CFG_W0:  MBC_TCU_DDR_1=rw MBC_BLK_CTRL_DDRMIX_1=rw MBC_MTR_DCA_DDR_1=rw MBC_L_STCU_DDR_1=rw MBC_CMU_DDR1_1=rw MBC_CMU_DDR2_1=rw */ , \
        SM_CFG_W1(0x00017384U), 0x00000099U /* TRDC_N_MBC3_DOM9_MEM1_BLK_CFG_W1:  MBC_DDR_CTRL_1=rw MBC_DDR_PM_1=rw */ , \
        SM_CFG_W1(0x000173a8U), 0x99909909U /* TRDC_N_MBC3_DOM9_MEM2_BLK_CFG_W0:  MBC_TCU_NPUMIX=rw MBC_MTR_DCA_NPUMIX=rw MBC_TROUT_BASIC_NPUMIX=rw MBC_L_STCU_NPUMIX=rw MBC_EIM_NPU=rw MBC_ERM_NPU=rw */ , \
        SM_CFG_W1(0x000173d0U), 0x99909909U /* TRDC_N_MBC3_DOM9_MEM3_BLK_CFG_W0:  MBC_TCU_NPUMIX_1=rw MBC_MTR_DCA_NPUMIX_1=rw MBC_TROUT_BASIC_NPUMIX_1=rw MBC_L_STCU_NPUMIX_1=rw MBC_EIM_NPU_1=rw MBC_ERM_NPU_1=rw */ , \
        SM_CFG_W1(0x00018024U), 0x6666U /* TRDC_N_MBC4_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00018028U), 0x7777U /* TRDC_N_MBC4_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001802cU), 0x6600U /* TRDC_N_MBC4_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x00018440U), 0x33333333U /* TRDC_N_MBC4_DOM2_MEM0_BLK_CFG_W0:  MBC_DDR_PHY=sec_rw */ , \
        SM_CFG_W1(0x00018580U), 0x33333333U /* TRDC_N_MBC4_DOM2_MEM1_BLK_CFG_W0:  MBC_DDR_PHY_1=sec_rw */ , \
        SM_CFG_W1(0x00018640U), 0x99999999U /* TRDC_N_MBC4_DOM3_MEM0_BLK_CFG_W0:  MBC_DDR_PHY=rw */ , \
        SM_CFG_W1(0x00018780U), 0x99999999U /* TRDC_N_MBC4_DOM3_MEM1_BLK_CFG_W0:  MBC_DDR_PHY_1=rw */ , \
        SM_CFG_W1(0x00019240U), 0x99999999U /* TRDC_N_MBC4_DOM9_MEM0_BLK_CFG_W0:  MBC_DDR_PHY=rw */ , \
        SM_CFG_W1(0x00019380U), 0x99999999U /* TRDC_N_MBC4_DOM9_MEM1_BLK_CFG_W0:  MBC_DDR_PHY_1=rw */ , \
        SM_CFG_Z1(0x0001a244U) /* TRDC_N_MRC0_DOM2_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a24cU) /* TRDC_N_MRC0_DOM2_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a254U) /* TRDC_N_MRC0_DOM2_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a25cU) /* TRDC_N_MRC0_DOM2_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a344U) /* TRDC_N_MRC0_DOM3_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a34cU) /* TRDC_N_MRC0_DOM3_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a354U) /* TRDC_N_MRC0_DOM3_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a35cU) /* TRDC_N_MRC0_DOM3_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a444U) /* TRDC_N_MRC0_DOM4_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a44cU) /* TRDC_N_MRC0_DOM4_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a454U) /* TRDC_N_MRC0_DOM4_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a45cU) /* TRDC_N_MRC0_DOM4_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a544U) /* TRDC_N_MRC0_DOM5_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a54cU) /* TRDC_N_MRC0_DOM5_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a554U) /* TRDC_N_MRC0_DOM5_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a55cU) /* TRDC_N_MRC0_DOM5_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a644U) /* TRDC_N_MRC0_DOM6_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a64cU) /* TRDC_N_MRC0_DOM6_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a654U) /* TRDC_N_MRC0_DOM6_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a65cU) /* TRDC_N_MRC0_DOM6_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a744U) /* TRDC_N_MRC0_DOM7_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a74cU) /* TRDC_N_MRC0_DOM7_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a754U) /* TRDC_N_MRC0_DOM7_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a75cU) /* TRDC_N_MRC0_DOM7_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a844U) /* TRDC_N_MRC0_DOM8_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a84cU) /* TRDC_N_MRC0_DOM8_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a854U) /* TRDC_N_MRC0_DOM8_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a85cU) /* TRDC_N_MRC0_DOM8_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a944U) /* TRDC_N_MRC0_DOM9_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a94cU) /* TRDC_N_MRC0_DOM9_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a954U) /* TRDC_N_MRC0_DOM9_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001a95cU) /* TRDC_N_MRC0_DOM9_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001aa44U) /* TRDC_N_MRC0_DOM10_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001aa4cU) /* TRDC_N_MRC0_DOM10_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001aa54U) /* TRDC_N_MRC0_DOM10_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001aa5cU) /* TRDC_N_MRC0_DOM10_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001ab44U) /* TRDC_N_MRC0_DOM11_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001ab4cU) /* TRDC_N_MRC0_DOM11_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001ab54U) /* TRDC_N_MRC0_DOM11_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001ab5cU) /* TRDC_N_MRC0_DOM11_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001ac44U) /* TRDC_N_MRC0_DOM12_RGD0_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001ac4cU) /* TRDC_N_MRC0_DOM12_RGD1_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001ac54U) /* TRDC_N_MRC0_DOM12_RGD2_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x0001ac5cU) /* TRDC_N_MRC0_DOM12_RGD3_W1:  MRC_DDR=clearing */ , \
        SM_CFG_Z1(0x00010020U) /* TRDC_N_MBC0_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_Z1(0x00014020U) /* TRDC_N_MBC2_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_Z1(0x00016020U) /* TRDC_N_MBC3_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_Z1(0x00018020U) /* TRDC_N_MBC4_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }


/*--------------------------------------------------------------------------*/
/* TRDC V Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC V */
#define SM_TRDC_V_CONFIG \
    { \
        SM_CFG_W1(0x00010024U), 0x6666U /* TRDC_V_MBC0_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00010028U), 0x7777U /* TRDC_V_MBC0_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001002cU), 0x6600U /* TRDC_V_MBC0_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_W1(0x00010040U), 0x00003000U /* TRDC_V_MBC0_DOM0_MEM0_BLK_CFG_W0:  MBC_TROUT_BASIC_V=sec_rw MBC_TRDC_V=0 (default) */ , \
        SM_CFG_W1(0x00010180U), 0x00003000U /* TRDC_V_MBC0_DOM0_MEM1_BLK_CFG_W0:  MBC_TROUT_BASIC_V_1=sec_rw MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_W1(0x00010240U), 0x00000900U /* TRDC_V_MBC0_DOM1_MEM0_BLK_CFG_W0:  MBC_MTR_DCA_V=rw MBC_TRDC_V=0 (default) */ , \
        SM_CFG_W1(0x00010380U), 0x00000900U /* TRDC_V_MBC0_DOM1_MEM1_BLK_CFG_W0:  MBC_MTR_DCA_V_1=rw MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_W1(0x00010440U), 0x00330000U /* TRDC_V_MBC0_DOM2_MEM0_BLK_CFG_W0:  MBC_TRDC_V=sec_rw */ , \
        SM_CFG_W1(0x00010450U), 0x00000003U /* TRDC_V_MBC0_DOM2_MEM0_BLK_CFG_W4:  MBC_GPV_VPU=sec_rw */ , \
        SM_CFG_W1(0x00010580U), 0x00330000U /* TRDC_V_MBC0_DOM2_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=sec_rw */ , \
        SM_CFG_W1(0x00010590U), 0x00000003U /* TRDC_V_MBC0_DOM2_MEM1_BLK_CFG_W4:  MBC_GPV_VPU_1=sec_rw */ , \
        SM_CFG_W1(0x00010640U), 0x00999909U /* TRDC_V_MBC0_DOM3_MEM0_BLK_CFG_W0:  MBC_TCU_V=rw MBC_MTR_DCA_V=rw MBC_TROUT_BASIC_V=rw MBC_TRDC_V=rw */ , \
        SM_CFG_W1(0x00010650U), 0x00000009U /* TRDC_V_MBC0_DOM3_MEM0_BLK_CFG_W4:  MBC_GPV_VPU=rw */ , \
        SM_CFG_W1(0x00010780U), 0x00999909U /* TRDC_V_MBC0_DOM3_MEM1_BLK_CFG_W0:  MBC_TCU_V_1=rw MBC_MTR_DCA_V_1=rw MBC_TROUT_BASIC_V_1=rw MBC_TRDC_V_1=rw */ , \
        SM_CFG_W1(0x00010790U), 0x00000009U /* TRDC_V_MBC0_DOM3_MEM1_BLK_CFG_W4:  MBC_GPV_VPU_1=rw */ , \
        SM_CFG_Z1(0x00010840U) /* TRDC_V_MBC0_DOM4_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00010980U) /* TRDC_V_MBC0_DOM4_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_Z1(0x00010a40U) /* TRDC_V_MBC0_DOM5_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00010b80U) /* TRDC_V_MBC0_DOM5_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_Z1(0x00010c40U) /* TRDC_V_MBC0_DOM6_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00010d80U) /* TRDC_V_MBC0_DOM6_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_Z1(0x00010e40U) /* TRDC_V_MBC0_DOM7_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00010f80U) /* TRDC_V_MBC0_DOM7_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_W1(0x00011040U), 0x00000009U /* TRDC_V_MBC0_DOM8_MEM0_BLK_CFG_W0:  MBC_TCU_V=rw MBC_TRDC_V=0 (default) */ , \
        SM_CFG_W1(0x00011180U), 0x00000009U /* TRDC_V_MBC0_DOM8_MEM1_BLK_CFG_W0:  MBC_TCU_V_1=rw MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_W1(0x00011240U), 0x00999909U /* TRDC_V_MBC0_DOM9_MEM0_BLK_CFG_W0:  MBC_TCU_V=rw MBC_MTR_DCA_V=rw MBC_TROUT_BASIC_V=rw MBC_TRDC_V=rw */ , \
        SM_CFG_W1(0x00011250U), 0x00000009U /* TRDC_V_MBC0_DOM9_MEM0_BLK_CFG_W4:  MBC_GPV_VPU=rw */ , \
        SM_CFG_W1(0x00011380U), 0x00999909U /* TRDC_V_MBC0_DOM9_MEM1_BLK_CFG_W0:  MBC_TCU_V_1=rw MBC_MTR_DCA_V_1=rw MBC_TROUT_BASIC_V_1=rw MBC_TRDC_V_1=rw */ , \
        SM_CFG_W1(0x00011390U), 0x00000009U /* TRDC_V_MBC0_DOM9_MEM1_BLK_CFG_W4:  MBC_GPV_VPU_1=rw */ , \
        SM_CFG_Z1(0x00011440U) /* TRDC_V_MBC0_DOM10_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00011580U) /* TRDC_V_MBC0_DOM10_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_Z1(0x00011640U) /* TRDC_V_MBC0_DOM11_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00011780U) /* TRDC_V_MBC0_DOM11_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_Z1(0x00011840U) /* TRDC_V_MBC0_DOM12_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00011980U) /* TRDC_V_MBC0_DOM12_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_Z1(0x00011a40U) /* TRDC_V_MBC0_DOM13_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00011b80U) /* TRDC_V_MBC0_DOM13_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_Z1(0x00011c40U) /* TRDC_V_MBC0_DOM14_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00011d80U) /* TRDC_V_MBC0_DOM14_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_Z1(0x00011e40U) /* TRDC_V_MBC0_DOM15_MEM0_BLK_CFG_W0:  MBC_TRDC_V=0 (default) */ , \
        SM_CFG_Z1(0x00011f80U) /* TRDC_V_MBC0_DOM15_MEM1_BLK_CFG_W0:  MBC_TRDC_V_1=0 (default) */ , \
        SM_CFG_Z1(0x00010020U) /* TRDC_V_MBC0_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }


/*--------------------------------------------------------------------------*/
/* TRDC W Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC W */
#define SM_TRDC_W_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0x90000003U /* TRDC_W_MDA_W0_0_DFMT0:  MDAC_M7P/SCMI_AGENT0 */ , \
        SM_CFG_W1(0x00010024U), 0x6666U /* TRDC_W_MBC0_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00010028U), 0x7777U /* TRDC_W_MBC0_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001002cU), 0x6600U /* TRDC_W_MBC0_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_Z1(0x00010060U) /* TRDC_W_MBC0_DOM0_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_W1(0x00010070U), 0x00003000U /* TRDC_W_MBC0_DOM0_MEM0_BLK_CFG_W12:  MBC_TROUT_BASIC_W=sec_rw */ , \
        SM_CFG_Z1(0x00010260U) /* TRDC_W_MBC0_DOM1_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_W1(0x00010270U), 0x00000090U /* TRDC_W_MBC0_DOM1_MEM0_BLK_CFG_W12:  MBC_MTR_DCA_W=rw */ , \
        SM_CFG_W1(0x00010460U), 0x33000300U /* TRDC_W_MBC0_DOM2_MEM0_BLK_CFG_W8:  MBC_BLK_CTRL_WAKEUPMIX=sec_rw MBC_TRDC_W=sec_rw */ , \
        SM_CFG_W1(0x00010478U), 0x33300000U /* TRDC_W_MBC0_DOM2_MEM0_BLK_CFG_W14:  MBC_CMU_W1=sec_rw MBC_ATU_A=sec_rw MBC_ATU_M=sec_rw */ , \
        SM_CFG_W1(0x0001047cU), 0x00003333U /* TRDC_W_MBC0_DOM2_MEM0_BLK_CFG_W15:  MBC_EIM_W=sec_rw MBC_ERM_W=sec_rw MBC_CMU_W2=sec_rw MBC_DMA_CRC=sec_rw */ , \
        SM_CFG_W1(0x00010580U), 0x00000003U /* TRDC_W_MBC0_DOM2_MEM1_BLK_CFG_W0:  MBC_GPIO2=sec_rw */ , \
        SM_CFG_W1(0x000105d0U), 0x33333333U /* TRDC_W_MBC0_DOM2_MEM3_BLK_CFG_W0:  MBC_DAP=sec_rw */ , \
        SM_CFG_W1(0x000105d4U), 0x33333333U /* TRDC_W_MBC0_DOM2_MEM3_BLK_CFG_W1:  MBC_DAP=sec_rw */ , \
        SM_CFG_W1(0x000105d8U), 0x00000003U /* TRDC_W_MBC0_DOM2_MEM3_BLK_CFG_W2:  MBC_DAP=sec_rw */ , \
        SM_CFG_W1(0x00010660U), 0x99000900U /* TRDC_W_MBC0_DOM3_MEM0_BLK_CFG_W8:  MBC_BLK_CTRL_WAKEUPMIX=rw MBC_TRDC_W=rw */ , \
        SM_CFG_W1(0x00010668U), 0x90000000U /* TRDC_W_MBC0_DOM3_MEM0_BLK_CFG_W10:  MBC_LPUART3=rw */ , \
        SM_CFG_W1(0x0001066cU), 0x00009900U /* TRDC_W_MBC0_DOM3_MEM0_BLK_CFG_W11:  MBC_LPUART6=rw MBC_CAN_FD2=rw */ , \
        SM_CFG_W1(0x00010670U), 0x00009990U /* TRDC_W_MBC0_DOM3_MEM0_BLK_CFG_W12:  MBC_MTR_DCA_W=rw MBC_TCU_W=rw MBC_TROUT_BASIC_W=rw */ , \
        SM_CFG_W1(0x00010678U), 0x99900009U /* TRDC_W_MBC0_DOM3_MEM0_BLK_CFG_W14:  MBC_LPSPI6=rw MBC_CMU_W1=rw MBC_ATU_A=rw MBC_ATU_M=rw */ , \
        SM_CFG_W1(0x0001067cU), 0x00909999U /* TRDC_W_MBC0_DOM3_MEM0_BLK_CFG_W15:  MBC_EIM_W=rw MBC_ERM_W=rw MBC_CMU_W2=rw MBC_DMA_CRC=rw MBC_CAN_FD5=rw */ , \
        SM_CFG_W1(0x00010780U), 0x00000009U /* TRDC_W_MBC0_DOM3_MEM1_BLK_CFG_W0:  MBC_GPIO2=rw */ , \
        SM_CFG_W1(0x000107d0U), 0x99999999U /* TRDC_W_MBC0_DOM3_MEM3_BLK_CFG_W0:  MBC_DAP=rw */ , \
        SM_CFG_W1(0x000107d4U), 0x99999999U /* TRDC_W_MBC0_DOM3_MEM3_BLK_CFG_W1:  MBC_DAP=rw */ , \
        SM_CFG_W1(0x000107d8U), 0x00000009U /* TRDC_W_MBC0_DOM3_MEM3_BLK_CFG_W2:  MBC_DAP=rw */ , \
        SM_CFG_Z1(0x00010860U) /* TRDC_W_MBC0_DOM4_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_Z1(0x00010a60U) /* TRDC_W_MBC0_DOM5_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_Z1(0x00010c60U) /* TRDC_W_MBC0_DOM6_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_Z1(0x00010e60U) /* TRDC_W_MBC0_DOM7_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_Z1(0x00011060U) /* TRDC_W_MBC0_DOM8_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_W1(0x00011070U), 0x00000900U /* TRDC_W_MBC0_DOM8_MEM0_BLK_CFG_W12:  MBC_TCU_W=rw */ , \
        SM_CFG_W1(0x00011260U), 0x99000900U /* TRDC_W_MBC0_DOM9_MEM0_BLK_CFG_W8:  MBC_BLK_CTRL_WAKEUPMIX=rw MBC_TRDC_W=rw */ , \
        SM_CFG_W1(0x00011268U), 0x90000000U /* TRDC_W_MBC0_DOM9_MEM0_BLK_CFG_W10:  MBC_LPUART3=rw */ , \
        SM_CFG_W1(0x0001126cU), 0x00009900U /* TRDC_W_MBC0_DOM9_MEM0_BLK_CFG_W11:  MBC_LPUART6=rw MBC_CAN_FD2=rw */ , \
        SM_CFG_W1(0x00011270U), 0x00009990U /* TRDC_W_MBC0_DOM9_MEM0_BLK_CFG_W12:  MBC_MTR_DCA_W=rw MBC_TCU_W=rw MBC_TROUT_BASIC_W=rw */ , \
        SM_CFG_W1(0x00011278U), 0x99900009U /* TRDC_W_MBC0_DOM9_MEM0_BLK_CFG_W14:  MBC_LPSPI6=rw MBC_CMU_W1=rw MBC_ATU_A=rw MBC_ATU_M=rw */ , \
        SM_CFG_W1(0x0001127cU), 0x00909999U /* TRDC_W_MBC0_DOM9_MEM0_BLK_CFG_W15:  MBC_EIM_W=rw MBC_ERM_W=rw MBC_CMU_W2=rw MBC_DMA_CRC=rw MBC_CAN_FD5=rw */ , \
        SM_CFG_W1(0x00011380U), 0x00000009U /* TRDC_W_MBC0_DOM9_MEM1_BLK_CFG_W0:  MBC_GPIO2=rw */ , \
        SM_CFG_W1(0x000113d0U), 0x99999999U /* TRDC_W_MBC0_DOM9_MEM3_BLK_CFG_W0:  MBC_DAP=rw */ , \
        SM_CFG_W1(0x000113d4U), 0x99999999U /* TRDC_W_MBC0_DOM9_MEM3_BLK_CFG_W1:  MBC_DAP=rw */ , \
        SM_CFG_W1(0x000113d8U), 0x00000009U /* TRDC_W_MBC0_DOM9_MEM3_BLK_CFG_W2:  MBC_DAP=rw */ , \
        SM_CFG_Z1(0x00011460U) /* TRDC_W_MBC0_DOM10_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_Z1(0x00011660U) /* TRDC_W_MBC0_DOM11_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_Z1(0x00011860U) /* TRDC_W_MBC0_DOM12_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_Z1(0x00011a60U) /* TRDC_W_MBC0_DOM13_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_Z1(0x00011c60U) /* TRDC_W_MBC0_DOM14_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_Z1(0x00011e60U) /* TRDC_W_MBC0_DOM15_MEM0_BLK_CFG_W8:  MBC_TRDC_W=0 (default) */ , \
        SM_CFG_W1(0x00012024U), 0x6666U /* TRDC_W_MBC1_MEMN_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00012028U), 0x7777U /* TRDC_W_MBC1_MEMN_GLBAC2:  full */ , \
        SM_CFG_W1(0x0001202cU), 0x6600U /* TRDC_W_MBC1_MEMN_GLBAC3:  sec_rw */ , \
        SM_CFG_Z1(0x00012040U) /* TRDC_W_MBC1_DOM0_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_W1(0x00012180U), 0x00000003U /* TRDC_W_MBC1_DOM0_MEM1_BLK_CFG_W0:  MBC_DAP_ISP=sec_rw */ , \
        SM_CFG_W1(0x00012240U), 0x90000000U /* TRDC_W_MBC1_DOM1_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) MBC_MTR_DCA_V2X=rw */ , \
        SM_CFG_W1(0x00012440U), 0x00003330U /* TRDC_W_MBC1_DOM2_MEM0_BLK_CFG_W0:  MBC_TRDC_M=sec_rw MBC_GPV_MEGA=sec_rw */ , \
        SM_CFG_W1(0x000125a8U), 0x00000003U /* TRDC_W_MBC1_DOM2_MEM2_BLK_CFG_W0:  MBC_GPV_MAIN=sec_rw */ , \
        SM_CFG_W1(0x00012640U), 0x90009990U /* TRDC_W_MBC1_DOM3_MEM0_BLK_CFG_W0:  MBC_TRDC_M=rw MBC_GPV_MEGA=rw MBC_MTR_DCA_V2X=rw */ , \
        SM_CFG_W1(0x00012780U), 0x00000009U /* TRDC_W_MBC1_DOM3_MEM1_BLK_CFG_W0:  MBC_DAP_ISP=rw */ , \
        SM_CFG_W1(0x000127a8U), 0x00000009U /* TRDC_W_MBC1_DOM3_MEM2_BLK_CFG_W0:  MBC_GPV_MAIN=rw */ , \
        SM_CFG_Z1(0x00012840U) /* TRDC_W_MBC1_DOM4_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00012a40U) /* TRDC_W_MBC1_DOM5_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00012c40U) /* TRDC_W_MBC1_DOM6_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00012e40U) /* TRDC_W_MBC1_DOM7_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00013040U) /* TRDC_W_MBC1_DOM8_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_W1(0x00013240U), 0x90009990U /* TRDC_W_MBC1_DOM9_MEM0_BLK_CFG_W0:  MBC_TRDC_M=rw MBC_GPV_MEGA=rw MBC_MTR_DCA_V2X=rw */ , \
        SM_CFG_W1(0x00013380U), 0x00000009U /* TRDC_W_MBC1_DOM9_MEM1_BLK_CFG_W0:  MBC_DAP_ISP=rw */ , \
        SM_CFG_W1(0x000133a8U), 0x00000009U /* TRDC_W_MBC1_DOM9_MEM2_BLK_CFG_W0:  MBC_GPV_MAIN=rw */ , \
        SM_CFG_Z1(0x00013440U) /* TRDC_W_MBC1_DOM10_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00013640U) /* TRDC_W_MBC1_DOM11_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00013840U) /* TRDC_W_MBC1_DOM12_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00013a40U) /* TRDC_W_MBC1_DOM13_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00013c40U) /* TRDC_W_MBC1_DOM14_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00013e40U) /* TRDC_W_MBC1_DOM15_MEM0_BLK_CFG_W0:  MBC_TRDC_M=0 (default) */ , \
        SM_CFG_Z1(0x00017244U) /* TRDC_W_MRC1_DOM2_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001724cU) /* TRDC_W_MRC1_DOM2_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017254U) /* TRDC_W_MRC1_DOM2_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001725cU) /* TRDC_W_MRC1_DOM2_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017344U) /* TRDC_W_MRC1_DOM3_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001734cU) /* TRDC_W_MRC1_DOM3_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017354U) /* TRDC_W_MRC1_DOM3_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001735cU) /* TRDC_W_MRC1_DOM3_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017444U) /* TRDC_W_MRC1_DOM4_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001744cU) /* TRDC_W_MRC1_DOM4_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017454U) /* TRDC_W_MRC1_DOM4_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001745cU) /* TRDC_W_MRC1_DOM4_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017544U) /* TRDC_W_MRC1_DOM5_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001754cU) /* TRDC_W_MRC1_DOM5_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017554U) /* TRDC_W_MRC1_DOM5_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001755cU) /* TRDC_W_MRC1_DOM5_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017644U) /* TRDC_W_MRC1_DOM6_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001764cU) /* TRDC_W_MRC1_DOM6_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017654U) /* TRDC_W_MRC1_DOM6_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001765cU) /* TRDC_W_MRC1_DOM6_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017744U) /* TRDC_W_MRC1_DOM7_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001774cU) /* TRDC_W_MRC1_DOM7_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017754U) /* TRDC_W_MRC1_DOM7_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001775cU) /* TRDC_W_MRC1_DOM7_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017844U) /* TRDC_W_MRC1_DOM8_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001784cU) /* TRDC_W_MRC1_DOM8_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017854U) /* TRDC_W_MRC1_DOM8_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001785cU) /* TRDC_W_MRC1_DOM8_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017944U) /* TRDC_W_MRC1_DOM9_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001794cU) /* TRDC_W_MRC1_DOM9_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017954U) /* TRDC_W_MRC1_DOM9_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x0001795cU) /* TRDC_W_MRC1_DOM9_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017a44U) /* TRDC_W_MRC1_DOM10_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017a4cU) /* TRDC_W_MRC1_DOM10_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017a54U) /* TRDC_W_MRC1_DOM10_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017a5cU) /* TRDC_W_MRC1_DOM10_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017b44U) /* TRDC_W_MRC1_DOM11_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017b4cU) /* TRDC_W_MRC1_DOM11_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017b54U) /* TRDC_W_MRC1_DOM11_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017b5cU) /* TRDC_W_MRC1_DOM11_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017c44U) /* TRDC_W_MRC1_DOM12_RGD0_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017c4cU) /* TRDC_W_MRC1_DOM12_RGD1_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017c54U) /* TRDC_W_MRC1_DOM12_RGD2_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_Z1(0x00017c5cU) /* TRDC_W_MRC1_DOM12_RGD3_W1:  MRC_FLEXSPI1_MEM=clearing */ , \
        SM_CFG_W1(0x00018024U), 0x6666U /* TRDC_W_MRC2_GLBAC1:  rw */ , \
        SM_CFG_W1(0x00018040U), 0x4A030000U /* TRDC_W_MRC2_DOM0_RGD0_W0:  MRC_M7MIX=sec_rw */ , \
        SM_CFG_W1(0x00018044U), 0x4A03C001U /* TRDC_W_MRC2_DOM0_RGD0_W1:  MRC_M7MIX=sec_rw */ , \
        SM_CFG_Z1(0x0001804cU) /* TRDC_W_MRC2_DOM0_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018054U) /* TRDC_W_MRC2_DOM0_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001805cU) /* TRDC_W_MRC2_DOM0_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_W1(0x00018140U), 0x4A020001U /* TRDC_W_MRC2_DOM1_RGD0_W0:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x00018144U), 0x4A02C011U /* TRDC_W_MRC2_DOM1_RGD0_W1:  MRC_M7MIX=rw */ , \
        SM_CFG_Z1(0x0001814cU) /* TRDC_W_MRC2_DOM1_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018154U) /* TRDC_W_MRC2_DOM1_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001815cU) /* TRDC_W_MRC2_DOM1_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_W1(0x00018240U), 0x4A050000U /* TRDC_W_MRC2_DOM2_RGD0_W0:  MRC_M7MIX=sec_rw */ , \
        SM_CFG_W1(0x00018244U), 0x4A0AC001U /* TRDC_W_MRC2_DOM2_RGD0_W1:  MRC_M7MIX=sec_rw */ , \
        SM_CFG_Z1(0x0001824cU) /* TRDC_W_MRC2_DOM2_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018254U) /* TRDC_W_MRC2_DOM2_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001825cU) /* TRDC_W_MRC2_DOM2_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_W1(0x00018340U), 0x4A020001U /* TRDC_W_MRC2_DOM3_RGD0_W0:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x00018344U), 0x4A02C011U /* TRDC_W_MRC2_DOM3_RGD0_W1:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x00018348U), 0x4A030001U /* TRDC_W_MRC2_DOM3_RGD1_W0:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x0001834cU), 0x4A03C011U /* TRDC_W_MRC2_DOM3_RGD1_W1:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x00018350U), 0x4A050001U /* TRDC_W_MRC2_DOM3_RGD2_W0:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x00018354U), 0x4A0AC011U /* TRDC_W_MRC2_DOM3_RGD2_W1:  MRC_M7MIX=rw */ , \
        SM_CFG_Z1(0x0001835cU) /* TRDC_W_MRC2_DOM3_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018444U) /* TRDC_W_MRC2_DOM4_RGD0_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001844cU) /* TRDC_W_MRC2_DOM4_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018454U) /* TRDC_W_MRC2_DOM4_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001845cU) /* TRDC_W_MRC2_DOM4_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018544U) /* TRDC_W_MRC2_DOM5_RGD0_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001854cU) /* TRDC_W_MRC2_DOM5_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018554U) /* TRDC_W_MRC2_DOM5_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001855cU) /* TRDC_W_MRC2_DOM5_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018644U) /* TRDC_W_MRC2_DOM6_RGD0_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001864cU) /* TRDC_W_MRC2_DOM6_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018654U) /* TRDC_W_MRC2_DOM6_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001865cU) /* TRDC_W_MRC2_DOM6_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018744U) /* TRDC_W_MRC2_DOM7_RGD0_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001874cU) /* TRDC_W_MRC2_DOM7_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018754U) /* TRDC_W_MRC2_DOM7_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001875cU) /* TRDC_W_MRC2_DOM7_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018844U) /* TRDC_W_MRC2_DOM8_RGD0_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001884cU) /* TRDC_W_MRC2_DOM8_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018854U) /* TRDC_W_MRC2_DOM8_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x0001885cU) /* TRDC_W_MRC2_DOM8_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_W1(0x00018940U), 0x4A020001U /* TRDC_W_MRC2_DOM9_RGD0_W0:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x00018944U), 0x4A02C011U /* TRDC_W_MRC2_DOM9_RGD0_W1:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x00018948U), 0x4A030001U /* TRDC_W_MRC2_DOM9_RGD1_W0:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x0001894cU), 0x4A03C011U /* TRDC_W_MRC2_DOM9_RGD1_W1:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x00018950U), 0x4A050001U /* TRDC_W_MRC2_DOM9_RGD2_W0:  MRC_M7MIX=rw */ , \
        SM_CFG_W1(0x00018954U), 0x4A0AC011U /* TRDC_W_MRC2_DOM9_RGD2_W1:  MRC_M7MIX=rw */ , \
        SM_CFG_Z1(0x0001895cU) /* TRDC_W_MRC2_DOM9_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018a44U) /* TRDC_W_MRC2_DOM10_RGD0_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018a4cU) /* TRDC_W_MRC2_DOM10_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018a54U) /* TRDC_W_MRC2_DOM10_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018a5cU) /* TRDC_W_MRC2_DOM10_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018b44U) /* TRDC_W_MRC2_DOM11_RGD0_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018b4cU) /* TRDC_W_MRC2_DOM11_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018b54U) /* TRDC_W_MRC2_DOM11_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018b5cU) /* TRDC_W_MRC2_DOM11_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018c44U) /* TRDC_W_MRC2_DOM12_RGD0_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018c4cU) /* TRDC_W_MRC2_DOM12_RGD1_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018c54U) /* TRDC_W_MRC2_DOM12_RGD2_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00018c5cU) /* TRDC_W_MRC2_DOM12_RGD3_W1:  MRC_M7MIX=clearing */ , \
        SM_CFG_Z1(0x00010020U) /* TRDC_W_MBC0_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_Z1(0x00012020U) /* TRDC_W_MBC1_MEMN_GLBAC0:  0 (default) */ , \
        SM_CFG_W1(0x00018020U), 0x6600U /* TRDC_W_MRC2_GLBAC0:  sec_rw */ , \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

#endif /* CONFIG_TRDC_H */

/** @} */



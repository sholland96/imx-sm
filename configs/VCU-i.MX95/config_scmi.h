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
        /* M7 CPU sleep/wake protocol permission (SCMI_CpuSleepModeSet/ \
         * SCMI_CpuIrqWakeSet/SCMI_CpuResetVectorSet), needed for STOP and \
         * SUSPEND sleep/wake. Staged correctly in VCU-i.MX95.mex via \
         * SMCT's GUI (System > Resources > SCMI_AGENT0 > M7P), but \
         * SMCT's "Update Code" regenerates this project's own \
         * configs/VCU-i.MX95/config_scmi.h reference copy, not this \
         * actual buildable file in the separate imx-sm checkout -- \
         * confirmed by diffing the two after a regeneration: the \
         * reference copy picked up clkPerms/cpuPerms/pdPerms/perfPerms \
         * for M7, this file didn't move at all. Hand-synced from that \
         * reference copy as a result; re-sync here if config_scmi.h is \
         * ever regenerated directly against this checkout instead. */ \
        .clkPerms[DEV_SM_CLK_M7SYSTICK] = SM_SCMI_PERM_EXCLUSIVE, \
        .cpuPerms[DEV_SM_CPU_M7P] = SM_SCMI_PERM_EXCLUSIVE, \
        .pdPerms[DEV_SM_PD_M7] = SM_SCMI_PERM_EXCLUSIVE, \
        .perfPerms[DEV_SM_PERF_M7] = SM_SCMI_PERM_EXCLUSIVE, \
        /* System protocol permission (SCMI_SystemPowerStateSet), needed \
         * for the vendor-defined SCMI_SYS_STATE_FULL_SHUTDOWN state -- a \
         * full SoC power-off down to just the battery-backed BBSM domain \
         * (BBNSM_SystemPowerOff()), woken by a physical press of SW4 \
         * (the board's ONOFF button) causing a genuine cold reboot, not a \
         * resume. Not representable in VCU-i.MX95.mex/SMCT at all -- \
         * hand-added, will need to be reapplied if this file regenerates. \
         * Per rpc_scmi_sys.c's own permission check, non-graceful full-SoC \
         * states (>= SYS_STATE_FULL_SHUTDOWN) require SM_SCMI_PERM_EXCLUSIVE, \
         * same tier already granted for the M7-domain-only perms above. */ \
        .sysPerms = SM_SCMI_PERM_EXCLUSIVE, \
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
        /* AON-domain wake-pin validation (GPIO1_IO14/SAI1_RXD0, MQS1_R \
         * tapped upstream of its audio filter at R629 -- see the plan's \
         * deferred "Phase 3"). Not a resource SMCT's .mex has any entry \
         * for at all (unlike the numbered GPIO_IOxx pins above) -- \
         * hand-added, will need to be reapplied if this file regenerates. \
         * No daisyPerms needed: this pad's GPIO1_IO_BIT14 alt function has \
         * no input daisy register (inputRegister=0 in its pin-mux macro). */ \
        .pinPerms[DEV_SM_PIN_SAI1_RXD0] = SM_SCMI_PERM_EXCLUSIVE, \
        /* Diagnostic: isolating whether GPIO1_IO14/SAI1_RXD0's wake-IRQ \
         * instability (real, ground-truth-confirmed correct pad config, \
         * still climbing) is specific to that audio-adjacent pad or a \
         * GPIO1/AON-domain-wide characteristic -- testing GPIO1_IO4 \
         * (UART1_RXD, TP8 test point) instead, an audio-unrelated pad. \
         * Costs A55's debug console (not in active use). Same "no \
         * resource in .mex at all" situation as SAI1_RXD0 above -- \
         * hand-added, will need to be reapplied if this file regenerates. \
         * No daisyPerms needed (inputRegister=0 in its pin-mux macro). */ \
        .pinPerms[DEV_SM_PIN_UART1_RXD] = SM_SCMI_PERM_EXCLUSIVE, \
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
        /* I2C2 bring-up (onboard PCAL6524 IO expanders at 0x20/0x22 -- \
         * CAN_STBY, ENET1/2_nRST, EXT_3V3/5V0_PWR_EN, etc. -- see \
         * Core/vcu_i2c.c). SCMI-mediated pin mux for I2C2_SCL/SDA \
         * (id 114/115, dev_sm_pin.h) -- these pads have no PIN_xxx \
         * resource entry in VCU-i.MX95.mex at all (same situation as \
         * SAI1_RXD0/UART1_RXD above), so hand-added here directly -- will \
         * need to be reapplied if this file regenerates. No daisyPerms \
         * needed (inputRegister=0 in both pins' pin-mux macros, per \
         * fsl_iomuxc.h). Also grants the LPI2C2 clock root (id 48, \
         * dev_sm_clock.h) needed for LPI2C_MasterInit()'s SCMI-mediated \
         * clock-enable call -- same hand-add situation as \
         * clkPerms[DEV_SM_CLK_M7SYSTICK] above (no .mex resource entry \
         * for LPI2C2_CLK_ROOT either). \
         * \
         * NOT covered here: the LPI2C2 *peripheral register block* TRDC \
         * grant itself (distinct from these SCMI permission-table \
         * entries -- this is the raw MBC access-control bit that lets M7 \
         * touch LPI2C2's registers at all). Unlike pinPerms/clkPerms, \
         * this is a packed multi-peripheral TRDC BLK_CFG word (see the \
         * LPUART3/LPSPI6 grants in config_trdc.h for the shape) with no \
         * safe way to hand-derive from first principles -- guessing the \
         * wrong bit risks corrupting an adjacent peripheral's grant in \
         * the same word, or a POR reset loop on next boot (see \
         * feedback-trdc-ungranted-read-causes-por memory). Added an \
         * "LPI2C2" resource entry to VCU-i.MX95.mex's SCMI_AGENT0 \
         * resources array instead (mirrors LPUART3's exact struct shape, \
         * perm="sec_rw") -- this needs SMCT's "Update Code" run against \
         * the real .mex to correctly regenerate config_trdc.h with the \
         * right bit, same as every other Assigned-Resources-driven grant \
         * in this project. */ \
        .pinPerms[DEV_SM_PIN_I2C2_SCL] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_I2C2_SDA] = SM_SCMI_PERM_EXCLUSIVE, \
        .clkPerms[DEV_SM_CLK_LPI2C2] = SM_SCMI_PERM_EXCLUSIVE, \
        /* Ethernet PHY power-down via NETC's standalone EMDIO block \
         * (Core/vcu_ethernet.c) -- confirmed real savings on this board's \
         * YT8521S PHYs (~119mW/chip, per its datasheet's Power-Down vs. \
         * Link-Down comparison), unlike ENET1/2_nRST (logic reset only, \
         * doesn't gate the PHY's power rails -- see vcu_expander.h). \
         * Sequencing/register set confirmed against NXP's own working \
         * FRDM-IMX95 M7 example (mcuxsdk/examples/_boards/frdmimx95/ \
         * driver_examples/netc/txrx_transfer/cm7/hardware_init.c), not \
         * guessed -- that example's BOARD_InitHardware() enables all \
         * three clock roots below and pokes BLK_CTRL_NETCMIX/does the \
         * NETC_PRIV IERB lock/unlock cycle before ANY NETC sub-module \
         * (including EMDIO) is used, so all of it is carried over here \
         * even though only EMDIO itself is actually needed functionally -- \
         * trimming that down was not attempted, to avoid the same kind of \
         * multi-round hardware debugging SUSPEND needed the first time. \
         * NETC's own power domain (id 18) is distinct from M7's own -- a \
         * foreign domain, not proven "safe to write" by M7's own boot the \
         * way the M7 domain's grants are (see \
         * feedback-trdc-self-write-hazard memory, N/A here since this \
         * isn't M7's own domain). ENET1_MDC/MDIO (ids 46/47) are the one \
         * physical MDC/MDIO pad pair on this board, shared by both PHYs \
         * (ENET1 strapped to PHY address 1, ENET2 to address 2, per the \
         * schematic's PHY Address Bits table on each ENET page) -- no \
         * ENET2-specific pin grant needed. daisyPerms[7]/[8] needed: \
         * confirmed via fsl_iomuxc.h that ENET1_MDC's NETC_MDC alt \
         * function macro has a nonzero input-daisy register field (unlike \
         * I2C2's pins above), matching DEV_SM_DAISY_NETC_EMDC/EMDIO in \
         * dev_sm_pin.h. \
         * \
         * NOT covered here: the NETC_EMDIO0/BLK_CTRL_NETCMIX/NETC_PRB \
         * peripheral-register-block TRDC grants themselves -- same \
         * "can't safely hand-derive a packed TRDC word" situation as \
         * LPI2C2 above. Added as three resource entries to \
         * VCU-i.MX95.mex's SCMI_AGENT0 resources array instead (indices \
         * 30-32, mirroring LPUART3's exact struct shape, perm="sec_rw"), \
         * confirmed as legitimate config-tool-known resource names via \
         * devices/MIMX95/configtool/netcmix.cfg (NETC_EMDIO0: PD_NETC, \
         * MBC_E0=0.14-15, MBC_E0=0.17; BLK_CTRL_NETCMIX: PD_NETC, \
         * MBC_E0=2.1; NETC_PRB: PD_NETC, MBC_E0=2.11) -- needs SMCT's \
         * "Update Code" run against the real .mex, then hand-sync into \
         * config_trdc.h same as every other Assigned-Resources-driven \
         * grant in this project. */ \
        .pdPerms[DEV_SM_PD_NETC] = SM_SCMI_PERM_EXCLUSIVE, \
        .clkPerms[DEV_SM_CLK_ENET] = SM_SCMI_PERM_EXCLUSIVE, \
        .clkPerms[DEV_SM_CLK_ENETREF] = SM_SCMI_PERM_EXCLUSIVE, \
        .clkPerms[DEV_SM_CLK_ENETTIMER1] = SM_SCMI_PERM_EXCLUSIVE, \
        .daisyPerms[7] = SM_SCMI_PERM_EXCLUSIVE, \
        .daisyPerms[8] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_ENET1_MDC] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_ENET1_MDIO] = SM_SCMI_PERM_EXCLUSIVE, \
        /* Corrected after reading NXP's own FRDM-IMX95 pin_mux.c \
         * directly: the shared EMDIO bus for both onboard PHYs actually \
         * runs through the ENET2_MDC/ENET2_MDIO pads, not ENET1's -- \
         * confirmed as the root cause of every MDIO transaction failing \
         * (0xFFFF/no response) even after TRDC grants, power domain, \
         * clock rate, IERB sequencing, and PHY addressing were all \
         * independently confirmed correct. ENET1's grants above are now \
         * unused but left in place (harmless). No new daisyPerms needed: \
         * daisyPerms[7]/[8] (DAISY_NETC_EMDC/EMDIO) are per-register, \
         * not per-source -- the same physical daisy-select registers \
         * choose between ENET1 and ENET2 as the value written, already \
         * covered by the existing grants. */ \
        .pinPerms[DEV_SM_PIN_ENET2_MDC] = SM_SCMI_PERM_EXCLUSIVE, \
        .pinPerms[DEV_SM_PIN_ENET2_MDIO] = SM_SCMI_PERM_EXCLUSIVE, \
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



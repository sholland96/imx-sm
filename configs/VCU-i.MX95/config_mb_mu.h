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
 * Header file containing configuration info for the MB_MU.
 */
/*==========================================================================*/

#ifndef CONFIG_MB_MU_H
#define CONFIG_MB_MU_H

/* Includes */

#include "config_user.h"
#include "mb_mu_config.h"

/* Defines */


/*--------------------------------------------------------------------------*/
/* LM0 MB_MU Config (SM)                                                    */
/*--------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------*/
/* LM1 MB_MU Config (LM1)                                                   */
/*--------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------*/
/* LM2 MB_MU Config (M7)                                                    */
/*--------------------------------------------------------------------------*/

/*! Config for MB_MU9 instance (uses MU9, used by SCMI_AGENT0) */
#define SM_MB_MU9_CONFIG \
    { \
        .mu = 9U, \
        .xportType[0] = SM_XPORT_SMT, \
        .xportChannel[0] = 0U, \
        .xportType[1] = SM_XPORT_SMT, \
        .xportChannel[1] = 1U, \
    }


/*--------------------------------------------------------------------------*/
/* MB_MU Config                                                             */
/*--------------------------------------------------------------------------*/

/*! Config for number of MB_MU instances */
#define SM_NUM_MB_MU  1U

/*! Config data array for MB_MU instances */
#define SM_MB_MU_CONFIG_DATA \
    SM_MB_MU9_CONFIG

#endif /* CONFIG_MB_MU_H */

/** @} */



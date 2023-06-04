/* Copyright (C) 2019 RDA Technologies Limited and/or its affiliates("RDA").
 * All rights reserved.
 *
 * This software is supplied "AS IS" without any warranties.
 * RDA assumes no responsibility or liability for the use of the software,
 * conveys no license or title under any patent, copyright, or mask work
 * right to the product. RDA reserves the right to make changes in the
 * software without notification.  RDA also make no representation or
 * warranty that such application will be suitable for the specified use
 * without further testing or modification.
 */

#ifndef _BT_APP_CONFIG_H_
#define _BT_APP_CONFIG_H_

// Auto generated. Don't edit it manually!

/**
 * use ap-wcn IPC for bt communication
 */
#define CONFIG_BT_COMM_USE_WCN_IPC

/**
 * use internal uart for bt communication
 */
/* #undef CONFIG_BT_COMM_USE_INT_UART */

/**
 * ap must wakeup before bt sleeptime expire
 */
#define CONFIG_BT_SLEEPTIME_SYNC_WITH_AP

#endif

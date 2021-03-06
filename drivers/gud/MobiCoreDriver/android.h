/**
 * Header file of MobiCore Driver Kernel Module.
 *
 * @addtogroup MobiCore_Driver_Kernel_Module
 * @{
 * Android specific defines
 * @file
 *
 * Android specific defines
 *
 * <!-- Copyright Giesecke & Devrient GmbH 2009-2012 -->
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _MC_ANDROID_H_
#define _MC_ANDROID_H_

#ifdef CONFIG_ANDROID
/* Defines needed to identify the Daemon in Android systems
 * For the full list see:
 * platform_system_core/include/private/android_filesystem_config.h in the
 * Android source tree
 */
/* traditional unix root user */
#define AID_ROOT	0
/* system server */
#define AID_SYSTEM	1000
/* access to misc storage */
#define AID_MISC	9998
#define AID_NOBODY	9999
/* first app user */
#define AID_APP		10000

#endif /* CONFIG_ANDROID */

#endif /* _MC_ANDROID_H_ */
/** @} */

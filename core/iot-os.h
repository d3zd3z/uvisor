#ifndef __IOT_OS_H__
#define __IOT_OS_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "uvisor-config.h"

#include <tfp_printf.h>
#define dprintf tfp_printf

#define PACKED __attribute__((packed))
#define WEAK __attribute__ ((weak))
#define ALIAS(f) __attribute__ ((weak, alias (#f)))

/* EFM32 definitions */
#include <em_device.h>

/* per-project-configuration */
#include <config.h>

#ifdef  CHANNEL_DEBUG
#if (CHANNEL_DEBUG<0) || (CHANNEL_DEBUG>31)
#error "Debug channel needs to be >=0 and <=31"
#endif
#endif/*CHANNEL_DEBUG*/

/* system wide error codes  */
#include <iot-error.h>

/* MPU definitions */
#ifdef  EFM32GG
#if (__MPU_PRESENT == 1)
#define MPU_REGIONS 8
#endif
#endif/*EFM32GG*/

/* IOT-OS specific includes */
#include <isr.h>
#include <svc-helper.h>
#include <linker.h>

#endif/*__IOT_OS_H__*/

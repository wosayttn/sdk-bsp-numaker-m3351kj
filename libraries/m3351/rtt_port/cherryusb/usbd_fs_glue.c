/**************************************************************************//**
*
* @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
*
* SPDX-License-Identifier: Apache-2.0
*
* Change Logs:
* Date            Author           Notes
* 2023-8-8        Wayne            First version
*
******************************************************************************/
#include "rtthread.h"

#if defined(PKG_USING_CHERRYUSB)

#include "rthw.h"
#include "NuMicro.h"
#include "usb_config.h"

#define LOG_TAG    "drv.cherry"
#define DBG_ENABLE
#define DBG_SECTION_NAME   LOG_TAG
#define DBG_LEVEL   LOG_LVL_DBG
#define DBG_COLOR
#include <rtdbg.h>

void USBD_IRQHandler(void)
{
    rt_interrupt_enter();

    void CherryUSB_USBD_IRQHandler(uint8_t busid);
    CherryUSB_USBD_IRQHandler(0);

    rt_interrupt_leave();
}

void usb_dc_low_level_init(void)
{
    void nutool_modclkcfg_init_usbd(void);
    nutool_modclkcfg_init_usbd();

    /* Select USBD */
    SYS->USBPHY = (SYS->USBPHY & ~SYS_USBPHY_USBROLE_Msk) | SYS_USBPHY_USBEN_Msk ;
    SYS_ResetModule(USBD_RST);

    NVIC_EnableIRQ(USBD_IRQn);
}

void usb_dc_low_level_deinit(void)
{
    NVIC_DisableIRQ(USBD_IRQn);

    CLK_DisableModuleClock(USBD_MODULE);
}

#endif /* if defined(PKG_USING_CHERRYUSB) */

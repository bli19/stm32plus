/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */


#pragma once

/**
 * @file
 * This internal include file is included for you by the top-level stm32plus.h config file. Its purpose is to
 * include everything that's required from the ST Microelectronics Standard Peripheral Library.
 */

#if defined (STM32PLUS_F1_HD) || defined(STM32PLUS_F1_CL_E)

#include "fwlib/f1/stdperiph/inc/misc.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_dac.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_gpio.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_spi.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_rcc.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_dma.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_sdio.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_tim.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_flash.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_fsmc.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_rtc.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_pwr.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_bkp.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_usart.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_exti.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_i2c.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_flash.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_crc.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_adc.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_can.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_flash.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_cec.h"
#include "fwlib/f1/stdperiph/inc/stm32f10x_wwdg.h"

#elif defined(STM32PLUS_F4)

#include "fwlib/f4/stdperiph/inc/misc.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_adc.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_can.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_crc.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_dac.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_gpio.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_spi.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_rcc.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_dma.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_hash.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_sdio.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_tim.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_flash.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_fsmc.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_rng.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_rtc.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_pwr.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_usart.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_exti.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_i2c.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_flash.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_wwdg.h"
#include "fwlib/f4/stdperiph/inc/stm32f4xx_syscfg.h"

#else

#error STM32PLUS_Fn macro has not been defined: check config/stm32plus.h

#endif


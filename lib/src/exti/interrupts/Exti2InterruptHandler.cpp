/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#include "config/stm32plus.h"
#include "config/exti.h"


using namespace stm32plus;


// static initialiser for the hack that forces the IRQ handlers to be linked

template<> ExtiInterruptEnabler<2>::FPTR ExtiInterruptEnabler<2>::_forceLinkage=nullptr;
template<> ExtiPeripheral<EXTI_Line2> *ExtiPeripheral<EXTI_Line2>::_extiInstance=nullptr;


#if defined(USE_EXTI2_INTERRUPT)

extern "C" {

  void __attribute__ ((interrupt("IRQ"))) EXTI2_IRQHandler(void) {

    if(EXTI_GetITStatus(EXTI_Line2)!=RESET) {
        Exti2::_extiInstance->ExtiInterruptEventSender.raiseEvent(2);
        EXTI_ClearITPendingBit(EXTI_Line2);
    }
    __DSB();      // prevent erroneous recall of this handler due to delayed memory write
  }
}

#endif

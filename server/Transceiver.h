#ifndef __TRANSCEIVER__H__
#define __TRANSCEIVER__H__

#include "Main.h"

#define PIN_TRASMITTER 8
#define BITS_PER_SEC 2000

void InitializeTransceiver();
void SendData (uint8_t *message);

#endif
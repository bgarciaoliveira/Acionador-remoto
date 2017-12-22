#ifndef __TRANSCEIVER__H__
#define __TRANSCEIVER__H__

#include "Main.h"

#define PIN_RECEIVER 9
#define BITS_PER_SEC 2000

static uint8_t IncomingPacketBuffer[MAX_PACKETSIZE];

void InitializeTransceiver();
void CheckIncomingPackets();

#endif
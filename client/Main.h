#ifndef __MAIN_H__
#define __MAIN_H__

#include <VirtualWire.h>
#include <EEPROM.h>

#define DEFAULT_SPEED 9600

#include <Packet.h>
#include <Security.h>

#include "IO.h"
#include "Arduino.h"
#include "Transceiver.h"
#include "PacketImpl.h"
#include "ProcessReceivePacket.h"

void Main();
void Loop();

#endif
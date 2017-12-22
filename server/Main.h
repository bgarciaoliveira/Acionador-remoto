#ifndef __MAIN_H__
#define __MAIN_H__

#include <SPI.h>
#include <Ethernet.h>
#include <VirtualWire.h>
#include <EEPROM.h>

#define DEFAULT_SPEED 9600

#include <Packet.h>
#include <Security.h>

#include "IO.h"
#include "Arduino.h"
#include "Server.h"
#include "Transceiver.h"
#include "Packet.h"
#include "PacketImpl.h"
#include "Client.h"
#include "Parser.h"
#include "Views.h"
#include "Security.h"
#include "Functions.h"

void Main();
void Loop();

#endif
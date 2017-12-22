#include "ProcessReceivePacket.h"

void ProcessReceivePacket(uint8_t *message, st_PacketHeader packetHeader){

	//os IDS e structs dos packets são definidos na common
	//pois são utilizados tanto no server quanto no client

	uint8_t packetId = packetHeader.PacketId;
	uint8_t packetSize = packetHeader.PacketSize;

	Serial.println("Packet received: Id " + String(packetId) + " Size: " + String(packetSize));

	if(packetId == PACKETID_IRIS){
		ReceiveIris();
	}

	else{
		Serial.println("Unknow received packet: Id " + String(packetId) + " Size: " + String(packetSize));
	}

	InSession.LastReceivedPacketClock = millis();
}
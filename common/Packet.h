#ifndef __PACKET__H__
#define __PACKET__H__

#include "Main.h"

struct st_PacketHeader{
	uint8_t  PacketId;
	uint8_t  PacketSize;
};

struct st_SendIris{
	st_PacketHeader PacketHeader;
};

struct st_ServerIris{
	st_PacketHeader PacketHeader;
};

st_PacketHeader BuildPacketHeader(uint8_t packetId, uint8_t packetSize);

#define PACKETID_IRIS 1

#define MAX_PACKETID 1
#define MAX_PACKETSIZE 80

#endif
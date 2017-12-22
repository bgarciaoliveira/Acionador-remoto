#include "Packet.h"

st_PacketHeader BuildPacketHeader(uint8_t packetId, uint8_t packetSize){
	st_PacketHeader p;
	memset(&p, 0, sizeof(p));

	p.PacketId = packetId;
	p.PacketSize = packetSize;

	return p;
}
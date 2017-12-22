#include "PacketImpl.h"

void PacketSendIris(){
	//apenas um fucking hello packet
	st_Iris p;
	memset(&p, 0, sizeof(p));

	p.PacketHeader = BuildPacketHeader(PACKETID_IRIS, sizeof(p));

	SendData((uint8_t*)&p);
}
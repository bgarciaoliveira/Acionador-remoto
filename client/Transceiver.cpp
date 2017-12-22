#include "Transceiver.h"

void InitializeTransceiver(){

	memset(&IncomingPacketBuffer, 0, MAX_PACKETSIZE);

	// Define PIN_RECEIVER como entrada 
	vw_set_rx_pin(PIN_RECEIVER); 

	// Bits por segundo
    vw_setup(BITS_PER_SEC);     

    // Inicializa o receptor
    vw_rx_start();    
}

void CheckIncomingPackets(){	

	uint8_t len = MAX_PACKETSIZE;

	if(vw_get_message(IncomingPacketBuffer, &len)){

		//DecryptPacket(IncomingPacketBuffer);

		st_PacketHeader packetHeader;
		memcpy(&packetHeader, &IncomingPacketBuffer, sizeof(st_PacketHeader));

		if(packetHeader.PacketId > 0 && packetHeader.PacketId <= MAX_PACKETID){
			if(packetHeader.PacketSize > 0 && packetHeader.PacketSize <= MAX_PACKETSIZE){
				ProcessReceivePacket(IncomingPacketBuffer, packetHeader);

				//clean packet buffer
				memset(&IncomingPacketBuffer, 0, MAX_PACKETSIZE);	
			}
		}
	}
}
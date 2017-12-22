#include "Packet.h"

void SendPacket(uint8_t *message){
	//EncryptPacket(message);

	SendData(message);
}
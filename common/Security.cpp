#include "Security.h"

void EncryptPacket(uint8_t *message){
	for(size_t i = 0; i < strlen((const char*)message); i++){
		message[i] ^= CRYPTO_KEY;
	}
}

void DecryptPacket(uint8_t *message){
	for(size_t i = 0; i < strlen((const char*)message); i++){
		message[i] ^= CRYPTO_KEY;
	}
}
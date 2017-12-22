#ifndef __SECURITY__H__
#define __SECURITY__H__

#include "Main.h"

void EncryptPacket(uint8_t *message);
void DecryptPacket(uint8_t *message);

#define CRYPTO_KEY 14

#endif
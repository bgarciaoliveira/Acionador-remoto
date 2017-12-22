#include "Main.h"

void Main(){
	Serial.begin(DEFAULT_SPEED);
	
	InitializeArduino();			
	InitializeTransceiver();
}

void Loop(){
	CheckIncomingPackets();
}


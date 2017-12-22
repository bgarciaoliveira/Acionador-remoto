#include "Main.h"

void Main(){
	Serial.begin(DEFAULT_SPEED);
	
	InitializeArduino();			
	InitializeTransceiver();
	InitializeServer();	
}

void Loop(){
	ProcessClientMessage();  
}


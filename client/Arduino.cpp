#include "Arduino.h"

//início do desenvolvimento: 27/09/2017
//término do desenvolvimento: 

st_Arduino Arduino;
st_InSession InSession;

void InitializeArduino(){
  	memset(&Arduino, 0, sizeof(Arduino));	
  	memset(&InSession, 0, sizeof(InSession));
    
  	ReadConfigurations();    
}

void WriteConfigurations(){
	 eewrite(0, Arduino);
}

void ReadConfigurations(){
	 eeread(0, Arduino);
}
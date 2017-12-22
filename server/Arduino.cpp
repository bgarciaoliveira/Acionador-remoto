#include "Arduino.h"

//início do desenvolvimento: 22/09/2017
//término do desenvolvimento: 27/09/2017

st_Arduino Arduino;
st_InSession InSession;

void InitializeArduino(){
  	memset(&Arduino, 0, sizeof(Arduino));	
  	memset(&InSession, 0, sizeof(InSession));
    
    InSession.LastReceivedPacketClock = 1;        

  	ReadConfigurations();    
}

void SetDefaultConfigurations(){
  	st_Arduino p;
  	memset(&p, 0, sizeof(p));

  	strncpy(p.User, DEFAULT_USER, sizeof(p.User));
  	strncpy(p.Pass, DEFAULT_PASS, sizeof(p.Pass)); 

  	memcpy_P(&p.Ip[0], &DEFAULT_IP[0], sizeof(p.Ip));
  	memcpy_P(&p.Gateway[0], &DEFAULT_GATEWAY[0], sizeof(p.Gateway));
  	memcpy_P(&p.SubNetwork[0], &DEFAULT_SUBNETWORK[0], sizeof(p.SubNetwork));
  	memcpy_P(&p.Mac[0], &DEFAULT_MAC[0], sizeof(p.Mac));

  	eewrite(0, p);
}

void WriteConfigurations(){
	 eewrite(0, Arduino);
}

void ReadConfigurations(){
	 eeread(0, Arduino);
}
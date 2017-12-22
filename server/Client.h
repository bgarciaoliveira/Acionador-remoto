#ifndef __CLIENT_H__
#define __CLIENT_H__

#include "Main.h"

#define MAX_LINE 80
#define MAX_RESPONSE_SIZE 400

void ChangeIP(EthernetClient &client, String line1, byte* destIp);
void ProcessClientMessage();

#define CODE_CHANGE_IP                 1
#define CODE_CHANGE_GATEWAY            2
#define CODE_CHANGE_SUBNETWORK         3
#define CODE_CHANGE_PASS               4
#define CODE_SETTINGS				   5
#define CODE_RESTART  				   6
#define CODE_LOGOFF                    7
#define CODE_IRIS            	   	   8
#define CODE_IRIS_RECEIVED     	   	   9

#define MAX_CODE 					   9

#endif
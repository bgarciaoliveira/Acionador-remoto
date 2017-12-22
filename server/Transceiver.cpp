#include "Transceiver.h"

void InitializeTransceiver(){

	//Define como pino de dados do transmissor
  	vw_set_tx_pin(PIN_TRASMITTER);
  	vw_setup(BITS_PER_SEC);
}

void SendData (uint8_t *message){
	//referencia: https://www.filipeflop.com/blog/modulo-rf-transmissor-receptor-433mhz-arduino/
  	vw_send(message, strlen(message));
  	vw_wait_tx(); // Aguarda o envio de dados
}
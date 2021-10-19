#include <string>

#include "mbed.h"

Serial pc(USBTX, USBRX);

DigitalOut LinkOn_LED(LED1);
DigitalOut IOT_ON_LED(LED2);
DigitalOut MAVLInk_LED(LED3);

EthernetInterface *pNetIf;


int main(void)
{

	LinkOn_LED = 0;
	IOT_ON_LED = 1;
	MAVLInk_LED = 0;

	pc.baud(115200);

	printf("Hello World!!");
}

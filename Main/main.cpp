#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);


int main()
{
	printf("printf test1\r\n");
	int i = 0;
	printf("printf test2\r\n");
    while (true) {
        led1 = !led1;
        led2 = !led2;
        led3 = !led3;
        led4 = !led4;
		printf("%d",i);
		i++;
		if (i > 9){
			i=0;
		}
        wait(1);
    }
}
#include<stdio.h>
#include<wiringPi.h>
#define LED 17
#define BT 11
int main(void)
{
	wiringPiSetupGpio();
	pinMode(LED,OUTPUT);
	pinMode(BT,INPUT);
	for(;;)
		{
		 if(digitalRead(BT)==0){
		    digitalWrite(LED,0);
			}
		 else{
		    digitalWrite(LED,1);
}
}
}

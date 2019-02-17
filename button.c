#include<stdio.h>
#include<wiringPi.h>

#define BUTTON 27
#define LED 17

int main(void)
{
	printf("HELLO\n");
	wiringPiSetupGpio();
	pinMode(BUTTON,INPUT);
	pinMode(LED,OUTPUT);
	for(;;)
	if(digitalRead(BUTTON)==0){
		digitalWrite(LED,LOW);
	}
	else{
		digitalWrite(LED,HIGH);

}
}

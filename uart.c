#include<stdio.h>
#include<wiringPi.h>
#include<wiringSerial.h>
int main(){
	int fd;
	fd = serialOpen("/dev/ttyAMA0",115200);
	int c;
	char *a = "t";
	wiringPiSetupGpio();
	pinMode(9,OUTPUT);
while(1)
	{
	//putchar(serialGetchar(fd));
	//fflush(stdout);
	c = serialGetchar(fd);
	printf("%c",c);
	if((c) == *a){
	digitalWrite(9,HIGH);
	delay(1000);
	}
	else{
	digitalWrite(9,LOW);
	delay(1000);
	}
}
}

#include<stdio.h>
#include<wiringPi.h>
#include<wiringSerial.h>

int main(){
	int fd;
	fd = serialOpen("/dev/ttyAMA0",115200);
	int c;

for(;;)
	{
	//putchar(serialGetchar(fd));
	//fflush(stdout);
	c = serialGetchar(fd);
	printf("%c",c);
}
}

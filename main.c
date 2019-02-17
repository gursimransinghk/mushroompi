#include<stdio.h>
#include<wiringPi.h>
#include<string.h>

#define LED 17  //BCM

char *dash(char *buf, int len ) {
    memset(buf, '-', len);
    buf[len] = 0;
    return buf;
}

int main (void)
{
	char buf[60];
	printf("%s\n", dash(buf,60));
	printf("PROJECT     : EMBEDDING EMBEDDED IN MUSHROOM GROWING\n");
	printf("%s\n", dash(buf,60));
	printf("BY          : NAME\t\t\tSTUDENT ID\n");
	printf("              GURLAL SINGH\t\tC0717098\n");
	printf("              SANDEEP KAUR\t\tC0722494\n");
	printf("              HARPREET SINGH\t\tC0719364\n");
	printf("              HARJAP KAUR\t\tC0721913\n");
	printf("%s\n", dash(buf,60));
	printf("INSTRUCTORS : PROF. TAKIS ZOURNTOS\n\t      PROF. MIKE ALESHAMS\n");
	printf("%s\n", dash(buf,60));

	wiringPiSetupGpio();
	pinMode(LED,OUTPUT);
	//int x;
	for(;;)  //for (x=0; x<5; x++)
	       {
		 digitalWrite(LED, HIGH);
		 delay(500);
		 digitalWrite(LED, LOW);
		 delay(500);
		}
	return 0;
}


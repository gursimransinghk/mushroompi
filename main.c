#include<stdio.h>
#include<wiringPi.h>
#include<string.h>

#define LED 17          //LED
#define RELAY 27	//Moisture Pump
#define RELAY2 22	//Cooling Pump
#define RELAY3 10	//Nutrient Pump
#define RELAY4 9 	//Heater
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
	/*WiringPi GPIO*/
	pinMode(LED,OUTPUT);		//LED
	pinMode(RELAY,OUTPUT);	//Moisture Pump
	pinMode(RELAY2,OUTPUT);	//Cooling Pump
	pinMode(RELAY3,OUTPUT);	//Nutrient Pump
	pinMode(RELAY4,OUTPUT);	//Heater

	digitalWrite(RELAY,0);
	digitalWrite(RELAY2,0);
	digitalWrite(RELAY3,0);
	digitalWrite(RELAY4,0);

	//int x;
	for(;;)  //for (x=0; x<5; x++)
	       {
		 digitalWrite(LED, 1);
		 delay(500);
		 digitalWrite(LED, 0);
		 delay(500);
		}
}


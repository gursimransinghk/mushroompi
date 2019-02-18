/*PROGRAM FOR RASPBERRYPI MODEL 3B+*/
/*PROGRAM SOURCE - https://www.github.com/gs369/mushroompi*/

/*LIBRARY*/
#include<stdio.h>
#include<wiringPi.h>
#include<string.h>
/*DECLARAION OF RASPBERRYPI PINS*/
#define LED 17          //LED
#define RELAY 27	//Moisture Pump
#define RELAY2 22	//Cooling Pump
#define RELAY3 10	//Nutrient Pump
#define RELAY4 9 	//Heater
#define SOIL_S 11	//SOIL SENSOR
#define TEMP_S 0	//TEMPERATURE SENSOR
#define LIGHT_S 5	//LIGHT SENSOR(LDR)
#define ION_S 6 	//NUTRIENT SENSOR(ION)
/*FOR LINES*/
char *dash(char *buf, int len ) {
   memset(buf, '-', len);
   buf[len] = 0;
   return buf;
}
/*DISPLAY - PROJECT,NAME,STUDENT_ID,INSTRUCTORS*/
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
	/*GPIO*/
	wiringPiSetupGpio();
	/*WiringPi GPIO*/
	/*DECLARATION OF OUTPUTS*/
	pinMode(LED,OUTPUT);	//LED
	pinMode(RELAY,OUTPUT);	//Moisture Pump
	pinMode(RELAY2,OUTPUT);	//Cooling Pump
	pinMode(RELAY3,OUTPUT);	//Nutrient Pump
	pinMode(RELAY4,OUTPUT);	//Heater
	/*DECLARATION OF INPUTS*/
	pinMode(SOIL_S,INPUT);
	pinMode(TEMP_S,INPUT);
	pinMode(LIGHT_S,INPUT);
	pinMode(ION_S,INPUT);
	/*SENSOR FUNCTIONS*/
	for(;;){
	if(digitalRead(SOIL_S)==0){
		digitalWrite(RELAY,1);
		}
	else{
		digitalWrite(RELAY,0);
		}
		
	if(digitalRead(TEMP_S)==0){
		digitalWrite(RELAY1,1);
		}
	else{
		digitalWrite(RELAY1,0);
		}
		
	if(digitalRead(LIGHT_S)==0){
		digitalWrite(RELAY2,1);
		}
	else{
		digitalWrite(RELAY2,0);
		}
		
	if(digitalRead(ION_S)==0){
		digitalWrite(RELAY3,1);
		}
	else{
		digitalWrite(RELAY3,0);
		}
	//int x;
	 //for (x=0; x<5; x++);
}
}


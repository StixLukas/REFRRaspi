#include <wiringPi.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define RED 7
#define GREEN 0

void verkabeltesPiBlink(char[],int);

int main (int argc, char *argv[])
{
char* color = argv[1];
int hertz = atoi(argv[2]);
	if(argc != 3){
	printf("please supply 2 arguments");
	exit(0);
	}

printf("%s %d",color,hertz);
  verkabeltesPiBlink(color,hertz);
  return 0 ;
}

void verkabeltesPiBlink(char color[],int hertz){
	wiringPiSetup();
	if(strcmp(color,"red")){
	pinMode(RED,OUTPUT);
	for(;;){
	digitalWrite(RED,HIGH);
	delay(hertz/2);
	digitalWrite(RED,LOW);
	delay(hertz/2);
	}
	}
	if(strcmp(color,"green")){
	pinMode(GREEN,OUTPUT);

	}
	if(strcmp(color,"all"))
	{
	pinMode(RED,OUTPUT); pinMode(GREEN,OUTPUT);
	}
}

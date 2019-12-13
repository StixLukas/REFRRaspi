#include "functions.h"


int blinkGreen(int);
int blinkRed(int);
int blinkAll(int);
int blinkRandom();
int blinkSplit(int, int);

int main (int argc, char *argv[])
{
srand(time(0));
char* color = argv[1];
int hertz = atoi(argv[2])/1000;
	if(argc != 3){
	printf("please supply 2 arguments");
	exit(0);
	}else if(strcmp(argv[1],"random"))
	{
	GPIOExport(GPIOGREEN); GPIOExport(GPIORED);
	GPIODirection(GPIOGREEN,OUT); GPIODirection(GPIORED, OUT);
	blinkRandom();
	}

printf("%s %d",color,hertz);
//  verkabeltesPiBlink(color,hertz);

//native C
if(strcmp(color,"red")){
GPIOExport(GPIORED);
GPIODirection(GPIORED,OUT);
blinkRed(hertz);
}
else if(strcmp(color,"green")){
GPIOExport(GPIOGREEN);
GPIODirection(GPIOGREEN,OUT);
blinkGreen(hertz);
}
else if(strcmp(color,"all")){
GPIOExport(GPIOGREEN);
GPIOExport(GPIORED);
GPIODirection(GPIOGREEN,OUT);
GPIODirection(GPIORED,OUT);
blinkAll(hertz);
}


  return 0 ;
}

int blinkGreen(int hertz){
	while(1)
	{
	GPIOWrite(GPIOGREEN,HIGH);
	sleep(hertz/2);
	GPIOWrite(GPIOGREEN,LOW);
	sleep(hertz/2);
	}

}

int blinkRed(int hertz){
	while(1)
	{
	GPIOWrite(GPIORED,HIGH);
	sleep(hertz/2);
	GPIOWrite(GPIORED,LOW);
	sleep(hertz/2);
	}
}


int blinkAll(int hertz){
	while(1)
	{
	GPIOWrite(GPIORED,HIGH); GPIOWrite(GPIOGREEN,HIGH);
	sleep(hertz/2);
	GPIOWrite(GPIORED,LOW); GPIOWrite(GPIOGREEN,LOW);
	sleep(hertz/2);
	}
}

int blinkRandom(){
	int hertz = 0;
	int lowEnd = 3;
	int highEnd = 25;
	while(1)
	{
	hertz = ((rand() % (highEnd - lowEnd + 1)) + lowEnd)/1000;
	blinkAll(hertz);
	}
}


int blinkSplit(int frequenzRed, int frequenzGreen){

	

}

#include <wiringPi.h>
#define RED 7
#define GREEN 0

void verkabeltesPiBlink(char *argv);

int main (int argc, char *argv)
{
	if(argc != 2){
	fprintf("please supply 2 arguments");
	exit(EXIT_FAILURE);
	}

  verkabeltesPiBlink(*argv);
  return 0 ;
}

void verkabeltesPiBlink(char *argv){
	wiringPiSetup();
	if(strcmp(*argv[0],"red")){
	pinMode(RED,OUTPUT);
	digitalWrite(RED,OUTPUT);

	}
	if(strcmp(*argv[0],"green")){
	pinMode(GREEN,OUTPUT);

	}
	if(strcmp(*argv[0],"all"))
	{
	pinMode(RED,OUTPUT); pinMode(GREEN,OUTPUT);
	}

	for(;;)
	{
		digitalWrite(RED, HIGH); digitalWrite(GREEN,HIGH); delay(25);
		digitalWrite(RED, LOW); digitalWrite(GREEN,LOW); delay(25);
	}
}

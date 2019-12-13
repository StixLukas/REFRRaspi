#include "functions.h"





int main (int argc, char *argv[])
{
//char* color = argv[1];
//int hertz = atoi(argv[2]);
//	if(argc != 3){
//	printf("please supply 2 arguments");
//	exit(0);
//	}
//
//printf("%s %d",color,hertz);
//  verkabeltesPiBlink(color,hertz);

//native C

GPIOExport(GPIORED);
GPIODirection(GPIORED,IN);
GPIOWrite(GPIORED,HIGH);

/*
	 * Enable GPIO pins
	 */
	if (-1 == GPIOExport(POUT) || -1 == GPIOExport(PIN))
		return(1);

	/*
	 * Set GPIO directions
	 */
	if (-1 == GPIODirection(POUT, OUT) || -1 == GPIODirection(PIN, IN))
		return(2);

	do {
		/*
		 * Write GPIO value
		 */
		if (-1 == GPIOWrite(POUT, repeat % 2))
			return(3);

		/*
		 * Read GPIO value
		 */
		printf("I'm reading %d in GPIO %d\n", GPIORead(PIN), PIN);

		usleep(500 * 1000);
	}
	while (repeat--);

	/*
	 * Disable GPIO pins
	 */
	if (-1 == GPIOUnexport(POUT) || -1 == GPIOUnexport(PIN))
		return(4);

	return(0);

  return 0 ;
}


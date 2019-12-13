//
// Created by Lukas on 13.12.2019.
//

#ifndef GPIO_G3UEBUNG_FUNCTIONS_H
#define GPIO_G3UEBUNG_FUNCTIONS_H
#include <wiringPi.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#define IN  0
#define OUT 1

#define LOW  0
#define HIGH 1

#define GPIOGREEN  4 /* P1-18 */
#define GPIORED 17  /* P1-07 */

#define RED 7
#define GREEN 0

void verkabeltesPiBlink(char[],int);
int GPIOExport(int);
int GPIOUnexport(int);
int GPIODirection(int, int);
int GPIORead(int);
int GPIOWrite(int, int);
#endif //GPIO_G3UEBUNG_FUNCTIONS_H

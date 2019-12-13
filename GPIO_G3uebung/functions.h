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

#define IN  0
#define OUT 1

#define LOW  0
#define HIGH 1

#define GPIOGREEN  17 /* P1-18 */
#define GPIORED 4  /* P1-07 */

#define RED 7
#define GREEN 0

void verkabeltesPiBlink(char[],int);
static int GPIOExport(int pin);
static int GPIOUnexport(int pin);
static int GPIODirection(int pin, int dir);
static int GPIORead(int pin);
static int GPIOWrite(int pin, int value);
#endif //GPIO_G3UEBUNG_FUNCTIONS_H

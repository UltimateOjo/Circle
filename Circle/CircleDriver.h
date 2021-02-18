/*File Name:Ojo-2866987-Lab-10
	Author: Gbenga Ojo
        KUID: 2866987
	Email Address: o646o376@ku.edu
	Homework Assignment Number: 10
	Description: Create a class that takes in the radius x and y position of two citcles to deterine different calculations.
	Last Changed: 5/6/2020
  */

#ifndef CIRCLEDRIVER_H
#define CIRCLEDRIVER_H
#include"Circle.h"

class CircleDriver
{
private:
int x=0;
Circle circ1;
Circle circ2;

public:
void run();

void obtainCircles();

void printCircleInfo();


};
#endif

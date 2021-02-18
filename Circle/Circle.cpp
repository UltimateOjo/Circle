/*File Name:Ojo-2866987-Lab-10
	Author: Gbenga Ojo
        KUID: 2866987
	Email Address: o646o376@ku.edu
	Homework Assignment Number: 10
	Description: Create a class that takes in the radius x and y position of two citcles to deterine different calculations.
	Last Changed: 5/6/2020
  */

#include "Circle.h"
#include"CircleDriver.h"
#include<math.h>


Circle::Circle()
{
  radius=0;
  xPos=0;
  yPos=0;
}

double Circle::area()
{
  double ans=0;
  ans=3.14*radius*radius;
  return(ans);
}

double Circle::diameter()
{
  double ans2=0;
  ans2=radius*2;
  return(ans2);
}
double Circle::circumference()
{
  double ans3=0;
  ans3=2*3.14*radius;
  return(ans3);
}

double Circle::distanceToOrigin()
{
double ans4=0;
ans4=sqrt((xPos-0)*(xPos-0)+(yPos-0)*(yPos-0));
return(ans4);
}



void Circle::setX(double x)
{
	if(x > 0)
	{
		xPos = x;
	}
	else
	{
		xPos = 0;
	}
}

void Circle::setY(double y)
{
	if(y > 0)
	{
		yPos = y;
	}
	else
	{
		yPos = 0;
	}
}

bool Circle::setRadius(double r)
{
  if(r>0)
  {
    radius=r;
    return(true);
  }
  else
  {
  radius=0;
  return(false);
  }
}

double Circle::getX()
{
	return(xPos);
}

double Circle::getY()
{
	return(yPos);
}

double Circle::getRadius()
{
  return(radius);
}

bool Circle:: intersect(const Circle& otherCircle)
{
  if(2*radius>radius+otherCircle.radius)
  {
  return false;
  }
  else if(2*radius==radius+otherCircle.radius)
  {
  return true;
  }
  else if(radius+otherCircle.radius<2*radius||2*radius<radius+otherCircle.radius)
  {
  return true;
  }
  else if(2*radius==radius-otherCircle.radius)
  {
  return true;
  }
  else if(2*radius<radius-otherCircle.radius)
  {
  return true;
  }

  //distance is smaller
  double ans5=0;

  return(ans5);
}

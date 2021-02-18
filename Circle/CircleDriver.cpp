/*File Name:Ojo-2866987-Lab-10
	Author: Gbenga Ojo
        KUID: 2866987
	Email Address: o646o376@ku.edu
	Homework Assignment Number: 10
	Description: Create a class that takes in the radius x and y position of two citcles to deterine different calculations.
	Last Changed: 5/6/2020
  */

#include"Circle.h"
#include"CircleDriver.h"
#include<iostream>
//This will go in your CircleDriver.cpp
void CircleDriver::run()
{
obtainCircles();
printCircleInfo();

}

void CircleDriver::obtainCircles()
   {
     double radius=0;
     double xPos=0;
     double yPos=0;
     std::cout<<"Information from circle 1:\n";
     std::cout<<"Radius:\n";
     std::cin>>radius;
     std::cout<<"x-value:\n";
     std::cin>>xPos;
     std::cout<<"y-value:\n";
     std::cin>>yPos;
     circ1.setRadius(radius);
     circ1.setX(xPos);
     circ1.setY(yPos);

    std::cout<<"Information from circle 2:\n";
     std::cout<<"Information from circle 1:\n";
     std::cout<<"Radius:\n";
     std::cin>>radius;
     std::cout<<"x-value:\n";
     std::cin>>xPos;
     std::cout<<"y-value:\n";
     std::cin>>yPos;
     circ2.setRadius(radius);
     circ2.setX(xPos);
     circ2.setY(yPos);


   }
  void CircleDriver::printCircleInfo()
   {
     std::cout<<"Information for circle 1: \n";
     std::cout<<"location: ("<<circ1.getX()<<","<<circ1.getY()<<")\n";
     std::cout<<"diameter "<<circ1.diameter();
     std::cout<<"\narea "<<circ1.area();
     std::cout<<"\ncircumference "<<circ1.circumference();
     std::cout<<"\ndistance to origin "<<circ1.distanceToOrigin();

     std::cout<<"\nInformation for circle 2:\n";
     std::cout<<"location: ("<<circ2.getX()<<","<<circ2.getY()<<")\n";
     std::cout<<"diameter "<<circ2.diameter();
     std::cout<<"\narea "<<circ2.area();
     std::cout<<"\ncircumference "<<circ1.circumference();
     std::cout<<"\ndistance to origin "<<circ1.distanceToOrigin();
     std::cout<<std::endl;
     bool circleintersect=circ1.intersect(circ2);
     if(circleintersect==1)
     {
       std::cout<<"They intersect\n";
     }
     else
     {
       std::cout<<"They do not intersect\n";
     }
   }

//Obtain Talk with the user to obtain the positions and radii for two Circles from the user. Repeats prompts until the user gives valid values for the radii
//It does not validate the values, but rather checks the return value from a call to Circle's setRadius method

/*Print Prints the following information about each of the Circles to the screen:
The location of the Circle's center (xPos, yPos), the distance from the origin, each area, circumference, diameter
Lastly print whether or not the two circles intersect
Sample output from printCircleInfo().*/

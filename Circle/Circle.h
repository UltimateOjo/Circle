/*File Name:Ojo-2866987-Lab-10
	Author: Gbenga Ojo
        KUID: 2866987
	Email Address: o646o376@ku.edu
	Homework Assignment Number: 10
	Description: Create a class that takes in the radius x and y position of two citcles to deterine different calculations.
	Last Changed: 5/6/2020
  */

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
	public:

		Circle();

		double diameter();
		double area(); //method declaration
    double circumference();
    //calculate the circumference of the circle
    double getRadius();
    //returns the radius
    double getX();
    //returns the xPos value
    double getY();
    //returns the yPos value
    void setX(double x);
    //sets xPos, no requirements
    void setY(double y);
    //sets yPos, no requirements
    double distanceToOrigin();
      //returns the distance from the center of the circle to the origin
      //HINT: Find out how to calculate the distance between two points and recall the origin is at (0,0)
    bool intersect(const Circle& otherCircle);
//Take another Circle by const reference (see more notes below)
//Returns true if the other Circle intersects with it, false otherwise
    bool setRadius(double r);
//sets the radius to r and returns true if r is greater than zero, otherwise sets the radius to zero and returns false

		//Make getters and setter for base and height
  private:

    double radius;
    double xPos;
    double yPos;
};
#endif

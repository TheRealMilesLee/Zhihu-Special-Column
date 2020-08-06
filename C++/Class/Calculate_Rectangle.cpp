#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{

  Rectangle Box;
  double rectWidth;
  double rectLength;

  cout << "This program will calculate the area of a rectangle." << endl;
  cout << "What is the width? ";
  cin >> rectWidth;
  cout << "What is the length? ";
  cin >> rectLength;



  Box.setWidth(rectWidth);
  Box.setLength(rectLength);

  cout << "Here is the rectangle's data: " << endl;
  cout << "Width: " << Box.getWidth() << endl;
  cout << "Length: " << Box.getLength() << endl;
  cout << "Area: " << Box.getArea() << endl;

//Define a Rectangle pointer
  Rectangle *rectPtr = nullptr;
//Dynamically allocate a Rectangle object
  rectPtr = new Rectangle;
//Store values in the object's width and length
  rectPtr->setWidth(10.0);
  rectPtr->setLength(15.0)

//Delete the object from memory
  delete rectPtr;
  rectPtr = nullptr;;

  return 0;
}

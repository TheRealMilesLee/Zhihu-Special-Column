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

  return 0;
}

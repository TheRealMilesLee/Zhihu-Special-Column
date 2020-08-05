#include <iostream>

using namespace std;

class Rectangle
{
private:
    double width;
    double length;
public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

void Rectangle::setWidth(double w)
{
  width = w;
}

void Rectangle::setLength(double len)
{
  length = len;
}

double Rectangle::getWidth() const
{
  return width;
}

double Rectangle::getLength() const
{
  return length;
}

double Rectangle::getArea() const
{
  return width * length;
}
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

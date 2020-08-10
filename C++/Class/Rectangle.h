//Specification file for the Rectangle class
#ifndef CLASS_RECTANGLE_H
#define CLASS_RECTANGLE_H

//Rectangle class declaration
class Rectangle
{
private:
    double width;
    double length;
public:
    Rectangle();
    void setWidth(double);
    void setLength(double);

    double getWidth() const
    {
      return width;
    }
    double getLength() const
    {
      return length;
    }
    double getArea() const
    {
      return width * length;
    }
};

//End specification
#endif
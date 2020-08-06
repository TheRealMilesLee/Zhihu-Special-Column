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
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};


//End specification
#endif
#ifndef PASSING_PARAMETER_TO_CONSTRUCTOR_RECTANGLE_H
#define PASSING_PARAMETER_TO_CONSTRUCTOR_RECTANGLE_H

class Rectangle
{
private:
    double width;
    double length;
public:
    Rectangle(double, double);
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

#endif //PASSING_PARAMETER_TO_CONSTRUCTOR_RECTANGLE_H

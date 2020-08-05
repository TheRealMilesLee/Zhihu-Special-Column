#include <iostream>

using namespace  std;

class Rectangle
{
private:
    double width;
    double length;
public:
    void setWidth(double); //这个函数接受一个参数，并赋值给width的成员变量
    void setLength(double);//这个函数接受一个参数，并赋值给length的成员变量
    double getWidth() const;//这个函数返回一个来自于width的成员变量的值
    double getLength() const;//这个函数返回一个来自于length的成员变量的值
    double getArea() const;//这个函数返回width成员变量和length成员变量相乘的值
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
  double number;
  double totalArea;
  Rectangle *kitchen = nullptr;
  Rectangle *bedroom = nullptr;
  Rectangle *den = nullptr;

  kitchen = new Rectangle;
  bedroom = new Rectangle;
  den = new Rectangle;

  cout << "What's the kitchen's length? ";
  cin>> number;
  kitchen->setLength(number);
  cout << "What's the kitchen's width?";
  cin >> number;
  kitchen->setWidth(number);

  cout << "What's the bedroom's length? ";
  cin>> number;
  bedroom->setLength(number);
  cout << "What's the bedroom's width?";
  cin >> number;
  bedroom->setWidth(number);

  cout << "What's the den's length? ";
  cin>> number;
  den->setLength(number);
  cout << "What's the den's width?";
  cin >> number;
  den->setWidth(number);

  totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

  cout << "The total area of the three rooms is: " << totalArea << endl;

  delete kitchen;
  delete bedroom;
  delete den;
  kitchen = nullptr;
  bedroom = nullptr;
  den = nullptr;

  return 0;
}
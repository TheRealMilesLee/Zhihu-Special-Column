#include <iostream>
#include <cmath>
#include <iomanip>

using namespace  std;

struct Circle
{
  double radius;
  double diameter;
  double area;
};

const double PI = 3.14159;

int main()
{
  Circle c;
  cout << "Please enter the diameter of a circle: ";
  cin >> c.diameter;
  c.radius = c.diameter / 2;

  c.area = PI * pow(c.radius, 2.0);
  cout << fixed << showpoint << setprecision(2)
       << "The radius and the area of the circle are: " << endl;
  cout << "Radius: " << c.radius << endl;
  cout << "Diameter: " << c.diameter << endl;
  cout << "Area: " << c.area << endl;

  return 0;
}
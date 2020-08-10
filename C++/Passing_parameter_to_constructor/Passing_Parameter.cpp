#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Rectangle.h"


using namespace std;

int main()
{
  const unsigned PRECISION = 2;
  double houseWidth;
  double houseLength;

  cout << "In feet, how wide is your house? ";
  cin >> houseWidth;
  cout << "In feet, how long is your house? ";
  cin >> houseLength;

  Rectangle house(houseWidth, houseLength);

  cout << setprecision(PRECISION) << fixed
       << "The house is " << house.getWidth() << " feet wide " << endl;
  cout << "The house is " << house.getLength() << " feet long " << endl;
  cout << "The house is " << house.getArea() << " square feet in area"
       << endl;

  return 0;
}

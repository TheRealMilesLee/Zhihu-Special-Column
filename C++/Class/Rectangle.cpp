#include "Rectangle.h"
#include <iostream>
#include <cstdlib>

using namespace std;


Rectangle::Rectangle()
{
  width = 0.0;
  length = 0.0;
}

void Rectangle::setWidth(double w)
{
  if(w >= 0)
  {
    width = w;
  }
  else
  {
    cout << "Invalid width" << endl;
    exit(EXIT_FAILURE);
  }
}

void Rectangle::setLength(double len)
{
  if(len >= 0)
  {
    length = len;
  }
  else
  {
    cout << "Invalid width" << endl;
    exit(EXIT_FAILURE);
  }
}


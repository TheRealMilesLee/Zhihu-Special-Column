#include <iostream>

using namespace std;

int main()
{
  int iNum = 100;
  long lNum = 55000;
  double dNum = 5595.950425;


  string textInt = to_string(iNum); string textDouble = to_string(dNum);
  string textlong = to_string(lNum);
  cout << "\nConverted int value: " << textInt;
  cout << "\nConverted double value: " << textDouble;
  cout << "\nConverted long value: " << textlong;
  
  return 0;
}
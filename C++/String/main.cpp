#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int iNum = 100;
  long lNum = 55000;
  double dNum = 5595.950425;


  string textInt = std::to_string(iNum); string textDouble = std::to_string(dNum);
  cout << "\nConverted int value: " << textInt;
  cout << "\nConverted double value: " << textDouble;
  
  return 0;
}
#include <iostream>

using namespace  std;

int main()
{
  unsigned x = 2500;
  double y = 123.4;

  cout << "The address of x is " << &x
       << ", its contents are " << x
       << ", and its size is " << sizeof x
       << "bytes" << endl;

  cout << "The address of y is " << &y
       << ", its contents are " << y
       << ", and its size is " << sizeof y
       << "bytes" << endl;

  
  int numbers = 2500;
  int & friend_of_numbers = numbers;

  friend_of_numbers = 20;

  cout << "numbers is " << numbers
       << ", and friend_of_numbers is " << friend_of_numbers
       << endl;


  int num = 5;
  int* p = &num;

  cout << endl << "Value: " << &num
       << endl << "Address: " << p;

  cout << endl << "Value: " << num
       << endl << "Address: " << p;

  return 0;
}
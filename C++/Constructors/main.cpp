#include <iostream>

using namespace  std;


class Demo
{
public:
    Demo();
};
Demo::Demo()
{
  cout << "Welcome to the constructor!" << endl;
}

int main()
{
  Demo demoObject;
  
  cout << "This program demostrates an object with a constructor." << endl;

  return 0;
}



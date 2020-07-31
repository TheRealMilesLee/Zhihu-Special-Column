#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

/**
 * This function is to get the input from user
 * @param high   is the highest limit of the random number generated
 * @param low    is the lowest limit of the random number generated
 */
void get_user_input(unsigned &high, unsigned &low);

/**
 * This function is to get the random in range
 * @param low    is the lowest limit of random number
 * @param high  is the highest limit of random number
 * @return      the random number that generated
 */
unsigned get_rand_in_range(unsigned low, unsigned high);

int main()
{
  unsigned high;
  unsigned low;
  unsigned value;
  get_user_input(high,low);
  get_rand_in_range(low,high);
  cout << "The Random number that generated is: " << value << endl;
  return 0;
}

void get_user_input( unsigned &high, unsigned  &low)
{
  cout << "Please input the hightest value" << endl;
  cin >> high;
  cout  << "Please input the lowest value" << endl;
  cin >> low;
}

unsigned get_rand_in_range(unsigned low, unsigned high)
{

  return uniform_int_distribution<unsigned> dis(low, high);
}



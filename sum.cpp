#include <iostream>
#include "sum.h"
using namespace std;

int main()
{
  int x,y;
  cout<< "Enter two numbers to be added \n";
  cin >> x >> y;
  int result =  sum_of_two(x,y);
  cout << endl << "The sum of the two numbers is " << result << endl;
  return 0;
}

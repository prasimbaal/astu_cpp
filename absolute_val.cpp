#include <iostream>
using namespace std;

int main()
{
  int number;
  cout<<"Enter an integer to find out its absolute value: ";
  cin>>number;
  int absolute;
  if (number<=0)
    absolute=number*-1;
  else
    absolute = number;
  cout<<"---------------------------------------------------"<<endl;
  cout<<"The absolute value of "<<number<<" is "<<absolute;
  return 0;
}

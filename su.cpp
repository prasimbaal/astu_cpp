#include <iostream>
using namespace std;

int main()
{
  int sum(0);
  int i,x;
  cout<<"Enter a number: ";
  cin>>x;
  for(i=1;i<=x;i++)
    sum+=i;
  cout<<sum<<endl;
  return 0;
}

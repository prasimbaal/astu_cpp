#include <iostream>
using namespace std;

int main()
{
  int x(13);
  int i(1);
  int div(0);
  while(i<x)
    {
      if(x%i==0){
	div+=1;
	i++;
      }
      else
	i++;
    }
  if(div<=2)
    cout<<"prime "<<endl;
  else
    cout<<"not prime "<<endl;
  return 0;
}

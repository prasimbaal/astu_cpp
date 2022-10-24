#include <iostream>
using namespace std;

int main()
{
  int no[4] = {3,8,2,7};
  int i,j;
  int largest;
  for(i=0;i<4;i++)
    {
      for(j=1;j<=4;j++)
	{
	  if(no[i]>no[j])
	    no[j]=no[i];
	  else
	    largest=no[j];
	}
    }
  cout<<"Largest: "<<largest<<endl;
  return 0;
}

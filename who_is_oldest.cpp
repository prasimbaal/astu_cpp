#include <iostream>
using namespace std;
/* checks for who is older from three ages*/
int main()
{
  int x,y,z;
  cout<<"Enter Anteneh's Ruta's and Jemal's age in that order ";
  cin>>x>>y>>z;
  
  cout<<"--------------------------------------------------------------"<<endl;
  if(x>y && x>z)
    cout<<"The oldes is Anteneh "<<endl;
  else if(y>x && y>z)
    cout<<"Ruta is the oldest "<<endl;
  else if(z>y && z>x)
    cout<<"Jemal is the oldest "<<endl;
  else { 
    if (x==y && x==z)
      cout<<"They are all at the same age"<<endl;
    if (x==y && x>z)
      cout<<"Anteneh and Ruta are the oldest "<<endl;
    if (x==z && x>y)
      cout<<"Anteneh and Jemal are oldest "<<endl;
    if (y==z && y>x)
      cout<<"Ruta and Jemal are the oldest "<<endl;
  }
  return 0;
}

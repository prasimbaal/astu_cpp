#include <iostream>
using namespace std;

void edit(int& a, int &b)
{
  int x,y;
  cout<<"Enter two numbers to replace the existing values \n";
  cin>>x>>y;
  a*=x;
  b*=y;
}
int main()
{
  int n,m;
  n=2;
  m=8;
  
  cout<<"Values before re assignment "<< n<<" "<<m<<endl;
  edit(n,m);
  cout<<"Values after "<<n<< " "<<m<<endl;
  return 0;
}

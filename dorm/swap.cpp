#include <iostream>
using namespace std;

int main(){

  int a, b;
  cin>>a>>b;
  cout<<"A:"<<a<< "\n"<<"B: "<<b<<endl;
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"A: "<<a<<"\n"<<"B: "<<b<<endl;
  return(0);
}

  

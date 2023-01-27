#include <iostream>
using namespace std;

int main(){
  int a(3),b(5);
  int *p,*q;
  p=&b;
  q=&a;
  cout<<*(&b)<<" "<<*q<<endl;
  p=q;
  cout<<*p<<" "<<*q<<endl;
  cout<<a<<" "<<b<<endl;
  *q=4;
  *p=*q;
  cout<<a<<" "<<b;
}

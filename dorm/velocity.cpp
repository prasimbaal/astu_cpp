#include <iostream>
#include <cmath>
using namespace std;
int main(){
  const float gravity = 9.8;
  int h;
  float v,x;
  cin>>h;
  x = sqrt(2*gravity*h);
  /*  v = sqrt(x);*/

  cout<<x;
  return 0;
}

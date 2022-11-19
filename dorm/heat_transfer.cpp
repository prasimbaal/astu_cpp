#include <iostream>
using namespace std;
int main(){
  const float k = 3.22;
  float t_1,t_2,d,q;
  cin>>t_1>>t_2>>d;
  q = (-k*(t_1-t_2))/d;
  cout<<q;
  return 0;
}

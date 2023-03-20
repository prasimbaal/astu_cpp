#include <iostream>
using namespace std;

int main(){
  int i,sum,k;
  cin>>k;
  for(i=1;i<=k;i++){
    if(i%9==0)
      sum+=i;
  }
  cout<<"The sum of numbers between 1 and "<<k<< " which are divisible by 9 is: "<<sum<<endl;
  return 0;
}

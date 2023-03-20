#include <iostream>
using namespace std;

int main(){
  int i,j,sum(0);
  cout<<"Enter a number: ";
  cin>>i;
  cout<<"Even natural numbers before "<<i<<" are as follows:"<<endl;
  for(j=1;j<=i;j++){
    if(j%2==0){
      sum+=j;
      cout<<j<<" ";
  }
  }
  cout<<endl<<"The sum of all even natural numbers before "<<i<<" is:"<<sum<<endl; 
  return 0;
}

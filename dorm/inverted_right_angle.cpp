#include <iostream>
using namespace std;

int main(){
  int i,j,k;
  cin>>j;

  for(i=1;i<=j;i++){
    for(k=i;k<=j;k++){
      cout<<k<<" ";
    }
    cout<<endl;
  }
  return 0;
}

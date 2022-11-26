#include <iostream>
using namespace std;

int main(){
  int i,n,spc;
  cin>>n;
  spc=n;
  for(i=1;i<=n;i++){
    for(int j=i;j<spc;j++){
      cout<<" ";
    }
    for(int k=0;k<i;k++)
      cout<<"* ";
    cout<<endl;
  }
}

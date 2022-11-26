#include <iostream>
using namespace std;

int main(){
  int i,rows,j,spcs;
  cin>>rows;
  spcs=rows-1;
  for(i=1;i<=rows;i++){
    for(j=i;j<=spcs;j++)
      cout<<"_";
    for(int k=1;k<=i;k++)
      cout<<k;
    cout<<" "<<endl;
  }
  return 0;
}


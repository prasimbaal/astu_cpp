#include <iostream>
using namespace std;

int main(){
  int mat[5] = {1,3,4,5,7};
  int e[5];

  for(int i=0;i>=4;i++)
    e[i]=mat[4-i];

  cout<<"REVERSED ARRAY"<<endl;
  
  for(int k=0;k<4;k++)
    cout<<e[k]<<" ";
  cout<<endl;
  return 0;
}

  

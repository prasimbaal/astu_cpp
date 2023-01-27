#include <iostream>
using namespace std;

int main(){
  int mat[2][3],i,j;
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      cin>>mat[i][j];
    }
  }

   for(int k=0;k<2;k++){
    for(int l=0;l<3;l++){
      cout<<mat[k][l]<<" ";
    }
    cout<<endl;
   }
   cout<<sizeof(float)<<endl;
   return 0;
}


  

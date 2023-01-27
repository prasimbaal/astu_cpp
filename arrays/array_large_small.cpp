#include <iostream>
#include<iomanip>
using namespace std;

int main(){
  int large(0),small(999999),row,column;
  cout<<"Enter number of ROWS and COLUMNS for your matrix:";
  cin>>row>>column;
  int array[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      cin>>array[i][j];
    }
  }
  for(int k=0;k<row;k++){
    for(int l=0;l<column;l++){
      if(array[k][l]>large)
	large=array[k][l];
      if(array[k][l]<small)
	small=array[k][l];
    }
    cout<<endl;
  }
  cout<<"YOUR MATRIX IS AS FOLLOWS"<<endl;
  for(int xx=0;xx<row;xx++){
    for(int yg=0;yg<column;yg++){
      cout<<setw(2);
      cout<<" "<<array[xx][yg]<<" ";
    }
    cout<<endl;
  }
  cout<<"Largest from the array is:"<<large<<endl;
  cout<<"Smallest number from the array is:"<<small<<endl;
  return 0;
}


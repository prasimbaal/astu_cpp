#include <iostream>
#include<iomanip>
using namespace std;

int main(){
	int large(0),small,row,column;
      	cout<<"Enter number of ROWS and COLUMNS for your matrix:";
      	cin>>row>>column;
	int array[row][column];
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cin>>array[i][j];
			if(array[i][j]>large)
				large=array[i][j];
			int temp = array[i][j];
			if(i==0)
				small=array[i][j];
			if(i>=1 && array[i][j]<small)
				small=array[i][j];
		}
		cout<<endl;
	}
	cout<<"YOUR MATRIX IS AS FOLLOWS"<<endl;
	int k,l;
	for(k=0;k<row;k++){
		for(l=0;l<column;l++){
			cout<<setw(2);
			cout<<" "<<array[k][l]<<" ";
		}
		cout<<endl;
		}
	cout<<"Largest from the array is:"<<large<<endl;
	cout<<"Smallest number from the array is:"<<small<<endl;
	return 0;
}

			

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int row, column, sum(0), *ptr;
	cout<<"ENTER ROW & COLUMN FOR YOUR MATRIX: ";
	cin>>row>>column;
   	vector<vector<int>> matrix(row, vector<int>(column));
	//	vector<int> matrix(row);
	ptr=matrix.data();
	for(int i=0;i<row;i++)
   		for(int j=0;j<column;j++){
			cin>>matrix[i][j];
			sum+=ptr[i][j];
	}
	cout<<"THE SUM OF ALL ELEMENTS IN YOUR ARRAY IS: "<<sum<<endl;
}


	

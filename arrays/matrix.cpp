#include <iostream>
#include <vector>

using namespace std;

int main(){
	int row,column;
	cout<<"ENTER ROW AND COLUMN FOR YOUR MATRIX: ";
	cin>>row>>column;
	vector<vector<int>> my_array(row, vector<int>(column));
	cout<<"Enter elements of your matrix \n";
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++)
			cin>>my_array[i][j];
	}

}

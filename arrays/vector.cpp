#include <iostream>
#include <vector>

using namespace std;

int main(){
	int row;
	cout<<"enter row: ";
	cin>>row;
	vector<vector<vector<int>>> name(row,vector<vector<int>>(2, vector<int>(3)));
	for(int i=0;i<row;i++){
		for(int j=0;j<2;j++)
			for(int k=0;k<3;k++){
				cin>>name[i][j][k];
			}
	}
	int vect_size = name.size();
	
	cout<<"size of your vector is: "<<vect_size<<endl;
	return 0;
}

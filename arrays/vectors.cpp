#include <iostream>
#include <vector>

using namespace std;
int main(){
	vector<int> num{1,2,3,4,5};
	int temp;
	
	for(int i=0;i<2;i++){
		temp=num[i];
		num[i]=num[4-i];
		num[4-i]=temp;
	}
	for(int j=0;j<5;j++)
		cout<<num[j]<<" ";
	cout<<endl;
}

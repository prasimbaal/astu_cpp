#include <iostream>
using namespace std;

int main(){
	int array[10];
	int sum=0;
	for(int i=0;i<6;i++){
		if(array[i]%2==0)
			sum+=array[i];
	}
	cout<<sum<<" :sum of even numbers in the array"<<endl;
	return 0;
}

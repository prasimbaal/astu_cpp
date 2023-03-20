#include <iostream>
using namespace std;

int max(int array[],int n);

int main(){
	int n;
	cout<<"Enter length of list:";
	cin>>n;
	int array[20];  //maximum number of items is 20
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"Maximu number from list is: "<<max(array,n)<<endl;
	return 0;
}

int max(int array[],int n){
	int max=array[0];
	for(int i=1;i<n;i++){
		if(array[i]>max)
			max=array[i];
	}
	return max;
}

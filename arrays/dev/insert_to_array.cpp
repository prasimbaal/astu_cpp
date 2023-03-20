#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	srand(time(NULL));
	int n,index,value;
	cout<<"ENTER SIZE OF ARRAY: ";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		array[i]=rand()%100;
		cout<<array[i]<<" ";
	}
	cout<<"\nEnter value to be inserted and index respectively: ";
	cin>>value>>index;

	for(int j=n-1;j>=index;j--){
		array[j+1]=array[j];
	}
	array[index]=value;
	for(int k=0;k<n;k++)
		cout<<array[k]<<" ";
	cout<<endl;
	for(int i=index;i<n;i++){
		array[i]=array[i+1];
	}
	for(int l=0;l<n;l++)
		cout<<array[l]<<" ";
	cout<<endl;

	return 0;
}

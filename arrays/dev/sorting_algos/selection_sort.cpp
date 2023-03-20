#include <iostream>
#include <cstdlib>
#include "headers.h"

using namespace std;
int binary_search(int array[], int n, int item){
	int m=n/2,l(0),r(n-1);
	while(l!=r){
		if(item<array[m]){
			r=m;
			m=(l+r)/2;
		}
		if(item>array[m]){
			l=m;
			m=(l+r)/2;
		}
		if(item==array[m])
			return m;

	}
   	return -1;
}
				
int main(){
	int n;
	cin>>n;
	srand(time(NULL));
	int array[n];
	int arr[n];
	for(int i=0;i<n;i++){
		int random = rand()%100;
		array[i]=random;
		cout<<random<<" ";
	}
	for(int j=0;j<n;j++){
		int random=rand()%100;
		arr[j]=random;
		cout<<arr[j];
	}
	inr merged_arr[2*n-2];
	cout<<endl;
	selection_sort(array, n);
	selection_sort(arr,n);
	/*for(int l=0;l<(2*n-2);l++){
		int index=0;
		for(int m=n;m<0;m--){
			if(array[m]>arr[m]){
	*/		
	for(int k=0;k<n;k++)
		cout<<merged_arr[k]<<" ";
	

   	return 0;
}

				

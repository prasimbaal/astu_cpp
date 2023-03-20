#include <iostream>
using namespace std;

void print_array(int array[], int n){
	for(int i=0;i<n;i++)
		cout<<array[i]<<" ";
	cout<<endl;
}

void selection_sort(int array[], int n){
	int min_idx;
	for(int i=0;i<n-1;i++){
		min_idx=i;
		for(int j=i+1;j<n;j++){
			if(array[j]<array[min_idx])
			   min_idx=j;
			   }
		if(min_idx!=i){
			int temp= array[i];
			array[i]=array[min_idx];
			array[min_idx]=temp;

		}
	}
}

void bubble_sort(int array[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j+1<n-i;j++){
			if(array[j]>array[1+j]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}	
}

int binary_search(int array[], int n, int item){
	int m,l(0),r(n-1);
	while(l<=r){
		m=(l+r)/2; //l:left most index, r:right most index
		if(item==array[m])
			return m;
		if(item<array[m])
			r=m-1;
		if(item>array[m])
			l=m+1;
	}
	   	return -1;
}

int linear_search(int array[],int n, int item){
	for(int i=0;i<n;i++){
		if(array[i]==item)
			return i;
	}
	return -1;
}

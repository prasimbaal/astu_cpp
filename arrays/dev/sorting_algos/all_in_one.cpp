#include <iostream>
#include "searchxsort_headers.h"
using namespace std;


int main(){
	int n,choice,item,x;
	cout<<"Enter size of your array: ";
	cin>>n;
	int array[n];
	cout<<"Enter elements of your array: ";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"Choose what you want to do with your array:"<<endl;
 menu:
	cout<<"0 - to exit"<<endl;
	cout<<"1 - for linear search"<<endl;
	cout<<"2 - for binary search"<<endl;
	cout<<"3 - for bubble sort"<<endl;
	cout<<"4 - for selection sort"<<endl;

	do{
		cout<<"what do you want to do with the array: ";
		cin>>choice;
		switch(choice){
		case 0:
			cout<<"Session Terminated!"<<endl;
			break;
		case 1:
			cout<<"Enter item to be searched: ";
			cin>>item;
			x=linear_search(array,n,item);
			if(x!=-1)
				cout<<"found at index "<<x<<endl;
			else
				cout<<"Not found"<<endl;	
			break;
		case 2:
			cout<<"Enter item to be searched: ";
			cin>>item;
			bubble_sort(array,n); //because binary search works only for sorted arrays
			x=binary_search(array,n,item);
			if(x!=-1)
				cout<<"found at index "<<x<<endl;
			else
				cout<<"Not found"<<endl;
			break;
		case 3:
			bubble_sort(array,n);
			print_array(array,n);
			break;
		case 4:
			selection_sort(array,n);
			print_array(array,n);
			break;
		default:
			cout<<"Invalid input choose again."<<endl;
			goto menu;
			break;
		}		
	}while(choice!=0);
}

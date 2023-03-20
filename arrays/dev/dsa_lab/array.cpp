#include <iostream>
using namespace std;
int sequential_search(int array[], int item, int size){
	for(int i=0;i<size;i++){
		if(item==array[i]){
			return i;
			break;
			}
	}
	return -1;
}

int main(){
	cout<<"Enter size of array ";
	int n,item;
	cin>>n;
	int array[n];
	cout<<"Enter elements for array: ";
	for(int i=0;i<n;i++)
		cin>>array[i];
	int min(array[0]),max(array[0]),sum(0),max_index,index_min;
	for(int j=0;j<n;j++){
		if(array[j]>max){
			max=array[j];
			max_index=j;
		}
		if(array[j]<min){
			min=array[j];
			index_min=j;}
		
		sum+=array[j];
	}
	cout<<"Maximum and minimum numbers from the array allong with their indices are: "<<max<<" found at position "<<max_index<<"\n"<<min<<" found at position"<<index_min<<endl;
	cout<<"Average of the numbers from array is: "<<sum/n<<endl;
	cout<<"Enter number to be searched: ";
	cin>>item;
	cout<<sequential_search(array,item,n);
	return 0;	
}

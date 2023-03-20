#include <iostream>
#include <cstdlib>

using namespace std;

void bubble_sort(int array[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j+1<n-i;j++){
			if(array[j]<array[1+j]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}	
}

int main(){
	int n;
	//	cin>>n;
	int array[]={30,8,7,4,1,0,7};
	n=sizeof(array)/sizeof(array[0]);
	srand(time(NULL));
	/*for(int i=0;i<n;i++){
		int random=rand()%100;
		array[i]=random;
		cout<<random<<" ";
		}*/

	cout<<endl;
	bubble_sort(array,n);
	for(int k=0;k<n;k++)
		cout<<array[k]<<" ";
	cout<<endl;
}

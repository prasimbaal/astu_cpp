#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int numbers[10],k,i;
	cout<<"Enter 10 elements for the array \n";
	for(i=0;i<10;i++)
		cin>>numbers[i];
	cout<<"How many large numbers? "<<endl;
	cin>>k;
	int temp;
	for(int m=0;m<10;m++){
		for(int kl=0;kl<(10-m);kl++){
			if(numbers[kl]<numbers[kl+1]){
				temp=numbers[kl];
				numbers[kl]=numbers[kl+1];
				numbers[kl+1]=temp;
			}
		}
	}
			
	for(int j=0;j<k;j++)
		cout<<numbers[j]<<"\t";
	cout<<endl;
	return 0;
}

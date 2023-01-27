#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int numbers[10];
	for(int i=0;i<10;i++){
		numbers[i]=i*3;
	}
	int max=numbers[0];
	int n=1;
	while(n<10){
		if(numbers[n]>numbers[n-1])
			max=numbers[n];
		n++;
	}
	cout<<max<<" IS THE LARGEST NUMBER FROM THE ARRAY"<<endl;
	return 0;
}

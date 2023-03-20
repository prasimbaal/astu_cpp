#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double alpha[10];
	for(int i=0;i<10;i++){
		if(i<5)
			alpha[i]=pow(i,2);
		else
			alpha[i]=i*3;
	}

	for(int j=0;j<10;j++)
		cout<<alpha[j]<<" ";
	cout<<endl;
	return 0;
}

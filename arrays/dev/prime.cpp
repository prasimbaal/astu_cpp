#include <iostream>
#include <math.h>

using namespace std;

int is_prime(int n){
	int div=2;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			div+=2;
	}
	if(div<=2)
		return 1;
	else
		return 0;
}
			   
int main(){
	for(int i=2;i<100;i++){
		if(is_prime(i)==1)
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}

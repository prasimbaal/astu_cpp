#include <iostream>
using namespace std;

int fibonacci(int n){
	if(n==1)
		return 1;
	if(n==0)
		return 0;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int i, fib;
	cin>>i;
	fib=fibonacci(i);
	cout<<"Fibonacci of "<<i<<" is:"<<fib<<endl;
	return 0;
}

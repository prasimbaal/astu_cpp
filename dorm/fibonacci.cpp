#include <iostream>
using namespace std;

unsigned fibonacci(unsigned n){
	if(n<2)
		return n;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	unsigned i, fib;
	cin>>i;
	fib=fibonacci(i);
	cout<<"Fibonacci of "<<i<<" is:"<<fib<<endl;
	return 0;
}

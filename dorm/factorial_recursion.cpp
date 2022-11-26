#include <iostream>
using namespace std;

int factorial(int n){
	if(n<2)
		return 1;
	else
		return n*factorial(n-1);
}

int main(){
	int number,fact;
	cin>>number;
	fact=factorial(number);
	cout<<number<<"! = "<<fact<<endl;
	return 0;
}

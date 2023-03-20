#include <iostream>
using namespace std;

int main(){

	int i,fact(1);
	cin>>i;
	while(i!=1){
		fact*=i;
		i--;
	}
	cout<<"Factorial of "<< i<<"is:"<<fact<<endl;
	return 0;
}

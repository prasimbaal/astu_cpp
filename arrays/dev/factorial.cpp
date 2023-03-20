#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int fact(n);
	while(n>1)
		fact*=--n;
	cout<<fact<<"\n";
	return 0;
}

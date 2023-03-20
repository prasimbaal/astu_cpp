#include <iostream>
using namespace std;

int main(){
	int a(9);
	a<<=4;
	int b=a;
	b>>=3;
	cout<<a<<"\t"<<b<<endl;
	return 0;
}

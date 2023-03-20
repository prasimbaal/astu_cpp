#include <iostream>
using namespace std;

int main(){
	int *ptr, val(99);
	ptr = &val;
	cout<<ptr<<" :Address \t"<<val<<" Value \t"<<&ptr<<endl;
	*ptr = 22;
	cout<<val<<": new value \t"<<*ptr<<" :ptr new value"<<endl;
	int val1,val2;
	ptr = &val1;
	*ptr = 60;
	ptr=&val2;
	*ptr =50;
	cout<<&val1<<"\t"<<val1<<"\t"<<val2<<"\t"<<ptr<<endl;
	return 0;
}


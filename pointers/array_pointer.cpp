#include <iostream>
using namespace std;

int main(){
	int myarray[5],i;
	int *arrayptr;
	arrayptr=myarray;
	for(i=0;i<5;i++){
		//	*(arrayptr)=20;
		*(arrayptr+i)=i;
		cout<<myarray[i]<<"\t";
	}
	int z=0,j(2),*p1;
	int *ptr =&z;
	p1=&j;
	cout<<ptr<<endl;
	*p1=++*ptr;
	cout<<ptr<<"\t"<<z<<'\t'<<j;
	cout<<endl;
	return 0;
}

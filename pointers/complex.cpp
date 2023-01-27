#include <iostream>
using namespace std;

int main(){
	int first_val(44),second_val(9),*p1,*p2;
	p1=&first_val;
	p2=&second_val;
	cout<<"first val: "<<first_val<<"\tsecond val: "<<second_val<<endl;
	*p1=99;
	*p2=*p1;
	cout<<first_val<<" :first val \t"<<second_val<<":Second val \t"<<p1<<"P1 "<<p2<<" P2"<<endl;
	p1=p2;
	*p1=20;
	cout<<"FIRST VALUE: "<<first_val<<"\tSECOND VALUE: "<<second_val<<endl;
	return 0;
}


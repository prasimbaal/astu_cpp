#include <iostream>
using namespace std;

int main()
{
	
	float a(0.1),b(0.2),c(0.3);
	char name[5]("beal");
	cout<<name<<endl;
	if(a+b!=c)
		cout<<"out of order "<<endl;
	char x = 'L';
	long bank = 0000000000001500335;
	short dorm_no = 56;
	cout<< "Size of int " << sizeof(int) << endl
		<< "size of wchar_t " << sizeof(wchar_t) << endl
		<< "size of bool " << sizeof(bool) << endl
		<< "size of float "<< sizeof(float) << "\n"
		<< "size of char " << sizeof(x) << "\n"
		<< "Size of double " << sizeof(double) << "\n"
		<< "Size of long "<< sizeof(bank) << " bytes" << endl
		<< "size of long double " << sizeof(long double) << endl
		<< "Size of char[10] " << sizeof(name)<<" bytes." << endl ;
	cout<<" size of short "<<sizeof(short)<<endl
		<<" size of unsigned int "<<sizeof(unsigned)<<endl;
	
	return 0;
}

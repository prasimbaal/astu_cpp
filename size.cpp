#include <iostream>
using namespace std;

int main()
{
	
	char x = 'L';
	long bank = 0000000000001500335;
	char name[8] = "Avocado";
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
	return 0;
}

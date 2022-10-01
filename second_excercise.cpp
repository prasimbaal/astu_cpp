#include <iostream>
using namespace std;

int main()
{
	char name[5] = "Hana";
	int age = 19;
	char gender = 'F';
	char department[16] = "pre engineering";
	float height = 1.63;
	long int bank_acc_no = 1000044400044;
	float weight = 60;
	
	cout<< "Student name: " << name << "\n";
	cout<< "student age: " << age << endl
		<< "student gender: " << gender<< endl
		<< "stdent department : " << department<< endl
		<< "Student height : " << height<< "\n"
		<< "student bank account number: " << bank_acc_no << endl
		<< "stdent weight: " << weight<< "\n";
	cout << "Size of name and department variables = " << sizeof(name)<< " bytes, " << sizeof(department)<< " "  << "bytes" << "\n";
	return 0;
}

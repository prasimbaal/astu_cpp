#include <iostream>
#include <string.h>

using namespace std;
int main ()
{
	string name;
	int age;
	cout<<"enter your name and age ";
	getline(cin, name);
	cin>>age;
	if(age>=21)
		cout<<name<<" is eligible. /n";
	else
		cout<<name<<" is not eligible."<<endl;
	return 0;
}

	  

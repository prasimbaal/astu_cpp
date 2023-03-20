#include <iostream>
#include <iomanip>
#include <string>
#include<cmath>
using namespace std;

int main(){
	double x, y;

	cout<<"ENTER TWO REAL NUMBERS TO FIND THER SQUARE ROOTS: ";
	cin>>x>>y;
	cin.ignore();
	cout<<hex<<x<<endl;
	cout<<sqrt(x)<<"\t"<<sqrt(y)<<endl;
	string name, occupation;
	cout<<"ENTER YOUR NAME AND OCCUPATION: ";
	getline(cin, name);
	getline(cin, occupation);
	cout<<name<<" * "<<occupation<<"\t"<<name.length()<<endl;
	string line(40,'-');
	cout<<line<<endl;
}

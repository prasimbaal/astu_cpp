#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main(){
	string name;
	getline(cin,name);
	cout<<name<<"\n";
	ofstream myfile;
	myfile.open("xx.txt",ios::app);
	myfile<<name<<"\n";
	myfile.close();
	
	return 0;
}

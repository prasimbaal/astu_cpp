#include <iostream>
#include <string>
using namespace std;

int main(){
	string name, *strptr;
	getline(cin, name);
	strptr=&name;
	int sum(0);
	while(name!='\0'){
		name++;
		sum++;
	}
	cout<<sum<<endl;
}

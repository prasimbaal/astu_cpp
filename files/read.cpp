#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main(){
	string file_str;
	ifstream myfile;
	myfile.open("list.txt");
	if(myfile.is_open()){
		while(!myfile.eof()){
			getline(myfile,file_str);
			cout<<file_str<<endl;
		}
	}
	return 0;
}


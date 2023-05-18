#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>

using namespace std;

void search_edit(string search, string replace){
	ostringstream text;
	ifstream myfile("student_data.txt");
	if(myfile.is_open()){
		text << myfile.rdbuf();
	   	string str = text.str();
		string str_search=search;
		string str_replace = replace;
		size_t pos =str.find(str_search);
		str.replace(pos,str_search.length(),str_replace);
		myfile.close();
		ofstream out_file("student_data.txt");
		out_file<<str;
	}
	else cout<<"EMPTY BUFFER"<<endl;	
}

int main(){
	string str;
	ifstream myfile("student_data.txt");
	if(myfile.is_open()){
		while(!myfile.eof()){
			getline(myfile,str);
			cout<<str<<endl;
			}
}
	else cout<<"File doesn't exist."<<endl;
	int choice;
}

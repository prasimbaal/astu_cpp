#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
/*
struct student_grade{
	string name;
	int mid,finat;
	};*/


int main(){
	float continous(27.5),mid,final_grade,sum;
	string name;
	cout<<"Enter student's full name: ";
	getline(cin, name);
	cout<<"Enter mid and final grades for "<<name<<" ";
	cin>>mid>>final_grade;
	sum = continous+mid+final_grade;
	if(sum>=90)
		cout<<"A+"<<endl<<endl;
	else if(sum>50 && sum<90){
		if(sum>=85 && sum<90)
			cout<<"A"<<endl;
		if(sum>=80 && sum<85)
			cout<<"A-"<<endl;
		if(sum>=75 && sum<80)
			cout<<"B+"<<endl;
		if(sum>70 && sum<75)
			cout<<"B"<<endl;
		if(sum>65 && sum<70)
			cout<<"B-"<<endl;
		if(sum>=60 && sum<65)
			cout<<"C+"<<endl;
		if(sum>=50 && sum<60)
			cout<<"C"<<endl;
	}
	else
		cout<<"FAILED! try again after a semster."<<endl;
	return 0;
}

				 

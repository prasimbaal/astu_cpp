#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

	struct student_id{
		int age,roll_no;
		string name;
		float mark;
	}student1;

int main(){
	student_id name;
	
	cout<<"ENTER STUDENT NAME: ";
	getline(cin,student1.name);
	cout<<"ENTER STUDENT AGE AND ROLL NUMBER: ";
	cin>>student1.age>>student1.roll_no;
	cout<<"ENTER STUDENTS END OF THE YEAR AVERAGE: ";
	cin>>student1.mark;

	ofstream student;
	student.open("STUDENT_ID.txt",ios_base::app);
	student<<"Name: "<<student1.name<<endl;
	student<<"AGE: "<<student1.age<<"\n Roll number: "<<student1.roll_no<<"\n Student mark: "<<student1.mark<<endl;
	student.close();
	return 0;
}

		

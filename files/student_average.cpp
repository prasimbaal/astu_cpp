
#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>

using namespace std;


struct marks{
	float chemistry,physics,maths;
	string name;
	int roll_no;
	float average;
}student[20]; // student can hold maximum of 20 students

int main(){
	int amt;
	cout<<"HOW MANY STUDENT INFORMATION ARE YOU ADDING THIS SESSION?";
	cin>>amt;
	cin.ignore(); //ignores new line
	for(int i=0;i<amt;i++){
		cout<<"ENTER INFORMATION ABOUT STUDENT "<<i+1<<endl;
		cout<<"FULL NAME: ";
		getline(cin,student[i].name);
		cout<<"chemistry, physics and maths average respectively ";
		cin>>student[i].chemistry>>student[i].physics>>student[i].maths;
		cout<<"student roll number ";
		cin>>student[i].roll_no;
		cin.ignore();
		float average(0);
	    average=(student[i].chemistry+student[i].physics+student[i].maths)/3;
		student[i].average = average;
	}
	cout<<"-----------------------------------------------------------------------\n";
	cout<<"NAME"<<"\t"<<"Average"<<endl;
	for(int j=0;j<amt;j++){
		cout<<student[j].name<<"\t"
		    <<setw(4)<<student[j].average<<endl;
	}
	
	ofstream student_file;
	student_file.open("student-information.txt",ios_base::app);
	for(int k=0;k<amt;k++){
		//	student_file<<setw(5);
		student_file<<student[k].name<<" "<<student[k].roll_no<<" "<<endl
					<<setw(7)<<"Chemistry: "<<student[k].chemistry<<"\n"<<setw(7)<<"Physics: "<<student[k].physics
					<<"\n"<<setw(7)<<"Maths: "<<student[k].maths<<endl<<setw(7)<<"average: "<<student[k].average<<"\n--------------------------------------------------------------------------------\n";
	}
	student_file.close();
	return 0;
}

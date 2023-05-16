#include <iostream>
#include<stdlib.h>
#include<string.h> //For manipulating strings
#include<fstream>  //file managment librarary
#include <iomanip> //setw

using namespace std;

const string PASS="/2002366*";

struct stud_profile{
	string name;
	int id;
	string dept;
	int section;
	char sex;
	stud_profile *next;
	stud_profile *prev;
}*head=NULL;


/*ADDS STUDENTS TO TOP OF LIST, i.e the push method in STACK*/
void add_student(){
	stud_profile *new_student= new stud_profile;
	stud_profile *temp=head;
	int id,sect;
	string name,dept;
	cout<<"Enter name of student to register: ";
	cin.ignore();
	getline(cin,name);
	new_student->name=name;
	srand(time(NULL));
	id = rand()%1000;
	new_student->id=id;
	new_student->section=1+(rand()%45);
	cout<<"What is "<<name<<"'s preferred field of study: ";
	getline(cin,dept);
	new_student->dept=dept;
	cout<<"Gender: ";
	cin>>new_student->sex;
	cin.ignore();
	if(head==NULL){
		head=new_student;
		new_student->next=new_student;
		new_student->prev=head;
	}
	else{
  		while(temp->next!=head)
			temp=temp->next;
		new_student->next=head;
		head->prev=new_student;
		new_student->prev=temp;
		temp->next=new_student;
		head=new_student;	
		}
	cout<<"Student added and given ID number: "<<new_student->id<<" and enrolled in section: "<<new_student->section<<endl;
}


/*Function displays from last registered student to first, LIFO*/
void view_profile(){
	stud_profile *temp=head;
	if(head==NULL)
		cout<<"EMPTY LIST"<<endl;
	else{
		cout<<setw(22)<<"NAME"<<setw(12)<<"ID"<<setw(12)<<"Section"<<setw(23)<<"Preferred field"<<setw(10)<<"SEX"<<endl;	
		do{
			cout<<temp->name<<setw(13)<<temp->id<<setw(5)<<temp->section<<setw(22)<<temp->dept<<setw(10)<<temp->sex<<endl;
			temp=temp->next;
		}while(temp!=head);		
		cout<<"---------------------------END OF LIST--------------------------------------"<<endl;
}
}

/*DELETE LAST SAVED STUDENT i.e pop method in stack*/
void delete_profile(){
	stud_profile *temp=head;
	if(head==NULL) cout<<"Nothing to delete"<<endl;
	else if(head->next==head){
		head=NULL;
		free(head);
	}
   
	else{
		while(temp->next!=head)
			temp=temp->next;
		temp->next=head->next;
		head->next->prev=temp;
		free(head);
		head=temp->next;
	}
	
}

/*ID is passed because ID's stay the same through out time of study*/			
void edit_profile(int id){
	stud_profile *temp=head;
	string edit;
	char ch,ed;

	if(head==NULL){
		cout<<"THERE ARE CURRENTLY NO FILES TO EDIT IN THE LIST!"<<endl;
	}
	else{
		do{
	  		temp=temp->next;
		}while(temp->id!=id && temp!=head);
		if(temp->id==id){
			cout<<" 'n' to edit name \n 'f' to edit preferred field of study? \n 's' to edit gender entry typo"<<endl;
			cin>>ch;
			cin.ignore();
			if(ch=='n'){
				cout<<"Enter new name";
				getline(cin,temp->name);
					}
			else if(ch == 'f'){
				cout<<"What's your new preference: ";
				getline(cin,temp->dept);
			}
			else if(ch=='s'){
				cout<<"current gender: "<<temp->sex<<", Enter your edit";
		 		cin>>temp->sex;
			}
			else
				cout<<"Wrong Entry!"<<endl;
		}
		else if(temp->id!=id)
			cout<<"Make sure you entered the right ID number!"<<endl; 
	}
}

/*POPs profiles in stack and appends them into file. i.e Database*/ 
void save_to_file(){
	stud_profile *temp=head;
	ofstream profile;
	profile.open("student_data.txt", ios::app);
	if(head==NULL){
		cout<<"NOTHING TO SAVE IN STACK!"<<endl;
	}
	else{
		do{
			profile<<"NAME: "<<temp->name<<"\tID: "<<temp->id<<"\t Section: "<<temp->section<<"\nDepartment of choice: "<<temp->dept<<"\nGender: "<<temp->sex<<endl;
			profile<<"----------------------------------------------------------------------------------------"<<endl;
			free(temp);
			temp=temp->next;
		}while(temp!=head);
	}
	profile.close();
}

/*FUNCTION TO VIEW content of student_data.txt FILE*/
void view_file(){
	string line;
	ifstream stud_data("student_data.txt");
	while(!stud_data.eof()){
		getline(stud_data,line);
		cout<<line<<endl;
	}
	stud_data.close();
  }

/*void admin_features(){
	string str;
	char ch;
	cout<<"Admin's can access student files to view and edit \nWhat will you like to do?"<<endl;
	cout<<"'v' to view student profiles in the database.\n'e' to edit student information"
}*/


int main(){
	cout<<"THIS IS A TOOL TO ADMIT STUDENTS INTO THE INSTITUTION'S DATABASE AND PERFORM DIFFERENT OPERATIONS."<<endl;
	int edit,choice,n;
	string x;
 menu:
	cout<<"|   Press [0] to add students."<<endl;
	cout<<"|   Press [1] to DELETE LAST STUDENT IN THE LIST(STACK)."<<endl;
	cout<<"|   Press [2] to edit unsaved student's profile using ID."<<endl;
	cout<<"|   Press [3] to view unsaved student profiles in the stack."<<endl;
	cout<<"|   Press [4] to save session data into file."<<endl;
	cout<<"|   Press [5] to view student's profile in the file(NEED TO HAVE ADMIN RIGHTS)."<<endl;
	cout<<"|   Press [6] to display menu."<<endl;	
	cout<<"|   Press [7] to end the session."<<endl;

	do{
		cout<<"WHAT WILL YOU BE DOING: ";
		cin>>choice;
		switch(choice){
		case 0:
			cout<<"How many students will you be adding? ";
			cin>>n;
			for(int i=0;i<n;i++)
				add_student();
			cout<<"OPERATION SUCCESSFUL REDIRECTING YOU TO THE MENU......................................."<<endl;
			goto menu;
			break;
		case 1:
			delete_profile();
			break;
		case 2:
			cout<<"You have choosen to edit a student's profile,\n Please Enter studnet's ID: ";
			cin>>edit;
			edit_profile(edit);
			break;
		case 3:
			view_profile();
			break;		
		case 4:
			save_to_file();
			head==NULL; /*STARTING A NEW STACK TO AVOID REPETITION FOR THE NEXT SAVE*/
			cout<<"OPERATION SUCCESSFUL, START A NEW LIST BY PRESSING [0] ";
			break;
		case 7:
			cout<<"SESSION ENDED, GOODBYE!"<<endl;
			break;
		case 6:
			goto menu;
			break;
   		case 5:
			/*while(i!=PASS)
			  cout<<"TRY["<<i<<"] YOU ARE TRYING TO ACCESS SENSITIVE DATA PLEASE ENTER PASSWORD TO PROCEED: ";*/
			cin.ignore();
			getline(cin,x);
			if(x==PASS)
				view_file();
			else
				cout<<"OPERATION CANNOT BE PERFORMED BECAUSE USER DOES NOT HAVE ACCESS TO THIS FEATURE."<<endl;
   
			break;
		 	default:
				cout<<"Wrong Entry!"<<endl;
				break;
		}
	}while(choice!=7);
	return 0;
}
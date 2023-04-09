#include <iostream>
#include <string.h>

using namespace std;
struct registr{
	string student_name;
	string department;
	string id;
	registr *link;
};
registr *head = NULL;

void traverse(){
	registr *ptr=head;
	do{
		cout<<ptr->student_name<<"\t"<<ptr->department<<"\t"<<ptr->id;
		cout<<"\n--------------------------------------------------------------------"<<endl;
	ptr=ptr->link;
	}while(ptr!=head);
}

registr *add_2_head(string name,string department,string id);
registr *add_2_tail(string name, string department, string id);

int main(){
	int n;
	string name, department,id;
	cout<<"How many students to register: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin.ignore();
		cout<<"student's name: ";
		getline(cin,name);
		cout<<name<<"'s departemnt: ";
		getline(cin,department);
		cout<<"Enter Id: ";
		cin>>id;
		head = add_2_head(name,department,id);
	}
	traverse();
}

registr *add_2_head(string name, string department, string id){
	registr *new_element=new registr;
	registr *tmp=head;
	new_element->student_name=name;
	new_element->department=department;
	new_element->id=id;
	new_element->link=head;
	if(head!=NULL){
		while(tmp->link!=head)
			tmp=tmp->link;
		tmp->link=new_element;
	}
	else
		new_element->link=new_element;
	return(new_element);
}

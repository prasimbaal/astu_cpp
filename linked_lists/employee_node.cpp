#include <iostream>
#include <string.h>
using namespace std;

struct employee{
	employee *link;
	float salary;
	string id;
	string name;
   	employee *link_zero;
};
 /* add to head for single circularly linked*/ 

employee *add_2_head(employee *head,string name, string id, float salary){
	employee *new_node=new employee;
	employee *tmp=head;
	new_node -> name = name;
	new_node -> id = id;
	new_node -> salary= salary;
	new_node -> link = head;
	if(head!=NULL){  
		while(tmp->link!=head)
			tmp=tmp->link;
		tmp->link=new_node;
	}
	else
		new_node->link=new_node; 
	return(new_node);
}

employee *add_2_tail(employee *head, string name,string id,float salary){
	employee *tmp=head;
	employee *tail = new employee;
	tail->name=name;
	tail->id=id;
	tail->salary=salary;
	head->link=head;
	if(head==NULL){
		head=tail;		
	}
	else{
		 do{
			 tmp=tmp->link;
		 }while(tmp->link!=head);
		 tmp->link=tail;
		 }
	return head;
}
employee *add_after(employee *head, string name,string id, float salary, string after){
	employee *new_node = new employee, *tmp=head;
	new_node->name=name;
	new_node->id=id;
	new_node->salary=salary;
	new_node->link = head;
	if(head==NULL)
		head=new_node;
	else{
		do{
	if(tmp->name==after){
		new_node->link=tmp->link;
		tmp->link=new_node;
		return head;
		break;
	}}while(tmp!=head);
			}
	return head;
}

/*employee *update(employee *head,string upd){
	employee *tmp = head;
	employee *new_node = new employee;
*/		
	
void traverse(employee *head){
	employee *tmp;
	tmp=head;
	do{
		cout<<tmp->name<<"  "<<tmp->salary<<" "<<tmp->id<<endl;
		tmp=tmp->link;
	}while(tmp!=head);
	cout<<"--------------------------------------------------------"<<endl;
}
int main(){
	employee *head = NULL; //creating the head
    menu:
	cout<<"'h'to add to head"<<endl;
	cout<<"'t' to add to tail"<<endl;
	//	cout<<"'d' for traversion through list"<<endl;
	cout<<"'x' to exit prompt"<<endl;
	cout<<"'m' to add to the middle"<<endl;
	
	char choice;
	int n;
	string id;
	float salary;
	string name;
	do{
		
		cout<<"Add to head or to tail?"<<endl;
		cin>>choice;
		cout<<"How many employees will you be hiring today? ";
		cin>>n;
  
	for(int i=0;i<n;i++){
		string after;
		cin.ignore();
		cout<<"Enter name of new employee: ";
		getline(cin,name);
		cout<<"ID for the new employee: ";
   		getline(cin,id);
		cout<<"Salary of new employee: ";
		cin>>salary;
		//		cin.ignore();
		switch(choice){
		case 'm':
			cout<<"Where whom do you want to add the new employee";
			cin.ignore();
			getline(cin, name);
			head=add_after(head,name,id,salary,after);
			break;
		case 'x':
			cout<<"Session terminated"<<endl;
			break;
		case 'h':
			head = add_2_head(head,name,id,salary);
			break;
			/*	case 'd':
			traverse(head);
			break;*/
		case 't':
			head = add_2_tail(head,name,id,salary);
			break;
		default:
			cout<<"Wrong input please choose again";
			goto menu;
			break;
		}
	}
	}while(choice!='x');
	traverse(head);
}

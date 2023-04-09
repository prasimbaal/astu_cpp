#include <iostream>
#include <string.h>

using namespace std;

struct node{
	string f_name;
	string id;
	node *next,*prev;
}*head=NULL,*tail=head;

void add_2_head(){
	node *new_node= new node;
	string name,xid;
	cout<<"ENTER NAME OF USER:"<<endl;
	getline(cin,name);
	new_node->f_name=name;
	cout<<"ENTER USER ID:"<<endl;
	getline(cin,xid);
	new_node->id=xid;
	if(head==NULL){
		tail=new_node;
		head=new_node;		
		new_node->next=tail;
		new_node->prev=new_node;
	}
	else{
   		new_node->next=head;
		head->prev=new_node;
		head=new_node;
		head->prev=tail;
		tail->next=head;
	}
}

void add_2_tail(){
	node *new_node=new node;
	string u_name,xid;
	cout<<"ENTER USERNAME:"<<endl;
	getline(cin,u_name);
	new_node->f_name=u_name;
	cout<<"ENTER ID:"<<endl;
	getline(cin,xid);
	new_node->id=xid;
	if(tail==NULL){
		tail=new_node;
		head=new_node;	
		new_node->prev=new_node;
		new_node->next=new_node;
	}
	else{
		new_node->next=head;
		new_node->prev=tail;
		tail->next=new_node;
		tail=new_node;
	}
}

void traverse(){
	node *tmp=head;
	if(head==NULL){
		cout<<"EMPTY LIST PLEASE ADD SOME DATA!"<<endl;
	}
	else{
		do{
			cout<<tmp->f_name<<"\t"<<tmp->id<<endl;
			tmp=tmp->next;
		}while(tmp!=head);
	}
}
void insert_at_middle(int count){
	node *new_node = new node;
	node *tmp=head;
	string u_name,xid;
	cout<<"ENTER USERNAME:"<<endl;
	getline(cin,u_name);
	new_node->f_name=u_name;
	cout<<"ENTER ID:"<<endl;
	getline(cin,xid);
	new_node->id=xid;
	if(head==NULL){
		tail=new_node;
		head=new_node;		
		new_node->next=tail;
		new_node->prev=new_node;
	}
	else{
		for(int i=0;i<count/2;i++)
			tmp=tmp->next;
		new_node->prev=tmp;
		new_node->next=tmp->next;
		tmp->next->prev=new_node;
		tmp->next=new_node;
	}
}
			
void reverse(){
	node *tmp=head;	
	if(tail==NULL)
		cout<<"EMPTY LIST"<<endl;
	else{
		do{
			tmp=tmp->prev;
			cout<<tmp->f_name<<"\t"<<tmp->id<<endl;	
		}while(tmp!=head);
	}
}

int main(){
	int choice,no,count(0);
	
	cout<<"-------------------------WELCOME TO THE NODE CREATER!---------------------"<<endl;
 menu:
	cout<<"'1' for addition to the begining."<<endl;
	cout<<"'2' for addition at the end."<<endl;
	cout<<"'3' for insertion in the middle."<<endl;
	cout<<"'4' to forward display."<<endl;
	cout<<"'5' for reverse display."<<endl;
	cout<<"'6' to exit session."<<endl;
	do{
		cout<<"CHOOSE: ";
		cin>>choice;
		switch(choice){
		case 1:
			cout<<"HOW MANY NODE WILL YOU BE ADDING?"<<endl;
			cin>>no;
			cin.ignore();
			for(int i=0;i<no;i++){
				add_2_head();
				count++;
			}
			goto menu;
			break;
		case 2:
			cout<<"HOW MANY NODE WILL YOU BE ADDING?"<<endl;
			cin>>no;
			cin.ignore();
		   	for(int j=0;j<no;j++){		
				add_2_tail();
				count++;
			}
			goto menu;
			break;
		case 3:
			cout<<"HOW MANY NODE WILL YOU BE ADDING?"<<endl;
			cin>>no;
			cin.ignore();
		   	for(int j=0;j<no;j++)
				insert_at_middle(count);
			goto menu;
			break;
			
		case 4:
			traverse();
			cout<<"-------------------------------------------------------------------------------"<<endl;
			goto menu;
			break;
		case 5:
			reverse();
			cout<<"-------------------------------------------------------------------------------"<<endl;
			goto menu;
			break;
		case 6:
			cout<<"EXITING----"<<endl;
			break;
		default:
			cout<<"WRONG INPUT REDIRECTING TO MENU:";
			goto menu;
			break;
		}
	}while(choice!=6);
}

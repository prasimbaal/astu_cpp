#include <iostream>
#include <string.h>
using namespace std;

struct double_node{
	int data;
	double_node *prev, *link;
};

double_node *head = NULL;
double_node *tail = NULL;
void add_2_head(int data){
	double_node *new_node = new double_node;
	new_node->data=data;

	if(head==NULL){
		cout<<"EMPTY LIST<> CREATING ONE!"<<endl;
		head=new_node;
		new_node->link=NULL;
		new_node->prev=NULL;
		tail=new_node;
	}
	new_node->prev=NULL;
	new_node->link=head;
	head->prev=new_node;
	head=new_node;

}
void traverse_f(double_node *head){
	double_node *tmp;
	tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<endl;
		tmp=tmp->link;
	}
	
}
		
	
int main(){
	int n,data;
	traverse_f(head);
	cout<<"How many nodes do you want to add to head? "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter data to insert to the node";
		cin>>data;
		add_2_head(data);
	}
	traverse_f(head);
}

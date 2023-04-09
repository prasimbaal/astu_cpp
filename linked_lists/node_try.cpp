#include <iostream>
using namespace std;


struct Node{
	int data;
	Node *link;
};

void traverse(Node *head){
	Node *tmp;
	tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
		tmp=tmp->link;
	}
	cout<<endl;
}
	
void add_2_end(Node *head, int value){
	Node *temp;
	Node *tail = new Node;
	tail->data=value;
	tail->link=NULL;
	temp=head;
	while(temp->link!=NULL)
		temp=temp->link;
	temp->link=tail;
}
Node *new_node(Node *head,int value){
	Node *newnode = new Node ;
	newnode -> data=value;
	newnode ->link = head;
	return(newnode);	
}
	
int main(){
	Node *head=NULL;
   	int n;
	cin>>n;
   	for(int i=0;i<n;i++){
		int new_data;
		cin>>new_data;
		head=new_node(head, new_data);
		}
   	traverse(head);

	for(int j=0;j<n;j++){
		int x;
		cin>>x;
		add_2_end(head, x);
	}
 	traverse(head);
}

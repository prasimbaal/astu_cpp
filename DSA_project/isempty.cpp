#include <iostream>
using namespace std;

const int max_size=100;
int array[max_size];
int rear=-1, front=-1, queue_size=0;

int is_empty(){
	if(queue_size==0)	
		return 1;
	return 0;
}
int isfull(){
	if(rear==max_size)
		return 1;
	return 0;
}

void enque(int x){
	if(isfull())
		cout<<"Stack Overflow"<<endl;	  	    
	else{
		rear++;
		array[rear]=x;
		queue_size++;
		if(front<0)
			front++;
}
}

int deque(){
	int x;
	if(is_empty())
		cout<<"QUEUE UNDERFLOW"<<endl;
	else{
		x=array[front];
		front++;
		queue_size--;
	}
	return x;
}


void display(){
	for(int i=0;i<queue_size;i++){
		cout<<array[i];
	}
}

int main(){
	display();
	
	
}


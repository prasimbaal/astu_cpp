#include <iostream>
#include <string.h>
using namespace std;

struct op_stack{
	string optr; //operator
	op_stack *link;
};

//function to check precedence of operator
int precedence(char operator){ 
	switch(operator){
	case '+':
	case '*':
		return 1;
	case '*':
	case '/':
		return 2;
	case '^':
		return 3;
	default:
		return -1;
	}
}

//function to check if a character is an operator
int is_operator(char expression){
	return (ch=='*' || ch == '/' || ch =='-' || ch=='+' || ch == '^');
}


int main(){
	op_stack *head = NULL;
	string expr="a+b-c*d";
	
}	

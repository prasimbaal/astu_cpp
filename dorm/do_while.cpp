#include <iostream>
#include <stdlib.h>
#include "random_no.h"
using namespace std;



int main(){
	int counter(0),number,max(-2087554);
	do{
		cin>>number;
		if(number!=-1){
			counter++;
		  	if(number>max)
				max=number;
			else
				continue;
	
		}
		else{
			cout<<"'-1' ended this session"<<endl;
			break;
		}
	}while(number!=-1);
	cout<<"Max: "<<max<<endl;
	cout<<"Guess mofo"<<endl;
	int x = loop_rand();
	int new_no;
	cin>>new_no;
	if(new_no==x)
		cout<<"Bitch you guessed it!"<<endl;
	else
		cout<<"WRONG"<<endl;

return 0;
}

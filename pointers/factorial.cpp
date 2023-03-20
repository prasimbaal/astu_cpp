#include <iostream>
using namespace std;

int main(){
	int n, *p,factorial,*fact;
	cin>>n;	
	p=&n;
	factorial=n;
	fact=&factorial;
	if(n>=2){
		for(int i=n;i>1;i--){
			*fact*=--(*p);
		}
		cout<<"The factorial is "<<*fact<<endl;
	}
	else{
		*fact=1;
		cout<<"The factorial is "<<factorial<<endl;
	}
	return 0;
}

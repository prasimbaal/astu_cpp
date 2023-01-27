#include <iostream>
using namespace std;

int main(){
	int x(9), y(0), *p,*q, temp;
	cout<<"X: "<<x<<"\tY: "<<y<<endl;
	p=&x;
	temp = x;
	q=&y;
	*p=y;
	*q = temp;
	cout<<x<<" x \t"<<y<<" y"<<endl;
	return 0;
}

#include <iostream>
using namespace std;

void duplicate(int& a, int& b, int&c){
	a*=2;
	b*=2;
	c*=2;
}
void add_two(int a, int b, int c){
	a=a+2;
	b=b+2;
	c=c+2;
}
int main(){
	int x=2,y=3,z=2;
	//	duplicate(x,y,z);
	add_two(x,y,z);
	cout<<x<<y<<z<<endl;
	return 0;
}

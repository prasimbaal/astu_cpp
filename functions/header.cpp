#include "module"
int divide(int a,int b=4){
	return a/b;
}

int main(){
	cout<<"check"<<endl;
	int x = divide(4);
	int y = divide(40,5);
	cout<<x<<"\t"<<y<<endl;
	return(0);
}

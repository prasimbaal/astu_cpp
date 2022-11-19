#include "module"
inline int cube(int s, int i){
	return pow(s,i);
}
int main(){
	int a,b,c;
	cin>>a>>b;
	c=cube(a,b);
	cout<<c<<endl;
	return 0;
}

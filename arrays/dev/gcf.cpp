#include <iostream>
#include <math.h>

using namespace std;

int main(){
	unsigned n1,n2;
	cin>>n1>>n2;
	int temp = n1;
	if(n2>n1){
		n1=n2;
		n2=temp;
	}
	int hcf=1;
	for(int i=2;i<=n2;i++){
		if(n1%i==0 && n2%i==0)
			hcf=i;
	}
	cout<<hcf<<endl;
	return 0;
}

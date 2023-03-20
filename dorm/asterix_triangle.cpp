#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i,j,n; /* n is the height of the triangle*/
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	unsigned no;  /*need positive input*/
   	cin>>no;
   	cout<<"factors of: "<<no<<" are ";
	for(int i=1;i<=sqrt(no);i++){
		if(no%i==0 && no/i!=i)
			cout<<i<<","<<no/i<<" ";
		else
			cout<<i;
	}
	cout<<endl;
	return 0;
}

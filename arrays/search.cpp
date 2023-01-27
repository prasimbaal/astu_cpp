#include <iostream>
using namespace std;

int main(){
	int myarray[10];
	cout<<"ENTER ELEMENTS FOR YOUR ARRAY: ";
	for(int i=0;i<10;i++)
		cin>>myarray[i];
	cout<<"\nELEMENTS OF YOUR ARRAY ARE: ";
	for(int j=0;j<10;j++)
		cout<<myarray[j]<<",";
	cout<<"\nENTER AN INTEGER TO FIND OUT HOW MANY TIMES IT OCCURS IN THE ARRAY ";
	int number;
	cin>>number;
	int count=0;
	for(int n=0;n<10;n++){
		if(myarray[n]==number)
			count++;
	}
	cout<<"YOUR INTEGER IS FOUND "<<count<<" TIMES IN THE ARRAY."<<endl;
	return 0;
}

		   

#include <iostream>
using namespace std;

int main(){
	int number, count(0);
	cin>>number;
	while(number>=60){
		count++;
		number-=60;
	}
	cout<<count<<":"<<number;
	cout<<endl;
	return 0;
}

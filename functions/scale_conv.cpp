#include <iostream>
using namespace std;

void conv(float farheniet);
int main(){
	float celsius, farheniet;
	cout<<"ENTER TEMPRATURE VALUe(farheniet): ";
	cin>>farheniet;
	conv(farheniet);
}
void conv(float farheniet){
	cout<<((farheniet-32)*5)/9<<endl;
}

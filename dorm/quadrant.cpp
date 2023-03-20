#include <iostream>
#include<cmath>
using namespace std;

int main(){
	int angle;
	cin>>angle;
	switch(angle){
	case 0:
	case 180:
	case 360:
		cout<<"The X axis\n";
		break;
	case 90:
	case 270:
		cout<<"The y axis";
		break;
	default:
		cout<<"Not on any axis \n";
	}

	cout<<"------------------------------------------------------- \n";
	int x = 360+angle;
	if(angle<0)
		angle=x;
	if(angle>=0&&angle<=90)
		cout<<"First Quadrant \n";
	if(angle>90 && angle<=180)
		cout<<"Lies in the second quadrant \n";
	if(angle>180 && angle<=270)
		cout<<"Lies in the third quadrant \n";
	if(angle>270 && angle<=360)
		cout<<"FOurth quadrant angle \n";
	return 0;
}

		
	

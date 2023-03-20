#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double angle;
	double x;
	cout<<"Enter angle in degrees:";
	cin>>angle;
	      cout<<"Enter value of x:";
		    
        cin>>x;
	double e= exp(x);    /* Euler's constant to the power of x */
	cout<<"sin("<<angle<<") is:"<<sin(angle)<<"\t"<<"e^x yields:"<<e<<"\n"<<endl;
	return 0;
}

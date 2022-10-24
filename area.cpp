#include <iostream>
using namespace std;
int x=9;
/*
 *main function takes no arguments
 * returns 0
 */

int main()
{
	float area;
	const float pi = 3.14; /*set constant value for pi*/
	float radius = 12;  
	area = pi*radius*radius; //area = pi*r^2
	cout<< "The area of a circle with radius 12 = " << area<< "\n";
	return(0);
}

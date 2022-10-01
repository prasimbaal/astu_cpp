#include <iostream>
using namespace std;

int main()
{
	int x = 20;
	int inc = x++;
	cout <<"x++ variable now has a value of "<< inc << endl;
	inc = ++x;
	cout << "++x is now " << inc << endl
		 << "and x has a value of " << x << endl;
	x--;
	cout << x << "\n";
	x*=2;
	cout <<x <<"\n";
	return 0;
}


#include <iostream>
using namespace std;
int main()    /*had a missing paranthesis*/
{
	cout << "If this text"; /*semicolon missing*/ 
	cout <<" appears on your display, ";
	cout << endl;
    cout <<"you can pat yourself on "
		 << " the back!" << endl; /*semicolon was not present*/
		return 0;

}  /*added a curly brace*/

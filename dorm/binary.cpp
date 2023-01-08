#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
  float f(9.8);
  char y('$');
  //  char ch;
  int i = 1e1;
  int x =10;
  cout<<scientific<<"x"<<endl;
  cout<<hex<<x;
  cout<<endl<<sqrtf(f)<<endl;
			// cout<< static_cast<int>(y);
  cout<<endl<<setbase(2)<<y<<"\n";
  return 0;
}

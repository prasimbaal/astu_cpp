#include <iostream>
using namespace std;

int main(){
  char x = 'A';
  cout<<x<<endl;
  char y = 'J';
  x+=' ';
  bool tf = y==x;
  cout<<tf<<"\t";
  cout<<x<<"\t"<<y<<"\n";
  y+=32;
  cout<<y<<endl;
  return 0;
}

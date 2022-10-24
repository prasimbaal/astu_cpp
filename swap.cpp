#include <iostream>
using namespace std;
/*program to swap two variables without a third temporary variable*/
int main(){

  int a,b; /*initializing two variables*/
  cout<<"Enter two numbers to be swapped"<<endl;
  cin>> a >>b;
  cout<<"Before swap"<<endl<<"A: "<<a<<endl<<"B: "<<b<<endl;
  b = a*b/(a=b); /* a*b divided by a=b(which means b) gives us a*/
  cout<<"AFTER SWAPPING THE TWO VARIABLES"<<endl;
  cout<<"A: "<<a<<endl<<"B: "<<b;
  return 0;
}

  

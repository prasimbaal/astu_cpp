#include <iostream>
//#include "main.h"
using namespace std;
char check(int alpha,int beta, int gamma);

int main()
{
   char ch;
   /* cout<<"Enter a character: ";
    * cin>>ch;
    vowel_check(ch);*/
  int a,b,c;
  cout<<"Enter the three angles of a triangle to check it's validity: ";
  cin>>a>>b>>c;
  char x = check(a,b,c);
  if(x=='T')
    cout<<"The given is a Triangle"<<endl;
  else
    cout<<"NOT A TRIANGLE! /n";
  return 0;
}

char check(int alpha,int beta, int gamma){
  int sum(0);
  sum = alpha + beta + gamma;
  switch(sum){
  case 180:
    return 'T';
  default:
    return 'F';
  }
}

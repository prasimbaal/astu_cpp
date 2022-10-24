#include <iostream>
#include "main.h"

int main()
{
   char ch;
   cout<<"Enter a character: ";
   cin>>ch;
   
  // vowel_check(ch);
  int a,b,c;
  cout<<"Enter the three angles of a triangle to check it's validity: ";
  cin>>a>>b>>c;
  triangle_check(a,b,c);
  return 0;
}

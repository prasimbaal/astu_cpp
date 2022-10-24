#include <iostream>
using namespace std;
/*this program outputs the next character of a character recieved from input*/

int main()
{

  char a;
  int i;
  cout<<"Enter a character: ";
  cin>>a;
  for(i=0;i<1;i++)
    a++;
  cout<<"------------------------------------";
  cout<<endl<<"Next character is "<<a<<endl;
  return 0;
}

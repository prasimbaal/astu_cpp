#include <iostream>
using namespace std;

int main(){
  int i =9;
  int y = ++i;
  i--;
  int z = i++;
  cout<<y<<"\t"<<z<<"\t"<<i<<endl;
  cout<<"VOID CHECK!!"<<endl;
}

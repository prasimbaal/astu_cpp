#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
  int n;
  srand(time(0));
  for(int i = 0;i<1;i++){
    n=rand()%10;
    cout<<n<<"\t";
}
}
  

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int i,j;
  for(i=1;i<=12;i++){ /*13 rows*/
    cout<<"|";
    for(j=1;j<13;j++){ /*13 columns*/
      cout<<setw(3);
      cout<<i*j<<"|";
    }
    cout<<endl;
    cout<<"-------------------------------------------------";
    cout<<"\n"; 
  }
  return 0;
}

      

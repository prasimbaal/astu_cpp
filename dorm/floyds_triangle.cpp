#include <iostream>
using namespace std;

int main(){
  int i(1),k,n;
  cout<<"Enter a number:";
  cin>>n;
  int j(1);
  while(i<=n){
	  for(k=1;k<i;k++){
		  cout<<j<<" ";
			  j++;
	  }
    cout<<endl;
    i++;
  }
  return(0);
}

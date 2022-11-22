#include <iostream>
using namespace std;

int main(){
  int i(1),k,n;
  cout<<"Enter a number:";
  cin>>n;
  while(i<=n){
	  int j=0;
	  for(k=1;k<i;k++){
		  if(i==1)
			  cout<<i<<" ";
		  if(i>1)
			  cout<<i+k<<" ";
	  }
    cout<<endl;
	j+=i;
    i++;
  }
  return(0);
}

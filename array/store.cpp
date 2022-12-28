#include <iostream>

using namespace std;

int main(){
  // char name[5];
  int c[5], sum(0);
  for(int i=0;i<5;i++){
    cin>>c[i];
  }
  int max = c[0], min = c[0];
  cout<<" -------------------------"<<endl;
  //cin>>name;
  for(int j=0;j<5;j++){
    sum+=c[j];
    if(c[j]>max)
      max=c[j];
    if(c[j]<min)
      min=c[j];
  }
  cout<<sum<<'\t'<<sum/5<<endl;
  cout<<'\n'<<min<<'\t'<<max;
  //  cout<<name<<endl;
  return 0;
}

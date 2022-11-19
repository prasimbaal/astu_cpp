#include <iostream>
using namespace std;

int main()
{
  int i(50),j(25),k(10),l(1);
  int birr,fair,remainder;
  cout<<"HOw much is the taxi fair? ";
  cin>>fair;
  cout<<"How much birr do I have? ";
  cin>>birr;
  fair*=100;
  birr*=100;
  remainder= birr-fair;
  int m = remainder/i;
  int mod=remainder%i;
  int var = mod%j;
  int var2 = var%k;
  int var3=var2%l;
  if(mod==0){
    cout<<"HEre is your "<<m<<"  "<<i<<"cents"<<endl;
  }
  else
    {
      if(var==0)
	cout<<m<<"50 cents and "<<mod/j<<" 25 cents"<<endl;
      if(var2==0)
	cout<<m<<"50 cents"<<mod/j<<"25 cents and "<<var/k<<"10 cents"<<endl;
      if(var3==0)
	cout<<m<<"\t"<<mod/j<<"\t"<<var/k<<"\t"<<var2/l<<endl;
      }
  return 0;
}

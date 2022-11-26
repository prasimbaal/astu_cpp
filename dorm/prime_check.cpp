#include <iostream>
using namespace std;
void prime_check(int x);
int main()
{
  int x;
  int i(1);
  int div(0);
  cout<<"Enter a number to check if it is prime:";
  cin>>x;
  prime_check(x);
  
  return 0;
}

void prime_check(int x){
	int i(1);
	int div(0);
	while(i<=x){
		if(i%x)
			div+=1;
		i++;
	}
	if(div>2)
		cout<<"Not prime \n";
	else
		cout<<"Prime number! \n";
}
		

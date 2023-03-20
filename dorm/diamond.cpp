#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int h,i,spcs,j;
	cin>>h; /* height */
	int x =h/2;
	for(i=1;i<=h;i++){
		if(i<=x+1){
			for(spcs=i;spcs<=x;spcs++)
				cout<<" ";
			for(j=1;j<=i;j++)
				cout<<"* ";
			cout<<endl;
			if(h%2==0 && i==x+1){
				for(int b=1;b<=i;b++)
					cout<<"* ";
				cout<<endl;
			}

				
		}
		else{
			for(int spc2nd=x+2;spc2nd<i;spc2nd++)
				cout<<" ";
			for(int k=i;k<=h;k++)
				cout<<" *";
			cout<<endl;
		}
		//	return 0;
	}
	return 0;
}
			
			

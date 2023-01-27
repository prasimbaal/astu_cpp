#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int i,myarray[10];
	srand(time(0));
	for(i=0;i<10;i++){
		myarray[i]=rand()%100;
	}
	int max=myarray[0];
	for(int j=1;j<10;j++){
		if(myarray[j]>max)
			max=myarray[j];
	}
	cout<<"ELEMENTS OF THE ARRAY ARE: ";
	for(int k=0;k<10;k++)
		cout<<myarray[k]<<" ";
	cout<<"MAX VALUE: "<<max<<endl;
	return 0;
}

			

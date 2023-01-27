#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vect(0);
	vect.push_back(0);
	vect.push_back(-1);
	vect.push_back(99);
	cout<<"Elements of the vector are: "<<endl;
	for(int i=0;i<vect.size();i++)
		cout<<vect[i]<<" ";
	cout<<endl;
	return 0;
}
		

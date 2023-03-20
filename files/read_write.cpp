#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

struct playlist{
	int year;
	string title;
	string artist;
}song_entry[12];
	

int main(){
	string feed;
	cout<<"How many songs are you adding this session dear user: ";
	int amt;
	cin>>amt;
  	for(int i=0;i<amt;i++){
		cin.ignore();
		cout<<"Enter name of song: ";
 		cin.ignore();
   		getline(cin,song_entry[i].title);
   		cout<<"Enter artist name: ";
   		getline(cin,song_entry[i].artist);
   		cout<<"Enter year song was released: ";
   		cin>>song_entry[i].year;
			}
	
	ofstream music_store;
		music_store.open("playlist.txt");
		for(int j=0;j<amt;j++)
		music_store<<song_entry[j].title<<" by "<<song_entry[j].artist<<" "<<song_entry[j].year<<endl;
	music_store.close();
	return 0;
}

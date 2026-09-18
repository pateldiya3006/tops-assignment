#include<iostream>
using namespace std;

class Playlist{
	public:
		string name;
		int songCount;
		int isPublic;
		string songs[10];

		Playlist(string n, int s, int p){
			name = n;
			songCount = 0;
			isPublic = p;
		}

		void addSong(string songTitle){
			songs[songCount] = songTitle;
			songCount++;
		}

		void displaySongs(){
			cout << "\nSongs List:";
			for(int i = 0; i < songCount; i++){
				cout << "\n" << songs[i];
			}
		}
};

main(){
	Playlist p("My Songs", 0, 1);

	p.addSong("Kesariya");
	p.addSong("Tum Hi Ho");
	p.addSong("Apna Bana Le");

	p.displaySongs();

	return 0;
}

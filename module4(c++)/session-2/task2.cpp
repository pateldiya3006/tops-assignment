#include<iostream>
using namespace std;

class Playlist{
	public:
		string name;
		int songCount;
		int isPublic;

		Playlist(string n, int s, int p){
			name = n;
			songCount = s;
			isPublic = p;
		}

		void togglePublic(){
			if(isPublic == 1){
				isPublic = 0;
			}
			else{
				isPublic = 1;
			}
		}

		void display(){
			cout << "\nPlaylist Name: " << name;
			cout << "\nSong Count: " << songCount;
			cout << "\nIs Public: " << isPublic;
		}
};

main(){
	Playlist p("My Songs", 10, 1);

	p.display();

	p.togglePublic();
	cout << "\n\nAfter First Toggle:";
	p.display();

	p.togglePublic();
	cout << "\n\nAfter Second Toggle:";
	p.display();

	return 0;
}

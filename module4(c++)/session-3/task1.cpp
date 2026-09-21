#include<iostream>
using namespace std;

class Playlist{
	public:
		string name;

		Playlist(){
			name = "My Favourites";
			cout << "\nWelcome to your playlist!";
		}

		void display(){
			cout << "\nPlaylist Name: " << name;
		}
};

main(){
	Playlist p;

	p.display();


}

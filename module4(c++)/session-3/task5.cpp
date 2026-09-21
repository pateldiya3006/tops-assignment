#include<iostream>
#include<fstream>
using namespace std;
class Playlist{
	public:
		string name;

		Playlist(){
			name = "My Favourites";
			cout << "\nPlaylist Created";
		}

		~Playlist(){
			ofstream file("autosave.txt");

			file << "Playlist Name: " << name;

			file.close();

			cout << "\nPlaylist saved successfully!";
		}
};
main(){
	{
		Playlist p;
	}
}

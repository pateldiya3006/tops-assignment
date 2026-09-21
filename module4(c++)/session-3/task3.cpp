#include<iostream>
using namespace std;

class Movie{
	public:
		string movieName;
		string director;
		float rating;

		Movie(string name, string d, float r){
			movieName = name;
			director = d;
			rating = r;
		}

		Movie(const Movie &m){
			movieName = m.movieName;
			director = m.director;
			rating = m.rating;
		}

		void displayInfo(){
			cout << "\nMovie Name: " << movieName;
			cout << "\nDirector: " << director;
			cout << "\nRating: " << rating << " / 5";
		}
};

main(){
	Movie original("Dia", "K.S. Ashoka", 4.5);

	Movie copied(original);

	cout << "\nOriginal Movie Details:";
	original.displayInfo();

	cout << "\n\nCopied Movie Details:";
	copied.displayInfo();

	
}

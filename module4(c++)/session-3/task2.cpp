#include<iostream>
using namespace std;

class Product{
	public:
		string productName;
		float price;
		float rating;

		Product(string name, float p, float r){
			productName = name;
			price = p;
			rating = r;
		}

		void displayInfo(){
			cout << "\nProduct Name: " << productName;
			cout << "\nPrice: Rs. " << price;
			cout << "\nRating: " << rating << " / 5";
		}
};

main(){
	Product p("Smartphone", 15999, 4.5);

	p.displayInfo();


}

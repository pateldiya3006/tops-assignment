#include<iostream>
using namespace std;

class FoodOrder{
	public:
		int orderId;
		string restaurantName;
		int isDelivered;

		FoodOrder(int id, string name, int delivered){
			orderId = id;
			restaurantName = name;
			isDelivered = delivered;
		}

		void markDelivered(){
			isDelivered = 1;
			cout << "\nOrder marked as delivered successfully!";
		}

		void display(){
			cout << "\nOrder ID: " << orderId;
			cout << "\nRestaurant Name: " << restaurantName;
			cout << "\nIs Delivered: " << isDelivered;
		}
};

main(){
	FoodOrder f(101, "Dominos", 0);

	f.display();

	f.markDelivered();

	cout << "\n\nAfter Delivery:";
	f.display();

	return 0;
}

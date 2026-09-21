#include<iostream>
using namespace std;

class Ticket{
	public:
		Ticket(){
			cout << "\nTicket booked successfully!";
		}

		~Ticket(){
			cout << "\nSaving your ticket...";
		}
};
main(){
	Ticket *t = new Ticket();
	delete t;
}

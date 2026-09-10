#include<stdio.h>
struct Fooditem{
	char itemname[20];
	float price;
	float rating;
};
main(){
	struct Fooditem  food[3]={
		{"pizza",430.00,4.5},
		{"burger",150.00,5},
		{"pasta",230.00,4.2}
	};
	int i;
	for(i=0;i<3;i++){
		printf("\n ItemName is:= %s",food[i].itemname);
		printf("\n Price is:=%2.f",food[i].price);
		printf("\n rating is:=%2.f",food[i].rating);
	}
	
}

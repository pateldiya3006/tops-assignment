#include<stdio.h>
main(){
	int choise;
	printf("\n Select your meal");
	printf("\n 1. for breakfast");
	printf("\n 2. for Lunch");
	printf("\n 3. for Dinner");
	printf("\n 4. for Snacks");
	
	printf("\n \n Select Your meal := ");
	scanf("%d",&choise);
	
	switch(choise){
		case 1:
			printf("\n Poha Is Popular Dish For Breakfast");
			break;
		
		case 2:
			printf("\n Panjabi Thali Is Popular Dish For Lunch");
			break;
		
		case 3:
			printf("\n Biryani Is Popular Dish For Dinner");
			break;
		
		case 4:
			printf("\n Samosa Is Popular Dish For Lunch");
			break;
		
		default:
			printf("Try Some fruits");
		
		
	}
}

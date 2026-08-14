#include<stdio.h>
main(){
	int age;
	printf("\n Enter Your Age :=");
	scanf("%d",&age);
	if(age>=18){
		printf("\n You Are Eligible For Driving License");
	}
	if(age>=21){
		printf("\n You Are Eligible for credit card");
		
	}
	if(age>=25){
		printf("\n you are eligible for car rental");
	}
}

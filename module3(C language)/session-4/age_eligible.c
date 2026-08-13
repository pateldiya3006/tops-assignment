#include<stdio.h>
main(){
	int age,ordervalue;
	printf("\n Enter your age:=");
	scanf("%d",&age);
	printf("\n Enter your Ordervalue :=");
	scanf("%d",&ordervalue);
	if(age>=18 && ordervalue>=500){
		printf("\n You Eligible for offer");
		
	}
	else{
		printf("\n You are not Eligible for offer");
	}
}

#include<stdio.h>
main(){
	int team;
	printf("\n choise Your Team");
	printf("\n 1. for CHENNAI SUPER KINGS");
	printf("\n 2. for MUMBAI INDIANS");
	printf("\n 3. for GUJRAT TITANS");
	printf("\n Enter the team number := ");
	scanf("%d",&team);
	if(team==1){
		printf("\n CHENNAI SUPER KINGS WIN!!!");
	}
	else if(team==2){
		printf("\n GO MUMBAI INDIANS");
	}
	else if(team==3){
		printf("\n GO GUJRAT TITANS");
	}
	else{
		printf("\n team not found");
	}
}

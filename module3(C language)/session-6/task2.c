#include<stdio.h>
main(){
	int choice;
	char team[30];
	while(1){
	printf("\n 1. for fav team");
	printf("\n 2. for add new team");
	printf("\n 3. for exit");
	printf("\n Select Your Choice:=");
	scanf("%d",&choice);
	if(choice==3){
		break;
	}

	switch(choice){
			case 1:
				printf("\n Favourite Team is:=\n Chennai Super King \n Mumbai Indians \n Gujarat Titans ");
				break;
			case 2:
				printf("\n Enter Your new team:=");
				scanf("%s",team);
				printf("\n New Team is:=%s",team);
				break;
				default:
					printf("\n wrong choice");
				}
	}
	
}

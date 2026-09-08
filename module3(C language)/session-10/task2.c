#include<stdio.h>
main(){
	char user1[20],user2[20];
	printf("\n Enter user1 name:=");
	scanf("%s",&user1);
	printf("\n Enter user2 name:=");
	scanf("%s",&user2);
	if(strcmp(user1,user2)==0){
		printf("\n Both User are Same");
	}	
	else{
		printf("\n Both user are Different");
	}
}

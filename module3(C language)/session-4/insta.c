#include<stdio.h>
main(){
	int like,comment,share;
	printf("\n Enter your like :=");
	scanf("%d",&like);
	printf("\n Enter your comment :=");
	scanf("%d",&comment);
	printf("\n Enter your share :=");
	scanf("%d",&share);
	if(like>=1000 || comment>=200 && share>=50){
		printf("\n  Tranding On instagram");
	}
	else{
		printf("\n not Tranding On instagram");
	}
}\

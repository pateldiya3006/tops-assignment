#include<stdio.h>
char task[5][100];
void marktaskdone(int index){
	strcat(task[index],"- DONE");
}
main(){
	int i,choice;
	for(i=0;i<5;i++){
		printf("\n Enter Task %d:=",i+1);
		gets(task[i]);
	}
	printf("\n Enter Number Of Task Done Mark:=");
	scanf("%d",&choice);
	marktaskdone(choice-1);
	printf("\n Update Task:");
	
	for(i=0;i<5;i++){
		printf("\n %d.%s",i+1,task[i]);
	}
}

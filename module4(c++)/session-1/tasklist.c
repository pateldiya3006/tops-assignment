#include<stdio.h>
main(){
	char task[5][100];
	int i;
	printf("\n Enter the 5 task");
	for(i=0;i<
	5;i++){
		printf("\n Enter Task:=%d",i+1);
		gets(task[i]);
	}
	printf("\n ALL TASK:= ");
	for(i=0;i<5;i++){
		printf("\n%d.%s",i+1,task[i]);
	}
}

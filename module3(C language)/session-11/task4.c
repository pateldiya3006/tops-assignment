#include<stdio.h>
void incrementFollowers(int*followers,int n)
{
	int i;
	for(i=0;i<n;i++){
		*followers=*followers+100;
		followers++;
	}
}
main(){
	int followers[5]={1000,3400,2100,2900,2500};
	int i;
	incrementFollowers(followers,5);
	for(i=0;i<5;i++){
		printf("\n update followers:=%d",followers[i]);
	}
}

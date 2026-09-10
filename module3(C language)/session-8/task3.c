#include<stdio.h>
void increaseFollowersByValue(int followers)
{
	followers=followers+1000;
	printf("\ninside value function:%d",followers);
	
}
void increaseFollowersByReferance(int *followers)
{
	*followers=*followers+1000;
	printf("\ninside reference function:=%d",*followers);
}
main(){
	int followers=5000;
	printf("orginal followers%d\n",followers);
	
	increaseFollowersByValue(followers);
	printf("\nafter pass by value:=%d",followers);
	
	increaseFollowersByReferance(&followers);
}

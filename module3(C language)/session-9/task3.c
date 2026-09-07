#include<stdio.h>
float average(int amt[7])
{
	int sum=0;
	int i;
	for(i=0;i<7;i++){
		sum=sum+amt[i];
	}
	return(float)sum/7;
}
main(){
	int dailyorder[7]={100,400,200,330,550,300,600};
	float result;
	result=average(dailyorder);
	printf("\n average zomato spend:=%2.f",result);
}

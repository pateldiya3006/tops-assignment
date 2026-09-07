#include<stdio.h>
main(){
	int score[3][2]={
	{180,176},
	{177,200},
	{189,178}
};
	int i,j;
	int max;
	for(i=0;i<3;i++){
		max=score[i][0];
		if(score[i][1]>max){
			max=score[i][1];
		}
		printf("\n match %d highest score is=%d ",i+1,max);
	}
	
}

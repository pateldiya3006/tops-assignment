#include<stdio.h>
main(){
	
	
	int song,guess;
	srand(time(0));

    song = rand() % 3 + 1;
	printf("\n guess The Song (1-3)");
	printf("\n Brown Rang");
	printf("\n Love Dose");
	printf("\n Blue Eyes");
	
		do{
			printf("\n guess the song (1-3):=");
			scanf("%d",&guess);
			
			if(guess==song){
				printf("\n Correct! You guessed the song");
				
			}
			else{
				printf("wrong try again...");
			}
		}while(guess!=song);
		return 0;
	
}

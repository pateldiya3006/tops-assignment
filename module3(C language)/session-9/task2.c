#include<stdio.h>
main(){
	int playlistrating[3][5]={
	{3,4,2,4,5},
	{2,3,4,5,5},
	{4,3,2,4,3}
	};
	int i;
	printf("\n second Playlist Rating =");
	for(i=0;i<5;i++){
		printf(" %d",playlistrating[1][i]);
	}
}

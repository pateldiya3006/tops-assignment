#include<stdio.h>
main(){
	int likes=500;
	int * ptrlikes;
	ptrlikes=&likes;
	printf("\n value of likes=%d",likes);
	printf("\nAddress stored in ptrLikes = %p",ptrlikes);
}

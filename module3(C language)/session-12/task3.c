#include<stdio.h>
struct Movieshow{
	char movie[20];
	int screen;
	struct Time{
		int hours;
		int min;
	}Time;
};
main(){
	struct Movieshow movies={"dia",3,{2,45}};
	printf("\n Moviename is=%s",movies.movie);
	printf("\n Screen is:=%d",movies.screen);
	printf("\n houres is:=%d",movies.Time.hours);
	printf("\n minitus is:=%d",movies.Time.min);
}

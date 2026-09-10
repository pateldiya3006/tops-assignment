#include<stdio.h>
struct playlist{
	char title[50];
	char artist[50];
	int duration;
};
main(){
	struct playlist song={"tum hi ho","arjit singh",267};
	printf("\n Title is:=%s",song.title);
	printf("\n Artist is:=%s",song.artist);
	printf("\n Duration is:=%d",song.duration);
}

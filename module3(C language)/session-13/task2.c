#include<stdio.h>
main(){
	FILE*file;
	file=fopen("playlist.txt","r");
	char song[40];
	if(file==NULL){
		printf("file cannot open");
	}
	else{
		while(fgets(song,40,file)!=NULL)
		{
			printf("%s",song);
		}
		fclose(file);
	}
}

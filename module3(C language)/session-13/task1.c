#include<stdio.h>
main(){
	FILE*file;
	file=fopen("playlist.txt","w");
	fprintf(file,"\n brown rang");
	fprintf(file,"\n blue eyes");
	fprintf(file,"\n Love dose");
	fclose(file);
	printf("\n successfully.");
	
}

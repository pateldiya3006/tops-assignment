#include<stdio.h>
main()
{
    FILE*file;

    file=fopen("playlist.txt", "a");

    fprintf(file, "\nChaleya");
    fprintf(file, "\nHeeriye");
    fclose(file);
    printf("Two songs added successfully.");
}

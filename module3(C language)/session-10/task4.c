#include<stdio.h>
main()
{
    char name[50];
    char username[10];
    char first5[6];

    printf("Enter your full name: ");
    gets(name);

    if(strlen(name) >= 5)
    {
        strncpy(first5, name, 5);
        first5[5] = '\0';

        strcpy(username, first5);
    }
    else
    {
        strcpy(username, name);
    }

    printf("Generated Username = %s", username);
}

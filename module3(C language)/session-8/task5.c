#include<stdio.h>
#include<ctype.h>

void capitalizeFirstLetter(char str[])
{
    if(str[0] != '\0')
    {
        str[0] = toupper(str[0]);
    }
}

main()
{
    char productName[] = "iphone";
    char username[] = "diya";

    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(username);

    printf("Product Name = %s\n", productName);
    printf("Username = %s", username);
}

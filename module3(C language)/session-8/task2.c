#include<stdio.h>
#include<string.h>

void addToCart(char *cart[], int *count, char product[])
{
    cart[*count] = product;
    (*count)++;

    printf("Updated Cart:\n");

    int i;
    for(i = 0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

main()
{
    char *cart[10] = {"Burger", "Pizza"};
    int count = 2;

    addToCart(cart, &count, "Fries");

    printf("\nCart in main:\n");

    int i;
    for(i = 0; i < count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

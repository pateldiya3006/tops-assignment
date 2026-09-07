#include<stdio.h>

void addToCart(char cart[][20], int *count, char product[])
{
    strcpy(cart[*count], product);
    (*count)++;

    printf("\nUpdated Cart:\n");
    

    for(int i = 0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

int main()
{
    char cart[10][20];
    int count = 0;

    addToCart(cart, &count, "Shirt");
    addToCart(cart, &count, "Shoes");

    printf("\nCart outside function:\n");

    for(int i = 0; i < count; i++)
    {
        printf("%s\n", cart[i]);
    }

    return 0;
}

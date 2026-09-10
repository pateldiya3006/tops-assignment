#include<stdio.h>
main()
{
    int orders[5] = {200, 350, 150, 400, 250};
    int *ptr;
    int i;
    ptr = orders;
    for(i=0; i<5; i++)
    {
        printf("\nAmount = %d", *ptr);
        printf("  Address = %p", ptr);
        ptr++;
    }
}

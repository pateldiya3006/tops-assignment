#include<stdio.h>
 main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
    {
        // Spaces
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Stars
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

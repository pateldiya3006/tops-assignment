#include<stdio.h>
main()
{
    int i;
    // Print all even numbers from 1 to 10
    for(i = 1; i <= 10; i++)
    {
        // Check if the number is divisible by 2
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}

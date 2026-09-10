#include<stdio.h>
int isEven(int num)
{ 
   if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
main()
{
    int num = 10;
    if(isEven(num))
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}

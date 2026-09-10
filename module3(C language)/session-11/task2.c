#include<stdio.h>
void swapPlaylistCounts(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
main()
{
    int playlist1 = 50;
    int playlist2 = 80;
    printf("Before Swap: %d %d", playlist1, playlist2);
    swapPlaylistCounts(&playlist1, &playlist2);
    printf("\nAfter Swap: %d %d", playlist1, playlist2);
}

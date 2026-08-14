#include <stdio.h>
 main()
{
    int followerCount = 100;

    printf("\n Before increment: %d", followerCount);

    // Pre-increment
    printf("\n Pre-increment: %d", ++followerCount);
    printf(" \n After pre-increment: %d", followerCount);

    // Post-increment
    printf(" \n Post-increment: %d", followerCount++);
    printf(" \n After post-increment: %d", followerCount);

}

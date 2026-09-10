#include<stdio.h>

void formatFollowersCount(int count)
{
    // Check if followers are 1 million or more
    if(count >= 1000000)
    {
        printf("%.1fM", count / 1000000.0);
    }
    // Check if followers are 1000 or more
    else if(count >= 1000)
    {
        printf("%.1fK", count / 1000.0);
    }
    // If followers are below 1000
    else
    {
        printf("%d", count);
    }
}
main()
{
    int count;
    count = 1500;
    printf("Followers: ");
    formatFollowersCount(count);

    count = 1200000;
    printf("\nFollowers: ");
    formatFollowersCount(count);

    count = 700;
    printf("\nFollowers: ");
    formatFollowersCount(count);
}

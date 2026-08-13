#include <stdio.h>

int main()
{
    char playlistName[] = "My Favourite Songs";
    int totalSongs = 25;
    float averageDuration = 3.5;

    printf("My favourite Spotify playlist is \"%s\" with %d songs, and the average song duration is %f minutes.",
           playlistName, totalSongs, averageDuration);

    return 0;
}

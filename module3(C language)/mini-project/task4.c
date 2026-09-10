#include<stdio.h>

main()
{
    FILE *file;
    int minutes;
    int total = 0;
    int highest = 0;
    int count = 0;
    float average;
    file = fopen("music_log.txt", "r");
    if(file == NULL)
    {
        printf("No music log found.");
    }
    else
    {
        while(fscanf(file, "Day %*d = %d minutes", &minutes) == 1)
        {
            total = total + minutes;

            if(minutes > highest)
            {
                highest = minutes;
            }

            count++;
        }

        fclose(file);

        if(count > 0)
        {
            average = (float)total / count;

            printf("\nWeekly Music Report");
            printf("\nTotal Listening = %d minutes", total);
            printf("\nAverage Listening = %.2f minutes", average);
            printf("\nHighest Listening = %d minutes", highest);
        }
        else
        {
            printf("No data available.");
        }
    }
}

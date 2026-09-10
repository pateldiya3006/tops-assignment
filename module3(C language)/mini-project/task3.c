#include<stdio.h>

main()
{
    int minutes[7];
    int choice;
    int i;
    FILE *file;

    while(1)
    {
        printf("\n\nMusic Listening Logger");
        printf("\n1. Log Listening Minutes");
        printf("\n2. View Weekly Summary");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            file = fopen("music_log.txt", "w");

            for(i = 0; i < 7; i++)
            {
                printf("Enter minutes for day %d: ", i + 1);
                scanf("%d", &minutes[i]);

                fprintf(file, "Day %d = %d minutes\n", i + 1, minutes[i]);
            }

            fclose(file);

            printf("Listening data saved successfully.");
        }
        else if(choice == 2)
        {
            file = fopen("music_log.txt", "r");

            if(file == NULL)
            {
                printf("No music log found.");
            }
            else
            {
                char line[100];

                printf("\nWeekly Summary:\n");

                while(fgets(line, 100, file) != NULL)
                {
                    printf("%s", line);
                }

                fclose(file);
            }
        }
        else if(choice == 3)
        {
            printf("Exiting Music Listening Logger...");
            break;
        }
        else
        {
            printf("Invalid choice.");
        }
    }
}

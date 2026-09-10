#include<stdio.h>

main()
{
    int minutes[7] = {0, 0, 0, 0, 0, 0, 0};
    int choice;
    int i;
    char confirm;
    FILE *file;

    while(1)
    {
        printf("\n\nMusic Listening Logger");
        printf("\n1. Log Listening Minutes");
        printf("\n2. View Weekly Summary");
        printf("\n3. Reset Weekly Data");
        printf("\n4. Exit");

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
            printf("\nAre you sure you want to reset weekly data? (Y/N): ");
            scanf(" %c", &confirm);

            if(confirm == 'Y' || confirm == 'y')
            {
                for(i = 0; i < 7; i++)
                {
                    minutes[i] = 0;
                }

                file = fopen("music_log.txt", "w");

                if(file != NULL)
                {
                    fclose(file);
                }

                printf("Weekly data reset successfully.");
            }
            else
            {
                printf("Reset cancelled.");
            }
        }
        else if(choice == 4)
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

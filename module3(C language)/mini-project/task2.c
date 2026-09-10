#include<stdio.h>

main()
{
    int minutes[7];
    int choice;
    int i;

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
            for(i = 0; i < 7; i++)
            {
                printf("Enter minutes for day %d: ", i + 1);
                scanf("%d", &minutes[i]);
            }

            printf("Listening minutes saved successfully.");
        }
        else if(choice == 2)
        {
            printf("\nWeekly Summary:\n");

            for(i = 0; i < 7; i++)
            {
                printf("Day %d = %d minutes\n", i + 1, minutes[i]);
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

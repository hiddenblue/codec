/* Print a one-month reminder list */

#include <stdio.h>
#include <string.h>
#include "remind2.h"

int main(void)
{
    char reminder[MAX_REMIND][MSG_LEN+3];
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_reminder = 0;

    for(;;)
    {
        if(num_reminder >= MAX_REMIND)
            {
                printf("-- No space left --\n");
                break;
            }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if(day==0)
            break;
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        for(i=0;i<num_reminder;i++)
        {
            if(strcmp(day_str, reminder[i]) <0)
                break;
        }

        for(j=num_reminder;j>i;j--)
            strcpy(reminder[j], reminder[j-1]);
        
        strcpy(reminder[i], day_str);
        strcat(reminder[i], msg_str);
        
        num_reminder++;
    }

    printf("\nDay  Reminder\n");
    for(i=0;i<num_reminder;i++)
    {
        printf("%s\n", reminder[i]);
    }

    return 0;
    
}


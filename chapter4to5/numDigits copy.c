/* Convert 24-form time to 12-form */

#include <stdio.h>

int main(void)
{
    int hour, min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    printf("Equivalent 12-hour time: %d:%.2d %s\n", hour > 12?hour - 12:hour, min, hour >12?"PM":"AM");
    return 0;
}
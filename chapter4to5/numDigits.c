/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{

    int num, digit;

    printf("Enter a number ");
    scanf("%d", &num);

    if ( num < 0 || num > 9999)
        {
            printf("value of num is invalid in the instance\n");
            return 0;
        }
    if (num >= 0 && num <=9)
        digit = 1;
    else if (num > 9 && num <= 99)
        digit = 2;
    else if (num > 99 && num <= 999)
        digit = 3;
    else if (num > 999 && num <= 9999)
        digit = 4;

    printf("The number %d has %d digits\n", num, digit);
    return 0 ;
}
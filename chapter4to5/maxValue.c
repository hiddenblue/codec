/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, max1, small1, max2, small2, max, small;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if (num1 > num2)
    {
        max1 = num1;
        small1 = num2;
    }
    else
    {
        max1 = num2;
        small1 = num1;
    }
        if (num3 > num4)
    {
        max2 = num3;
        small2 = num4;
    }
    else
    {
        max2 = num4;
        small2  =num3;
    }
    if (max1 > max2)
        max = max1;
    else
        max = max2;
    
    if (small1 < small2)
        small = small1;
    else
        small = small2;


    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", small);
    return 0;
}


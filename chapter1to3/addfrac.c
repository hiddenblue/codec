#include <stdio.h>

int main(void)
{
    /* Add two fractions */
    int num1, denom1, num2, denom2, result_num, result_denom, int_part = 0;

    printf("Enter the first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter the second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    while(result_num > result_denom)
    {
        result_num -= result_denom;
        int_part++;
    }
    if(int_part)
    {
        printf("The sum is %d+%d/ %d \n", int_part, result_num, result_denom);
    }
    else
    {
        printf("The sum is %d/ %d \n", result_num, result_denom);
    }

    return 0;


}
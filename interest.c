/* function to compute the interest of five years */

#include <stdio.h>

#define LOAN_NUM (int)sizeof(value)/sizeof(value[0])
#define INITIAL_BALANCE 100

int main(void)
{
    float balance, value[5]={INITIAL_BALANCE};
    int loan_rate, year, i,j;
    printf("Enter the interest rate: ");
    scanf("%d", &loan_rate);

    printf("Enter number of years: ");
    scanf("%d", &year);

    printf("Year");
    for(j=0;j<LOAN_NUM;j++)
    {
        printf("\t%d%%", j+loan_rate);
        value[j] = INITIAL_BALANCE;
    }
    printf("\n");

    for(i=1;i<=year;i++)
    {
        printf("%3d", i);
        for(j=0;j<LOAN_NUM;j++)
        {
            value[j] = value[j]*(100+(loan_rate+j))/100;
            printf("\t%7.2f", value[j]);
        }
        printf("\n");

    }
    return 0;
}
#include <stdio.h>
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int dollars, a, b, c, d;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    pay_amount(dollars, &a, &b, &c, &d);
    printf("$20 bills: %d \n", a);
    printf("$10 bills: %d \n", b);
    printf(" $5 bills: %d \n", c);
    printf(" $1 bills: %d \n", d);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars % 20;

    *tens = dollars / 10;
    dollars = dollars % 10;

    *fives = dollars / 5;
    dollars = dollars % 5;

    *ones = dollars;
}
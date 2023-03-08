#include <stdio.h>

int main(void)
{
    int dollar, a, b, c, d;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);
    a = dollar / 20;
    dollar = dollar % 20;
    printf("$20 bills: %d \n", a);

    b = dollar / 10;
    dollar = dollar % 10;
    printf("$10 bills: %d \n", b);

    c = dollar / 5;
    dollar = dollar % 5;
    printf(" $5 bills: %d \n", c);

    d = dollar;
    printf(" $1 bills: %d \n", d);

    return 0;
}
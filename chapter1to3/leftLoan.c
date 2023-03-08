#include <stdio.h>

int main()
{
    float loan, rate, payment, balance1, balance2, balance3;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    
    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter mouthly payment: ");
    scanf("%f", &payment);

    rate = rate/12;

    balance1 = (loan - payment) * (1 + rate/100);

    balance2 = (balance1 - payment) * (1 + rate/100);

    balance3 = (balance2 - payment) * (1 + rate/100);

    printf("Balance remaining after first payment: $%0.2f\n", balance1);
    printf("Balance remaining after first payment: $%0.2f\n", balance2);
    printf("Balance remaining after first payment: $%0.2f\n", balance3);

    return 0;

}
#include <stdio.h>

int main(void)
{
    int number, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &number);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\t\tPrice Date\n");

    printf("%d $ %7.2f %d/%d/%d\n", number, price, month,day,year);

    return 0;


}
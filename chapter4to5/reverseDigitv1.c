#include <stdio.h>

int main(void)
{
    int num, digit1, digit2, digit3;
    printf("Enter a two-digit number: ");
    scanf("%3d", &num);

    digit1 = num / 100;
    digit2 = num % 100 / 10;
    digit3 = num % 10;
    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

    return 0;
}
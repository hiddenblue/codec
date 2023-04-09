/* Enter a fraction and reduce it to simplest form */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_demoninator);
int find_the_gcd(int num1, int num2);

int main(void)
{
    int numerator, denominator, reduced_numerator, reduced_demoninator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    reduce(numerator, denominator, &reduced_numerator, &reduced_demoninator);
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_demoninator);
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_demoninator)
{
    int gcd;
    gcd = find_the_gcd(numerator, denominator);
    *reduced_numerator = numerator / gcd;
    *reduced_demoninator = denominator / gcd;
}

/**
 * @brief find the greatest common divisor between two integer
 * @param
 */
int find_the_gcd(int num1, int num2)
{
    int temp;
    if (num1 < num2)
        temp = num1;
        num1 = num2;
        num2 = temp;
    
    while(num2 != 0)
    {
        temp = num2;
        num2 =num1 % num2;
        num1 = temp;
    }
    return num1;
}
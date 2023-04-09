/* Check numbers for repeted digits */

#include <stdio.h>

/**
  * @brief a function to check whether there is a repeted digt in input number
  * @param
  * @retval
  */
int main(void)
{
    int a[10]={0};
    int i, digit;
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    while(num>0)
    {
        digit = num%10;
        a[digit]++;
        num /= 10;
    }
    printf("Digit:\t\t");
    for(i=0;i<10;i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("Occurrences: ");
    for(i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;

}
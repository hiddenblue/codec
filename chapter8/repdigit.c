/* Check numbers for repeted digits */

#include <stdio.h>
#define false 0
#define true 1

/**
  * @brief a function to check whether there is a repeted digt in input number
  * @param
  * @retval
  */
int main(void)
{
    int a[10]={false};
    int i, digit;
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    while(num>0)
    {
        digit = num%10;
        if(a[digit]==true)
            break;
        a[digit] = true;
        num /= 10;
    }
    if(num != 0)
    {
        printf("Repeted digit\n");
        return 0;
    }
    printf("No repeted digit\n");
    return 0;

}
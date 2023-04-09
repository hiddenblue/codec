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
    int i, digit, flag=0;
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    while(num>0)
    {
        digit = num%10;
        a[digit] = true;
        num /= 10;
    }
    
    for(i=0;i<10;i++)
    {
        if(a[i])
        {
            if(flag ==0)
            {
                printf("Repeated digit(s):");
                flag = 1;
            }
            printf("%d", i);
        }
    }
    printf("\n");
    if(flag==0)
    printf("No repeted digit\n");
    return 0;

}
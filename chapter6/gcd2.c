/* calculate the greatest common divisor */
#include <stdio.h>

int main(void)
{
    int m, n, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    
    if (m < n)
        temp = m;
        m = n;
        n = temp;
    while (n != 0)
    {
        temp = n;
        n = m % n;
        m = temp;
    }

    printf("Greatest common divisor: %d \n", m);
}



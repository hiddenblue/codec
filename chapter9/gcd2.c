/* calculate the greatest common divisor */
#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
    int m, n, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    
    m = gcd(m, n);
    printf("Greatest common divisor: %d \n", m);
}

int gcd(int m, int n)
{
    int temp;
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
    return m;
}



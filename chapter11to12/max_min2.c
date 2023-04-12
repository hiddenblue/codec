/* Find the largest and samllest elements in an array 2rd with pointer edition */

#include <stdio.h>
#define N 10

void max_min(int a[], int n, int *big, int *small);

int main(void)
{
    int a[N], *p, max, min;
    printf("Enter %d numbers: ", N);
    for (p=a;p<a+N;p++)
    {
        scanf("%d", p);
    }
    max_min(a, N, &max, &min);

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
    return 0;
}

void max_min(int a[], int n, int *big, int *small)
{
    int *q;
    *big = *small = a[0];
    for (q=a;q<a+n;q++)
    {
        if(*q > *big)
            *big = *q;
        else if (*q < *small)
            *small = *q;
    }
}
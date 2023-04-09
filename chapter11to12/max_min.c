/* Find the largest and samllest elements in an array */

#include <stdio.h>
#define N 10

void max_min(int a[], int n, int *big, int *small);

int main(void)
{
    int a[N], i, max, min;
    printf("Enter %d numbers: ", N);
    for (i=0;i<N;i++)
    {
        scanf("%d", &a[i]);
    }
    max_min(a, N, &max, &min);

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
    return 0;
}

void max_min(int a[], int n, int *big, int *small)
{
    int i;
    *big = *small = a[0];
    for (i=1;i<n;i++)
    {
        if(a[i] > *big)
            *big = a[i];
        else if (a[i] < *small)
            *small = a[i];
    }
}
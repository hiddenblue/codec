/* Reverses a series of numbers 3rd edition with pointer */

#include <stdio.h>
#define N 10

int main(void)
{
    int a[N], *p;
    printf("Enter %d nubmers: ", N);
    for(p = a; p < a+N; p++)
    {
        scanf("%d", p);
    }

    printf("In reverse order: ");
    for(p = a+N-1; p >= a; p--)
    {
        printf("%d", *p);
    }
    printf("\n");

    return 0;
}
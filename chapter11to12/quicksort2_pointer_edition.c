/* Sorts an array of integers using Quicksort algorithm */

#include <stdio.h>
#define N 10

void quicksort(int *low, int *high);
int *split(int *low, int *high);

int main(void)
{
    // int a[N], i;

    int i, a[N] = {7, 3, 4, 4, 2, 1, 4, 9, 0, 5};
    quicksort(&a[0], &a[N-1]);

    printf("In sorted order: ");
    for (i=0; i<N;i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quicksort(int *low, int *high)
{
    int *middle;

    if (low >= high) return;
    middle = split(low, high);
    quicksort(low, middle-1);
    quicksort(middle+1, high);
}

int  *split(int *low, int *high)
{
    int pivot = *low;

    for (;;)
    {
        while (low < high && pivot <= *high)
            high--; 
        if (low >= high)
            break;
        *low++ = *high;

        while( low < high && *low <= pivot)
            low++;
        if(low >= high)
            break;
        *high-- = *low;
    }

    *high = pivot;
    return high;
}
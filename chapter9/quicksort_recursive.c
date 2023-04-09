/* Sorts an array of integers using Quicksort algorithm */

#include <stdio.h>
#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
    // int a[N], i;

    int i, a[N] = {7, 3, 4, 4, 2, 1, 4, 9, 0, 5};
    quicksort(a, 0, N-1);

    printf("In sorted order: ");
    for (i=0; i<N;i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quicksort(int a[], int low, int high)
{
    int middle;

    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle-1);
    quicksort(a, middle+1, high);

}

int split(int a[], int low, int high)
{
    int pivot = a[low];

    for (;;)
    {
        while (low < high && pivot <= a[high])
            high--; 
        if (low >= high)
            break;
        a[low++] = a[high];

        while( low < high && a[low] <= pivot)
            low++;
        if(low >= high)
            break;
        a[high--] = a[low];

    }

    a[high] = pivot;
    return high;
}
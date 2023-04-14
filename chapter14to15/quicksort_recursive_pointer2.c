/* Sorts an array of integers using Quicksort algorithm */

#include <stdio.h>
#include "quicksort_recursive_pointer2.h"

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
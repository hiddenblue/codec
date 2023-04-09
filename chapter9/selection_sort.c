/* Using the selection sort to sort a array */

#include <stdio.h>
#define N 6

void selection_sort(int a[], int len);

int main(void)
{
    int a[N], i;
    printf("Enter  %d numbers to sort ", (int) sizeof(a)/sizeof(a[0]));
    for(i=0;i<N;i++)
    {
        scanf("%d", &a[i]);
    }
    selection_sort(a, sizeof(a)/sizeof(a[0]));

    printf("In sorted order: ");
    for (i=0;i<N;i++)
        printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}

void selection_sort(int a[], int len)
{
    if (len==1)
        return;

    int i, temp, max = 0;
    for(i=0;i<len;i++)
    {
        if(a[i] > a[max])
            max = i;
    }
    temp = a[len-1];
    a[len-1] = a[max];
    a[max] = temp;
    selection_sort(a, len-1);
}
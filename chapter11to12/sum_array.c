#include <stdio.h>
int sum_array(const int a[], int n);

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    int sum;
    sum = sum_array(array, 5);
    printf("%d", sum);
}


int sum_array(const int a[], int n)
{
    int *p, sum = 0;

    for(p=a;p<a+n;p++)
    {
        sum += *p;
    }
    return sum;
}
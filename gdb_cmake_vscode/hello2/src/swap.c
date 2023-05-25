#include <stdio.h>
#include "swap.h"

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("\n");

    return;
}
#include <stdio.h>
#include "swap.h"

int main(int argc, char *argv[])
{
    int a, b;
    printf("Enter two number to swap value: ");

    scanf("%d", &a);
    scanf("%d", &b);

    swap(a, b);

    return 0;
}
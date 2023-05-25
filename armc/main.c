#include <stdio.h>
#include "sub.h"

int global_val = 1;
int uninit_val;

int main(void)
{
    int a, b;
    static int local_val = 2;
    static int uninit_local_val;

    a = add(2, 3);
    b = sub(5, 4);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
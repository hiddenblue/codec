#include <stdio.h>

int main(void)
{
    int a[10] = {1, 2, 3, 4};
    printf("%d\n", (int) sizeof(a)/sizeof(a[0]));
    return 0;
}
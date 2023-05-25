#include <stdio.h>

int b;

int main(void)
{
    int a;
    static int c;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
}
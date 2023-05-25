#include <stdio.h>

int add(int , int );

int main(void)
{
    int sum = 0;
    sum = add(1, 2);

    printf("sum = %d\n", sum);
    return 0;
}
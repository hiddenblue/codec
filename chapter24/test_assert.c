#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <inttypes.h>
#include <limits.h>
#include <signal.h>

int main(void)
{
    int a;
    printf("input the value of a :");

    scanf("%d", &a);

    assert(a < 10);

    printf("%d", a);
    printf("\n");

    return 0;
}
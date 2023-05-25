#include <stdio.h>

int main(void)

{
    int b[100] = {[10 ... 30] = 1, [50 ... 60] = 2};
    for(int i = 0; i < 100; i++)
    {
        printf("%d ", b[i]);
        if( i %10 == 0)
            printf("\n");
    }
    return 0;
}
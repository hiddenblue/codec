#include "structdef.h"
#include <stdio.h>

extern Time now;

int main(void)
{
    printf("%d\n", now.second);
    printf("%d\n", now.minuate);
    printf("%d\n", now.hour);

    return 0;
    
}

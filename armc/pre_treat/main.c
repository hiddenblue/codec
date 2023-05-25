#include <stdio.h>
#include "sub.h"
#define PI 3.14

void platform_init()
{
    #ifdef ARM
        printf("ARM platform init...\n");
    #else
        printf("X86 platform init...\n");
    #endif
}

#pragma pack(2)
#pragma message("build main.c ...\n");
float f = PI;

int main(void)
{
    platform_init();
    add(2, 3);
    sub(5, 4);
    return 0;
}
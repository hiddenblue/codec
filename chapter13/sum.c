/* function running in cli to get sum of argument(int type) */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;
    for(i=1;i<=argc;i++)
    {
        printf("%s\n", argv[i]);
        sum += atoi(&argv[i]);
    }

    printf("Totol: %d\n", sum);
    return 0;
}
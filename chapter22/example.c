#include <stdio.h>
#include <stdlib.h>

#define FILA_NAME "example.dat"

int main(void)
{
    FILE *fp;

    fp = fopen(FILA_NAME, "r");
    if(fp == NULL)
    {
        printf("Can't open %s\n", FILA_NAME);
        exit(EXIT_FAILURE);
    }
    printf("Open file successfully.\n");

    fclose(fp);
    return 0;
}
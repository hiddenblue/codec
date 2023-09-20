#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    for(i=0;i<argc;i++)
    {
        printf(argv[i]);
        argv[i][0] = 'a';
        printf(&argv[i][0]);
        printf("\n");
    }

    char *testa[argc];

    for(i=0;i<argc-1;i++)
    {
        testa[i] = argv[i+1];
    }

    for(i=0;i<argc;i++)
    {
        printf(testa[i]);
        printf(&testa[i][0]);
        printf("\n");
    }
    
}
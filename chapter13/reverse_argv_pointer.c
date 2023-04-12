/* print the command line argument with reverse order pointer*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    char **p;
    for(p= &argv[argc-1];*p != argv[0]; p--)
    {
        printf("%s ", *p);
    }
    printf("\n");

}
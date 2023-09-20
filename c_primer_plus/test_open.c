#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[7];
    char buf[] = {'1','2', '3', '4', '5', '6'};

    FILE * fd = fopen(buf ".txt", "r");

    fread(buf, sizeof(char), 7, fd);

    fwrite(buf, sizeof(char), 7, stdout);
    printf("\n");

    return 0;
}
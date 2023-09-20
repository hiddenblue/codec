#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char * str = "hello world";
    printf("%ld\n", sizeof(str));
    printf("%s\n", str);
    return 0;
}
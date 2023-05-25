#include <stdio.h>
#include <string.h>

typedef struct {
    unsigned short year;
    unsigned char month;
    unsigned char day;
} Date;

int main(int argc, char *argv[])
{
    Date Today;
    Today.year = 2023;
    Today.month = 5;
    Today.day = 9;
    printf("%d-%d-%d", Today.year, Today.month, Today.day);
    return 0;
}
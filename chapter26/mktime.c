#include <time.h>
#include <stdio.h>

int main(void)
{
    struct tm t;

    t.tm_mday = 27;
    t.tm_mon = 6;
    t.tm_year = 112;

    t.tm_sec = 0;
    t.tm_min = 0;
    t.tm_hour - 0;
    t.tm_isdst = -1;
    printf("%d, %d, %d\n", t.tm_year, t.tm_mon, t.tm_mday);

    t.tm_mday += 16;

    printf("%d, %d, %d\n", t.tm_year, t.tm_mon, t.tm_mday);

    mktime(&t);

    printf("%d, %d, %d\n", t.tm_year, t.tm_mon, t.tm_mday);

    return 0;
}

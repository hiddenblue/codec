#include <time.h>
#include <stdio.h>

int main(void)
{
    time_t cur_time;

    cur_time = time(NULL);

    struct tm *struct_t;

    struct_t = localtime(&cur_time);

    char *s = asctime(struct_t);

    printf(s);

    printf("\n");

    printf(ctime(&cur_time));
}
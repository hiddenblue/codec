#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t cur_time;
    time(&cur_time);

    printf("%ld", cur_time);
}
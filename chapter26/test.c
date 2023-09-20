#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t clock1;

    clock_t clock2;

    clock1 = clock();

        clock2 = clock();

    time_t time1, time2;

    time1 = time(NULL);
    time2 = time(NULL);

    clock_t clock3;
    clock3 = clock();

    return 0;
}
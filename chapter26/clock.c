#include <time.h>
#include <stdio.h>

int main(void)
{
    clock_t start_clock = clock();

    for (int i = 0; i < 20000; i++)
    {
        for (int j = 0; j < 20000; j++)
        {
            int hang = 1;
        }
    }

    clock_t end_clock = clock();

    printf("Processor time used: %g sec. \n",
           (end_clock - start_clock) / (double)CLOCKS_PER_SEC);

    return 0;
}

#include <time.h>
#include <stdio.h>

int main(void)
{
    time_t start_time = time(NULL);

    for (int i = 0; i < 20000; i++)
    {
        for (int j = 0; j < 20000; j++)
        {
            int hang = 1;
        }
    }
    printf("Processor time used: %f sec. \n",
           difftime(time(NULL), start_time));

    return 0;
}

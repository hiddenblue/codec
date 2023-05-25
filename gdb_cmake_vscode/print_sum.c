#include <stdio.h>

int main(int argc, char *argv[])
{
    int N = 100;
    int sum = 0;
    int i = 1;

    /* calculate the sum of 1-100 */

    while (i<=100)
    {
        sum += i;
        i++;
    }

    printf("%d", sum);

    return 0;

}
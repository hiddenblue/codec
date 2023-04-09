#include <stdio.h>
#define N 100

int main(void)
{
    long fib_nubmer[N] = {[0]=0, [1]=1};

    long i, a_n_1, a_n_2;

    for(i=2;i<N;i++)
    {
        a_n_2 = fib_nubmer[i-2];
        a_n_1 = fib_nubmer[i-1];
        fib_nubmer[i] = a_n_1 + a_n_2;
    }

    for(i=0;i<N;i++)
    {
        printf("%ld\n", fib_nubmer[i]);
    }
    return 0;
}

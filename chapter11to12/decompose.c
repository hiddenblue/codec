/* Function to decompose a float to int part and fract part */

#include <stdio.h>

void decompose(double x, long *int_part, double *fract_part);

int main(void)
{
    double x = 3.1415926;
    long int_part;
    double fract_part;
    decompose(x, &int_part, &fract_part);
    printf("int part of x: %ld\n", int_part);
    printf("fract part of x: %g\n", fract_part);

    return 0;
    
}

void decompose(double x, long *int_part, double *fract_part)
{
    *int_part = (long)x;
    *fract_part = x - *int_part;
}


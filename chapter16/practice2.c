#include <stdio.h>

int main(void)
{
    struct part {
        double real;
        double imaginary;
    };

    struct part c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

    printf("%f %f\n", c1.real, c1.imaginary);
    printf("%f %f\n", c2.real, c2.imaginary);

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    printf("%f %f\n", c3.real, c3.imaginary);


    printf("\n");
    return 0;
}
#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

int main(void)
{
    Complex c1 = {.real= 0.0, .imaginary= 1.0}, c2 = {.real = 1.0, .imaginary = 0.0}, c3;

}

Complex *make_complex(double a, double b)
{

    Complex c = {.real = a, .imaginary = b};
    Complex *p = &c;

    return p;
}

Complex *add_complex(Complex *a, Complex *b)
{
    Complex result;
    Complex *p = &result;
    result.real = (*a).real + (*b).real;
    result.imaginary = (*a).imaginary + (*b).imaginary;

    return p;
}


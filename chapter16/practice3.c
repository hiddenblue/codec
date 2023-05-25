#include <stdio.h>

struct complex {
    double real;
    double imaginary;
};

int main(void)
{


    struct complex c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

    printf("%f %f\n", c1.real, c1.imaginary);
    printf("%f %f\n", c2.real, c2.imaginary);

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    printf("%f %f\n", c3.real, c3.imaginary);


    printf("\n");
    return 0;
}


/* 这里是用按值复制返回的，我觉得可以改成用指针的方式更快 */
struct complex make_complex(double real, double imaginary)
{
    struct complex a;
    a.real = real;
    a.imaginary = imaginary;
    
    return a;  
}

struct complex add_complex(struct complex a1, struct complex a2)
{
    struct complex result;

    result.real = a1.real + a2.real;
    result.imaginary = a1.imaginary + a2.imaginary;

    return result;
    
}
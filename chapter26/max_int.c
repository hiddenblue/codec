#include <stdio.h>
#include <stdarg.h>

int find_largest(int n, ...)
{
    va_list ap;
    int i, current, largest;

    va_start(ap, n);
    largest = va_arg(ap, int);

    for(i=i;i<n;i++)
    {
        current = va_arg(ap, int);
        if(current > largest)
            largest = current;
    }

    va_end(ap);
    return largest;
}

int main(int argc, char *argv[])
{
   int  largest = find_largest(3, 1, 3, 2);
   printf("%d\n", largest);

   return 0;
}
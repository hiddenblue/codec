#include <stdio.h>
#include <stdarg.h>


int display(int n, ...);

int main(int argc, char * argv[])
{
    display(5, "speicial", "agent", "dale", "copper", "iron");

    return 0;
}


int display(int n, ...)
{
    va_list ap;
    
    va_start(ap, n);
    for(int i =0;i<n;i++)
    {
        printf("%s ", va_arg(ap, char *));
    }
    va_end(ap);

}


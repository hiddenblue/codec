#include <stdio.h>
#define N 30

/* to read a piece of message, and print it in reverse order */

int main(void)
{
    char m[N];
    char *p = m;
    int ch;
    printf("Enter a message: ");
    while((ch = getchar()) != '\n')
    {
        *p++ = ch;
    }
    
    printf("Reversal is: ");

    // for(;p>=m;p--)
    // {
    //     printf("%c", *p);
    // }

    while(p>m)
        printf("%c", *p--);
    printf("\n");
    return 0;
}
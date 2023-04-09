#include <stdio.h>
#define N 30

/* to read a piece of message, and print it in reverse order */

int main(void)
{
    char m[N];
    int i=0, ch;
    printf("Enter a message: ");
    while((ch = getchar()) != '\n')
    {
        m[i] = ch;
        i++;
    }

    for(i=i-1;i>=0;i--)
    {
        printf("%c", m[i]);
    }
    printf("\n");
    return 0;
}
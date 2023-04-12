#include <stdio.h>
#define N 30

/* to read a piece of message, and print it in reverse order */

void reverse(char *message);

int main(void)
{
    char m[N];
    char *q, *p = m, temp;
    int ch;
    printf("Enter a message: ");
    while((ch = getchar()) != '\n')
    {
        *p++ = ch;
    }
    reverse(m);

    printf("Reversal is: ");
    printf("%s", m);
    printf("\n");
    return 0;
}

void reverse(char *message)
{
    char *start, *end, temp;
    start = message;
    end = message;
    while(*end)
    {
        end++;
    }
    end--;
    
    while(end > start)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }   
}
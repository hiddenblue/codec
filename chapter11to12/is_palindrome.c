/* determine whether a sentence is palindrome */

#include <stdio.h>
#define MAXLEN 80

int main(void)
{
    int ch, i=0;
    char message[MAXLEN];

    printf("Enter a message: ");
    while((ch = getchar()) != '\n')
    {
        if(('A' <= ch && ch <= 'Z'))
            message[i++] = ch + 'a' - 'A';
        else if (('a' <= ch && ch <= 'z'))
            message[i++] = ch;
    }

    int j;
    for(j=0;j<=((i+1)/2-1);j++)
    {
        if(message[j] != message[i-j-1])
        {
            printf("Not a palindrome\n");
            break;
        }
    }
    if(j >= ((i+1)/2-1))
        printf("Palindrome\n");
    return 0;

}


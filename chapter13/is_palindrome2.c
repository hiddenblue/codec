/* determine whether a sentence is palindrome */

#include <stdio.h>
#include <stdbool.h>
#define MAXLEN 80

bool is_palindrome(const char *message);

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

    if(is_palindrome(message))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;

}

bool is_palindrome(const char *message)
{
    char *start, *end;

    start = message;
    end = message;

    while(*end)
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {            
            return false;
        }
        start++;
        end--;
    }
    return true;
}
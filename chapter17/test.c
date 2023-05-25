#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *concat(const char *s1, const char *s2);

int main(void)
{

    

}

char *concat(const char *s1, const char *s2)
{
    char *result;

    result = (char *)malloc(strlen(s1) + strlen(s2) +1);
    if(result == NULL)
    {
        printf("Error: malloc failed in concat\n");
        exit(EXIT_FAILURE);
    }
    strcpy(result, s1);
    strcat(result, s2);
    result[sizeof(result)-1] = '\0';

    return result;
}
#include <stdio.h>

#define MAX_NAME_LEN
#define CODE_COUNT (int)sizeof(country_codes)/sizeof(country_codes[0])

int search(int code);

typedef struct  {
    char *country;
    int code;
}dialing_code;

const dialing_code country_codes[] =
{{"Argentina",    54}, {"Brazil",    55},
 {"China",    86},     {"India",    91},
 {"Mexico",    52}, {"Japan",     81},
 {"Spain",    34},  {"Ukraine",    380}};

int main(void)
{
    int code,i;
    for(;;)
    {
        printf("Enter country code: ");
        scanf("%d", &code);
        if(i = search(code))
        {
            printf("%d  ", code);
            printf("%s\n", country_codes[i].country);
        }
        else
            printf("ERROR! Cann't find the country\n");
    }   
}

/* 一个合理的想法 code应该不可能是0吧 */
int search(int code)
{
    int i;
    for(i=0;i<CODE_COUNT;i++)
    {
        if(country_codes[i].code == code)
        {
            return i;
        }
    } 
    return 0;
}
#include <stdio.h>
#include "inventory.h"
#include "read_line.h"


int main(void)
{
    char code;

    for(;;)
    {
        printf("Enter the operation code: ");
        scanf(" %c", &code);
        
        while((getchar() != '\n'))
        ;

        switch (code)
        {
            case 'i': insert();
                break;
            case 's': search();
                break;
            case 'u': update();
                break;
            case 'd': delete();
                break;
            case 'p': print();
                break;
            default: printf("Illegal code\n");
        }
        printf("\n");
    }
}
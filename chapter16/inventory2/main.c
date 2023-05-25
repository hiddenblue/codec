#include <stdio.h>
#include "inventory.h"
#include "read_line.h"

int main(void)
{
    char code;

    for(;;)
    {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while((getchar()) != '\n');  /* jump to the end of line */

        switch(code)
        {
            case 'i':   insert();
                        break;
            case 's':   search();
                        break;
            case 'u':   update();
                        break;
            case 'p':   print();
                        break;
            case 'd':   delete();
                        break;
            case 'q':   return 0;

            default: printf("Illegal code\n");
        }
    }
}
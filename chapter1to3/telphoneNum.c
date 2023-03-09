#include <stdio.h>

int main(void)
{
    int telnum1, telnum2, telnum3;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &telnum1, &telnum2, &telnum3);

    printf("You entered %d.%d.%d", telnum1, telnum2, telnum3);
    return 0;
}
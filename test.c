#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

void getdigit(uint32_t number, uint8_t length);

int main()
{
    uint32_t target;
    uint8_t length;
    printf("input the uint32t number:");
    scanf("%"SCNu32, &target);
    printf("%"PRIu32, target);
    printf("\n");
    printf("input length of number:");
    scanf("%"SCNu8, &length);
    printf("%"PRIu8, length);
    printf("\n");

    getdigit(target, length);

    return 0;
}


void getdigit(uint32_t number, uint8_t length)
{
    uint8_t digit, array[length];
    for(length;length>0;length--)
    {
        digit = number%10;
        array[length-1] = digit;
        number /= 10;
    }

    uint8_t *p = array;
    while(p < array+4)
    {
        printf("%"PRIu8, *p);
        p++;
    }
        printf("\n");
}
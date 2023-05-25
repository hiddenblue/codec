#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int32_t a;
    printf("enter number: ");
    scanf("%" SCNd32, &a);
    printf("%" PRId32 "\n", a);
    printf("\n");
    return 0;
}


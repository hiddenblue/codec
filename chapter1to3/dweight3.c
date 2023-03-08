#include <stdio.h>
#define INCHS_PER_POUND 166

int main(void)
{

    /* Computes the dimensional weight of a box from input provided by the user */

    int height= 12, width=8, length=13, volume;
    
    volume = height * width * length;

    printf("Dimensions: %dx%dx%d \n", height, width, length);
    printf("Volume (cubic inches) : %d\n", volume);

    printf("The Dimension weight of the box is  (pounds) %d \n", (volume + INCHS_PER_POUND -1) / INCHS_PER_POUND);

    return 0;
}
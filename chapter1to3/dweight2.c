#include <stdio.h>
#define INCHS_PER_POUND 166

int main(void)
{

    /* Computes the dimensional weight of a box from input provided by the user */

    int height, width, length, volume, weight;
    printf("enter the height of the box:");
    scanf("%d", &height);
    printf("enter the width of the box:");
    scanf("%d", &width);
    printf("enter the length of the box:");
    scanf("%d", &length);
    
    volume = height * width * length;
    weight = (volume + INCHS_PER_POUND -1) / INCHS_PER_POUND ;

    printf("Dimensions: %dx%dx%d \n", height, width, length);
    printf("Volume (cubic inches) : %d\n", volume);

    printf("The Dimension weight of the box is  (pounds) %d \n", weight);

    return 0;
}
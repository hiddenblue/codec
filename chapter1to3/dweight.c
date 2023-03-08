#include <stdio.h>

int main(void)
{
    int height, width, length, volume, weight;
    height = 8;
    width = 12;
    length = 10;
    volume = height * width * length;
    weight = (volume + 165) / 166 ;

    printf("Dimensions: %dx%dx%d \n", height, width, length);
    printf("Volume (cubic inches) : %d\n", volume);

    printf("The Dimension weight of the box is  (pounds) %d \n", weight);

    return 0;
}
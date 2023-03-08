#include <stdio.h>
#define pi 3.14f

int main(void)
{
    float volume;
    int r;
    printf("Enter the diameter of the ball: ");
    scanf("%d", &r);
    volume = 4.0f/3.0f * pi * r * r *r;
    printf("The volume of the ball is %f ", volume);

    return 0;

}
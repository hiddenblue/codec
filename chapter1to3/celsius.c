/* Convert a Fahrenheit temperature to Celsius */

#include <stdio.h>

#define FREEZING_PT 32.0f

#define SCALE_FACTOR (5.0f) / (9.0f)

int main()
{
    float fahrenheit, celsius;
    printf("Enter the Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %0.1f\n", celsius);

    return 0;
}
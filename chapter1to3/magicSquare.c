#include <stdio.h>

int main(void)
{
    int num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15;
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num0, &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15);

    printf("%-2d %-2d %-2d %-2d \n", num0, num1, num2, num3);
    printf("%-2d %-2d %-2d %-2d \n", num4, num5, num6, num7);
    printf("%-2d %-2d %-2d %-2d \n", num8, num9, num10, num11);
    printf("%-2d %-2d %-2d %-2d \n", num12, num13, num14, num15);

    printf("Row sums: %-2d %-2d %-2d %-2d \n");

    return 0;
}
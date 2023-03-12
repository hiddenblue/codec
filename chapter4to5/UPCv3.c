#include <stdio.h>

int main(void)
{
    /* Compute a Universal Product code check digit */
    /* even e odd o*/

    int o1, o2, o3, o4, o5, o6, e1, e2, e3, e4, e5, e6, even_sum, odd_sum, total;
    printf("Enter the first (single) digit: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &o1, &e1, &o2, &e2, &o3, &e3, &o4, &e4, &o5, &e5, &o6, &e6);

    even_sum = e1 + e2 + e3 + e4 + e5 + e6;
    odd_sum = o1 + o2 + o3+ o4 + o5 + o6;
    total = 3 * even_sum + odd_sum;

    printf("Check digit: %d\n", 9 - ((total - 1))%10);

    return 0;
}
/* test the div function */
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    div_t ans;
    ans = div(5, 3);
    printf("quot: %d, rem: %d\n", ans.quot, ans.rem);
    return 0;
}
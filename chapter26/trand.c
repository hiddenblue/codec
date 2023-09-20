/* test the pseudo-random sequence generation functions */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, seed;

    printf("This program displays the first five value of "
            "rand.\n");
    
    for(;;)
    {
        for(i=0;i<5;i++)
        {
            printf("%d ", rand());
        }
        printf("\n\n");
        printf("Please Enter new seed value (0 - terminte): ");
        scanf("%d", &seed);

        if(seed ==0)
            break;
        srand(seed);
    }

    return 0;
}

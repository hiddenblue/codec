/* Check planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planet_upcase[] = {"Mercury", "Venus", "Earth",
                      "Mars", "Jupiter", "Saturn",
                      "Uranus", "Neptune", "Pluto"};
    
    char *planet_lowcase[] = {"mercury", "venus", "earth",
                    "mars", "jupiter", "saturn",
                    "uranus", "neptune", "pluto"};
    
    int i, j;

    for(i=1;i<argc;i++)
    {
        for(j=0;j<NUM_PLANETS;j++)
        {
            if ((strcmp(argv[i], planet_upcase[j])==0)||(strcmp(argv[i], planet_lowcase[j])==0))
            {   
                printf("%s is planet %d\n", argv[i], j+1);
                break;
            }
        }
        if(j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
    
}
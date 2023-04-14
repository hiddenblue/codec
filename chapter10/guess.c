/* Asks user to guess a hidden nubmer */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define MAX_NUMBER 100

/* external variable */
int secret_nubmer;

/* prototype */
void initialize_number_generator(void);
void choose_secret_nubmer(void);
void read_guess(void);

int main(void)
{
    char command;

    printf("Guess the secret nubmer between 1 and %d\n\n", MAX_NUMBER);
    initialize_number_generator();
    do
    {
        choose_secret_nubmer();
        printf("A new number has been chosen.\n");
        read_guess();
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');
    
    return 0;
}

void initialize_number_generator(void)
{
    srand((unsigned) time(NULL));
}

void choose_secret_nubmer(void)
{
    secret_nubmer = rand() % MAX_NUMBER + 1;  /* 这里加1，是因为%运算，会得到[0, max_nubmer)，但不包括右边，故加一变成1-maxnubmer */
}

void read_guess(void)
{
    int guess, num_guesses =0;

    for(;;)
    {
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        if (guess == secret_nubmer)
        {
            printf("you won in  %d guesses~\n\n", num_guesses);
            return;
        }
        else if (guess < secret_nubmer)
        {
            printf("Too low, try again.\n");
        }
        else
        {
            printf("Too high; try again.\n");
        }
    }
}
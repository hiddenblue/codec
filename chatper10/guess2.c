/* Asks user to guess a hidden nubmer without external variable */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* prototype */
void initialize_number_generator(void);
int new_secret_number(void);
void read_guess(int secret_number);

int main(void)
{
    char command;
    int secret_number;

    printf("Guess the secret nubmer between 1 and %d\n\n", MAX_NUMBER);
    initialize_number_generator();
    do
    {
        secret_number = new_secret_number();
        printf("A new number has been chosen.\n");
        read_guess(secret_number);
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

int new_secret_number(void)
{
    return rand() % MAX_NUMBER + 1;  /* 这里加1，是因为%运算，会得到[0, max_nubmer)，但不包括右边，故加一变成1-maxnubmer */
}

void read_guess(int secret_number)
{
    int guess, num_guesses =0;

    for(;;)
    {
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        if (guess == secret_number)
        {
            printf("you won in  %d guesses~\n\n", num_guesses);
            return;
        }
        else if (guess < secret_number)
        {
            printf("Too low, try again.\n");
        }
        else
        {
            printf("Too high; try again.\n");
        }
    }
}
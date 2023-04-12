/* Deals a random hand of cards */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a' };
    const char suit_code[] = {'s', 'h', 'c', 'd'};

    srand((unsigned) time(NULL));

    printf("Enter the number of cards in hand: ");
    scanf("%d", &num_cards);
    printf("Your hand:");
    while (num_cards>0)
    {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]) 
        {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");
    return 0;
}

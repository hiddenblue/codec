/* Deals a random hand of cards with pointer */

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
    // const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a' };
    // const char suit_code[] = {'s', 'h', 'c', 'd'};


    /* 用指针数组代替了原来的字符数组 */
    const char *rank_collection[] = {"two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "Jack", "Queen", "King", "Ace"};
    const char *suit_collection[] = {"spades", "hearts", "clubs", "diamonds"};

    srand((unsigned) time(NULL));

    printf("Enter the number of cards in hand: ");
    scanf("%d", &num_cards);
    printf("Your hand:\n");
    while (num_cards>0)
    {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]) 
        {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %-5s of %s\n", rank_collection[rank], suit_collection[suit]);  /* 对应的修改了 */
        }
    }
    printf("\n");
    return 0;
}

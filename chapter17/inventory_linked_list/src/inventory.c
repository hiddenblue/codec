#include <stdio.h>
#include <stdlib.h>
#include "read_line.h"

#define NAME_LEN 25

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL; /* points to the first part */


struct part *find_part(int number)
{
    struct part *p;

    for(p = inventory;p != NULL && p->number > number; p = p->next )
    ;
    
    if(p != NULL && p->number == number)
        return p;
    return NULL;
}

void insert(void)
{
    struct part *cur, *prev, *new_node;

    new_node = malloc(sizeof(struct part));
    if (new_node == NULL)
    {
        printf("Datebase is full; cann't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number);

    for (cur = inventory, prev = NULL;
        cur != NULL && new_node->number > cur->number;
        prev = cur, cur = cur->next)
    ;
        if(cur != NULL && new_node->number == cur->number)
        {
            printf("Part already exists\n");
            free(new_node);
            return;
        }

        printf("Enter part name: ");
        read_line(new_node->name, NAME_LEN);
        printf("Enter quantity on hand: ");
        scanf("%d", &new_node->on_hand);

        new_node->next = cur;
        if(prev == NULL)
            inventory = new_node;
        else
            prev->next = new_node;
        return;
}


void search(void)
{
    int number;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);

    p = find_part(number);
    if(p != NULL)
    {
        printf("Part number: %d\n", p->number);
        printf("Part name: %s\n", p->name);
        printf("Quantiry on hand: %d\n", p->on_hand);
    }
    else
        printf("Part not found.\n");
}

void update(void)
{
    int number, change;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);

    p = find_part(number);
    if(p != NULL)
    {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        p->on_hand += change;
    }
    else
        printf("Part not found.\n");
    return;
}

/* want to delete from from database，还是得使用双指针才行，单指针不够用 */

/* 为什么要用cur->number 大于number即可呢？因为这样就不用遍历整个链表了 */


void delete(void)
{
    int number;
    struct part *prev, *cur;

    printf("Enter part number: ");
    scanf("%d", &number);

    for(prev = NULL, cur = inventory;
        cur != NULL && cur->number < number;
        prev = cur, cur = cur->next)
    ;
    if(cur == NULL || cur->number > number)
    {
        printf("Target part not found.\n");
        return;
    }
    if(prev == NULL)
        inventory= inventory->next;
    else
        prev->next = cur->next;
    free(cur);
    return;
}


void print(void)
{
    struct part *p;
    
    printf("Part Number\tPart Name\tQuantity on Hand\n");
    for(p = inventory;p!= NULL;p= p->next)
    {
        printf("%10d   %-25s%8d\n", p->number, p->name, p->on_hand);
    }
}



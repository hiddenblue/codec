#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node {
    int data;
    struct node *next;
};

static struct node *top = NULL;

static void terminate(char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    while(!is_empty())
        pop();
}

bool is_empty(void)
{
    return top == NULL;
}

/* 乐，这个根本不会满啊 */

bool is_full(void)
{
    return false;
}

void push(int n)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
        terminate("Error in push: stack is full.\n");
    
    new_node->data = n;
    new_node->next = top;
    top = new_node;
}

int pop(void)
{
    struct node *old_node;
    int i;

    if(is_empty())
        terminate("Error in pop: stack is empty.\n");

    i = top->data;
    old_node = top;
    top = top->next;
    free(old_node);
    return i;
}


/* abstract data struct stack associated function  */

#include <stdbool.h>
#include "stack.h"

bool make_empty(void)
{
    top = 0;
    return true;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

bool push(int element)
{
    if(is_full())
    {
        stack_overflow();
    }
    else
    {
        contents[top++] = element;
    }
}

int pop(void)
{
    if(is_empty())
    {
        stack_underflow();
    }
    else
    {
        return contents[--top];
    }
}

void stack_overflow(void)
{
    printf("the stack is full. overflow!\n");
    exit(0);
}

void stack_underflow(void)
{
    printf("the stack is empty. underflow\n");
    exit(0);
}
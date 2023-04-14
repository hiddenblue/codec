#include <stdio.h>
#include <stdbool.h>
#include "stack2.h"
#include <stdlib.h>

#define STACK_SIZE 100

/* external variable */

char contents[STACK_SIZE];
int top = 0;

int main(void)
{
    int ch, element;
    printf("Enter parenteses and/or braces: ");
    while((ch = getchar()) != '\n')
    {
        if(ch == '('|| ch == '{')
        {
            push(ch);
        }

        if(ch == ')'|| ch == '}')
        {
            if(is_empty())
            {
                printf("Parenteses/braces are not nested properly");
                exit(0);
            }
            element = pop();
            if (ch == ')'&& element == '(')
            {

            }
            else if (ch == '}'&& element == '{')
            {

            }
            else
            {
                printf("Parenteses/braces are not nested properly");
                exit(0);
            }
        }
        
    }
    printf("Parenteses/braces are nested properly");
    return 0;  
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int element)
{
    if(is_full())
        stack_overflow();
    else    
        contents[top++] = element;
}

int pop(void)
{
    if(is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("the stack is full. overflow!");
    exit(0);
}

void stack_underflow(void)
{
    printf("the stack is empty. underflow");
    exit(0);
}
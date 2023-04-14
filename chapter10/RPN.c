
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 15

bool make_empty(void);
bool is_empty(void);
bool is_full(void);
bool push(int element);
int pop(void);

void stack_overflow(void);
void stack_underflow(void);

int contents[STACK_SIZE];
int top = 0;

/* 这里不用特地定义为STACK_SIZE+1，因为top是指向下一个元素，并没有实际在top指向的位置存储元素，不用担心字符数组的长度溢出问题。 */

int main(void)
{
    int ch, operator1, operator2;

    /* initialize the stack  */
    make_empty();

    printf("Enter an RPN expression: ");

    while((ch = getchar()) != '\n')
    {
        if(ch == ' ')
            continue;
        else if((ch >= '0')&&(ch <= '9'))  /* the ascii value of ch is between 0 and 9 */
        {
            push(ch - '0');
        }

        switch (ch)
        {
        case '+' :
            operator1 = pop();
            operator2 = pop();
            push(operator2 + operator1);
            break;

        case '-' :
            operator1 = pop();
            operator2 = pop();
            push(operator2 - operator1);
            break;
                                
        case '*' :
            operator1 = pop();
            operator2 = pop();
            push(operator2 * operator1);
            break;

        case '/' :
            operator1 = pop();
            operator2 = pop();
            push(operator2 / operator1);
            break;
        
        case '=' :
            printf("Value of expression: %d\n", pop());
            break;
        }
    }
    
}

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

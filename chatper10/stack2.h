
#include <stdbool.h>
#ifndef __STACK2_H__
#define __STACK2_H__


void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int element);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

#endif


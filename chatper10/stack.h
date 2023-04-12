#ifndef __STACK_H__
#define __STACK_H__

#include <stdbool.h>

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int element);
int pop(void);

#endif


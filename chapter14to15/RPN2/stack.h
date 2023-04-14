#ifndef __STACK2_H__
#define __STACK2_H__

#define STACK_SIZE 15
int contents[STACK_SIZE];
int top = 0;

bool make_empty(void);
bool is_empty(void);
bool is_full(void);
bool push(int element);
int pop(void);

void stack_overflow(void);
void stack_underflow(void);


#endif

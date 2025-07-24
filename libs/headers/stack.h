#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

typedef struct Stack Stack;

int pop(Stack** top);

int isEmpty(Stack* top);

int peek(Stack *top);

void push(Stack** top, int value);

#endif // STACK_H
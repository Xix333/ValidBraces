#ifndef STACK_C
#define STACK_C
#include "headers/stack.h"

typedef struct Stack {
    int value;
    struct Stack* next;
} Stack;

int pop(Stack** top){
    if(*top == NULL) return -1;
    Stack* temp = *top;
    int poppedval = temp->value;
    *top = temp->next;
    free(temp);
    return poppedval;
}

int isEmpty(Stack* top) {
    return top == NULL;
}

int peek(Stack *top){
    if (top == NULL) return -1;
    return top->value;
}

void push(Stack** top, int value){
    Stack *newNode = (Stack*)malloc(sizeof(Stack));
    newNode->value = value;
    newNode->next = *top;
    *top = newNode;
}

#endif // STACK_C
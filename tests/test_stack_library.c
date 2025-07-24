#include <assert.h>
#include <stdio.h>
#include "../libs/headers/stack.h"

void test_push_pop() {
    Stack* stack = NULL;
    push(&stack, 10);
    assert(pop(&stack) == 10);
    assert(isEmpty(stack));
}

void test_push_peek() {
    Stack* stack = NULL;
    push(&stack, 20);
    assert(peek(stack) == 20);
    assert(!isEmpty(stack));
}

void test_push_isEmpty() {
    Stack* stack = NULL;
    assert(isEmpty(stack));
    push(&stack, 30);
    assert(!isEmpty(stack));
    pop(&stack);
    assert(isEmpty(stack));
}

void test_pop_empty() {
    Stack* stack = NULL;
    assert(pop(&stack) == -1); // Should return -1 for empty stack
}

int main() {
    test_push_pop();
    test_push_peek();
    test_push_isEmpty();
    test_pop_empty();

    printf("All stack tests passed!\n");
    return 0;
}
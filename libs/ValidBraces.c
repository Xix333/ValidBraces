#include "headers/ValidBraces.h"



bool ValidBraces(const char* braces) {
 Stack* stack = NULL;
  while(*braces){
    char ch = *braces++;
    if (ch == '(' || ch == '{' || ch == '[') {
      push(&stack, ch);
    } else {
      if (!stack) return false;
      char top = pop(&stack);
      if((top != '(' && ch == ')') || (top != '{' && ch == '}') || (top != '[' && ch == ']')) return false;
      }
    }
    if(isEmpty(stack)){
      return true;
    } else {
      stack = NULL;
      free(stack);
      return false;
    } 
}

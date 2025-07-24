# ValidBraces

## Table of Contents

[Introduction](#Introduction)

[Project Structure](#Project_Structure)

[Stack Implementation Overview](#Stack_Implementation_Overview)

[Bracket Validator Logic](#Bracket_Validator_Logic)

[Libraries in the libs Folder](#Libraries_in_the_libs_Folder)

[Compilation and Usage](#Compilation_and_Usage)

[Running via Console](#Running_via_Console)

[Examples of Input and Output](#Examples_of_Input_and_Output)

[How to Use in Your Own Projects](#How_to_Use_in_Your_Own_Projects)

[Conclusion](#Conclusion)

[Developers](#Developers)

## Introduction
A simple bracket validator using a basic stack implementation in the C programming language. The library files located in the libs folder can be used for your own projects. This is a learning project that can be played with via the console.

## Project_Structure
```text
ValidBraces/
  libs/
  ├── headers/
  │   ├── stack.h
  │   └── ValidBraces.h
  ├── stack.c
  └── ValidBraces.c
  src/
  ├── headers/
  │   └── main.h
  └── main.c
  tests/
  ├── test_main.c
  └── test_stack_library.c
```

## Stack Implementation Overview
If we look "under the hood" and enter the libs folder, we will find several files: stack.c and ValidBraces.c. Initially, the second file was created for testing purposes, and later I realized that the main file main.c could be used to handle console interaction.

In the stack.c file:
We encounter several functions and one structure. The Stack structure has fields for a "value" and a pointer to another Stack structure. In other words, our stack is actually a singly linked list!

Next, we have four functions:

pop → takes a pointer to a pointer to the top element of our primitive stack. 
Removes the top value from the stack. Returns -1 if the stack is empty.

push → takes a double pointer to the top element and the value to be stored. 
I think the function is self-explanatory.

isEmpty → takes a pointer to the top element and checks whether the stack is empty. 
Returns 1 if empty, 0 otherwise.

peek → takes a pointer to the stack. 
Returns the value of the top element or -1 if the stack is empty.


## Bracket Validator Logic

## Libraries in the libs Folder

## Compilation and Usage

## Running via Console

## Examples of Input and Output

## How to Use in Your Own Projects

## Conclusion

## Developers

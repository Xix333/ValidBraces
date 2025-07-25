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

[Dependencies](#Dependencies)

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

## Stack_Implementation_Overview
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


## Bracket_Validator_Logic

The logic of the bracket validator (which is based on a stack) is as follows: when you pass a string of brackets (e.g., "{()}") to the ValidBraces function, every opening bracket is pushed onto the stack. When a closing bracket is encountered, the function compares it with the bracket on the top of the stack to see if they form a matching pair. If they do, the loop continues; if they don’t, the function immediately returns false. If, after processing the entire string, the stack is empty (i.e., no unmatched opening brackets remain) and the loop has finished, the function returns true.

Example: 
```
ValidBraces("{()}");  // returns true
ValidBraces("{(})");  // returns false
```

## Libraries_in_the_libs_Folder
The project has a straightforward structure:

    stack.c – contains the implementation of the stack structure and functions for working with it.

    ValidBraces.c – contains the implementation of the bracket validator.


## Compilation_and_Usage

## Running_via_Console

## Examples_of_Input_and_Output

## Dependencies
The project uses only three standard C libraries:

    <stdbool.h> – for working with boolean values (true/false).

    <stdio.h> – for input/output operations (e.g., printf).

    <assert.h> – for runtime checks and debugging.

## How_to_Use_in_Your_Own_Projects

## Conclusion
As a result, I gained a sea of emotions and valuable experience from implementing this task on my local machine. I believe this project will serve as a good example for beginner programmers, allowing them to experiment with the task and come up with their own interesting implementations. :)

## Developers
The libraries in this project are provided as simple examples (a stack interface based on a singly linked list) and require further improvements. You can find them in the libs folder.

If you would like to contribute your own improvements, feel free to do so — pull requests are welcome.

For any questions or suggestions, feel free to contact me via email:
ilagubakov717@gmail.com

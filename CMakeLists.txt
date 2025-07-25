cmake_minimum_required(VERSION 3.11)
project(ValidBraces C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)


add_library(stack 
    libs/stack.c
)
target_include_directories(stack PUBLIC libs/headers)


add_library(validbraces_core
    libs/ValidBraces.c
)
target_include_directories(validbraces_core PUBLIC src/headers libs/headers)
target_link_libraries(validbraces_core PRIVATE stack)


add_executable(ValidBraces src/main.c)
target_link_libraries(ValidBraces PRIVATE validbraces_core)


add_executable(test_stack tests/test_stack_library.c)
target_include_directories(test_stack PRIVATE libs/headers)
target_link_libraries(test_stack PRIVATE stack)


add_executable(test_main tests/test_main.c)
target_link_libraries(test_main PRIVATE validbraces_core)

#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include "../libs/headers/ValidBraces.h"



void test_mismatched_braces() {
    const char* braces = "{[(]}";
    assert(ValidBraces(braces) == false); // Should return false for mismatched braces
}

void test_empty_braces() {
    const char* braces = "";
    assert(ValidBraces(braces) == true); // Should return false for empty input
}

void test_valid_braces() {
    const char* braces = "{[(())]}";
    assert(ValidBraces(braces) == true); // Should return true for valid braces
}

void test_invalid_braces() {
    const char* braces = "{[(])}";
    assert(ValidBraces(braces) == false); // Should return false for invalid braces
}

int main() {
    test_mismatched_braces();
    test_empty_braces();
    test_valid_braces();
    test_invalid_braces();

    printf("All tests passed!\n");
    return 0;
}
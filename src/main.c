#include "headers/main.h"
#include "../libs/headers/ValidBraces.h"

int main(int argc, char* argv[]) {
    if(argc != 2) {
        printf("Usage: %s <string_of_braces>\n", argv[0]);
        return 1;
    }

    const char* braces = argv[1];
    if(ValidBraces(braces)) {
        printf("The braces are valid.\n");
    } else {
        printf("The braces are invalid.\n");
    }   
    return 0;
}

// int argc, char* argv[]


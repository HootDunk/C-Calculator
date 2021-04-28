#include <stdio.h>
#include <stdlib.h>
#include "tests.h"

#define TEST 1

int addition(int firstNum, int secondNum) {
    return firstNum + secondNum;
}

int main(int argc, char** argv) {
    if (TEST) {
        runTests();
        printf("All tests passed!\n");
        return EXIT_SUCCESS;
    }

    printf("hello world\n");
    return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include "tests.h"

#define TEST 0

int addition(int firstNum, int secondNum) {
    return firstNum + secondNum;
}

int subtraction(int firstNum, int secondNum) {
    return firstNum - secondNum;
}

int multiplication(int firstNum, int secondNum) {
    return firstNum * secondNum;
}

int division(int firstNum, int secondNum) {
    if (secondNum == 0){
        printf("Cannot divide by zero");
        exit(EXIT_FAILURE);
    }
    return firstNum / secondNum;
}

int remainderDiv(int firstNum, int secondNum) {
    return firstNum % secondNum;
}

int main(int argc, char** argv) {
    if (TEST) {
        runTests();
        printf("All tests passed!\n");
        return EXIT_SUCCESS;
    }

    return (0);
}
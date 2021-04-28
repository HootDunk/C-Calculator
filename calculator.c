#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define TEST 1

int addition(int firstNum, int secondNum) {
    return firstNum + secondNum;
}

void testAddition() {
    int firstNumber = 10;
    int secondNumber = 20;
    int expectedOutput = 30;

    int actualOutput = addition(firstNumber, secondNumber);

    if (expectedOutput != actualOutput){
        fprintf(stderr, "testAddition has failed: actual: %d expected %d\n", actualOutput, expectedOutput);
        exit(1);
    }
    return;
}

void runTests(){
    testAddition();
}

int main(int argc, char** argv) {
    if (TEST) {
        runTests();
        printf("All tests passed!");
        return EXIT_SUCCESS;
    }

    printf("hello world");
    return (0);
}
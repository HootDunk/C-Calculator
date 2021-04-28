#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "calculator.h"

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
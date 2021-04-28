#include <stdio.h>
#include <stdlib.h>
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

void testSubtraction() {
    int firstNum = 20;
    int secondNum = 10;
    int expectedOutput = 10;

    int actualOutput = subtraction(firstNum, secondNum);
    if (expectedOutput != actualOutput) {
        fprintf(stderr, "testSubtraction has failed: actual: %d expected %d\n", actualOutput, expectedOutput);
        exit(1);
    }
    return;
}

void testMultiplication() {
    int firstNum = 10;
    int secondNum = 10;
    int expectedOutput = 100;

    int actualOutput = multiplication(firstNum, secondNum);
    if (expectedOutput != actualOutput) {
        fprintf(stderr, "testMultiplication has failed: actual: %d expected %d\n", actualOutput, expectedOutput);
        exit(1);
    }
    return;
}

void testDivision() {
    int firstNum = 100;
    int secondNum = 10;
    int expectedOutput = 10;

    int actualOutput = division(firstNum, secondNum);
    if (expectedOutput != actualOutput) {
        fprintf(stderr, "testDivision has failed: actual: %d expected %d\n", actualOutput, expectedOutput);
        exit(1);
    }
    return;
}

void testRemainderDiv() {
    int firstNum = 7;
    int secondNum = 5;
    int expectedOutput = 2;

    int actualOutput = remainderDiv(firstNum, secondNum);
    if (expectedOutput != actualOutput) {
        fprintf(stderr, "testRemainder has failed: actua; %d expected %d\n", actualOutput, expectedOutput);
        exit(1);
    }
    return;
}

void runTests(){
    testAddition();
    testSubtraction();
    testMultiplication();
    testDivision();
    testRemainderDiv();
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "tests.h"
#include "helper.h"

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

// char* menu(str){
//     printf("Enter an option: add, multiply, divide, subtract, remainder: ");
//     scanf("%s", str);
//     return str;
// }
void menu(){
    printf("Enter an option: add, subtract, multiply, divide, remainder, quit: ");
}

int getInt(int supressErr) {
    int num, result;

    result = scanf("%d", &num);
    if (result == EOF) {
        if (supressErr != 1){
            printf("EOF Failure\n");
        }
        exit(EXIT_FAILURE);
        /* Handle EOF/Failure */
    } else if (result == 0) {
        if (supressErr != 1){
            printf("Error No Match\n");
            
        }
        exit(EXIT_FAILURE);
    }
    return num;
}

int getFirstNum(int supressErr){
    printf("\nEnter first number: ");
    return getInt(supressErr);
}

int getSecondNum(int supressErr){
    printf("\nEnter second number: ");
    return getInt(supressErr);
}





int main(int argc, char** argv) {
    if (TEST) {
        runTests();
        printf("All tests passed!\n");
        return EXIT_SUCCESS;
    }

    int suppressErr = 0;
    int option;
    while((option = getopt(argc, argv, "dh")) != -1){
        switch(option){
            case 'd':
                // make supress error true
                suppressErr = 1;
                break;
            case 'h':
                help();
                break;
            default:
                help();
                exit(EXIT_FAILURE); 
        }
    }



    char str[100];
    while (strcmp(str, "quit") != 0){
        menu();
        scanf("%s", str);
        int result;
        if (strcmp(str, "add") == 0){
            result = addition(getSecondNum(suppressErr), getFirstNum(suppressErr));
            printf("\nResult of addition = %d", result);
            printf("\n");
        } 
        else if (strcmp(str, "multiply") == 0){
            result = multiplication(getSecondNum(suppressErr), getFirstNum(suppressErr));
            printf("\nResult of multiplication = %d", result);
            printf("\n");
        }
        else if (strcmp(str, "subtract") == 0){
            int firstNum = getFirstNum(suppressErr);
            int secondNum = getSecondNum(suppressErr);
            result = subtraction(firstNum, secondNum);
            printf("\nResult of subtraction = %d", result);
            printf("\n");
        }
        else if (strcmp(str, "divide") == 0){
            int firstNum = getFirstNum(suppressErr);
            int secondNum = getSecondNum(suppressErr);
            result = division(firstNum, secondNum);
            printf("\nResult of division = %d", result);
            printf("\n");
        }
        else if (strcmp(str, "remainder") == 0){
            int firstNum = getFirstNum(suppressErr);
            int secondNum = getSecondNum(suppressErr);
            result = remainderDiv(firstNum, secondNum);
            printf("\nResult of remainder division = %d", result);
            printf("\n");
        }
    }


    return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include "operations.h"
#include "tests.h"

void help() {
    // displays help menu when -h
    printf("The options for this program are: \n");
    printf("-h help: displays this help menu\n");
    printf("-t test: runs all tests\n\n");
    
    printf("You will be asked which mathematical operation to perform,\n");
    printf("followed by prompts for the two integer operands.\n");
    printf("It's that easy!\n\n");
    
}

void operationChoice() {
    // prompts for selection of mathematical operation
    printf("Please choose from the following:\n");
    printf("a. addition\n");
    printf("s. subtraction\n");
    printf("m. multiplication\n");
    printf("d. division\n");
    printf("r. modulo division (remainder)\n");
    printf("Which mathematical operation would you like to perform? Enter the corresponding letter: ");

}

int getInput(char firstOrSecond) {
    // prompts for integer input for a or b
    int num;
    
    printf("Please enter "); 
    printf((firstOrSecond == 'a') ? "the first " : "another ");
    printf("integer, followed by the enter key: ");
    scanf("%d", &num);

    return num;
}

int checkValidDivisor() {
    // input validation to avoid divide by zero errors
    int num;

    do {
        printf("Please enter another integer, followed by the enter key: ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Cannot divide by zero!\n");
        }
    } while (num == 0);

    return num;
}

int main(int argc, char** argv) {
    
    int option;     // help (-h) and test (-t) options
    char choice;    // for operator selection
    int a;          // left operand
    int b;          // right operand
    int result;     // result of the selected calculation

    while( (option = getopt(argc, argv, "ht")) != -1) {
        // if -h, display helpful information
        // if -t, run all tests
        switch(option) {
            case 'h': 
                help();
                break;
            case 't':
                runTests();
                printf("All tests pass!\n\n");
                break;
            default:
                help();
                break;
        }
    }

    // prompt for selection of mathematical operator
    operationChoice();
    scanf("%c", &choice);

    switch (choice) {
        // based on choice, perform the appropriate calculations and display result
        case 'A':
        case 'a':
            a = getInput('a');
            b = getInput('b');
            result = addition(a, b);
            printf("%d + %d = %d", a, b, result);
            break;
        case 'S':
        case 's':
            a = getInput('a');
            b = getInput('b');
            result = subtraction(a,b);
            printf("%d - %d = %d", a, b, result);
            break;
        case 'M':
        case 'm':
            a = getInput('a');
            b = getInput('b');
            result = multiplication(a, b);
            printf("%d * %d = %d", a, b, result);
            break;
        case 'D':
        case 'd':
            a = getInput('a');
            b = checkValidDivisor();
            result = division(a, b);
            printf("%d / %d = %d", a, b, result);
            break;
        case 'R':
        case 'r':
            a = getInput('a');
            b = getInput('b');
            result = modulo(a, b);
            printf("%d %% %d = %d", a, b, result);
            break;
        default:
            printf("Invalid selection!\n");
    }

    // exit the program successfully
    printf("\nGoodbye!");
    return 0;
}
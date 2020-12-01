#include <stdio.h>
#include <stdlib.h>
#include "operations.h"
#include "tests.h"

#define TEST 1

int main(int argc, char** argv) {
    if (TEST) {
        runTests();
        printf("ALL TESTS PASS!");
        return;  
    }
    
    if (argc != 3) {
        fprintf(stderr, "Invalid input!");
        return EXIT_FAILURE;  
    }
    
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    
    int result = addition(num1, num2);
    
    printf("%d\n", result);
    return EXIT_SUCCESS;
}
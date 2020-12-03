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
    
}
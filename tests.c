#include <stdio.h>
#include <stdlib.h>

void testAddition() {
    int a = 2;
    int b = 3;
    int sum = 5;

    int response = addition(a, b);

    if (sum != response) {
        fprintf(stderr, "testAddition has failed!\n actual: %d expected %d", response, sum);
        exit(1);
    }

    return;
}

void runTests() {
    testAddition();
}
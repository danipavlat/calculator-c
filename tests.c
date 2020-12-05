#include <stdio.h>
#include <stdlib.h>

// basic tests verify operations work as intended
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

void testSubtraction() {
    int a = 4;
    int b = 2;
    int difference = 2;

    int response = subtraction(a, b);

    if (difference != response) {
        fprintf(stderr, "testSubtraction has failed!\n actual: %d expected: %d", response, difference);
        exit(1);
    }

    return;
}

void testDoubleNegative() {
    int a = -2;
    int b = -4;
    int difference = 2;

    int response = subtraction(a, b);

    if (difference != response) {
        fprintf(stderr, "testDoubleNegative has failed!\n actual %d expected %d", response, difference);
        exit(1);
    }

    return;
}

void testMultiplication() {
    int a = 1;
    int b = 3;
    int product = 3;

    int response = multiplication(a, b);

    if(product != response) {
        fprintf(stderr, "testMultiplication has failed!\n actual: %d expected: %d", response, product);
        exit(1);
    }

    return;
}

void testDivision() {
    int a = 6;
    int b = 3;
    int quotient = 2;

    int response = division(a, b);

    if(quotient != response) {
        fprintf(stderr, "testDivision has failed!\n actual: %d expected: %d", response, quotient);
        exit(1);
    }

    return;
}

void testModulo() {
    int a = 4;
    int b = 2;
    int remainder = 0;

    int response = modulo(a, b);
    if (remainder != response) {
        fprintf(stderr, "testModulo has failed!\n actual: %d expected: %d", response, remainder);
        exit(1);
    }

    return;
}

void testModuloZero() {
    int a = 5;
    int b = 0;
    int remainder = 5;

    int response = modulo(a, b);
    if (remainder != response) {
        fprintf(stderr, "testModuloZero has failed!\n actual: %d expected: %d", response, remainder);
        exit(1);
    }

    return;
}

void runTests() {
    testAddition();
    testSubtraction();
    testDoubleNegative();
    testMultiplication();
    testDivision();
    testModulo();
    testModuloZero();
}
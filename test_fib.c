#include <stdio.h>
#include <assert.h>
#include "fib.h"

/*
 * test_fibonacci - Runs assertions to validate Fibonacci function.
 */
void test_fibonacci() {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(2) == 1);
    assert(fibonacci(3) == 2);
    assert(fibonacci(10) == 55);
    assert(fibonacci(50) == 12586269025LL);
    assert(fibonacci(91) == 4660046610375530309LL);

    printf("All tests passed!\n");
}

/*
 * main - Calls test function.
 */
int main() {
    test_fibonacci();
    return 0;
}


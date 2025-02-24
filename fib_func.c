#include "fib.h"

long long memo[MAX_FIB] = {0};

/*
 * fibonacci - Computes Fibonacci sequence using memoization.
 * @index: Fibonacci index (must be between 0 and MAX_FIB).
 *
 * Return: Fibonacci number at index, or -1 if index is out of bounds.
 */
long long fibonacci(int index) {
    if (index < 0) {
        return -1;  // Error case for negative input
    }
    if (index == 0) {
        return 0;
    }
    if (index == 1) {
        return 1;
    }

    if (memo[index] != 0) {
        return memo[index];
    }

    memo[index] = fibonacci(index - 1) + fibonacci(index - 2);
    return memo[index];
}


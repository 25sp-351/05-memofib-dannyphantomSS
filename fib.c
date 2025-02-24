#include <stdio.h>
#include "fib.h"

#define MAX_FIB 92 // Limit to avoid overflow

// Memoization array
long long memo[MAX_FIB] = {0};

// Memoized Fibonacci function
long long fibonacci(int n) {
    if (n < 0) {
        return -1; // Error handling for negative inputs
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Check if already computed
    if (memo[n] != 0) return memo[n];

    // Compute and store result
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

// Main function for user input
int main() {
    int n;
    printf("Enter a number (0-91): ");
    scanf("%d", &n);

    if (n < 0 || n > 91) {
        printf("Error: Input must be between 0 and 91.\n");
        return 1;
    }

    printf("Fibonacci(%d) = %lld\n", n, fibonacci(n));
    return 0;
}


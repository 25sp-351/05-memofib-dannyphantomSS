#include <stdio.h>
#include "fib.h"

/*
 * main - Gets user input and computes Fibonacci sequence.
 *
 * Return: 0 on success, 1 if input is out of range.
 */
int main() {
    int user_index;

    printf("Enter a number (0-%d): ", MAX_FIB - 1);
    if (scanf("%d", &user_index) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (user_index < 0 || user_index >= MAX_FIB) {
        printf("Error: Input must be between 0 and %d.\n", MAX_FIB - 1);
        return 1;
    }

    printf("Fibonacci(%d) = %lld\n", user_index, fibonacci(user_index));
    return 0;
}


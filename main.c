#include <stdio.h>

// Function prototype
void fibonacci(int n);

int main() {
    int n = 100; // For the first 100 Fibonacci numbers

    printf("First %d Fibonacci numbers:\n", n);
    fibonacci(n);

    return 0;
}

// Function to compute Fibonacci numbers
void fibonacci(int n) {
    unsigned long long int a = 0, b = 1, next;

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            next = 0; 
        } else if (i == 2) {
            next = 1; 
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%llu \n", next);
    }
    printf("\n");
}

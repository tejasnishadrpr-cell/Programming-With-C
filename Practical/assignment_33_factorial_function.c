#include <stdio.h>

// Function returns 1 for success, 0 for invalid input
int factorial(int n, int*result) {
    if (n < 0) {
        return 0;  // factorial not defined for negative numbers
    }

    *result = 1;
    for (int i = 1; i <= n; i++) {
        *result *= i;
    }
    return 1;  // success
}

int main() {
    int num;
    int fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (factorial(num, &fact)) {
        printf("Factorial of %d = %d\n", num, fact);
    } else {
        printf("Factorial is not defined for negative numbers.\n");
    }

    return 0;
}
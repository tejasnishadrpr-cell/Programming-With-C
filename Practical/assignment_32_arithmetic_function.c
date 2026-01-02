#include <stdio.h>

// Function to perform arithmetic operations using call by reference
void calculate(int *a, int *b, int *add, int *subtract, int *multiply, float *divide) {
    *add  = *a + *b;          // addition
    *subtract = *a - *b;          // subtraction
    *multiply = (*a) * (*b);      // multiplication
    
    if (*b != 0) {
        *divide = (float)(*a) / (*b);   // division
    } else {
        *divide = 0;   //  divide by zero
    }
}

int main() {
    int num1, num2;
    int add, subtract, multiply;
    float divide;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call function with addresses
    calculate(&num1, &num2, &add, &subtract, &multiply, &divide);

    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, add);
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtract);
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiply);

    if (num2 != 0)
        printf("Division: %d / %d = %.2f\n", num1, num2, divide);
    else
        printf("Division: Not possible (denominator is zero)\n");

    return 0;
}
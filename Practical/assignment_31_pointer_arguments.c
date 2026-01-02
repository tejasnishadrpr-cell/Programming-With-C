#include <stdio.h>

// Function to find maximum using pointers
int Max(int *x, int *y) {
    if (*x > *y)
        return *x;
    else
        return *y;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum of %d and %d is: %d\n", a, b, Max(&a, &b));

    return 0;
}
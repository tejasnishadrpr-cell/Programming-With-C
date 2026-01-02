#include <stdio.h>

// Function to calculate square
int square(int n) {
    return n * n;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d = %d\n", num, square(num));

    return 0;
}
#include <stdio.h>

int main() {
    int i;
    float usage, total = 0.0;

    printf("Enter electricity usage (in units) for 7 days:\n");

    for(i = 1; i <= 7; i++) {
        printf("Day %d: ", i);
        scanf("%f", &usage);
        total += usage;
    }

    printf("\nTotal Weekly Consumption = %.2f units\n", total);

    return 0;
}
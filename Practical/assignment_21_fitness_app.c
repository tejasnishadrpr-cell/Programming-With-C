#include <stdio.h>

int main() {
    int i;
    float distance, total = 0.0;

    printf("Enter walking distance (in KM) for 30 days:\n");

    for(i = 1; i <= 30; i++) {
        printf("Day %d: ", i);
        scanf("%f", &distance);
        total += distance;
    }

    printf("\nTotal Distance Walked in the Month = %.2f KM\n", total);

    return 0;
}
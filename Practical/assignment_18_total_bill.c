#include <stdio.h>

int main() {
    float price, total = 0.0;
    int i;

    printf("Enter the price of 5 items:\n");

    for(i = 1; i <= 5; i++) {
        printf("Item %d: ", i);
        scanf("%f", &price);
        total += price;
    }

    printf("\nTotal Bill = %.2f\n", total);

    return 0;
}
#include <stdio.h>

int main() {
    int choice, num, i;

    printf("Menu:\n");
    printf("1. Print Multiplication Table\n");
    printf("0. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (choice != 0) {
        if (choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);

            printf("Multiplication Table of %d:\n", num);
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", num, i, num * i);
            }
        } else {
            printf("Invalid choice! Please enter 1 or 0.\n");
        }

        printf("\nMenu:\n");
        printf("1. Print Multiplication Table\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }

    printf("Exiting program...\n");
    return 0;
}
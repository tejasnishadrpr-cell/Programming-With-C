#include <stdio.h>

int main() {
    int i, j;

    // (a) Rectangle with 7 columns and 4 rows
    printf("(a) Rectangle\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 7; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // (b) Square with 4 columns and 4 rows
    printf("(b) Square\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // (c) Right-angle triangle with 5 rows
    printf("(c) Right-angle triangle\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // (d) Reverse right-angle triangle with 5 rows
    printf("(d) Reverse right-angle triangle\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // (e) Central triangle (pyramid) with 5 rows
    printf("(e) Central triangle\n");
    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
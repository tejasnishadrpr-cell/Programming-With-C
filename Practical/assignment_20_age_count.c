#include <stdio.h>

int main() {
    int i, age, count = 0;

    printf("Enter the ages of 10 employees:\n");

    for(i = 1; i <= 10; i++) {
        printf("Employee %d age: ", i);
        scanf("%d", &age);

        if(age >= 30) {
            count++;
        }
    }

    printf("\nNumber of employees aged 30 or older = %d\n", count);

    return 0;
}
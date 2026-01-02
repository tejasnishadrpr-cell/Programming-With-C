#include <stdio.h>

int main() {
    int i, attendance, presentCount = 0;

    printf("Enter attendance for 30 days (1 = Present, 0 = Absent):\n");

    for(i = 1; i <= 30; i++) {
        printf("Day %d: ", i);
        scanf("%d", &attendance);

        if(attendance == 1) {
            presentCount++;
        }
    }

    printf("\nTotal Days Present = %d\n", presentCount);

    return 0;
}
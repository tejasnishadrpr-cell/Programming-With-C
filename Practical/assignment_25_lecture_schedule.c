#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-6) to see the lecture schedule:\n");
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday: Mathematics, Physics, Computer Science\n");
            break;
        case 2:
            printf("Tuesday: Chemistry, English, Electronics\n");
            break;
        case 3:
            printf("Wednesday: Biology, Mathematics, Digital Logic\n");
            break;
        case 4:
            printf("Thursday: Physics, Computer Science, Statistics\n");
            break;
        case 5:
            printf("Friday: Chemistry, English, Programming Lab\n");
            break;
        case 6:
            printf("Saturday: Seminar, Sports, Project Work\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 6.\n");
    }

    return 0;
}
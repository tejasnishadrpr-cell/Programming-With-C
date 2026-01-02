#include <stdio.h>

// Function to compute total
int Total(int marks[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

// Function to compute average
float Average(int total, int n) {
    return (float)total / n;
}

// Function to determine grade
char Grade(float avg) {
    if (avg >= 90)
        return 'A';
    else if (avg >= 80)
        return 'B';
    else if (avg >= 70)
        return 'C';
    else if (avg >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int n, i;
    
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter marks for %d subjects:\n", n);
    for (i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int total = Total(marks, n);
    float avg = Average(total, n);
    char grade = Grade(avg);

    printf("\nTotal Marks = %d\n", total);
    printf("Average Marks = %.2f\n", avg);
    printf("Grade = %c\n", grade);

    return 0;
}
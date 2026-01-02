#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the numbers: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    printf("\nSum of elements = %.2f", sum);
    return 0;
}
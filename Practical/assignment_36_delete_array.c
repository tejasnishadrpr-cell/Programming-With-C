#include <stdio.h>

int main() {
    int arr[10], n, key, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n", key, i);
            found = 1;
            break;  // stop after finding first occurrence
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
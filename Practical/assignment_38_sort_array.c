#include <stdio.h>

int main(){
    int sort[5] = {38, 42, 31, 35, 32};   // C program to sort the elements of an array in ascending order
    int temp;
    int n = 5;

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (sort[j] > sort[j + 1]){
                temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++){
        printf("%d ", sort[i]);          
    }
    printf("\n");

    return 0;
}  
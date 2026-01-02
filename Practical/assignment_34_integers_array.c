#include <stdio.h>
int main(){     //C program to read 5 numbers into an array and print them 
    int n;
    int arr[5];
    printf("Enter 5 numbers:\n");
    for(n=0;n<5;n++){
        scanf("%d",&arr[n]);
    }
    printf("The number you entered are:\n");
    for(n =0; n<5; n++){
        printf("%d\n",arr[n]);
    }
    return 0;
}
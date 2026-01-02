#include <stdio.h>
int main(){
    int x;

    printf("Write the number:");
    scanf("%d", &x);

    if(x%2==0){
        printf("%d is even number",x);
    } else{
        printf("%d is a odd number",x);
    }
    return 0;
}
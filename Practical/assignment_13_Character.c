#include <stdio.h>
int main(){
    char t;
    printf("Enter the Character");
    scanf("%c",&t);

    if (t>="a" && t<="z"){
        printf("%c is a character",t);
    }
    else {
        printf("It is a special character",t);
    }
    return 0;
}
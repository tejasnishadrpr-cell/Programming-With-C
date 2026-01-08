#include <stdio.h>
int main(){

    for(int a=1; a<=6; a++){
        for(int b=1; b<=5; b++){
            if(a==1 && b<=5){
                printf("*");
            }
            else if(a>=2 && a<=6 && b==3){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    for(int a=1; a<=7; a++){
        for(int b=1; b<=5; b++){
            if(a==1 && b<=5){
                printf("*");
            }
            else if(a>=2 && a<=3 && b==1){
                printf("*");
            }
            else if(a==4 && b<=5){
                printf("*");
            }
            else if(a>=5 && a<=6 && b==1){
                printf("*");
            }
            else if(a==7 && b<=5){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int a=1; a<=6; a++){
        for(int b=1; b<=5; b++){
            if(a==1 && b<=5){
                printf("*");
            }
            else if(a>=2 && a<=6 && b==3){
                printf("*");
            }
            else if(a>=5 && a<=6 && b==1){
                   printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
    int height = 7;   
    int width = (2 * height) - 1;  
    int n = width / 2;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= width; j++) {
            
            if (j == n - i || j == n + i) {
                printf("*");
            }
            
            else if (i == height / 2 && j > n - i && j < n + i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
   
for(int k=1;k<=7;k++){
    for(int l=1;l<=4;l++){
        if(k==1 && l<=4){
            printf("*");
        }
        else if(k>=2 && k<=3 && l==1){
            printf("*");
        }
        else if(k==4 && l<=4){
            printf("*");
        }
        else if(k>=5 && k<=6 && l==4){
            printf("*");
        }
        else if(k==7 && l<=4){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
   
    return 0;
}
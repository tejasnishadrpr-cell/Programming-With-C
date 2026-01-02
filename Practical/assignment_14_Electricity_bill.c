#include <stdio.h>
int main(){
    int unit;
    float bill, total;
    printf("Enter the total units consumed");
    scanf("%d",&unit);

    if(unit<=100){
        bill=unit*3;
    }
    else if (unit<=200){
        bill=unit*4;
    }
    else{
        bill=unit*5;
    }

    if(bill>1000){
        total= bill+bill * 0.1;
        printf("Total bill is %f", total);
    }

    else{
        total= bill;
        printf("Total bill %f", total);
    }
    return 0;

}
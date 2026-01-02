#include <stdio.h>
int main(){
    int I=20;
    float F=3.14;
    char C='B';
    double D=2.71828;
    printf("value of int: %d\n",I);
    printf("size of int: %zu bytes\n\n",sizeof(I));

    printf("value of float: %f\n",F);
    printf("size of float: %zu bytes\n\n",sizeof(F));

    printf("value of char: %c\n",C);
    printf("size of char: %zu bytes\n\n",sizeof(C));

    printf("value of double: %lf\n",D);
    printf("size of double: %zu bytes\n\n",sizeof(D));

    return 0;
}
#include <stdio.h>
int main(){
    int a=10,b=5;
    int sum=a+b;
    int diff=a-b;
    int product=a*b;
    int div=a/b;
    int mod=a%b;
    printf("The value of a+b is %d\n",sum);
    printf("The value of a-b is %d\n",diff);
    printf("The value of a*b is %d\n",product);
    printf("The value of a/b is %d\n",div);
    printf("The value of a%%b is %d\n",mod);
    return 0;
}
#include <stdio.h>
int main(){
    float balance1, balance2;


    printf("Enter the First account balance:");
    scanf("%f",&balance1);

    printf("Enter the second account balance:");
    scanf("%f",&balance2);

    int Equal = (balance1 == balance2);
    int first_greater = (balance1 > balance2);
    int second_greater = (balance1 < balance2);
     
    printf("Are both the account balance equal? %d\n", Equal);
    printf("Is the first account balance greater than second? %d\n", first_greater);
    printf("Is the second account balance greater than first? %d\n", second_greater);
    

    return 0;

}
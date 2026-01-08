#include <stdio.h>
int main(){
    float balance;
    float interest=0.06;
    float maintainance_charge=12.2;
    float bonus=1.2;

    printf("Enter the account balance:");
    scanf("%f",&balance);

    balance+= balance*interest;
    printf("Balance after adding interest: %f\n", balance);

    balance-= maintainance_charge;
    printf("Balance after deducting maintainance charge: %f\n", balance);

    balance*= bonus;
    printf("Balance after adding bonus: %f\n", balance);

    balance /= 2.0;
    printf("Final balance after dividing by 2: %f\n", balance);

    return 0;

}
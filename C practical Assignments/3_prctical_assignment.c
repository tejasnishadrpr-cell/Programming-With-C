#include <stdio.h>
int main(){
    char Employee_name[13];
    float Basic_salary,HRA, DA,Gross_salary,Tax,Net;
    
    printf("Enter your name:");
    scanf("%s",Employee_name);

    printf("Enter your Basic saliry:");
    scanf("%f",&Basic_salary);
    
    printf("The value of HRA is: %f\n",Basic_salary*20/100);
    printf("The value of DA is: %f\n",Basic_salary*10/100);
    printf("The value of Gross is: %f\n",Basic_salary+HRA+DA);
    printf("The value of Income Tax is: %f\n",Gross_salary*5/100);
    printf("The value of Net salary is: %f\n",Gross_salary-Tax);
    return 0;

}
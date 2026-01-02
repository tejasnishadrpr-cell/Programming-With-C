#include <stdio.h>
int main(){
    printf("press 1;To display number of days in month 1\n press 2: to display number of days in month 2\n press 3 :to display number of days in month 3\n  press 4: to display number of days in month 4\n press 5: to display number of days in month 5\n press 6: to display number of days in month 6\n press 7: to display number of days in month 7\n press 8: to display number of days in month 8\n press 9: to display number of days in month 9\n press 10: to display number of days in month 10\n press 11: to display number of days in month 11\n press 12: to display number of days in month 12\n");

    int month;
    printf("enter the month number:");
    scanf ("%d",&month);
    switch(month){
        case 1:
        printf("31 days\n");
        break;
      
        case 2:
        printf("28 or 29 days\n");
        break;

        case 3:
        printf("31 days\n");
        break;

        case 4:
        printf("30 days\n");
        break;

        case 5:
        printf("31 days\n");
        break;

        case 6:
        printf("30 days\n");
        break;

        case 7:
        printf("31 days\n");
        break;

        case 8:
        printf("31 days\n");
        break;

        case 9:
        printf("30 days\n");
        break;

        case 10:
        printf("31 days\n");
        break;

        case 11:
        printf("30 days\n");
        break;

        case 12:
        printf("31 days\n");
        break;
}
    return 0;
}  
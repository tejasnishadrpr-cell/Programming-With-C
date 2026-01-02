#include <stdio.h>
int main(){
    printf("Press R for Red\n Press Y for Yellow\n Press G for Green\n");
    char color;

    printf("enter the color:");
    scanf ("%c",&color);
    switch(color){
        case 'R':
        printf("Stop\n");
        break;
      
        case 'Y':
        printf("Ready\n");
        break;

        case 'G':
        printf("Go\n");
        break;
}
    return 0;
}
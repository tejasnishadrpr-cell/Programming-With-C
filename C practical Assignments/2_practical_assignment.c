#include <stdio.h>
int main(){
int x=5, y;

y=++x + 10;
printf("using pre-increment (++x):\n");
printf("x = %d, y= %d\n\n", x,y);

x=5;

y=x++ +10;
printf("using post-increment (x++):\n");
printf("x = %d, y= %d\n", x,y);

return 0;
}
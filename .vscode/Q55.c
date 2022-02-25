#include<stdio.h>
 
int main(){
    int x, y;
    printf("Give the value of x and y\n");
    scanf("%d\n%d", &x, &y);

    printf("x=%d\ny=%d\n", x, y);
    
    x=x+y;
    y=x-y;
    x=x-y;

    printf("after exchanging values:\nx=%d\ny=%d", x, y);

    return 0;
}
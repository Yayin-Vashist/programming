#include<stdio.h>
int main(){
    int a=1,b,c,d=1;
    b = ++a + a++ + ++a;
    printf("%d\n", b);
    a=1;
    b= ++a;
    printf("%d\n", b);
    a=1;
    b = ++a + a++;
    printf("%d\n", b);
    a=1;
    b= ++a + a++ + ++a;
    printf("%d\n", b);
    c = d++ + ++d + d++;
    d=1;
    c = d++;
    printf("\n%d\n", c);
    d=1;
    c = d++ + ++d;
    printf("%d\n", c);
    d=1;
    c = d++ + ++d + d++;
    printf("%d\n", c);

    printf(" the value of a is %d \n the value of b is %d \n the value of c is %d \n the value of d is %d \n ",a,b,c,d);

    return 0;
}
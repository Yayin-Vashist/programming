#include<stdio.h>

int main(){
    int a, *b, **c;
    a=1, b=&a, c=&b;
    printf("value of a = %d\n", a);

    // printf("address of a = %p\nvalue of b = %p\n", &a, b);
    printf("\naddress of a = %u\nvalue of b, which is a pointer storing a's address = %u\n", &a, b);

    printf("\naddress of b = %u\nvalue of c, which is a pointer storing b's address = %u\n", &b, c);
    return 0;
}
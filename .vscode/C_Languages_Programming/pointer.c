#include<stdio.h>
 
int main(){
    int a = 10;
    int *pointer = &a;

    printf("The address of a is %u\n", pointer);

    // pointer++;

    // printf("The address of a is %u\n", pointer);

    char b = 's';
    char *s=&b;
    printf("The address of b is %u\n", s);

    // s++;

    // printf("The address of b is %u\n", s);

    unsigned long long int c=1;
    unsigned long long int *haha=&c;

    printf("The address of c is %u\n", haha);

    haha++;

    printf("The address of c is %u\n", haha);

    printf("The value at pointer is %d\n", *pointer);

    printf("The value at s is %c\n", *s);
    
    return 0;
}
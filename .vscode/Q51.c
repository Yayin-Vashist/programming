#include<stdio.h>
 
int main(){
    int num[6], i, variable;

    printf("Input the integers:\n");

    for ( i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        variable=num[i];
        num[i]=num[5-i];
        num[5-i]=variable;
    }
    for ( i = 0; i < 6; i++)
    {
        printf("num[%d]=%d\n", i, num[i]);
    }
    return 0;
}
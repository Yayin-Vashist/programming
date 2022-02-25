#include<stdio.h>
 
int main(){
    int i, a, num[5];

    printf("Give the numbers:\n");
    scanf("%d", &a);

    printf("The output is:\n");
    
    num[0]=a;
    printf("num[0]=%d\n", a);

    for ( i = 1; i < 5; i++)
    {
        num[i]=3*num[i-1];
        printf("num[%d]=%d\n",i, num[i]);
    }
    return 0;
}
#include<stdio.h>
 
int main(){
    int integer, i; 
    printf("The number whose factors are to be found is:\n");
    scanf("%d", &integer);
    printf("\n");
    for ( i = 1; i <= integer/2; i++)
    {
        if (integer%i==0)
        {
            printf("%d\n", i);
        }
    }
    printf("%d", integer);
    return 0;
}
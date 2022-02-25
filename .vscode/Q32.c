#include<stdio.h>
 
int main(){
    int a, i;
    printf("Give the number A to search for numbers between 1 and 100, which when divided by A leave remainder 3\n");
    printf("CAUTION!!! The number must be greater than 3 and lower than 49, otherwise there would be no solution!!!\n");
    scanf("%d", &a);

    for ( i = 3; i < 101; i++)
    {
        if (i%a==3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
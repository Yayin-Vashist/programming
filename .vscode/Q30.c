#include<stdio.h>
 
int main(){
    int upper_lim, i;
    printf("Sum of squares of even numbers from 1 to:\n");
    scanf("%d", &upper_lim);
    for ( i = 2; i <= upper_lim; i++)
    {
        if(i%2==0)
        {
            printf("%d^2 is %d\n", i, i*i);
    }
    }
     return 0;
}
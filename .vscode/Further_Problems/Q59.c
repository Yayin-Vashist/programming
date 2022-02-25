#include<stdio.h>
 
int main(){
    float i, n, sum;
    
    printf("You need the sum till\n");
    scanf("%f", &n);

    for ( i = 1; i <= n; i++)
    {
        sum+=(1/i);
    }
    
    printf("\nThe sum is %f", sum);

    return 0;
}
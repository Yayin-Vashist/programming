#include<stdio.h>
 
int main(){
    int n, i;

    scanf("%d", &n);

    int array[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    int array_sum=0;
    
    for ( i = 0; i < n; i++)
    {
        array_sum+=array[i];
    }
    printf("%d", array_sum);
    return 0;
}
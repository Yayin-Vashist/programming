#include<stdio.h>
 
int main(){
    int i, A[5];

    printf("Give the numbers:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Number smaller than 5 are:\n");
    for ( i = 0; i < 5; i++)
    {
        if (A[i]<5)
        {
            printf("%d\n", A[i]);
        }
        
    }
    
     
    return 0;
}
#include<stdio.h>
 
int main(){
    int n, i, j;

    scanf("%d", &n);
  
    i=(2*n-1);
    j=(2*n-1);
    int a[i][j];

    
        for ( i = 0; i < (2*n-1); i++)
        {
            for ( j = 0; j < (2*n-1); j++)
            {
                
                if (i==0||j==0||i==(2*n-2)||j==(2*n-2))
                {
                    printf("%2d", n);
                }
                else if (i==1||j==1||i==(2*n-3)||j==(2*n-3))
                {
                    printf("%2d",n-1);
                }
                else
                {
                    printf(" ");
                }
                
        
            }
            printf("\n");
        }
        
        
    
    
    return 0;
}
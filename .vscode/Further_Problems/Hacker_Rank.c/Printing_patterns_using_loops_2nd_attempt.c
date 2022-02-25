// SUCCESS!!!!!
#include<stdio.h>
 
int main(){
    int n, i, j, num;

    scanf("%d", &n);

    i=2*n-1;
    j=2*n-1;
   int array[i][j];
   for ( i = 0; i < 2*n-1; i++)
   {
       for ( j = 0; j < 2*n-1; j++)
       {
           array[i][j]=0;
        }
    }
   
   int a=n-1;

    for ( num = 1; num <= n; num++)
    {
        for ( i = (a-(num-1)); i <= (a+(num-1)) ; i++)
        {
            for ( j = (a-(num-1)); j <= (a+(num-1)) ; j++)
            {
                if(array[i][j]==0)
                {
                    array[i][j]=num;
                }
            }  
        }
    }
    
    for ( i = 0; i < (2*n-1); i++)
    {
        for ( j = 0; j < (2*n-1); j++)
        {
            printf("%2d ", array[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
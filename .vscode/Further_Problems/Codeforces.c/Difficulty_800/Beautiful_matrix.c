#include<stdio.h>
#include<stdlib.h>

int main(){
    int matrix[5][5], i, j, a;

    for (i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j]==1)
            {
                a=(abs(2-i)+abs(2-j));
            }
            
        }
        printf("\n");
    }
    printf("%d", a);
    
    return 0;
}
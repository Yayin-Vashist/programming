#include<stdio.h>
 
int main(){
    int matrix[3][3];
    int i, j;
    char blank[i][j];

    printf("Give the values:\n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; i++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j]==10)
            {
                blank[i][j]= matrix[i][j];
                blank[i][j]=" ";
            }
            
        }
    }
    printf("%d %d %d\n%d %d %d\n%d %d %d\n", matrix[0][0], matrix[0][1], matrix[0][2], matrix[1][0], matrix[1][1], matrix[1][2], matrix[2][0], matrix[2][1], matrix[2][2]);
    

    return 0;
}
#include<stdio.h>
 
int main(){
    int rows, columns;

    printf("Please give the number of rows and columns in the matrix respectively\n");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns], i, j;
    
    printf("Give your matrix\n");
    
    for ( i = 0; i < rows ; i++)
    {
        for ( j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\n The transpose of the matrix is\n");
    for ( i = 0; i < columns; i++)
    {
        for ( j = 0; j < rows; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
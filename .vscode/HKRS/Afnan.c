#include<stdio.h>
 
int main(){
    int row, column;
    printf("Give the row and column:\n");
    scanf("%d %d", &row, &column);
    int matrix[row][column];
    char values[10];
    int k=0;
    
    printf("Give a number:\n");
    scanf("%s", &values);

    for (int i = 0; i<row ; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (values[k]=='\0')
            {
                k=0;
            }
            printf("%c ", values[k]);
            matrix[i][j]=values[k];
            k++;
        }
        printf("\n");
    }
    
    return 0;
}
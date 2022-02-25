#include<stdio.h>
 
int main(){
    int rows, columns, i, j;
    int a=1;
    printf("The number of rows and column are:\n");
    scanf("%d\n%d", &rows, &columns);

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
     
    return 0;
}
#include<stdio.h>
 
int main(){
    int rows, i, j,a=1;

    printf("The number of rows are:\n");
    scanf("%d", &rows);
    for ( i = 0; i < rows; i++)
    {
        printf("%d %d %d\n", a, a*a, a*a*a);
        a++;
    }
    return 0;
}
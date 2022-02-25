#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter rows and columns of the matrix : ");
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    printf("\nEnter elements of matrix : ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nYour Matrix : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    

    
}
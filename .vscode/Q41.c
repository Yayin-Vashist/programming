#include<stdio.h>
 
int main(){
    int a, i, m=1;
    printf("The number of lines are:\n");
    scanf("%d", &a);

    for ( i = 1; i <=a; i++)
    {int j;
        for ( j = 1; j <= 3; j++)
        {
         printf("%d ", m);   
            m++;
        }
        printf("\n");
    }
    return 0;
}
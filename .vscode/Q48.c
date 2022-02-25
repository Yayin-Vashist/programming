#include<stdio.h>
 
int main(){
    int array[5], i;
    printf("give numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", array[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        if (array[i]>0)
        {
            printf("%d\n", array[i]);
        }
        else
        {
            printf("%d\n", 100);
        }
    }
    return 0;
}
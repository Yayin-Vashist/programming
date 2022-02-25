#include<stdio.h>
 
int main(){
    int a, i;
    scanf("%d", &a);
    int array[a];

    for ( i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }
    
    if (array[i-1]%10==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}
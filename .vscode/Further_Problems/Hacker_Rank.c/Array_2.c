#include<stdio.h>
 
int main(){
    int i, num;

    scanf("%d", &num);

    int array[num];

    for ( i = 0; i < num; i++)
    {
        scanf("%d", &array[(num-1)-i]);
    }
    for ( i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
    
    
    return 0;
}
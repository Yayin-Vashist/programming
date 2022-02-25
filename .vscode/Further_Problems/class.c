#include<stdio.h>
 
int main(){
    int i, a;

    scanf("%d", &a);
    int array[a], array2[a];

    for ( i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }
    for ( i = 0; i <a ; i++)
    {
        array2[(a-1)-(i)]=array[i];
    }
    for ( i = 0; i < a; i++)
    {
        printf("%d\n", array2[i]);
    }
    return 0;
}
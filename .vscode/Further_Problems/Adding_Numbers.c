#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);

    int a[t], b[t], i;

    for ( i = 0; i < t; i++)
    {
        scanf("%d\n%d", &a[t], &b[t]);
    }
    for ( i = 0; i < t; i++)
    {
        printf("%d", a[i]+b[i]);
    }
    
    
    return 0;
}
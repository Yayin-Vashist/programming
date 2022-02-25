#include<stdio.h>
 
int main(){
    int a, b, i;

    printf("Give the 2 integers as range:\n");
    scanf("%d\n%d", &a, &b);

    for(i=a+1; i<b; i++)
    {
        if (i%7==2 || i%7==3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
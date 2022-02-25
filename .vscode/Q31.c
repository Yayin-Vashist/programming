#include<stdio.h>
 
int main(){
    int a;
    printf("Give a integer\n");
    scanf("%d", &a);

    if (a>0 && a%2==0)
    {
        printf("The number %d is positive and even\n", a);
    }
    else if (a>0 && a%2==1)
    {
        printf("The number %d is positive and odd\n", a);
    }
    else if (a<0 && a%2==0)
    {
        printf("The number %d is negative and even\n", a);
    }
    else if (a<0 && a%2==-1)
    {
        printf("The number %d is negative and odd\n", a);
    }
    else if (a==0)
    {
        printf("The number %d is even\n", a);
    }
     return 0;
}
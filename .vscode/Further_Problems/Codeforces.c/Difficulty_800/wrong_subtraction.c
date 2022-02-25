#include<stdio.h>
 
int main(){
    int a, t;
    scanf("%d %d",&a, &t);
    
    while(t--)
    {
        if (a%10==0)
        {
            a=a/10;
        }
        else
        {
            a-=1;
        }
    }
    printf("%d", a);
    return 0;
}
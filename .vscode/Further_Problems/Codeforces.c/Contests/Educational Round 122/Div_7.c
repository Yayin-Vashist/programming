#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int num;
        scanf("%d", &num);
        if (num%7==0)
        {
            printf("%d\n", num);
        }
        else if ((num%7)<=(num%10))
        {
            printf("%d\n",(num-(num%7)));
        }
        else
        {
            printf("%d\n", (num-(7-(num%7))));
        }
    }
    return 0;
}
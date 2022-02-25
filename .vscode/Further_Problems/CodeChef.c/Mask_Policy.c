#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, a;

        scanf("%d %d", &n, &a);

        if (a<=(n-a))
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", (n-a));
        }
        
        
    }
    
    return 0;
}
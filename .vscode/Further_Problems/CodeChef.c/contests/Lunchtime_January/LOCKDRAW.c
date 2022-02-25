#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a[3];
        scanf("%d %d %d", &a[0], &a[1], &a[2]);

        if (a[0]+a[1]==a[2]||a[1]+a[2]==a[0]||a[2]+a[0]==a[1])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
    }
    
    return 0;
}
#include<stdio.h>
 
int main(){
    int a, b, i, j;
    
    printf("Give the range\n");
    scanf("%d\n%d", &a, &b);
    
    if (a<10)
    {
        for ( j = a; j <= b; j++)
        {
            if (j==1)
            {
                printf("one\n");
                continue;
            }
            if (j==2)
            {
                printf("two\n");
                continue;
            }
            if (j==3)
            {
                printf("three\n");
                continue;
            }
            if (j==4)
            {
                printf("four\n");
                continue;
            }
            if (j==5)
            {
                printf("five\n");
                continue;
            }
            if (j==6)
            {
                printf("six\n");
                continue;
            }
            if (j==7)
            {
                printf("seven\n");
                continue;
            }
            if (j==8)
            {
                printf("eight\n");
                continue;
            }
            if (j==9)
            {
                printf("nine\n");
                continue;
            }
            if (j==10)
            {
                break;
            }
            
        }
        
    }
    
    if (a<11 && b>9)
    {
        for ( i = 10; i <= b; i++)
        {
            if (i%2==0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
            
        }
    }
    
    return 0;
}
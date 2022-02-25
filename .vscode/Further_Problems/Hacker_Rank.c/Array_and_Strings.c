#include<stdio.h>
 
int main()
{
    char s[1000];
    int i, j;
    j=10;
    int sum[j], sum_10;
    
    for ( j = 0; j < 10; j++)
    {
        sum[j]=0;
    }
    
    scanf("%d", &s);
    
    for ( i = 0; i < 1000; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (s[i]==j)
            {
                sum[j]+=1;
            }
            else{sum_10+=1;}
        }
    }

    for ( j = 0; j < 10; j++)
    {
        printf("%d ", sum[j]);
    }
    
    return 0;
}
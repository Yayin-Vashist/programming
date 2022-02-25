#include<stdio.h>
 
int main(){
    int b1, di, num, total_cost=0, i;
    
    scanf("%d %d %d", &b1, &di, &num);

    for (i = 1; i <= num; i++)
    {
        total_cost+=(i*b1);
    }
    if (total_cost-di>0)
    {
        printf("%d", total_cost-di);
    }
    else
    {
        printf("0");
    }
    
    
    return 0;
}
#include<stdio.h>
 
int main(){
    int a, b, total_sum=0, i;
    printf("Give 2 integral bounds to find the sum of all numbers between them except for those divisible by 17:\n");
    scanf("%d\n%d", &a, &b);

    i=a+1;
    while (i<b)
    {if (i%17!=0)
    {
        total_sum+=i;
    }i++;
    }
    printf("sum = %d", total_sum);
    return 0;
}
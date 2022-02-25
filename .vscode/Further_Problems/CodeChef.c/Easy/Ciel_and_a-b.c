#include<stdio.h>
#include<stdlib.h> 
int main(){
    int num1, num2, diff, remainder;
    
    scanf("%d %d", &num1,&num2);

    diff=abs(num1-num2);
    remainder=diff%10;
    if (remainder>=0 && remainder<9)
    {
        printf("%d", (diff+1));
    }
    else
    {
        printf("%d", (diff-1));
    }
    return 0;
}
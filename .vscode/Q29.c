#include<stdio.h>
 
int main(){
    int i;
    int number[5];
    int odd_sum=0;
    
    printf("The first integer is:\n");
    scanf("%d", &number[0]);

    printf("The second integer is:\n");
    scanf("%d", &number[1]);

    printf("The third integer is:\n");
    scanf("%d", &number[2]);

    printf("The fourth integer is:\n");
    scanf("%d", &number[3]);

    printf("The fifth integer is:\n");
    scanf("%d", &number[4]);

    for ( i = 0; i < 5; i++)
    {
        if (number[i]%2==1)
        {
            odd_sum+=number[i];
        }
        
                
    }
    printf("The sum of odd number are %d\n", odd_sum);

     return 0;
}
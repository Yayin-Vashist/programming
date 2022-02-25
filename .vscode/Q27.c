#include<stdio.h>
 
int main(){
    int i;
    int number[5];
    int total_neg=0, total_pos=0;
    
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
        if (number[i]<0)
        {
            total_neg+= 1;
        }
        else
        {
            total_pos+=1;
        }
        
    }
    printf("The number of positive number are %d\n", total_pos);
    printf("The number of negative number are %d\n", total_neg);

     return 0;
}
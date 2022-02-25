#include<stdio.h>
 
int main(){
         int i;
    int number[5];
    int biggest;
    
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

    if (number[0]>number[1])
    {
        biggest=number[0];
    }
    else
    {
        biggest=number[1];
    }
    if(biggest>number[2]){}
    else
    {
        biggest=number[2];
    }
    if (biggest<number[3])
    {
        biggest=number[3];
    }
    if (biggest<number[4])
    {
        biggest=number[4];
    }
    printf("The biggest integer is %d\n", biggest);
    biggest= number[i];
    printf("It's position is %d", i+1);
    return 0;
}
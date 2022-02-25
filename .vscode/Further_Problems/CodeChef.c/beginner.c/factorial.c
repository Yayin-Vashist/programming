#include<stdio.h>
 
unsigned long long int factorial(int number);

int main(){
    int t, num;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &num);

        printf("%d\n", factorial(num));
    }
    
    
    return 0;
}

unsigned long long int factorial(int number)
{

    if (number==1||number==0)
    {
        return 1;
    }
    else
    {
        return (number*(factorial(number-1)));
    }
    
}
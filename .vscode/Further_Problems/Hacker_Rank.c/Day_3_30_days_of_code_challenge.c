// Given an integer, n, perform the following conditional actions:

// If n is odd, print Weird
// If n is even and in the inclusive range of 2 to 5, print Not Weird
// If n is even and in the inclusive range of 6 to 20, print Weird
// If n is even and greater than 20, print Not Weird

#include<stdio.h>
 
int main(){
    int num;

    printf("give a number:\n");
    scanf("%d", &num);

    if (num%2==1)
    {
        printf("Weird");
    }
    else if (1<num && num<6)
    {
        printf("Not Weird");
    }
    else if(5<num && num<21)
    {
        printf("Weird");
    }
    else if (num>20)
    {
        printf("Not Weird");
    }
    
    
    return 0;
}
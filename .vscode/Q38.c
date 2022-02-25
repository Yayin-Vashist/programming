#include<stdio.h>
 
int main(){
    float a, b;
    printf("Give 2 numbers such that the 1st number is divided by the 2nd number:\n");
    scanf("%f \n%f", &a, &b);

    if (b!=0)
    {
        printf("1st number divided by the 2nd gives %f", a/b);
    }
    else
    {
        printf("Division not possible!!!");
    }
    
    return 0;
}
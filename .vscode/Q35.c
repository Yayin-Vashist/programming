#include<stdio.h>
 
int main(){
    int a, b;
    
    printf("The 1st number is:\n");
    scanf("%d", &a);

    printf("The 2nd number is\n");
    scanf("%d", &b); 
    
    if (a>b)
    {
        printf("IT'S DESCENDING ORDER!!!");
    }
    else
    {
        printf("IT'S ASCENDING ORDER!!!");
    }
    
    return 0;
}
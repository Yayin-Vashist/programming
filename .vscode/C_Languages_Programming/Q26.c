#include<stdio.h>
 
int main(){
     int a, b;
     printf("All even numbers beween:\n\n");
     scanf("%d\t%d", &a, &b);
     for ( a; b>=a; a++)
     {
        if(a%2==0){
            printf("%d\n",a);
        }
     }
     
     
     return 0;
}
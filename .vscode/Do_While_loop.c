#include<stdio.h>
 
int main(){
    int i;int a=1;
     printf("You want series of natural numbers till:\n");
     scanf("%d\n",&i);
     do{
         printf("The order of natural number is %d\n",a);
         a++;
     }while(a<=i);
     return 0;
}
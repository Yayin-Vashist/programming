#include<stdio.h>
 
int main(){
    int a, b;
     printf("Give 2 integers to check whether one of them is a multiple of the other\n");
     scanf("%d\n%d", &a, &b);
     if(a%b==0){
         printf("Yes, a is a multiple of b");
     }
     else if(b%a==0){
         printf("Yes, b is a multiple of a");
     }
     else printf("No, They are not multiple of one another");
     return 0;
}
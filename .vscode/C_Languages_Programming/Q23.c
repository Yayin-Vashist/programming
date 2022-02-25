#include<stdio.h>
 
int main(){
    int a, b, c;
     printf("The three sides of the triangle are\n");
     scanf("%d\n", &a);
     scanf("%d\n", &b);
     scanf("%d", &c);
     if(a+b>c && b+c>a && a+c>b){
         int perimeter;
         perimeter=a+b+c;
         printf("Yes the triangle is possible\n It's perimeter is %d", perimeter);
     }
     else
     printf("No, the triangle is not possible");
     return 0;
}
#include<stdio.h>
 
int main(){
     int  i, number[i], total=0; 

    printf("The first integer is\n");
    scanf("%d", &number[0]);
     
    printf("The second integer is\n");
    scanf("%d", &number[1]);
     
    printf("The third integer is\n");
    scanf("%d", &number[2]);
     
    printf("The fourth integer is\n")  ;
    scanf("%d", &number[3]);
     
    printf("The fifth integer is\n");
    scanf("%d", &number[5]);

    for (i = 0; i < 5; i++)
    {
      if ((number[i]%2)==1)
      {
           total += number[i];
      }
    }
    printf("Sum of all odd values is: %d\n", total);
    return 0;
}
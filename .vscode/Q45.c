#include<stdio.h>
 
int main(){
    float S=0, i;
    for ( i = 1; i<51; i++)
    {
        S+=1.0/i;
    }
      printf("Value of S is %f", S); 
    return 0;
}
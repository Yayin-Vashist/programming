#include<stdio.h>
#include<math.h>
 
int main(){
    float S=0, n;
    for ( n = 0; n < 4; n++)
    {
        S+=(float)(2*n+1)/pow(2,n);
    }
    printf("Value of S is %f", S);
     
    return 0;
}
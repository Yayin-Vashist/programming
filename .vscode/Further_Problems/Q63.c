#include<stdio.h>
#include<math.h>

int main(){
    int i=1,j=1,sum=0,n,dummy;

    printf("Give the number\n");
    scanf("%d", &n);

    for ( i = 1; j <= n; i++)
    {
        sum+=(j*j*j*j);
        j+=i;
    }
    
    printf("%d", sum);
    
    
    return 0;
}
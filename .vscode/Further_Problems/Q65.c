#include<stdio.h>
#include<math.h>
int main(){
    int i, j, k, count=0;
    
    for ( i = 2; i < 201; i++)
    {
        for (j = 2; j <= pow(i,0.5); j++)
        {
            if (i%j==0)
            {
                k=i;
                break;
            }
            
        }
        if (i!=k)
        {
            printf("%d\n", i);
            count+=1;
        }
        
    }
    printf("\nThe number of prime numbers between 1 and 200 are %d", count);

    return 0;
}
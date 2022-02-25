#include<stdio.h>
 
int main(){
    unsigned long long int n, kth_place;

    scanf("%llu %llu", &n, &kth_place);
    
    if ((kth_place<=((n/2)+1)&&n%2==1)||(kth_place<=(n/2)&&n%2==0))
    {
        printf("%llu", (2*kth_place-1));
    }
    else
    {
        if (n%2==0)
        {
            kth_place=(kth_place-(n/2));
            printf("%llu", 2*kth_place);
        }
        else
        {
            kth_place=(kth_place-(n/2));
            printf("%llu", 2*(kth_place-1));
        }
        
    }
    
    return 0;
}
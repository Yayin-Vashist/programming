#include<stdio.h>
#include<math.h>

int main(){
   int t;

    scanf("%d", &t);
   
   while(t--)
   {
       int num, number_of_zeroes_in_factorial, a=5;
        scanf("%d", &num);
        number_of_zeroes_in_factorial=0;
        while ((num/a)>0)
        {
            number_of_zeroes_in_factorial+=(num/a);
            a=(a*5);
        }
        printf("%d\n", number_of_zeroes_in_factorial);
    }    
    return 0;
}
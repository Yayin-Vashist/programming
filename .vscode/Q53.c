#include<stdio.h>
 
int main(){
    int principle, rate_of_interest,time,simple_interest;

    printf("Give the principle amount\n");
    scanf("%d", &principle);

    printf("Give the rate of interest\n");
    scanf("%d", &rate_of_interest);

    printf("Give the duration of interest applied(in years)\n");
    scanf("%d", &time);

    simple_interest=principle*rate_of_interest*time/100;

    printf("\nSimple interest accumulated is %d", simple_interest);

    return 0;
}
#include<stdio.h>
// WHAT THE HELL'S THE ISSUE?
#include<math.h>
int main(){
    int num, p[3], digit_sum=0, i=0;

    printf("Give a integer whose digit's sum you want to be calculated\n");
    scanf("%d", &num);

    p[0]=(num%10);
    digit_sum+=p[0];
    printf("\n%d", p[0]);

    for ( i = 1; i < 3; i++)
    {
        int a, b;
        a = pow(10,i+1);
        b = pow(10,i);
        p[i]=(((num%(a))-(num%(b)))/(b));
    
        digit_sum+=p[i];
        printf("\n%d", p[i]);
    }
    
    printf("\n\n%d", digit_sum);
    
    return 0;
}
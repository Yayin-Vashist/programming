#include<stdio.h>
#include<math.h>

int main(){
    int num, n, i, j, a, reverse_num;

    printf("The given number is:\n");
    scanf("%d", &num);

    printf("The number of digits the number has is:\n");
    scanf("%d", &n);

    int x[n];

    for ( i = 0; i < n; i++)
    {
        a=pow(10,i+1);
        x[i]=((num%a)/(pow(10,i)));
        num=(num - x[i]);
    }
    
    // printf("\nnum=%d\n", num);
    // printf("\nx[0]=%d\n", x[0]);
    // printf("\nx[1]=%d\n", x[1]);
    // printf("\nx[2]=%d\n", x[2]);
    // printf("\nx[3]=%d\n", x[3]);
    
    for ( j = 0; j < n; j++)
    {
        a = pow(10, j);
        reverse_num+=((x[j])*a);
    }
    printf("\nThe reverse number is %d", reverse_num);
     
    return 0;
}
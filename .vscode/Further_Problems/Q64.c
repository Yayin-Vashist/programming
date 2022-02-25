#include<stdio.h>
 
int main(){
    int i, num=1, pos_num, num_max, num_min;
    float num_avg, sum_num;
    sum_num=0, pos_num=0, num_max=0, num_min=10000000;

    while (num>0)
    {
        i=1;
        printf("Give the number\n");
        scanf("%d", &num);
        pos_num+=i;
        sum_num+=num;

        printf("\nSum of all num is %d", sum_num);
        
        if (num_max<num)
        {
            num_max=num;
        }
        
        if ((num_min>num) && (num>0))
        {
            num_min=num;
        }
        
        i++;
    }
    pos_num-=1;

    printf("\nThe loop is broken\n");

    num_avg=(sum_num/pos_num);
  
    printf("\nThe number of all numbers is %d", pos_num);
    printf("\nThe average of all numbers is %d", num_avg);
    printf("\nThe maximum of all numbers is %d", num_max);
    printf("\nThe minimum of all numbers is %d", num_min);
    

    return 0;
}
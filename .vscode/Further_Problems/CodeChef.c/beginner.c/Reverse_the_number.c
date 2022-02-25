#include<stdio.h>
 
int main(){
    int i, t, num, reverse_num;

    scanf("%d", &t);

    for ( i = 0; i < t; i++)
    {
        scanf("%d", &num);
        reverse_num=0;
        
        while (num>0)
        {
            reverse_num=reverse_num*10+num%10;
            num=num/10;
        }
        printf("%d\n", reverse_num);
    }
    
    return 0;
}
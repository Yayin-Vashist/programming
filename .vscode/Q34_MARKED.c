#include<stdio.h>
 
int main(){
    int i, a, bigger, smaller;
    int range[2];
    printf("Give range for finding the odd integers\n");
    for ( i = 0; i < 2; i++)
    {
        scanf("%d", range[i]);
    }
    if (range[0]>range[1])
    {
        bigger=range[0];
        smaller=range[1];
    }
    else
    {
        bigger=range[1];
        smaller=range[0];
    }
     for ( a = smaller; a <bigger ; a++)
    {
        if(a%2==1){printf("%d\n", a);}
    }
    
}
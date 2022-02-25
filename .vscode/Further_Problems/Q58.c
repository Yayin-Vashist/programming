#include<stdio.h>
 
int main(){
    float num[4], biggest, least;
    int i;

    printf("Give 4 numbers\n");
    for ( i = 0; i < 4; i++)
    {
        scanf("%f", &num[i]);
    }

    biggest=num[0];
    least=num[0];
    
    for ( i = 0; i < 4; i++)
    {
        if (biggest<num[i])
        {
            biggest=num[i];
        }
        if (least>num[i])
        {
            least=num[i];
        }
    }

    printf("\nThe difference between biggest and least is %f", biggest-least);
    
    return 0;
}
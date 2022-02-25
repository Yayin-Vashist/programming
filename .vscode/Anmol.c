#include<stdio.h>
 
int main(){
    int numbers, multiples;
    printf("Give maximum number and maximum multiples\n");
    scanf("%d %d",&numbers, &multiples);

    for (int i = 1; i <= numbers; i++)
    {
        for (int j = 1; j <= multiples; j++)
        {
            printf("%2d ", (i*j));
        }
        printf("\n");
    }
    
    return 0;
}
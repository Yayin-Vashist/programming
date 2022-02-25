#include<stdio.h>
 
int main(){
    int i, j, n, majorityDefiner=0;
    
    printf("Give the size of the array\n");
    scanf("%d", &n);

    char array[n], majorCharacter='?';

    printf("Give the values in the array\n");

    scanf("%s", array);

    for ( i = 0; i < n; i++)
    {
        char constant=array[i];

        for ( j = 0; j < n; j++)
        {
            if (constant==array[j])
            {
                majorityDefiner++;
            }
            if (majorityDefiner>(n/2))
            {
                majorCharacter=array[j];
            }
            
        }
        majorityDefiner=0;

    }
    if (majorCharacter!='?')
    {
        printf("\n The major element is %c", majorCharacter);
    }
    else
    {
        printf("\n No Majority Element");
    }
       
    return 0;
}
#include<stdio.h>
 
int main(){
    char zoo[100];
    int i;
    float num_o, num_z;
    scanf("%s", &zoo);

    for ( i = 0; i < 100; i++)
    {
        if (zoo[i]=='z')
        {
            num_z+=1;
        }
        else if(zoo[i]=='o')
        {
            num_o+=1;
        }
    
    }
    
    if ((num_o/num_z)==2.0)
    {
        printf("The word is similar to zoo");
    }
    else
    {
        printf("The word is not similar to zoo");
    }
    
    return 0;
}
#include<stdio.h>
//  Redo again later by yourself
int main(){
    int num[6], i, least, pos;

    printf("Give the values:\n");
    for ( i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        if(num[i]<num[i-1])
        {
            least=num[i];
            pos=i+1;
        }
        else
        {
            least=num[i-1];
            pos=i;
        }
    }
    printf("The_number=%d\nposition=%d",least, pos);
     
    return 0;
}
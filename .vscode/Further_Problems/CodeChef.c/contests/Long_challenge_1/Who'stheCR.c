#include<stdio.h>
 
int main(){
    char a[100000], b[3]='BCC';

    scanf("%s", &a);

    int i;
    for ( i = 0; i < 100000; i++)
    {   char z;
        if (a[i]='A')
        {
            z=b[0];
            b[0]=b[1];
            b[1]=z;
        }
        if (a[i]='B')
        {
            z=b[1];
            b[1]=b[2];
            b[2]=z;
        }
        if (a[i]='C')
        {
            z=b[0];
            b[0]=b[2];
            b[2]=z;
        }
        
    }
    int j;
    for ( j = 0; j < 3; j++)
    {
        if (b[j]=='B')
        {
            printf("%d", (j+1));
        }
        
    }
    
    return 0;
}
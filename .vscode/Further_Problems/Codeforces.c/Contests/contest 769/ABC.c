#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char string[n];
        gets(string);
        if (n>2||(string[0]==string[1]))
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
    }
    
    return 0;
}
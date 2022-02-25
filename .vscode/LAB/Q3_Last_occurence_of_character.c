#include<stdio.h>
 
int main(){
    printf("Give a string: ");
    char s[100], c;
    gets(s);
    printf("Give a character: ");
    scanf("%c", &c);
    int num;

    for (int i = 0; i < 100; i++)
    {
        if (s[i]==c)
        {
            num=(i+1);
        }
        
    }
    printf("%d", num);
    return 0;
}
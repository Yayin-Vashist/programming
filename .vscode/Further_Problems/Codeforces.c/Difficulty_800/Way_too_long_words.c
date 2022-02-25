#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    t++;
    while (t--)
    {
        char word[100];
        gets(word);
        for (int i = 0; word[i]!='\0'; i++)
        {
            if ((word[i+1]=='\0')&&(i>9))
            {
                printf("%c%d%c\n", word[0], (i-1),word[i]);
            }
            else if ((word[i+1]=='\0')&&(i<=9))
            {
                puts(word);
            }
            
        }
    }
    return 0;
}
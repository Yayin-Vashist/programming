#include<stdio.h>
 
int main(){
    char s[100];

    scanf("%s", &s);

    int decision=0;

    for (int i = 0; i < 96; i++)
    {
        if ((s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3] && s[i]==s[i+4] && s[i]==s[i+5] && s[i]==s[i+6] && s[i]==1)
          ||(s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3] && s[i]==s[i+4] && s[i]==s[i+5] && s[i]==s[i+6] && s[i]==0))
        {
            printf("YES");
            decision=1;
            break;
        }
    }
    if (decision==0)
    {
        printf("NO");
    }
    return 0;
}
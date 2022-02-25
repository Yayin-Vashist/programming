#include<stdio.h>
 
int main(){
    char given_word[100000];
    int i;
    scanf("%s", &given_word);

    for ( i = 0; i < 100000; i++)
    {
        if (given_word[i]=='A')
       {
            given_word[i]=given_word[i+1];
        }
    }
    for ( i = 0; i <100000; i++)
    {
        if (given_word[i]=='B')
       {
            given_word[i]=given_word[i+1];
        }
    }
    for ( i = 0; i <100000; i++)
    {
        if (given_word[i]=='C')
       {
            given_word[i]=given_word[i+1];
        }
    }
    for ( i = 0; i <100000; i++)
    {
        if (given_word[i]=='D')
       {
            given_word[i]=given_word[i+1];
        }
    }
    for ( i = 0; i <100000; i++)
    {
         if (given_word[i]=='E')
       {
            given_word[i]=given_word[i+1];
        }
    }
    for ( i = 0; i <100000; i++)
    {
        if (given_word[i]=='G')
       {
            given_word[i]=given_word[i+1];
        }
    }
    for ( i = 0; i <100000; i++)
    {
        if (given_word[i]=='I')
       {
            given_word[i]=given_word[i+1];
        }
    }
    for ( i = 0; i <100000; i++)
    {
        if (given_word[i]=='M')
       {
            given_word[i]=given_word[i+1];
        }
    }
    for ( i = 0; i < 100000; i++)
    {
        if (given_word[i]=='R')
       {
            given_word[i]=given_word[i+1];
        }
    }
    
    
    printf("%s\n", given_word);
    
    return 0;
}
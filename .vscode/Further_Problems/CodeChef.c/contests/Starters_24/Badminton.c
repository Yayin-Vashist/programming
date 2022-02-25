#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int score;
        scanf("%d", &score);
        if (score%2==0)
        {
            printf("%d", ((score/2)+1));
        }
        else
        {
            printf("%d", ((score+1)/2));
        }
        
    }
    
    return 0;
}
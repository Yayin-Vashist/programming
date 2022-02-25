#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int vote_got1, vote_got2, vote_got3, total_vote1, total_vote2, total_vote3, total_vote;
        scanf("%d %d %d %d %d %d", &vote_got1, &vote_got2, &vote_got3, &total_vote1, &total_vote2, &total_vote3);

        total_vote=total_vote1+total_vote2+total_vote3;

        if ((vote_got1+vote_got2+total_vote3)>(total_vote/2))
        {
            printf("YES\n");
        }
        else if ((total_vote1+vote_got2+vote_got3)>(total_vote/2))
        {
            printf("YES\n");
        }
        else if ((vote_got1+total_vote2+vote_got3)>(total_vote/2))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
#include<stdio.h>
 
int main(){
    int total_people, police_advantage;

    printf("Give the total number of police officers and thief along with the police advantage: ");
    scanf("%d %d", &total_people, &police_advantage);

    char players[total_people];
    int Y_team=0, R_team=0;
    printf("Radhey's team (R) or Yayin's team (Y), give %d Y's and R's\n",total_people);
    for (int i = 0; i < total_people; i++)
    {
        scanf(" %c%*c", &players[i]);
        if ((players[i]=='Y')||(players[i]=='y'))
        {
            Y_team++;
            // printf("HI");
        }
        else
        {
            R_team++;
            // printf("BYE");
        }
        // printf("%d %d\n", Y_team, R_team);
        
    }
    int count=0;
    for (int k=police_advantage; k!=0; k--)
    {
        for (int i = 0; i < (total_people-k); i++)
        {
            if ((players[i]!=players[i+k])&&(((players[i]=='Y')||(players[i]=='y'))&&((players[i+k]=='R')||(players[i+k]=='r'))))
            {
                players[i]='0';
                players[i+k]='0';
                count++;
                printf("%d %d %d\n", k, (i+1), (i+k+1));
            }
            else if ((players[i+k]!=players[i])&&(((players[i+k]=='Y')||(players[i+k]=='y'))&&((players[i]=='R')||(players[i]=='r'))))
            {
                players[i+k]='0';
                players[i]='0';
                count++;
                printf("%d %d %d\n", k, (i+1), (i-k+1));
            }
        }
    }
    if (count==R_team)
    {
        printf("Robbers's elimination Succeded, Police wins! All %d robbers caought", count);
    }
    else
    {
        printf("%d Robber's escaped, Robber's reinforcement approaching, Robbers win! %d robbers were caught", (R_team-count), count);
    }
    return 0;
}
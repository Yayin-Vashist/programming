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
        scanf(" %c", &players[i]);
        if ((players[i]='Y')||(players[i]='y'))
        {
            Y_team++;
            printf("HI\n");
        }
        else
        {
            R_team++;
            printf("BYE\n");
        }
        // printf("%d %d\n", Y_team, R_team);
        
    }
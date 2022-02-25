#include<stdio.h>
 
int main(){
    int t, population, days, infected_people, i, j, k;

    scanf("%d", &t);

    for ( i = 0; i < t; i++)
    {
        scanf("%d %d", &population, &days);
        infected_people=1;

        for ( j = 1; j <= days; j++)
        {
            infected_people=infected_people*2;
            if (j==10)
            {
                break;
            }
            
        }
        if (days>10)
        {
            for ( k = 11; k <= days; k++)
            {
                infected_people=infected_people*3;
            }
        }
        if (infected_people<=population)
        {
            printf("%d\n", infected_people);
        }
        else
        {
            printf("%d\n", population);
        }

        
    }
    
    return 0;
}
#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int total_people, infected_people;
        scanf("%d %d", &total_people, &infected_people);

        if (total_people==infected_people)
        {
            printf("%d\n",(2*(infected_people)-1));
        }
        else
        {
            printf("%d\n", ((infected_people*2)+(total_people-infected_people)));
        }
                
    }
    
    return 0;
}
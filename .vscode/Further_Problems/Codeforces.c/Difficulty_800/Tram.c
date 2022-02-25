#include<stdio.h>
 
int main(){
    int n, i;

    scanf("%d", &n);
    int ex[n], en[n], people_in_train=0, max_people=0;

    for ( i = 0; i < n; i++)
    {
        scanf("%d %d", &ex[i], &en[i]);

        people_in_train-=(ex[i]);
        if (people_in_train<0)
        {}
        else if (ex[0]==0)
        {
            people_in_train+=(en[i]);
            if (max_people<=people_in_train)
            {
                max_people=people_in_train;
            }
        }
    }
    if (people_in_train==0&&en[n-1]==0)
    {
        printf("%d", max_people);
    }
    return 0;
}
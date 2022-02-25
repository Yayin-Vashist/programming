#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int num;
        scanf("%d", &num);

        int skill[num];

        for (int i = 0; i < num; i++)
        {
            scanf("%d", &skill[i]);
        }
        int min_diff=abs(skill[1]-skill[0]);

        for (int i = 0; i < num; i++)
        {
            for (int j = (i+1); j < num; j++)
            {
                if (abs(skill[i]-skill[j])<min_diff)
                {
                    min_diff=(abs(skill[i]-skill[j]));
                }
                
            }
            
        }
        printf("%d\n", min_diff);
    }
    
    return 0;
}
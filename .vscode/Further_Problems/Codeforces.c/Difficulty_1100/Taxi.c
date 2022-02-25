#include<stdio.h>
 
int main(){
    int no_of_groups;
    int g1=0,g2=0,g3=0,g4=0,g1left=0,g2left=0;
    scanf("%d", &no_of_groups);
    int group[no_of_groups];
    for (int i = 0; i < no_of_groups; i++)
    {
        scanf("%d", &group[i]);
    }
    
    for (int i = 0; i < no_of_groups; i++)
    {
        if (group[i]==1)
        {
            g1++;
        }
        else if (group[i]==2)
        {
            g2++;
        }
        else if (group[i]==3)
        {
            g3++;
        }
        else if (group[i]==4)
        {
            g4++;
        }
    }
    if (g1>=g3)
    {
        g1-=g3;
        g4+=g3;
        g3=0;
    }
    else
    {
        g3-=g1;
        g4+=g1;
        g1=0;
    }
     g1left=g1%4;
    g4+=g1/4;
    g1=g1left;
    g2left=(g2%2);
    g4+=(g2/2);
    g2=g2left;
    if (g1<=(2*g2+g3))
    {
        g1=0;
    }
    else
    {
        g1=1;
    }
    // printf("\n%d %d %d %d\n", g1, g2, g3, g4);
    printf("%d", (g1+g2+g3+g4));
    return 0;
}
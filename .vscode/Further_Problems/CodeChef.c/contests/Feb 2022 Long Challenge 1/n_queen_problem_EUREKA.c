#include<stdio.h>
#include<math.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int no_of_queen;
        scanf("%d", &no_of_queen);
        float ans=pow(((0.143)*no_of_queen),no_of_queen);
        int Ans=ans;
        if (ans-Ans<(0.5))
        {
            printf("%d\n",Ans);
        }
        else
        {
            printf("%d\n",(Ans+1));
        }
    }
    return 0;
}
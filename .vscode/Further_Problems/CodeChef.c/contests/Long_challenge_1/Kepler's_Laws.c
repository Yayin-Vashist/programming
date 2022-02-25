#include<stdio.h>
#include<math.h>

int main(){
    int t, i;
    int t1, t2, r1, r2;

    scanf("%d", &t);

    for ( i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &t1, &t2, &r1, &r2);

        if(((pow(r1,3))*(pow(t2,2)))==((pow(r2,3))*(pow(t1,2))))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
        
    }
    
    return 0;
}
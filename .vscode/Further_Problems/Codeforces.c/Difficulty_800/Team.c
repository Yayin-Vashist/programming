#include<stdio.h>
 
int main(){
    int t, p1, p2, p3, count=0;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &p1, &p2, &p3);

        if ((p1==1&&p2==1)||(p2==1&&p3==1)||(p1==1&&p3==1))
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}
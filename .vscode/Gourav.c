#include<stdio.h>
void main(){
    int t;
    scanf("%d", &t);

    while(t--){
    int i,j,k,y,z;
    scanf("%d",&z);
    scanf("%d %d",&y,&k);
    if (z>=y)
    {
        printf("PIZZA\n");
    }
    else if (y>=z&&z>=k)
    {
        printf("BURGER\n");
    }
    else if(y>z&&k>z)
    {
        printf("NOTHING\n");
    }
}
return 0;
}
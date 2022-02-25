#include<stdio.h>
 
int main(){
    int bw, lw, years=0;

    scanf("%d %d", &lw,  &bw);

    while (lw<=bw)
    {
        lw=lw*3;
        bw=bw*2;
        years++;
    }
    printf("%d", years);
    
    return 0;
}
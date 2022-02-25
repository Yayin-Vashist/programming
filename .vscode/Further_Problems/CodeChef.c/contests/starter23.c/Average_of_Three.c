#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int fav_num;
        scanf("%d", &fav_num);
        printf("%d %d %d\n", (fav_num-1), fav_num, (fav_num+1));
    }
    
    return 0;
}
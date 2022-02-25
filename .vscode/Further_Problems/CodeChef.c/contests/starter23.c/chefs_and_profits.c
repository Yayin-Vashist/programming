#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int stocks, costPrice, sellingPrice;

        scanf("%d %d %d", &stocks, &costPrice, &sellingPrice);

        printf("%d\n", (stocks*(sellingPrice-costPrice)));
    }

    return 0;
}
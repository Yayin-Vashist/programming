// Find the price of meal to nearest integer if price of meal, percentage of tip, and percentage of tax is given

#include<stdio.h>
 
int main(){
    float meal_price, tip, tax, test;
    int total_price;

    scanf("%f\n%f\n%f", &meal_price, &tip, &tax);

    total_price=(meal_price+(((tip+tax)/100)*meal_price));
    test=(meal_price+(((tip+tax)/100)*meal_price));

    if (test-total_price<0.5)
    {
        printf("%d", total_price);
    }
    else
    {
        printf("%d", total_price+1);
    }
    
    

    return 0;
}
#include<stdio.h>
 
int main(){
    double centimetres, inches;

    printf("The value in centimetres is:\n"); 
    scanf("%lf", &centimetres);
    
    inches=centimetres*0.39370079;
    printf("\nThe value in inches is %lf", inches);
    
    return 0;
}
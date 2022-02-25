#include<stdio.h>
 
int main(){
    int a;
    printf("Give the number for the month:\n");
    scanf("%d", &a);
    if (a==1){
    printf("The month is January");
    }
    else if (a==2){
    printf("The month is Feburary");
    }
    else if (a==3){
    printf("The month is March");
    }
    else if (a==4){
    printf("The month is April");
    }
    else if (a==5){
    printf("The month is May");
    }
    else if (a==6){
    printf("The month is June");
    }
    else if (a==7){
    printf("The month is July");
    }
    else if (a==8){
    printf("The month is August");
    }
    else if (a==9){
    printf("The month is September");
    }
    else if (a==10){
    printf("The month is October");
    }
    else if (a==11){
    printf("The month is November");
    }
    else if (a==12){
    printf("The month is December");
    }
    else{
        printf("Invalid Integer");
    }
    
    return 0;
}
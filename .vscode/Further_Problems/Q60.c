#include<stdio.h>
 
int main(){
    int num;
    
    printf("Give a number(0-6) to get a day of the week with your number\n");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("\nSunday = 0");
        break;
    case 1:
        printf("\nmonday = 1");
        break;
    case 2:
        printf("\nTuesday = 2");
        break;
    case 3:
        printf("\nwednesday = 3");
        break;
    case 4:
        printf("\nThursday = 4");
        break;
    case 5:
        printf("\nFriday = 5");
        break;
    case 6:
        printf("\nSaturday = 6");
        break;
    default:
        printf("\nINVALID NUMBER!!!");
        break;
    }
    return 0;
}
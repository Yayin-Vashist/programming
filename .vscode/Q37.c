#include<stdio.h>
 
int main(){
    int x, y;
    
    printf("The x-coordinate is\n");
    scanf("%d", &x);
    
    printf("The y-coordinate is\n");
    scanf("%d", &y);

    if (x>0 && y>0)
    {
        printf("The point (%d,%d) lies in the first quadrant", x,y);
    }
    else if (x<0 && y>0)
    {
        printf("The point (%d,%d) lies in the second quadrant", x,y);   
    }
    else if (x<0 && y<0)
    {
        printf("The point (%d,%d) lies in the third quadrant", x,y);   
    }
    else if (x>0 && y<0)
    {
        printf("The point (%d,%d) lies in the fourth quadrant", x,y);   
    }
    else if (x==0 && y==0)
    {
        printf("The point (0,0) is the origin, and lies in first quadrant", x,y);   
    }
    return 0;
}
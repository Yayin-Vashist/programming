#include<stdio.h>
 
int main(){
    int rows, columns;

    scanf("%d %d", &rows, &columns);

    if (rows%2==0||columns%2==0)
    {
        printf("%d", ((rows*columns)/2));
    }
    else
    {
        printf("%d", ((rows*columns-1)/2));
    }
    return 0;
}
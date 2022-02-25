#include<stdio.h>
 
int main(){
    int n;
    printf("Enter the number of character in a string: \n");
    scanf("%d", &n);
    char string[n];
    printf("Enter the string: ");
    char *ptr=&string[n-1];
    gets(string);
    for (int i = n; i > 0; i--)
    {
        printf("%c", *ptr);
        ptr--;
    }
    return 0;
}
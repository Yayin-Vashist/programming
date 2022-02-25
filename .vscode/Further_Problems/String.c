#include<stdio.h>
 
int main(){
    char string[105];

    printf("Give the string\n");
    scanf("%[^\n]s", &string);

    printf("The string is\n");
    printf("%s", string);    

    return 0;
}
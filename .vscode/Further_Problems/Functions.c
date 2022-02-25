#include<stdio.h>
int sum(int a, int b);

int main()
{
    int a, b;

    printf("Give 2 integers\n");
    scanf("%d\n%d", &a, &b);

    printf("The sum of integers is %d\n", sum(a,b));
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
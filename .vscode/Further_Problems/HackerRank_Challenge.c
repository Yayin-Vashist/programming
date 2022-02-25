#include<stdio.h>
int main(){
    int a, b;
    double m, n;
    char x[105];
    
    scanf("%d\n%d", &a, &b);
    scanf("%lf\n%lf", &m, &n);
    gets(x);
    

    printf("%d\n", a+b);
    printf("%lf\n", m+n);
    printf("%s", x);
   

    return 0;
}
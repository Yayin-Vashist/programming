#include<stdio.h>
 
int main(){
    unsigned long long int n, m, a;

    scanf("%llu %llu %llu", &n, &m, &a);

    if (m%a==0 && n%a==0)
    {
        printf("%llu", ((m/a)*(n/a)));
    }
    if (m%a==0 && n%a!=0)
    {
        printf("%llu", ((m/a)*((n/a)+1)));
    }
    if (m%a!=0 && n%a==0)
    {
        printf("%llu", (((m/a)+1)*(n/a)));
    }
    if (m%a!=0 && n%a!=0)
    {
        printf("%llu", (((m/a)+1)*((n/a)+1)));
    }
    
    return 0;
}
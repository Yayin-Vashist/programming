#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double e;
    char t[105];
    
    scanf("%d", &j);
    scanf("%lf", &e);
    scanf("%*[\n] %[^\n]",t);
    
    printf("%d\n", i+j);
    printf("%lf\n", d+e);
    printf("%s%s", s, t);

    return 0;}
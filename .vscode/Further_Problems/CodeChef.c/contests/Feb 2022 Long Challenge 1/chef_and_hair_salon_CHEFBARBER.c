#include <stdio.h>

int main()
{
    int t, N, M;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &N, &M);
        printf("%d\n",(M*N));
    }
    return 0;
}
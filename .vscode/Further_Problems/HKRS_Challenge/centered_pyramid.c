#include <stdio.h>

int main()
{
    int tlength;
    printf("Enter a triangle length: "); scanf("%d", &tlength);
    for (int i = 0; i < tlength; i++)
    {
        for (int x = 0; x < tlength-i; x++) printf(" ");
        for (int x = 0; x < i+1; x++) printf("* ");
        printf("\n");
    }
    return 0;
}

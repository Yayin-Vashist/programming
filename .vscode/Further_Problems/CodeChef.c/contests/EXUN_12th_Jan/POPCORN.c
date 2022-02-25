#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t, a1, a2, a, b1, b2, b, c1, c2, c, max;
    
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a1, &a2);
        scanf("%d %d", &b1, &b2);
        scanf("%d %d", &c1, &c2);
        
        a=a1+a2;
        b=b1+b2;
        c=c1+c2;

        if (a>=b&&a>=c)
        {
            max=a;
        }
        else if (b>=a&&b>=c)
        {
            max=b;
        }
        else if (c>=a&&c>=b)
        {
            max=c;
        }
        printf("%d\n", max);
    }
    
    return 0;
}
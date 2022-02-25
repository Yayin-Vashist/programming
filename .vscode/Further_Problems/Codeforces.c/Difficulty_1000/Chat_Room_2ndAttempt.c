#include <stdio.h>
int main()
{
    // Radhey's code...
    int count=0;
    char a[256];
    scanf("%s",&a);
    for(int i=0;i<256;i++)
    {
        switch(count)
        {
            case 0: if(a[i]=='h') count++; break;
            case 1: if(a[i]=='e') count++; break;
            case 2: if(a[i]=='l') count++; break;
            case 3: if(a[i]=='l') count++; break;
            case 4: if(a[i]=='o') count++; break;
            default: break;
        }
    }
    if(count==5) printf("YES");
    else printf("NO");
    return 0;
}
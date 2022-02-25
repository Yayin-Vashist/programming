#include <stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    int a[n],b[n];
    if(n>0&&n<100001)
    {
    for(int i=0;i<n;i++)
    {
        b[i]=0;
        scanf("%d",&a[i]);
        if(a[i]>1000000000) return 0;
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i;j<n;j++)
        {
            if(j+1<=n&&a[j]<=a[j+1])
            {
                count++;
            }
            else break;
        }
        if(count>0)
        {
            b[i]=count+1;
            i=i+count;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(count<b[i])
        count=b[i];
    }
    printf("%d",count);
    }
    return 0;
}
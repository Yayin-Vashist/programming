#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr1[i]>arr2[i])
            {
                arr1[i]=arr1[i]+arr2[i];
                arr2[i]=arr1[i]-arr2[i];
                arr1[i]=arr1[i]-arr2[i];
            }
            
        }
        int max1=1, max2=1;
        for (int i = 0; i < n; i++)
        {
            
            if (arr1[i]>max1)
            {
                max1=arr1[i];
            }
            if (arr2[i]>max2)
            {
                max2=arr2[i];
            }
            
        }
        printf("%d\n",(max1*max2));
        
    }
    
    return 0;
}
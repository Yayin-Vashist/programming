#include<stdio.h>
 
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int no_of_element, increase1, increase2;
        scanf("%d %d %d", &no_of_element, &increase1, &increase2);
        int arr1[no_of_element], arr2[no_of_element];
        int true=0;
        for (int i = 0; i < no_of_element; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < no_of_element; i++)
        {
            scanf("%d", &arr2[i]);
            if ((arr2[i]-arr1[i]!=increase1)&&(arr2[i]-arr1[i]!=increase2))
            {
                true=1;
                
            }
            
        }
        if (true==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    return 0;
}
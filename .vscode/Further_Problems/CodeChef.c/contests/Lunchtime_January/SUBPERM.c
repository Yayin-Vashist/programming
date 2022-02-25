#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int no_of_natural_no, no_of_good_subarray;
        scanf("%d %d", &no_of_natural_no, &no_of_good_subarray);

        int arr[no_of_natural_no];

        if (no_of_good_subarray==1)
        {
            if (no_of_natural_no==1)
            {
                printf("1\n");
            }
            else
            {
            printf("-1\n");
            }
        }
        else
        {
            if (no_of_good_subarray>no_of_natural_no)
            {
                printf("-1\n");
            }
            else
            {
                for (int i = 0; i < no_of_natural_no; i++)
                {
                    arr[i]=(i+1);
                }
                for (int i = 0; i < (no_of_natural_no-no_of_good_subarray); i++)
                {
                    arr[i+1]=arr[i+1]+arr[i+2];
                    arr[i+2]=arr[i+1]-arr[i+2];
                    arr[i+1]=arr[i+1]-arr[i+2];
                }
                for (int i = 0; i < no_of_natural_no; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            
        }
        
    }
    
    return 0;
}
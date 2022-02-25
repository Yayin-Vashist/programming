#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    int k=0;
    int arr_length, subarr_length, MEX_subarr;

    scanf("%d %d %d", &arr_length, &subarr_length, &MEX_subarr);
    int array[arr_length];
    if (MEX_subarr>subarr_length)
    {
        printf("-1");
    }
    else
    {
        for(int i=0; i<arr_length;i++)
        {
            if (i<MEX_subarr)
            {
                array[i]=i;
            }
            else
            { 
                if (k==MEX_subarr)
                {
                    k=0;
                }
            
                array[i]=k;
                k++;
            }
            
            printf("%d ", array[i]);
        }
    }

    printf("\n");
    }
    return 0;
}
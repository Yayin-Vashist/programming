#include<stdio.h>
 
int main(){
    int n;

    scanf("%d", &n);

    int arr[n], asc_arr[n];
    int constant, total_value_coins=0, k;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total_value_coins+=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        constant=101;

        for (int j = 0; j < n; j++)
        {
            if (arr[j]<constant)
            {
                constant=arr[j];
                k=j;
            }
        }
        asc_arr[i]=constant;
        arr[k]=101;
    }
    
    // ascended matrix
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",asc_arr[i]);
    // }
    
    int number_of_coins=0, value_of_coins=0;
    
    for (int i = (n-1); i >= 0; i--)
    {
        
        if (value_of_coins<=((total_value_coins)/2))
        {
            value_of_coins+=asc_arr[i];
            number_of_coins++;
        }
        
    }
    if(value_of_coins>((total_value_coins)/2))
        {
            printf("%d", number_of_coins);
        }
    
    return 0;
}
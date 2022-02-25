#include<stdio.h>
int Linear_Sorting(int size, int arr[size]);
 
int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    Linear_Sorting(n, array);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    
    return 0;
}

int Linear_Sorting(int size, int arr[size])
{
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < (size-1); i++)
        {
            if (arr[i]>arr[i+1])
            {
                arr[i]=arr[i]+arr[i+1];
                arr[i+1]=arr[i]-arr[i+1];
                arr[i]=arr[i]-arr[i+1];
            }
            
        }
    }
    return(size, arr[size]);
}

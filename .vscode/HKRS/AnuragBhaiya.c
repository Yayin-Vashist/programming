#include<stdio.h>
 
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        int count=0, true=0;
        for (int j = i; j < size; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        for (int j = 0; j<i; j++)
        {
            
            if (arr[i]==arr[j])
            {
                true=1;
            }
            
        }
        if (true==0)
        {
            printf("The %d occurs %d times\n", arr[i], count);
        }
        
    }
    
    

    return 0;
}
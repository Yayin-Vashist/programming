#include<stdio.h>
 
int main(){
    int arr_size, sub_arr_size;
    printf("Size of array: ");
    scanf("%d", &arr_size);
    int arr[arr_size];
    give:
    printf("Give a size for sub-array: ");
    scanf("%d", &sub_arr_size);
    if ((sub_arr_size>arr_size)||(sub_arr_size<1))
    {
        goto give;
    }
    printf("Give the elements for the array: ");
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum=0, max=0;
    for (int i = 0; i < arr_size; i++)
    {
        sum+=arr[i];
        if (i>=sub_arr_size)
        {
            sum-=arr[i-sub_arr_size];
        }
        if (sum>max)
        {
            max=sum;
        }
    }
    printf("%d", max);
    return 0;
}
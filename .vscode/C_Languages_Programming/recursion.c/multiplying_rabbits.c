#include<stdio.h>
unsigned long long int multiply(unsigned long long int arr[], unsigned long long int size);

int main(){
    unsigned long long int array[]={1,2,3,4,5,6,7,8};

    multiply(array, 8);
    multiply(array, 7);
    multiply(array, 6);
    multiply(array, 5);
    multiply(array, 4);
    multiply(array, 3);
    
    for (int i = 0; i < 8; i++)
    {
        printf("%llu ", array[i]);
    }
    
    
    return 0;
}

unsigned long long int multiply(unsigned long long int *arr, unsigned long long int size){
    
        for (int i = 0; i < (size-1); i++)
        {
            arr[i]=((arr[i])*(arr[i+1]));
        }
        arr[size-1]=0;
        return *arr;
    
}
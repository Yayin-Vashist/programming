#include<stdio.h>
 
int main(){
    int no_of_participants, min_qualifiers;
    scanf("%d %d", &no_of_participants, &min_qualifiers);

    int arr[no_of_participants];
    for (int i = 0; i < no_of_participants; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count=min_qualifiers;
    for (int i = min_qualifiers; i <no_of_participants; i++)
    {
        
        if (arr[i]==arr[i-1])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (arr[i]>0)
        {}
        else
        {
            count=i;
            break;
        }
    }
    
    printf("%d", count);
    return 0;
}
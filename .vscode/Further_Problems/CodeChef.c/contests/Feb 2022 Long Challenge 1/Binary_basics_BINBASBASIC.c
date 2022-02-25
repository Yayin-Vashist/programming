#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int size, num_of_changes;
        scanf("%d %d", &size, &num_of_changes);
        char arr[size];
        scanf("%s", arr);
        int count=0;
        for(int i = 0; i <((size-1)/2) ; i++)
        {
            if(arr[i]!=arr[size-1-i])
            {
                count++;
            }
            
        }
        if(count==num_of_changes)
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
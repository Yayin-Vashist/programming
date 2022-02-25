#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int num;
        scanf("%d", &num);
        int arr[num];
        int count_case_even_start=0, count_case_odd_start=0, all_even=0, odd_number;
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i]%2==0)
            {
                all_even++;
            }
            if (((i%2==0)&&(arr[i]%2==0))||((i%2==1)&&(arr[i]%2==1)))
            {
                count_case_even_start++;
            }
            else
            {
                count_case_odd_start++;
            }
            if (arr[i]%2==1)
            {
                odd_number=i+1;
            }
        }
        if ((all_even==num)&&(num>1))
        {
            printf("-1\n");
            continue;
        }
        else if (count_case_even_start>=count_case_odd_start)
        {
            printf("%d\n", (num-count_case_even_start));
            for (int i = 0; i < num; i++)
            {
                if (((i%2==0)&&(arr[i]%2==1))||((i%2==1)&&(arr[i]%2==0)))
                {
                    printf("%d %d\n", i+1, odd_number);
                }
            }
        }
        else
        {
            printf("%d\n", (num-count_case_odd_start));
            for (int i = 0; i < num; i++)
            {
                if (((i%2==1)&&(arr[i]%2==1))||((i%2==0)&&(arr[i]%2==0)))
                {
                    printf("%d %d\n", i+1, odd_number);
                }
            }
        }
    }
    return 0;
}
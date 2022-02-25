// Time complexity exceeded

// #include<stdio.h>
 
// int main(){
//     int no_days;
//     scanf("%d", &no_days);

//     int Money_earned[no_days];
//     for (int i = 0; i < no_days; i++)
//     {
//         scanf("%d", &Money_earned[i]);
//     }
//     int constant=0, max=0;
//     for (int i = 0; i < no_days; i++)
//     {
//         for (int j = i; j < no_days; j++)
//         {
//             if (Money_earned[j]>=Money_earned[i])
//             {
//                 if((j==i)||((j>i)&&(Money_earned[j]>=Money_earned[j-1])))
//                 {
//                     constant++;
                    
//                     // printf("%2d %2d %2d\n", (i+1), (j+1), constant);
//                     if (constant>=max)
//                     {
//                         max=constant;
//                     }
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//             else
//             {
//                 break;
//             }            
//         }
//         constant=0;
//     }
//     printf("%d", max);
//     return 0;
// }

#include<stdio.h>
 
int main(){
    
    return 0;
}
#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int num, ram;

        scanf("%d %d", &num, &ram);

        int ram_req[num], ram_inc[num];

        for (int i = 0; i < num; i++)
        {
            scanf("%d", &ram_req[i]);
        }
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &ram_inc[i]);
        }

        int shell=num;
        while (shell--)
        {
            int i;
            for ( i = 0; i < num; i++)
            {
            
                if (ram>=ram_req[i])
               {
                    ram+=ram_inc[i];
                    ram_inc[i]=0;
                }
                else{}
                
            }
        }
        
        printf("%d\n", ram);
         
    }
    
    return 0;
}
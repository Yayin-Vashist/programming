#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, t, x_k, y_k, x_1, y_1, x_2, y_2;

    scanf("%d", &t);
 
    for ( i = 0; i < t; i++)
    {
        scanf("%d %d\n%d %d\n%d %d", &x_k, &y_k, &x_1, &y_1, &x_2, &y_2);

        if ((y_k==1||y_k==8)&&(x_k>1&&x_k<8))
        {
            if (x_k==x_1||x_k==x_2||y_k==y_2||y_k==y_1)
            {
                printf("no\n");
            }
            else if (abs(x_k-x_1)==1||abs(x_k-x_2)==1)
            {
                printf("no\n");
            }
            else if (abs(y_k-y_1)>1&&abs(y_k-y_2)>1)
            {
                printf("no\n");
            }
            else if (x_1==x_2)
            {
                printf("no\n");
            }
            else if (x_1==x_2&&y_1==y_2||x_2==x_k&&y_2==y_k||x_k==x_1&&y_k==y_2)
            {
                printf("no\n");
            }
            else
            {
                printf("YES\n");
            }
            
        }
        else if ((x_k==1||x_k==8)&&(y_k>1&&y_k<8))
        {
            if (y_k==x_1||y_k==x_2||x_k==x_2||x_k==x_2)
            {
                printf("no\n");
            }
            else if (abs(y_k-y_1)==1||abs(y_k-y_2)==1)
            {
                printf("no\n");
            }
            else if (abs(x_k-x_1)>1&&abs(x_k-x_2)>1)
            {
                printf("no\n");
            }
            else if (y_1==y_2)
            {
                printf("no\n");
            }
            else if (x_1==x_2&&y_1==y_2||x_2==x_k&&y_2==y_k||x_k==x_1&&y_k==y_2)
            {
                printf("no\n");
            }
            else
            {
                printf("YES\n");
            }
            
        }
        else if(x_k==1&&y_k==1)
        {
            if (x_1==1||y_1==1||x_2==1||y_2==1||(x_1==2&&y_1==2)||(x_2==2&&y_2==2))
            {
                printf("no\n");
            }
            else if (x_1!=2&&x_2!=2&&y_1!=2&&y_2!=2)
            {
                printf("no\n");
            }
            else
            {
                printf("YES\n");
            }
            
            
        }
        else if(x_k==1&&y_k==8)
        {
            if (x_1==1||y_1==8||x_2==1||y_2==8||(x_1==7&&y_1==2)||(x_2==7&&y_2==2))
            {
                printf("no\n");
            }
            else if (x_1!=2&&x_2!=2&&y_1!=7&&y_2!=7)
            {
                printf("no\n");
            }
            else
            {
                printf("YES\n");
            }
            
        }
        else if(x_k==8&&y_k==8)
        {
            if (x_1==8||y_1==8||x_2==8||y_2==8||(x_1==7&&y_1==7)||(x_2==7&&y_2==7))
            {
                printf("no\n");
            }
            else if (x_1!=7&&x_2!=7&&y_1!=7&&y_2!=7)
            {
                printf("no\n");
            }
            else
            {
                printf("YES\n");
            }
            
        }
        else if(x_k==8&&y_k==1)
        {
            if (x_1==8||y_1==1||x_2==8||y_2==1||(x_1==7&&y_1==2)||(x_2==7&&y_2==2))
            {
                printf("no\n");
            }
            else if (x_1!=7&&x_2!=7&&y_1!=2&&y_2!=2)
            {
                printf("no\n");
            }
            else
            {
                printf("YES\n");
            }
            
        }
        else
        {
            printf("no\n");
        }
        
    }
    return 0;
}
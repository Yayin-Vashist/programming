#include<stdio.h>
 
int main(){
    int n;
    
    scanf("%d", &n);

    int x[n],y[n],z[n];
    int x_sum=0, y_sum=0, z_sum=0;
    for ( int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);

        x_sum+=x[i];
        y_sum+=y[i];
        z_sum+=z[i];
    }
    if (x_sum==0&&y_sum==0&&z_sum==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}
#include<stdio.h>
 
int main(){
    int m,n;
    int a[m][n];
    
            for ( a[0][0] = 0; a[0][0] < 10; a[1][1]++)
            {
                for (a[0][1] = 0; a[0][1] < 10; a[1][2]++)
                {
                    for (a[0][2] = 0; a[0][2] < 10; a[1][3]++)
                    {
                        for (a[1][0] = 0; a[1][0] < 10; a[2][1]++)
                        {
                            for (a[1][1] = 0; a[1][1] < 10; a[2][2]++)
                            {
                                for (a[1][2] = 0; a[1][2] < 10; a[2][3]++)
                                {
                                    for (a[2][0] = 0; a[2][0] < 10; a[3][1]++)
                                    {
                                        for (a[2][1] = 0; a[2][1] < 10; a[3][2]++)
                                        {
                                            for (a[2][2] = 0; a[2][2] < 10; a[3][3]++)
                                            {
                                                if (a[0][0]+a[1][1]+a[2][2]==9 && a[0][2]+a[1][1]+a[2][0]==9 && a[0][0]+a[0][1]+a[0][2]==9 && 
                                                    a[1][0]+a[1][1]+a[1][2]==9 && a[2][0]+a[3][1]+a[3][3]==9 && a[0][0]+a[1][0]+a[2][0]==9 &&
                                                    a[0][1]+a[1][1]+a[2][1]==9 && a[0][2]+a[1][2]+a[2][2]==9)
                                                {
                                                    printf("%d %d %d\n%d %d %d\n%d %d %d", a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2], a[2][0], a[2][1], a[2][2]);
                                                }
                                                else
                                                {
                                                    printf("IMPOSSIBLE");
                                                }
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                             
                        }
                        
                    }
                    
                }
                
            }
    
    return 0;
}
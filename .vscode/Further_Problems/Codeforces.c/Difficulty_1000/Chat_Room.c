#include<stdio.h>
 
int main(){
    char s[100], i;

    scanf("%s", &s);

    for ( i = 0; i < 100; i++)
    {
        if (s[i]=='h')
        {
            for ( i = i++; i < 100; i++)
            {
                if (s[i]=='e')
                {
                    for ( i = i++; i < 100; i++)
                    {
                        if (s[i]=='l')
                        {
                            for ( i = i++; i < 100; i++)
                            {
                                if (s[i]=='l')
                                {
                                    for ( i = i++; i < 100; i++)
                                    {
                                        if (s[i]=='o')
                                        {
                                            printf("YES");
                                            break;
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
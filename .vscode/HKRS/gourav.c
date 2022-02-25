#include<stdio.h>
int main()
{
    int i,j,k,y,z,s,count=0,m,n,p;
    // printf("Enter number of groups : ");
    scanf("%d",&z);
    int group[z];
    for ( i = 0; i < z; i++)
    {
        // printf("Enter number of students in group %d : ",i+1);
        scanf("%d",&group[i]);
    }
    int groups[z];
    for ( i = 0; i < z; i++)
    {
        groups[i]=group[i];
    }
    for ( i = 0; i < z; i++)
    {
        if (group[i]==4)
        {
            count++;
            group[i]=5;
        }        
        else if (group[i]==groups[i])
        {
            y=4-group[i];
            s=y; 
            m=s-1;
            n=s-2; 
            if (s!=0)
            {
               for ( k = i+1; k < z; k++)
               {
                   if (y==group[k])
                   {
                       count++;
                       group[k]=5;
                       goto end;
                   }
                   
               }
               
            }
            if (m!=0)
            {
                for ( k = i+1; k < z; k++)
                {
                    if (group[k]==m)
                    {
                        y=y-group[k];
                        group[k]=5;
                        if (y>=m)
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    
                }
                 
            }
            if (n!=0)
            {
                for ( k = i+1; k < z; k++)
                {
                    if (group[k]==n)
                    {
                        y=y-group[k];
                        group[k]=5;
                        if (y>=n)
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    
                }
                
            }
            count++;
        }end : printf("");
    }
    // printf("Taxi required : %d\n",count);
    printf("%d",count);
    return 0;

}
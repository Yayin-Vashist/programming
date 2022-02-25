#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int days_of_calander, min_days_for_vacation;
        scanf("%d %d", &days_of_calander, &min_days_for_vacation);

        char holidays[days_of_calander];
        scanf("%s", &holidays);

        int count=0, vacations=0;
        for (int i = 0; i < days_of_calander; i++)
        {
            if(holidays[i]=='0'){
                count++;
                // printf("%d", count);
            }
            else
            {
                if (count==min_days_for_vacation||count%min_days_for_vacation==0)
                {
                    vacations+=(count/min_days_for_vacation);
                }
                else if ((count%min_days_for_vacation)==(min_days_for_vacation-1)||(min_days_for_vacation-count)==1&&((i+1)!=days_of_calander)||(holidays[i+1]=='0'))
                {
                    if((count%min_days_for_vacation)==(min_days_for_vacation-1)){
                    vacations+=((count+1)/min_days_for_vacation);
                    }
                    else if ((min_days_for_vacation-count)==1&&((i+1)!=days_of_calander))
                    {
                        vacations++;
                    }
                    else if (holidays[i+1]==0)
                    {
                        int count1=0;
                        for (int j = i+1; holidays[j]=='0' ; j++)
                        {
                            count1++;
                        }
                        if ((count+1+count1)>=min_days_for_vacation)
                        {
                            vacations+=((count+1+count1)/min_days_for_vacation);
                        }
                        
                        
                    }
                    
                    
                }
                
                count=0;
            }
        }
        printf("%d\n", vacations);
    }
    return 0;
}
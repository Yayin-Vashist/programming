#include<stdio.h>
 
int main(){
    int marks=0, no_of_students=0, total_marks=0;
    int dummy_value=1;

    printf("Start giving numbers of every student\n");

     while(dummy_value > 0)
    {
        scanf("%d", &marks);
        if (marks>0)
        {
            total_marks=total_marks+marks;
            no_of_students=no_of_students+1;
        }
        else
        {
            break;
        }
    }
    printf("The average marks of the students are %f",(float)(total_marks/no_of_students));
    return 0;
}
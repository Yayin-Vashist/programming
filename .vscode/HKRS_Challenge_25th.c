#include<stdio.h>
 
int main(){
    int Rows, Columns;
    
    printf("The number of rows:");
    scanf("%d", Rows);
    
    printf("The number of columns:");
    scanf("%d", Columns);

    int inputting_value_of_column=1;
    int inputting_value_of_row=1;
     do
     {
      do
    { int row_value;
      scanf("%d", row_value);
      printf("%d\t", row_value);

      inputting_value_of_column++;
    
    } while (inputting_value_of_column<=Columns);
    
    inputting_value_of_row++;
    
     } while (inputting_value_of_row<=Rows);
    
    return 0;
}
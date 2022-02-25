#include<stdio.h>
#include<time.h>
void delay(int number_of_seconds){
    int milli_seconds = 100 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
int Y_pattern(int half_as_good,int space_1, int space_2){
    for (int i = 0; i<space_1 && i<space_2; i++){
        printf(" ");
    }for (int i = 0; i < half_as_good; i++){
        printf("*");
    }
}
int main(){
    int half_as_good, num_of_times, Time_delay;
    printf("Give the number of times to be printed: ");            scanf("%d", &num_of_times);
    printf("Give the number of stars before joining: ");            scanf("%d", &half_as_good);
    printf("Please give time delay in 1/10th of a second: ");   scanf("%d", &Time_delay);
    int b=(2*half_as_good);
    for (int i = 0; i < num_of_times; i++)
    {   for (int j = 0; j < b; j++){
            Y_pattern(half_as_good,j, half_as_good),Y_pattern(half_as_good,(b-2*j),(b-2*j)),delay(Time_delay),printf("\n");
        }
        printf("\n\n");
    }
    return 0;}
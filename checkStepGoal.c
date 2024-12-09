#include <stdio.h>

void checkStepGoal(int);

int main(){

    int steps;

    printf("Enter number of steps: ");
    scanf("%d", &steps);

    checkStepGoal(steps);
    
    return 0;
}

void checkStepGoal(int steps){
    if(steps >= 10000){
        printf("Great job! You've reached your goal!");
    }
    else if (steps >= 7000 && steps <= 9999){
        printf("Good work, you're almost there!");
    }
    else{
        printf("Keep moving, you need more steps!");
    }
}
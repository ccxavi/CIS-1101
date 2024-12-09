#include <stdio.h>

void trafficLightAction(char);

int main(){

    char color;

    printf("Enter Color [R, Y, G]: ");
    scanf("%c", &color);

    trafficLightAction(color);

    return 0;
}

void trafficLightAction(char color){
    if(color == 'R'){
        printf("Stop.");
    }
    else if(color == 'Y'){
        printf("Slow down and prepare to stop.");
    }
    else if(color == 'G'){
        printf("Go.");
    }
}
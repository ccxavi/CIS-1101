#include <stdio.h>

int getTicketPrice(int);

int main(){

    int age, price;

    printf("Enter Age: ");
    scanf("%d", &age);

    price = getTicketPrice(age);

    return 0;
}

int getTicketPrice(int age){
    if(age < 5){
        printf("Price: Free");
    }
    else if(age >= 5 && age <= 12){
        printf("Price: $10");
    }
    else if(age >= 13 && age <= 59){
        printf("Price: $15");
    }
    else{
        printf("Price: $7");
    }
    return age;
}
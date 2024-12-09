#include <stdio.h>
#include <math.h>

double calculateTrapezoidArea();

int main(){
    double result;
    
    result = calculateTrapezoidArea();
    
    printf("\nArea of the trapezoid: %.2lf", result);
    printf("\nArea of the trapezoid: %.0lf (ceil)", ceil(result));
    printf("\nArea of the trapezoid: %.0lf (floor)", floor(result));
    
    return 0;
}

double calculateTrapezoidArea(){
    
    double height, b1, b2;
    
    printf("Enter height of the trapezoid: ");
    scanf("%lf", &height);
    
    printf("Enter 1st side of the trapezoid: ");
    scanf(" %lf", &b1);
    
    printf("Enter 2nd side of the trapezoid: ");
    scanf(" %lf", &b2);
    
    return height * (b1 + b2) / 2;
}
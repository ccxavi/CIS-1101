#include <stdio.h>
#include <math.h>

double calculateKiteArea();

int main(){

    double result;
    
    result = calculateKiteArea();
    
    printf("\nArea of the kite: %.2lf", result);
    printf("\nArea of the kite: %.0lf (ceil)", ceil(result));
    printf("\nArea of the kite: %.0lf (floor)", floor(result));
    
    return 0;   
}

double calculateKiteArea(){
    double d1, d2;
    
    printf("Enter 1st diagonal of the kite: ");
    scanf("%lf", &d1);
    
    printf("Enter 2nd diagonal of the kite: ");
    scanf(" %lf", &d2);
    
    return (d1 * d2) / 2;
}
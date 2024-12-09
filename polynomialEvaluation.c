#include <stdio.h>
#include <math.h>

double evaluatePolynomial(double, double, double, double, double);
double getInput();
void showResult(double);

int main(){
    double a, b, c, d, x, result;
 
    printf("Enter coefficient a: ");
    a = getInput();
    
    printf("Enter coefficient b: ");
    b = getInput();
    
    printf("Enter coefficient c: ");
    c = getInput();
    
    printf("Enter coefficient d: ");
    d = getInput();
    
    printf("Enter value of x: ");
    x = getInput();
    
    result = evaluatePolynomial(a, b, c, d, x);
    
    showResult(result);
    
    return 0;
}

double evaluatePolynomial(double a, double b, double c, double d, double x){
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

double getInput(){
    double value;
    scanf("%lf", &value);
    
    return value;
}

void showResult(double result){
    printf("Value of the polynomial: %.2lf", result);
}
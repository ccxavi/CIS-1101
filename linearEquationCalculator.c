#include <stdio.h>

double calculateLinearEquation(double, double, double);
double getInput();
void showResult(double);

int main() {

    double x, slope, yIntercept, value, result;

    printf("Enter x: ");
    x = getInput();

    printf("Enter slope: ");
    slope = getInput();

    printf("Enter y intercept: ");
    yIntercept = getInput();

    result = calculateLinearEquation(x, slope, yIntercept);

    showResult(result);

    return 0;
}

double getInput(){

    double value;

    scanf("%lf", &value);

    return value;
}

double calculateLinearEquation(double x, double slope, double yIntercept) {
    return (slope * x) + yIntercept;
}

void showResult(double result) {
    printf("Result: %.2lf\n", result);
}
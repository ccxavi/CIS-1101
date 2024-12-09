#include <stdio.h>
#include <math.h>

double calculateTriangleArea();

int main(){
    double result;
    result = calculateTriangleArea();
    
    printf("\nArea of the triangle: %.2lf", result);
    printf("\nArea of the triangle (ceil): %.0lf", ceil(result));
    printf("\nArea of the triangle (floor): %.0lf", floor(result));

    return 0;    
}

double calculateTriangleArea(){
    
    double base, height;
    
    printf("Enter base of the triangle: ");
    scanf("%lf", &base);
    
    printf("Enter height of the triangle: ");
    scanf("%lf", &height);
    
    return (base * height) / 2;
}
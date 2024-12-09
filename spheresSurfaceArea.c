#include <stdio.h>
#include <math.h>
#define PI 3.1416

float calculateSphereSurfaceArea(float);

int main(){
    float area, radius;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    area = calculateSphereSurfaceArea(radius);

    printf("The surface area of the sphere is: %.2f", area);

    return 0;
}

float calculateSphereSurfaceArea(float radius){
    return (4 * PI) * pow(radius, 2);
}
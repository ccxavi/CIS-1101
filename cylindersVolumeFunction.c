#include <stdio.h>
#include <math.h>
#define PI 3.1416

float calculateCylinderVolume(float, float);

int main(){
    float radius, height, result;
    
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf(" %f", &height);
    
    result = calculateCylinderVolume(radius, height);
    
    printf("The volume of the cylinder is: %.2f", result);
    
    return 0;
}

float calculateCylinderVolume(float radius, float height){
    return (height * PI * pow(radius, 2));
}
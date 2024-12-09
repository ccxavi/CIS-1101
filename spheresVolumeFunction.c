#include <stdio.h>
#include <math.h>
#define PI 3.1416

void calculateSphereVolume(float);

int main(){
    float volume;
    
    calculateSphereVolume(volume);

    return 0;
}

void calculateSphereVolume(float volume){
    float radius;
    
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    
    volume = (4 * PI * pow(radius, 3)) / 3;
    
    printf("The volume of the sphere is: %.2f", volume);
}
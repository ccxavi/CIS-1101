#include <stdio.h>

double calculateAverageRating(double, double, double);
void analyzeProductRating(double, double, double);
double getRating();

int main(){
    double quality, price, service, averageRating;
    char productName[100], category[100];
    
    printf("Enter Product Name: ");
    scanf("%s", &productName);
    
    printf("Enter Category: ");
    scanf(" %s", &category);
    
    printf("Enter Quality Rating: ");
    quality = getRating();
    
    printf("Enter Price Rating: ");
    price = getRating();
    
    printf("Enter Service Rating: ");
    service = getRating();
    
    printf("\nProduct Rating");
    printf("\nProduct Name: %s", productName);
    printf("\nCategory: %s", category);
    
    analyzeProductRating(quality, price, service);
    
    averageRating = calculateAverageRating(quality, price, service);
    printf("\nOverall Average Rating: %.2lf", averageRating);
    
    return 0;
}

double calculateAverageRating(double quality, double price, double service){
    return (quality + price + service) / 3;
}

void analyzeProductRating(double quality, double price, double service){
    
    printf("\nQuality Rating: %.2lf", quality);
    printf("\nPrice Rating: %.2lf", price);
    printf("\nService Rating: %.2lf", service);
    
}

double getRating(){
    double value;
    scanf("%lf", &value);
    
    return value;
}